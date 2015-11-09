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

#ifndef CC_COLOR_RAMP_SHADER_HEADER
#define CC_COLOR_RAMP_SHADER_HEADER

//Always on top!
#include "ccIncludeGL.h"

//CCFbo
#include <ccShader.h>

//Local
#include "ccBasicTypes.h"
#include "ccColorScale.h"

//System
#include <assert.h>

//! Maximum color ramp size
/** 252 so as to get 1024 bytes as total required memory
(see MinRequiredBytes).
**/
static const unsigned CC_MAX_SHADER_COLOR_RAMP_SIZE = 256;

//! Buffer for converting a color scale to packed values before sending it to shader
static float s_packedColormapf[CC_MAX_SHADER_COLOR_RAMP_SIZE];

class ccColorRampShader : public ccShader
{
public:

	//! Default constructor
	ccColorRampShader() : ccShader() {}

	//! Destructor
	virtual ~ccColorRampShader() {}

	//! Setups shader
	/** Shader must have already been stared!
	**/
	bool setup(float minSatRel, float maxSatRel, unsigned colorSteps, const ccColorScale::Shared& colorScale)
	{
		if (colorSteps > CC_MAX_SHADER_COLOR_RAMP_SIZE)
		{
			colorSteps = CC_MAX_SHADER_COLOR_RAMP_SIZE;
		}

		setUniform1f("uf_minSaturation",minSatRel);
		setUniform1f("uf_maxSaturation",maxSatRel);
		setUniform1f("uf_colormapSize",(float)colorSteps);

		//set 'grayed' points color as a float-packed value
		{
			int rgb = (ccColor::lightGrey.r << 16) | (ccColor::lightGrey.g << 8) | ccColor::lightGrey.b;
			float packedColorGray = static_cast<float>(static_cast<double>(rgb)/(1<<24));
			setUniform1f("uf_colorGray",packedColorGray);
		}

		//send colormap to shader
		assert(colorScale);
		for (unsigned i=0; i<colorSteps; ++i)
		{
			const ColorCompType* col = colorScale->getColorByRelativePos(static_cast<double>(i)/(colorSteps-1),colorSteps);
			//set ramp colors as float-packed values
			int rgb = (col[0] << 16) | (col[1] << 8) | col[2];
			s_packedColormapf[i] = static_cast<float>(static_cast<double>(rgb)/(1<<24));
		}
		setTabUniform1fv("uf_colormapTable",colorSteps,s_packedColormapf);

		return (glGetError() == 0);
	}

	//! Returns the minimum memory required on the shader side
	/** See GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
	**/
	static GLint MinRequiredBytes() { return (CC_MAX_SHADER_COLOR_RAMP_SIZE + 4) * 4; }

};

#endif //CC_COLOR_RAMP_SHADER_HEADER
