//##########################################################################
//#                                                                        #
//#                               CCFBO                                    #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU Library General Public License as       #
//#  published by the Free Software Foundation; version 2 of the License.  #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

/***************************************************************/
//
//		FILTERBILATERAL
//
//		Cross Bilateral Filter - from Tomasi98/Durand02/Eisemann04
//
//		created by Christian Boucheny (INRIA/LPPA/EDF R&D) on 12/21/2007
//
//      freely updated by Daniel Girardeau-Montaut (EDF R&D) on 03/31/2009
//
/*****************************************************************/

#ifndef	CC_BILATERAL_FILTER_HEADER
#define	CC_BILATERAL_FILTER_HEADER

#include "ccGlFilter.h"

class ccShader;
class ccFrameBufferObject;

//! Bilateral filer (shader)
/** See http://en.wikipedia.org/wiki/Bilateral_filter
**/
class ccBilateralFilter : public ccGlFilter
{
public:

	//! Default constructor
	/** Default parameters:
		- halfSpatialSize = 2
		- spatialSigma = 2.0
		- depthSigma = 0.4
	**/
	ccBilateralFilter();
	//! Destructor
	virtual ~ccBilateralFilter();

	void reset();

	//inherited from ccGlFilter
	virtual ccGlFilter* clone() const;
	virtual bool init(int width, int height, QString shadersPath, QString& error);
	virtual void shade(GLuint texDepth, GLuint texColor, float zoom = 1.0f);
	virtual GLuint getTexture();

	//! Set parameters
	/** \param halfSpatialSize half spatial kernel size (between 1 and 7 - total size will be 2*h+1)
		\param spatialSigma variance of the 'spatial' distribution (Euclidean distance of pixels)
		\param depthSigma variance of the 'depth' distribution (depth difference of pixels)
	**/
	void setParams(	unsigned halfSpatialSize,
					float spatialSigma,
					float depthSigma );

	//! Sets whether to use the current context (OpenGL) viewport or not
	void useExistingViewport(bool state);

protected:

	void updateDampingTable();

	int m_width;
	int	m_height;

	ccFrameBufferObject* m_fbo;
	ccShader* m_shader;

	//! Half spatial size (kernel width will be 2*h+1)
	unsigned m_halfSpatialSize;
	//! Variance of the 'spatial' distribution (Euclidean distance of pixels)
	float m_spatialSigma;
	//! Variance of the 'depth' distribution (depth difference of pixels)
	float m_depthSigma;

	//! 'spatial' distribution (kernel values)
	float* m_dampingPixelDist;

	//! Whether to use the current context (OpenGL) viewport or not
	bool m_useCurrentViewport;
};

#endif
