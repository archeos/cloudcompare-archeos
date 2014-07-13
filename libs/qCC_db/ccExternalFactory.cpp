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

#include "ccExternalFactory.h"

//! Container singleton 
static QSharedPointer<ccExternalFactory::Container> s_externalFactoryContainer(0);

ccExternalFactory::ccExternalFactory(QString factoryName)
	: m_factoryName(factoryName)
{}

ccExternalFactory* ccExternalFactory::Container::getFactoryByName(const QString& factoryName) const
{
	if (m_factories.contains(factoryName))
		return m_factories.value(factoryName);
	else
		return 0;
}

void ccExternalFactory::Container::addFactory(ccExternalFactory *factory)
{
	if (!factory) //do nothing
		return;

	QString name = factory->getFactoryName();

	m_factories[name] = factory;
}

ccExternalFactory::Container::Shared ccExternalFactory::Container::GetUniqueInstance()
{
	if (!s_externalFactoryContainer)
	{
		s_externalFactoryContainer = Container::Shared(new ccExternalFactory::Container());
	}
	return s_externalFactoryContainer;
}

void ccExternalFactory::Container::SetUniqueInstance(Container::Shared container)
{
	s_externalFactoryContainer = container;
}
