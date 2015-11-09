QT       += core gui widgets network
CONFIG   += no_keywords

UI_DIR      	= tmp/ui
MOC_DIR     	= tmp/moc
OBJECTS_DIR 	= tmp/obj
RCC_DIR        	= tmp/rcc

RESOURCES  	+= Resources.qrc

FORMS    	+= forms/FrmMainWindow.ui \
		   forms/FrmAbout.ui
HEADERS  	+= sources/FrmMainWindow.h \
		   sources/Global.h \
		   sources/FrmAbout.h
SOURCES     	+= sources/FrmMainWindow.cpp \
		   sources/Main.cpp \
		   sources/FrmAbout.cpp
TRANSLATIONS    = translations/qgeocaching_de.ts
