TEMPLATE = subdirs
CONFIG += ordered nostrip
SUBDIRS = QtCore QtGui QtHelp QtMultimedia QtNetwork QtDeclarative QtScript QtScriptTools QtXml QtOpenGL QtSql QtSvg QtTest QtWebKit QtXmlPatterns phonon QtDesigner QtDBus Qt pylupdate pyrcc designer

init_py.files = /Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/__init__.py
init_py.path = /Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages/PyQt4
INSTALLS += init_py

uic_package.files = /Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/pyuic/uic
uic_package.path = /Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages/PyQt4
INSTALLS += uic_package

pyuic4.files = pyuic4
pyuic4.path = /Users/saitadikonda/Desktop/TestingFolder/venv/bin/../bin
INSTALLS += pyuic4
