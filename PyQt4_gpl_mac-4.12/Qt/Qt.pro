TEMPLATE = lib
CONFIG += warn_on plugin
QT -= core gui
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = Qt.pyd
    target.files = Qt.pyd
    LIBS += -L/Users/saitadikonda/Desktop/TestingFolder/venv/bin/../lib -lpython27
} else {
    PY_MODULE = Qt.so
    target.files = Qt.so
}

target.CONFIG = no_check_exist
target.path = /Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /Users/saitadikonda/Desktop/TestingFolder/venv/bin/../share/sip/PyQt4/Qt
sip.files = ../sip/Qt/Qtmod.sip
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

TARGET = Qt
SOURCES = sipQtcmodule.c
