TARGET = pylupdate4
TEMPLATE = app
QT -= gui
QT += xml
CONFIG += warn_on release
CONFIG -= app_bundle
CONFIG -= android_install
target.path = /Users/saitadikonda/Desktop/TestingFolder/venv/bin/../bin
INSTALLS += target
INCLUDEPATH += /Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/pylupdate
VPATH = /Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/pylupdate
HEADERS = metatranslator.h proparser.h simtexth.h translator.h
SOURCES = fetchtr.cpp main.cpp merge.cpp metatranslator.cpp numberh.cpp proparser.cpp sametexth.cpp simtexth.cpp translator.cpp