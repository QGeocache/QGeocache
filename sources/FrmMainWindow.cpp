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
#include <QtWidgets>

#include "FrmMainWindow.h"
#include "FrmAbout.h"
#include "FrmSettings.h"

FrmMainWindow::FrmMainWindow(QWidget *parent) :	QMainWindow(parent)
{
	setupUi(this);

	//center to desktop
	QDesktopWidget *desktop = QApplication::desktop();
	int screenWidth, width;
	int screenHeight, height;
	int x, y;
	QSize windowSize;

	screenWidth=desktop->width();
	screenHeight=desktop->height();

	windowSize=this->size();
	width=windowSize.width();
	height=windowSize.height();

	x=(screenWidth-width)/2;
	y=(screenHeight-height)/2;

	this->move(x,y);

	m_FrmAbout=new FrmAbout(this);
	m_FrmSettings=new FrmSettings(this);
}

void FrmMainWindow::changeEvent(QEvent *e)
{
	QMainWindow::changeEvent(e);
	switch (e->type())
	{
		case QEvent::LanguageChange:
				retranslateUi(this);
			break;
		default:
			break;
	}
}
void FrmMainWindow::on_btnAbout_clicked()
{
	m_FrmAbout->exec();
}
void FrmMainWindow::on_btnSettings_clicked()
{
	m_FrmSettings->exec();
}
