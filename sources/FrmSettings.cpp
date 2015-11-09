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

#include "FrmSettings.h"
#include <QtCore>

FrmSettings::FrmSettings(QWidget *parent) :	QDialog(parent)
{
	setupUi(this);
	connect(bbAction,SIGNAL(clicked(QAbstractButton *)),this,SLOT(RestoreDefaults(QAbstractButton*)));
	lwSection->setCurrentRow(0);
}

void FrmSettings::changeEvent(QEvent *e)
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
void FrmSettings::RestoreDefaults(QAbstractButton *button)
{
	if((QAbstractButton*)bbAction->button(QDialogButtonBox::RestoreDefaults) != button)
		return;
}
