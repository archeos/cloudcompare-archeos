//##########################################################################
//#                                                                        #
//#                       CLOUDCOMPARE PLUGIN: qEDL                        #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#include "ccSSAOFilter.h"

#include <ccFrameBufferObject.h>
#include <ccBilateralFilter.h>
#include <ccShader.h>
#include <ccFBOUtils.h>

//RandomKit
#include <randomkit.h>

//system
#include <stdlib.h>
#include <math.h>
#include <vector>

#ifndef GL_RGBA32F
#define GL_RGBA32F 0x8814
#endif

#ifndef GL_RGB16F
#define GL_RGB16F 0x881B
#endif

ccSSAOFilter::ccSSAOFilter() : ccGlFilter("Screen Space Ambient Occlusion")
{
    w           = 0;
    h           = 0;
    fbo	        = 0;
    shader      = 0;
    texReflect  = 0;

    setParameters(/*N=*/32,/*Kz=*/500.0f,/*R=*/0.05f,/*F=*/50.0f);

    bilateralFilterEnabled	=	false;
    bilateralFilter			=	0;
    bilateralGHalfSize		=	2;
    bilateralGSigma			=	1.0f;
    bilateralGSigmaZ		=	0.4f;
    
    memset(ssao_neighbours, 0, sizeof(float) * 3*SSAO_MAX_N);
}

ccSSAOFilter::~ccSSAOFilter()
{
    reset();
}

ccGlFilter* ccSSAOFilter::clone() const
{
	ccSSAOFilter* filter = new ccSSAOFilter();

	//copy parameters
	filter->setParameters(N, Kz, R, F);

	return filter;
}

void ccSSAOFilter::reset()
{
    if (glIsTexture(texReflect))
        glDeleteTextures(1,&texReflect);
    texReflect = 0;

    if (fbo)
        delete fbo;
    fbo = 0;

    if (shader)
        delete shader;
    shader = 0;

    if (bilateralFilter)
        delete bilateralFilter;
    bilateralFilter = 0;
}

bool ccSSAOFilter::init(int width, int height,const char* shadersPath)
{
    return init(width,height,true,true,shadersPath);
}

bool ccSSAOFilter::init(int width,
                        int height,
                        bool enableBilateralFilter,
                        bool useReflectTexture,
                        const char* shadersPath,
                        GLenum textureMinMagFilter /*= GL_LINEAR*/)
{
	//in case of reinit
    if (!fbo)
        fbo	= new ccFrameBufferObject();
    if (!fbo->init(width,height))
    {
        //ccLog::Warning("[SSAO] FrameBufferObject initialization failed!");
        reset();
        return false;
    }
    fbo->initTexture(0,GL_RGBA32F,GL_RGBA,GL_FLOAT,textureMinMagFilter);

    if (!shader)
    {
        shader = new ccShader();
        if (!shader->fromFile(shadersPath,"SSAO/ssao"))
        {
            //ccLog::Warning("[SSAO] Can't load SSAO program!");
            reset();
            return false;
        }
    }

    bilateralFilterEnabled = enableBilateralFilter;
    if (bilateralFilterEnabled)
    {
        if (!bilateralFilter)
            bilateralFilter	= new ccBilateralFilter();
        if (!bilateralFilter->init(width,height,shadersPath))
        {
            delete bilateralFilter;
            bilateralFilter = 0;
            bilateralFilterEnabled = false;
        }
		else
		{
			bilateralFilter->useExistingViewport(true);
		}
    }
    else if (bilateralFilter)
    {
        delete bilateralFilter;
        bilateralFilter = 0;
    }

    w = width;
    h = height;

    sampleSphere();

    if (useReflectTexture)
	{
        initReflectTexture();
	}
    else
    {
        if (texReflect>0)
            glDeleteTextures(1,&texReflect);
        texReflect = 0;
    }

    return true;
}

void ccSSAOFilter::sampleSphere()
{
    rk_sobol_state	s;
    rk_sobol_error	rc;
    double x[5];

    // Initialize the sobol QRNG
    if ((rc = rk_sobol_init(3, &s, NULL, rk_sobol_Ldirections, NULL)))
    {
        //ccLog::Error("RandomKit (Sobol) initialization error: %s\n", rk_sobol_strerror[rc]);
        return;
    }
    rk_sobol_randomshift(&s, NULL);

    //	draw in sphere
    unsigned int	n_in_sphere = 0;
    float* _ssao_neighbours = ssao_neighbours;

    while (n_in_sphere<SSAO_MAX_N)
    {
        rk_sobol_double(&s, x);
        double px = x[0]*2.0-1.0;
        double py = x[1]*2.0-1.0;
        double pz = x[2]*2.0-1.0;
        if ( px*px+py*py+pz*pz < 1.0 )
        {
            *_ssao_neighbours++ =	(float)px;
            *_ssao_neighbours++ =	(float)py;
            *_ssao_neighbours++ =	(float)pz;

            ++n_in_sphere;
        }
    }
}

