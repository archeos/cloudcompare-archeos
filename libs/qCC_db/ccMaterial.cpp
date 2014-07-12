//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
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

//Always first
#include "ccIncludeGL.h"

//Local
#include "ccMaterial.h"
#include "ccBasicTypes.h"

//System
#include <string.h>

ccMaterial::ccMaterial(QString _name)
	: name(_name)
	, texID(0)
{
	memcpy(diffuseFront,ccColor::bright,sizeof(float)*4);
	memcpy(diffuseBack,ccColor::bright,sizeof(float)*4);
	memcpy(ambient,ccColor::night,sizeof(float)*4);
	memcpy(specular,ccColor::night,sizeof(float)*4);
	memcpy(emission,ccColor::night,sizeof(float)*4);
	setShininess(50.0);
};

ccMaterial::ccMaterial(const ccMaterial& mtl)
	: name(mtl.name)
	, texture(mtl.texture)
	, shininessFront(mtl.shininessFront)
	, shininessBack(mtl.shininessFront)
	, texID(0)
{
	memcpy(diffuseFront,mtl.diffuseFront,sizeof(float)*4);
	memcpy(diffuseBack,mtl.diffuseBack,sizeof(float)*4);
	memcpy(ambient,mtl.ambient,sizeof(float)*4);
	memcpy(specular,mtl.specular,sizeof(float)*4);
	memcpy(emission,mtl.emission,sizeof(float)*4);
}

void ccMaterial::setDiffuse(const float color[4])
{
	memcpy(diffuseFront,color,sizeof(float)*4);
	memcpy(diffuseBack,color,sizeof(float)*4);
}

void ccMaterial::setShininess(float val)
{
	shininessFront = val;
	shininessBack = 0.8f * val;
}

void ccMaterial::setTransparency(float val)
{
	diffuseFront[3] = val;
	diffuseBack[3] = val;
	ambient[3] = val;
	specular[3] = val;
	emission[3] = val;
}

void ccMaterial::applyGL(bool lightEnabled, bool skipDiffuse) const
{
	if (lightEnabled)
	{
		if (!skipDiffuse)
		{
			glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseFront);
			glMaterialfv(GL_BACK, GL_DIFFUSE, diffuseBack);
		}
		glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
		glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
		glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
		glMaterialf(GL_FRONT, GL_SHININESS, shininessFront);
		glMaterialf(GL_BACK, GL_SHININESS, shininessBack);
	}
	else
	{
		glColor4fv(diffuseFront);
	}
}

void ccMaterial::MakeLightsNeutral()
{
	GLint maxLightCount;
	glGetIntegerv(GL_MAX_LIGHTS,&maxLightCount);
	
	for (int i=0; i<maxLightCount; ++i)
	{
		if (glIsEnabled(GL_LIGHT0+i))
		{
			float diffuse[4];
			float ambiant[4];
			float specular[4];

			glGetLightfv(GL_LIGHT0+i,GL_DIFFUSE,diffuse);
			glGetLightfv(GL_LIGHT0+i,GL_AMBIENT,ambiant);
			glGetLightfv(GL_LIGHT0+i,GL_SPECULAR,specular);

			 diffuse[0] =  diffuse[1] =  diffuse[2] = ( diffuse[0] +  diffuse[1] +  diffuse[2]) / 3.0f;	//'mean' (gray) value
			 ambiant[0] =  ambiant[1] =  ambiant[2] = ( ambiant[0] +  ambiant[1] +  ambiant[2]) / 3.0f;	//'mean' (gray) value
			specular[0] = specular[1] = specular[2] = (specular[0] + specular[1] + specular[2]) / 3.0f;	//'mean' (gray) value

			glLightfv(GL_LIGHT0+i, GL_DIFFUSE, diffuse);
			glLightfv(GL_LIGHT0+i, GL_AMBIENT, ambiant);
			glLightfv(GL_LIGHT0+i,GL_SPECULAR,specular);
		}
	}
}
