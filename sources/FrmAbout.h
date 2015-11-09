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

#ifndef FRMABOUT_H
#define FRMABOUT_H

#include "ui_FrmAbout.h"

class FrmAbout : public QDialog, private Ui::FrmAbout
{
		Q_OBJECT

	public:
		explicit FrmAbout(QWidget *parent = Q_NULLPTR);

		void setCacheCount(const uint &count);
		void setUserCount(const uint&count);
		void setAPIServer(const QString &server);

	protected:
		void changeEvent(QEvent *e);

	private:
		uint	m_cacheCount;
		uint	m_userCount;
		QString m_APIServer;
};

#endif // FRMABOUT_H