void ccSSAOFilter::shade(GLuint texDepth, GLuint texColor, float zoom)
{
    if (!fbo || !shader)
    {
        //ccLog::Warning("[ccSSAOFilter::shade] Internal error: structures not initialized!");
        return;
    }

    glPushAttrib(GL_ALL_ATTRIB_BITS);

    //we must use corner-based screen coordinates
    glMatrixMode(GL_PROJECTION);
	glPushMatrix();
    glLoadIdentity();
    glOrtho(0.0,(GLdouble)w,0.0,(GLdouble)h,0.0,1.0);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
    glLoadIdentity();

    fbo->start();
    fbo->setDrawBuffers1();

    shader->start();
    shader->setUniform1i("s2_Z",0);
    shader->setUniform1i("s2_R",1);
    shader->setUniform1i("s2_C",2);
    shader->setUniform1f("R",R);
    shader->setUniform1f("F",F);
    shader->setUniform1f("Kz",Kz);
    //shader->setUniform1i("N",N);
    shader->setUniform1i("B_REF",texReflect == 0 ? 0 : 1);
    shader->setTabUniform3fv("P",SSAO_MAX_N,ssao_neighbours);

    glActiveTexture(GL_TEXTURE2);
    TEX_2D_ON;
	glBindTexture(GL_TEXTURE_2D,texColor);

    if (glIsTexture(texReflect))
    {
        glActiveTexture(GL_TEXTURE1);
        TEX_2D_ON;
        glBindTexture(GL_TEXTURE_2D,texReflect);
    }
    glActiveTexture(GL_TEXTURE0);
    //glBindTexture(GL_TEXTURE_2D,texDepth);

	ccFBOUtils::DisplayTexture2DCorner(texDepth,w,h);

    //glActiveTexture(GL_TEXTURE0);
    //glBindTexture(GL_TEXTURE_2D,0);

    if (glIsTexture(texReflect))
    {
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D,0);
        TEX_2D_OFF;
    }

    glActiveTexture(GL_TEXTURE2);
    glBindTexture(GL_TEXTURE_2D,0);
    TEX_2D_OFF;

    shader->stop();
    fbo->stop();

    if (bilateralFilter)
    {
        bilateralFilter->setParams(bilateralGHalfSize,bilateralGSigma,bilateralGSigmaZ);
        bilateralFilter->shade(texDepth,fbo->getColorTexture(0),zoom);
    }

    glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();

    glPopAttrib();
}

GLuint ccSSAOFilter::getTexture()
{
    if (bilateralFilter)
        return bilateralFilter->getTexture();

    return (fbo ? fbo->getColorTexture(0) : 0);
}

void ccSSAOFilter::setParameters(int _N, float _Kz, float _R, float _F)
{
    N	=	_N;
    Kz	=	_Kz;
    R	=	_R;
    F	=	_F;
}

double frand()
{
    return static_cast<double>(rand())/static_cast<double>(RAND_MAX);
}

void randomPointInSphere(double& vx, double& vy, double& vz)
{
    do
    {
        vx = frand();
        vy = frand();
        vz = frand();
    }
    while (vx*vx + vy*vy + vz*vz > 1.0);
}

void ccSSAOFilter::initReflectTexture()
{
    /***	INIT TEXTURE OF RELFECT VECTORS		***/
    /**		Fully random texture	**/
    int texSize = w*h;
	std::vector<float> reflectTex;
	try
	{
		reflectTex.resize(3*texSize);
	}
	catch(std::bad_alloc)
	{
		//not enough memory
		return;
	}

    for (int i=0; i<texSize; i++)
    {
		double x,y,z;
        randomPointInSphere(x,y,z);
        
		double norm = x*x+y*y+z*z;
        norm = (norm > 1.0e-12 ? 1.0/sqrt(norm) : 0.0);
        
		reflectTex[i*3  ] = static_cast<float>((1.0+x*norm)/2);
        reflectTex[i*3+1] = static_cast<float>((1.0+y*norm)/2);
        reflectTex[i*3+2] = static_cast<float>((1.0+z*norm)/2);
    }

    TEX_2D_ON;

    if (glIsTexture(texReflect))
        glDeleteTextures(1,&texReflect);

    glGenTextures(1,&texReflect);
    glBindTexture(GL_TEXTURE_2D,texReflect);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST );
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST );
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D,0,GL_RGB16F,w,h,0,GL_RGB,GL_FLOAT,&reflectTex[0]);

    TEX_2D_OFF;

    // According to Wikipedia, noise is made of 4*4 repeated tiles	to have only high frequency	**/
}

