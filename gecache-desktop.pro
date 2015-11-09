CONFIG   += c++14
TEMPLATE  = app

DESTDIR   = bin/
TARGET    = qgeocaching

VERSION = 0.0.1

QMAKE_EXTRA_COMPILERS += lrelease
lrelease.input         = TRANSLATIONS
lrelease.output        = ${QMAKE_FILE_BASE}.qm
lrelease.commands      = $$[QT_INSTALL_BINS]/lrelease-qt5 ${QMAKE_FILE_IN} -qm translations/${QMAKE_FILE_BASE}.qm
lrelease.CONFIG       += no_link target_predeps

include(common.pri)
