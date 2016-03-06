//##########################################################################
//#                                                                        #
//#                       CLOUDCOMPARE PLUGIN: qCork                       #
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
//#               COPYRIGHT: Daniel Girardeau-Montaut                      #
//#                                                                        #
//##########################################################################

#ifndef Q_CORK_PLUGIN_HEADER
#define Q_CORK_PLUGIN_HEADER

//Qt
#include <QObject>

#include "../ccStdPluginInterface.h"

class QAction;

//! Mes Boolean Operations (CSG) plugin
/** This plugin is based on Cork: https://github.com/gilbo/cork
	Required implementation is CC's dedicated fork: https://github.com/cloudcompare/cork
**/
class qCork : public QObject, public ccStdPluginInterface
{
	Q_OBJECT
	Q_INTERFACES(ccStdPluginInterface)
#ifdef CC_QT5
	Q_PLUGIN_METADATA(IID "cccorp.cloudcompare.plugin.qCork")
#endif

public:

	//! Default constructor
	explicit qCork(QObject* parent = 0);

	//inherited from ccPluginInterface
	virtual QString getName() const { return "Mesh Boolean Operations"; }
	virtual QString getDescription() const { return "Mesh Boolean Operations (CSG) based on Cork library"; }
	virtual QIcon getIcon() const;

	//inherited from ccStdPluginInterface
	virtual void onNewSelection(const ccHObject::Container& selectedEntities);
	virtual void getActions(QActionGroup& group);

protected slots:

	//! Starts main action
	void doAction();

protected:

	//! Associated action
	QAction* m_action;
};

#endif //Q_CORK_PLUGIN_HEADER
