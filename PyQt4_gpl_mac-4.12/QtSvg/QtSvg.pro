TEMPLATE = lib
CONFIG += warn_on plugin
QT += svg
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSvg.pyd
    target.files = QtSvg.pyd
    LIBS += -L/Users/saitadikonda/Desktop/TestingFolder/venv/bin/../lib -lpython27
} else {
    PY_MODULE = QtSvg.so
    target.files = QtSvg.so
}

target.CONFIG = no_check_exist
target.path = /Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /Users/saitadikonda/Desktop/TestingFolder/venv/bin/../share/sip/PyQt4/QtSvg
sip.files = ../sip/QtSvg/qgraphicssvgitem.sip ../sip/QtSvg/qsvggenerator.sip ../sip/QtSvg/qsvgrenderer.sip ../sip/QtSvg/qsvgwidget.sip ../sip/QtSvg/QtSvgmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /Users/saitadikonda/Desktop/TestingFolder/venv/bin/../include/python2.7
INCLUDEPATH += /Library/Frameworks/Python.framework/Versions/2.7/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtSvg
HEADERS = sipAPIQtSvg.h
SOURCES = sipQtSvgcmodule.cpp sipQtSvgQGraphicsSvgItem.cpp sipQtSvgQSvgGenerator.cpp sipQtSvgQSvgRenderer.cpp sipQtSvgQSvgWidget.cpp
