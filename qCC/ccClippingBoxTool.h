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

#ifndef CC_CLIPPING_BOX_TOOL_HEADER
#define CC_CLIPPING_BOX_TOOL_HEADER

//Local
#include <ccOverlayDialog.h>

#include <ui_clippingBoxDlg.h>

//qCC_db
#include <ccGLMatrix.h>
#include <ccGLUtils.h>

class ccGLWindow;
class ccHObject;
class ccClipBox;
class ccBBox;

//! Dialog for managing a clipping box
class ccClippingBoxTool : public ccOverlayDialog, public Ui::ClippingBoxDlg
{
	Q_OBJECT

public:

	//! Default constructor
	explicit ccClippingBoxTool(QWidget* parent);
	//! Default destructor
	virtual ~ccClippingBoxTool();

	//inherited from ccOverlayDialog
	virtual bool linkWith(ccGLWindow* win);
	virtual bool start();
	virtual void stop(bool state);

	//! Returns box
	const ccClipBox* box() const { return m_clipBox; }

	//! Sets the 'clipped' entity
	/** \return success, if the entitiy is eligible for clipping
	**/
	bool setAssociatedEntity(ccHObject* anObject);

public slots:

	void toggleInteractors(bool);

protected slots:

	void editBox();
	void reset();
	void closeDialog();
	void extractContour();
	void removeLastContour();
	void exportSlice();
	void exportMultSlices();

	void onBoxModified(const ccBBox* box);

	void thicknessChanged(double);

	void shiftXMinus();
	void shiftXPlus();
	void shiftYMinus();
	void shiftYPlus();
	void shiftZMinus();
	void shiftZPlus();

	void setFrontView();
	void setBottomView();
	void setTopView();
	void setBackView();
	void setLeftView();
	void setRightView();

protected:

	//! Extracts slices and/or contours
	void extractSlicesAndContours(bool extractSlices, bool extractContours, bool singleContourMode);

	//! Shift box
	void shiftBox(unsigned char dim, bool minus);

	//! Sets predefined view
	void setView(CC_VIEW_ORIENTATION orientation);

	//! Clipping box
	ccClipBox* m_clipBox;

};

#endif //CC_CLIPPING_BOX_TOOL_HEADER
