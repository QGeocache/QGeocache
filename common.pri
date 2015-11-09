UI_DIR      	= tmp/ui
MOC_DIR     	= tmp/moc
OBJECTS_DIR 	= tmp/obj
RCC_DIR        	= tmp/rcc

RESOURCES  	+= Resources.qrc

FORMS    	+= forms/FrmMainWindow.ui
HEADERS  	+= sources/FrmMainWindow.h
SOURCES     	+= sources/FrmMainWindow.cpp \
    $$PWD/sources/Main.cpp
TRANSLATIONS    = translations/qgeocaching_de.ts
