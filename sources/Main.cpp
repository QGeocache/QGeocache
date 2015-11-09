/*
	Copyright (C) 2015 tuxmaster gott@terrortux.de

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>
*/


#include <QtGui>

#include "FrmMainWindow.h"

int main( int argc, char **argv )
{
	QApplication app( argc, argv );

	QTranslator QtTranslation;
	QTranslator AppTranslation;

	QString QtTranslationPath=QLibraryInfo::location(QLibraryInfo::TranslationsPath);
	QString AppTranslationPath=QtTranslationPath;

	QtTranslation.load(QString("qt_%1").arg(QLocale::system().name()),QtTranslationPath);
	AppTranslation.load(QString("%1_%2").arg(app.applicationName()).arg(QLocale::system().name()),AppTranslationPath);

	if((!AppTranslation.isEmpty()) && (!QtTranslation.isEmpty()))
	{
		app.installTranslator(&QtTranslation);
		app.installTranslator(&AppTranslation);
	}

	FrmMainWindow MainWindow;
	MainWindow.show();
	return app.exec();
}
