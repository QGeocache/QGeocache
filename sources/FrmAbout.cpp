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

#include "FrmAbout.h"
#include "Global.h"

FrmAbout::FrmAbout(QWidget *parent) : QDialog(parent)
{
	m_cacheCount=0;
	m_userCount=0;
	m_APIServer="";
	setupUi(this);
	txtVersion->setText(VERSION);
	txtQtVersion->setText(qVersion());
	txtSystem->setText(QString("%1 %2").arg(QSysInfo::productType()).arg(QSysInfo::productVersion()));
}

void FrmAbout::changeEvent(QEvent *e)
{
	QDialog::changeEvent(e);
	switch (e->type())
	{
		case QEvent::LanguageChange:
			retranslateUi(this);
			break;
		default:
			break;
	}
}
void FrmAbout::setCacheCount(const uint&count)
{
	if(count==m_cacheCount)
		return;
	m_cacheCount=count;
	txtCacheCount->setText(QString("%1").arg(m_cacheCount));
}
void FrmAbout::setUserCount(const uint &count)
{
	if(count==m_userCount)
		return;
	m_userCount=count;
	txtUserCount->setText(QString("%1").arg(m_userCount));
}
void FrmAbout::setAPIServer(const QString &server)
{
	if(m_APIServer==server)
		return;
	m_APIServer=server;
	txtAPIServer->setText(m_APIServer);
}
