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

#ifndef CC_ASCII_OPEN_DIALOG_HEADER
#define CC_ASCII_OPEN_DIALOG_HEADER

#include <algorithm>

//Qt
#include <QString>
#include <QDialog>

//system
#include <vector>

enum CC_ASCII_OPEN_DLG_TYPES { ASCII_OPEN_DLG_None              = 0,
                                ASCII_OPEN_DLG_X                = 1,
                                ASCII_OPEN_DLG_Y                = 2,
                                ASCII_OPEN_DLG_Z                = 3,
                                ASCII_OPEN_DLG_NX               = 4,
                                ASCII_OPEN_DLG_NY               = 5,
                                ASCII_OPEN_DLG_NZ               = 6,
                                ASCII_OPEN_DLG_R                = 7,
                                ASCII_OPEN_DLG_G                = 8,
                                ASCII_OPEN_DLG_B                = 9,
                                ASCII_OPEN_DLG_Grey             = 10,
                                ASCII_OPEN_DLG_Scalar           = 11,
								ASCII_OPEN_DLG_RGB32i			= 12, //RGBA as a single 32 bits integer (PCL style)
								ASCII_OPEN_DLG_RGB32f			= 13, //RGBA as a single 32 bits float (PCL style)
};

const unsigned ASCII_OPEN_DLG_TYPES_NUMBER = 14;
const char ASCII_OPEN_DLG_TYPES_NAMES[ASCII_OPEN_DLG_TYPES_NUMBER][24] = {"Ignore",
                                                                            "coord. X",
                                                                            "coord. Y",
                                                                            "coord. Z",
                                                                            "Nx",
                                                                            "Ny",
                                                                            "Nz",
                                                                            "Red",
                                                                            "Green",
                                                                            "Blue",
                                                                            "Grey",
                                                                            "Scalar",
                                                                            "RGBAi",
                                                                            "RGBAf",
                                                                            };

class QComboBox;
class Ui_AsciiOpenDialog;

//! Dialog for configuration of ASCII files opening sequence
class AsciiOpenDlg : public QDialog
{
    Q_OBJECT

public:

	//! Default constructor
    AsciiOpenDlg(QString filename, QWidget* parent = 0);

	//! Default destructor
    virtual ~AsciiOpenDlg();

	//! ASCII open sequence item
	struct SequenceItem
	{
		CC_ASCII_OPEN_DLG_TYPES type;
		QString header;

		//! Default constructor
		SequenceItem()
			: type(ASCII_OPEN_DLG_None)
			, header()
		{
		}

		//! Constructor from parameters
		SequenceItem(CC_ASCII_OPEN_DLG_TYPES _type, const QString& _header)
			: type(_type)
			, header(_header)
		{
		}
	};

	//! ASCII open sequence
	typedef std::vector<SequenceItem> Sequence;

	//! Returns the whole "opening" sequence as set by the user
    Sequence getOpenSequence();

	//! Returns number of lines to skip
	unsigned getSkippedLinesCount() const {return m_skippedLines;}

	//! Returns user selected separator
	uchar getSeparator() const {return m_separator.cell();}

	//! Returns roughly estimated average line size (in bytes)
	double getAverageLineSize() const {return m_averageLineSize;}

	//! Returns columns count per line
	unsigned getColumnsCount() const {return m_columnsCount;}

	//! Returns the max number of points per cloud
	unsigned getMaxCloudSize() const;

	//! Checks the "opening" sequence as set by the user
	/** \return validity (+ error message if not)
	**/
	static bool CheckOpenSequence(const Sequence& sequence, QString& errorMessage);

public slots:
	void updateTable(const QString &separator);

protected slots:
    void testBeforeAccept();
    void setSkippedLines(int linesCount);
    void columnsTypeHasChanged(int index);
    void shortcutButtonPressed();
	void checkSelectedColumnsValidity();

protected:

	//associated UI
	Ui_AsciiOpenDialog* m_ui;

    unsigned m_skippedLines;
    QChar m_separator;
    double m_averageLineSize;
    QString m_filename;
	QString m_headerLine;
	//! Identifies columns with numbers only [mandatory]
	std::vector<bool> m_columnsValidty;

    //QComboBox* m_columnsType;
    unsigned m_columnsCount;

};

#endif //CC_ASCII_OPEN_DIALOG_HEADER
