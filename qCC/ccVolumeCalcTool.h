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

#ifndef CC_VOLUME_CALC_TOOL_HEADER
#define CC_VOLUME_CALC_TOOL_HEADER

#include <ui_volumeCalcDlg.h>

//Local
#include "cc2.5DimEditor.h"

//qCC_db
#include <ccBBox.h>

//Qt
#include <QDialog>

//system
#include <vector>

class ccGenericPointCloud;
class ccPointCloud;
class ccPolyline;
class QComboBox;

//! Volume calculation tool (dialog)
class ccVolumeCalcTool : public QDialog, public cc2Point5DimEditor, public Ui::VolumeCalcDialog
{
	Q_OBJECT

public:
	//! Default constructor
	ccVolumeCalcTool(ccGenericPointCloud* cloud1, ccGenericPointCloud* cloud2, QWidget* parent = 0);

	//! Destructor
	~ccVolumeCalcTool();

	//Inherited from cc2Point5DimEditor
	virtual double getGridStep() const;
	virtual unsigned char getProjectionDimension() const;
	virtual ProjectionType getTypeOfProjection() const;

protected slots:

	//! Accepts the dialog and save settings
	void saveSettingsAndAccept();

	//! Save persistent settings and 'accept' dialog
	void saveSettings();

	//! Called when the projection direction changes
	void projectionDirChanged(int);

	//! Called when the SF projection type changes
	void sfProjectionTypeChanged(int);

	//Inherited from cc2Point5DimEditor
	virtual bool showGridBoxEditor();

	//! Called when the (ground) empty cell filling strategy changes
	void groundFillEmptyCellStrategyChanged(int);
	//! Called when the (ceil) empty cell filling strategy changes
	void ceilFillEmptyCellStrategyChanged(int);

	//! Called when the an option of the grid generation has changed
	void gridOptionChanged();

	//! Updates the gid info
	void updateGridInfo();

	//! Update the grid and the 2D display
	void updateGridAndDisplay();

	//! Swap roles
	void swapRoles();

	//! Ground source changed
	void groundSourceChanged(int);
	//! Ceil source changed
	void ceilSourceChanged(int);

	//! Exports info to clipboard
	void exportToClipboard() const;

	//! Sets the displayed number precision
	void setDisplayedNumberPrecision(int);

protected: //standard methods

	//Inherited from cc2Point5DimEditor
	virtual void gridIsUpToDate(bool state);

	//! Load persistent settings
	void loadSettings();

	//! Updates the grid
	bool updateGrid();

	//! Report info
	struct ReportInfo
	{
		ReportInfo()
			: volume(0)
			, surface(0)
			, matchingPrecent(0)
			, ceilNonMatchingPercent(0)
			, groundNonMatchingPercent(0)
			, averageNeighborsPerCell(0)
		{}

		double volume;
		double surface;
		float matchingPrecent;
		float ceilNonMatchingPercent;
		float groundNonMatchingPercent;
		double averageNeighborsPerCell;
	};

	//! Outputs the report
	void outputReport(const ReportInfo& info);

protected: //members

	//! First associated cloud
	ccGenericPointCloud* m_cloud1;
	//! Second associated cloud
	ccGenericPointCloud* m_cloud2;

	//! Last report
	/** Only valid if clipboardPushButton is enabled
	**/
	ReportInfo m_lastReport;
};

#endif //CC_VOLUME_CALC_TOOL_HEADER
