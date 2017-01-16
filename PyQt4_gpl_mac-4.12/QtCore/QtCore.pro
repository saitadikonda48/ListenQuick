TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtCore.pyd
    target.files = QtCore.pyd
    LIBS += -L/Users/saitadikonda/Desktop/TestingFolder/venv/bin/../lib -lpython27
} else {
    PY_MODULE = QtCore.so
    target.files = QtCore.so
}

target.CONFIG = no_check_exist
target.path = /Users/saitadikonda/Desktop/TestingFolder/venv/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /Users/saitadikonda/Desktop/TestingFolder/venv/bin/../share/sip/PyQt4/QtCore
sip.files = ../sip/QtCore/qabstractanimation.sip ../sip/QtCore/qabstracteventdispatcher.sip ../sip/QtCore/qabstractfileengine.sip ../sip/QtCore/qabstractitemmodel.sip ../sip/QtCore/qabstractnativeeventfilter.sip ../sip/QtCore/qabstractstate.sip ../sip/QtCore/qabstracttransition.sip ../sip/QtCore/qanimationgroup.sip ../sip/QtCore/qbasictimer.sip ../sip/QtCore/qbitarray.sip ../sip/QtCore/qbuffer.sip ../sip/QtCore/qbytearray.sip ../sip/QtCore/qbytearraymatcher.sip ../sip/QtCore/qchar.sip ../sip/QtCore/qcoreapplication.sip ../sip/QtCore/qcoreevent.sip ../sip/QtCore/qcryptographichash.sip ../sip/QtCore/qdatastream.sip ../sip/QtCore/qdatetime.sip ../sip/QtCore/qdir.sip ../sip/QtCore/qdiriterator.sip ../sip/QtCore/qeasingcurve.sip ../sip/QtCore/qelapsedtimer.sip ../sip/QtCore/qeventloop.sip ../sip/QtCore/qeventtransition.sip ../sip/QtCore/qfile.sip ../sip/QtCore/qfiledevice.sip ../sip/QtCore/qfileinfo.sip ../sip/QtCore/qfilesystemwatcher.sip ../sip/QtCore/qfinalstate.sip ../sip/QtCore/qfsfileengine.sip ../sip/QtCore/qglobal.sip ../sip/QtCore/qhash.sip ../sip/QtCore/qhistorystate.sip ../sip/QtCore/qiodevice.sip ../sip/QtCore/qlibrary.sip ../sip/QtCore/qlibraryinfo.sip ../sip/QtCore/qline.sip ../sip/QtCore/qlist.sip ../sip/QtCore/qlocale.sip ../sip/QtCore/qmap.sip ../sip/QtCore/qmargins.sip ../sip/QtCore/qmetaobject.sip ../sip/QtCore/qmetatype.sip ../sip/QtCore/qmimedata.sip ../sip/QtCore/qmutex.sip ../sip/QtCore/qnamespace.sip ../sip/QtCore/qnumeric.sip ../sip/QtCore/qobject.sip ../sip/QtCore/qobjectcleanuphandler.sip ../sip/QtCore/qobjectdefs.sip ../sip/QtCore/qpair.sip ../sip/QtCore/qparallelanimationgroup.sip ../sip/QtCore/qpauseanimation.sip ../sip/QtCore/qpluginloader.sip ../sip/QtCore/qpoint.sip ../sip/QtCore/qprocess.sip ../sip/QtCore/qpropertyanimation.sip ../sip/QtCore/qpynullvariant.sip ../sip/QtCore/qreadwritelock.sip ../sip/QtCore/qrect.sip ../sip/QtCore/qregexp.sip ../sip/QtCore/qresource.sip ../sip/QtCore/qrunnable.sip ../sip/QtCore/qsemaphore.sip ../sip/QtCore/qsequentialanimationgroup.sip ../sip/QtCore/qset.sip ../sip/QtCore/qsettings.sip ../sip/QtCore/qsharedmemory.sip ../sip/QtCore/qsignalmapper.sip ../sip/QtCore/qsignaltransition.sip ../sip/QtCore/qsize.sip ../sip/QtCore/qsocketnotifier.sip ../sip/QtCore/qstate.sip ../sip/QtCore/qstatemachine.sip ../sip/QtCore/qstring.sip ../sip/QtCore/qstringlist.sip ../sip/QtCore/qstringmatcher.sip ../sip/QtCore/qsystemsemaphore.sip ../sip/QtCore/QtCoremod.sip ../sip/QtCore/qtemporaryfile.sip ../sip/QtCore/qtextboundaryfinder.sip ../sip/QtCore/qtextcodec.sip ../sip/QtCore/qtextstream.sip ../sip/QtCore/qthread.sip ../sip/QtCore/qthreadpool.sip ../sip/QtCore/qtimeline.sip ../sip/QtCore/qtimer.sip ../sip/QtCore/qtranslator.sip ../sip/QtCore/qurl.sip ../sip/QtCore/qurlquery.sip ../sip/QtCore/quuid.sip ../sip/QtCore/qvariant.sip ../sip/QtCore/qvariantanimation.sip ../sip/QtCore/qvector.sip ../sip/QtCore/qwaitcondition.sip ../sip/QtCore/qwineventnotifier.sip ../sip/QtCore/qxmlstream.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /Users/saitadikonda/Desktop/TestingFolder/venv/bin/../include/python2.7
INCLUDEPATH += /Library/Frameworks/Python.framework/Versions/2.7/include/python2.7
INCLUDEPATH += ../qpy/QtCore

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtCore
HEADERS = sipAPIQtCore.h ../qpy/QtCore/qpycore_api.h ../qpy/QtCore/qpycore_chimera.h ../qpy/QtCore/qpycore_classinfo.h ../qpy/QtCore/qpycore_misc.h ../qpy/QtCore/qpycore_namespace.h ../qpy/QtCore/qpycore_public_api.h ../qpy/QtCore/qpycore_pyqtboundsignal.h ../qpy/QtCore/qpycore_pyqtmethodproxy.h ../qpy/QtCore/qpycore_pyqtproperty.h ../qpy/QtCore/qpycore_pyqtproxy.h ../qpy/QtCore/qpycore_pyqtpyobject.h ../qpy/QtCore/qpycore_pyqtsignal.h ../qpy/QtCore/qpycore_qmetaobjectbuilder.h ../qpy/QtCore/qpycore_qobject_helpers.h ../qpy/QtCore/qpycore_qpynullvariant.h ../qpy/QtCore/qpycore_qtlib.h ../qpy/QtCore/qpycore_sip.h ../qpy/QtCore/qpycore_sip_helpers.h ../qpy/QtCore/qpycore_types.h
SOURCES = qpycore_post_init.cpp sipQtCorecmodule.cpp sipQtCoreQAbstractAnimation.cpp sipQtCoreQAbstractEventDispatcher.cpp sipQtCoreQAbstractFileEngine.cpp sipQtCoreQAbstractFileEngineFileFlags.cpp sipQtCoreQAbstractFileEngineHandler.cpp sipQtCoreQAbstractFileEngineIterator.cpp sipQtCoreQAbstractItemModel.cpp sipQtCoreQAbstractListModel.cpp sipQtCoreQAbstractState.cpp sipQtCoreQAbstractTableModel.cpp sipQtCoreQAbstractTransition.cpp sipQtCoreQAnimationGroup.cpp sipQtCoreQBasicTimer.cpp sipQtCoreQBitArray.cpp sipQtCoreQBuffer.cpp sipQtCoreQByteArray.cpp sipQtCoreQByteArrayMatcher.cpp sipQtCoreQChar_0.cpp sipQtCoreQChar_1.cpp sipQtCoreQChildEvent.cpp sipQtCoreQCoreApplication.cpp sipQtCoreQCryptographicHash.cpp sipQtCoreQDataStream.cpp sipQtCoreQDate.cpp sipQtCoreQDateTime.cpp sipQtCoreQDir.cpp sipQtCoreQDirFilters.cpp sipQtCoreQDirIterator.cpp sipQtCoreQDirIteratorIteratorFlags.cpp sipQtCoreQDirSortFlags.cpp sipQtCoreQDynamicPropertyChangeEvent.cpp sipQtCoreQEasingCurve.cpp sipQtCoreQElapsedTimer.cpp sipQtCoreQEvent.cpp sipQtCoreQEventLoop.cpp sipQtCoreQEventLoopProcessEventsFlags.cpp sipQtCoreQEventTransition.cpp sipQtCoreQFile.cpp sipQtCoreQFileFileHandleFlags.cpp sipQtCoreQFileInfo.cpp sipQtCoreQFilePermissions.cpp sipQtCoreQFileSystemWatcher.cpp sipQtCoreQFinalState.cpp sipQtCoreQFSFileEngine.cpp sipQtCoreQGenericArgument.cpp sipQtCoreQGenericReturnArgument.cpp sipQtCoreQHash0100QString0100QVariant.cpp sipQtCoreQHash18000100QByteArray.cpp sipQtCoreQHistoryState.cpp sipQtCoreQIODevice.cpp sipQtCoreQIODeviceOpenMode.cpp sipQtCoreQLatin1Char_0.cpp sipQtCoreQLatin1String_0.cpp sipQtCoreQLibrary.cpp sipQtCoreQLibraryInfo.cpp sipQtCoreQLibraryLoadHints.cpp sipQtCoreQLine.cpp sipQtCoreQLineF.cpp sipQtCoreQList0100QByteArray.cpp sipQtCoreQList0100QFileInfo.cpp sipQtCoreQList0100QLocale.cpp sipQtCoreQList0100QLocaleCountry.cpp sipQtCoreQList0100QModelIndex.cpp sipQtCoreQList0100QtDayOfWeek.cpp sipQtCoreQList0100QUrl.cpp sipQtCoreQList0100QVariant.cpp sipQtCoreQList0100QVariantType.cpp sipQtCoreQList0101QAbstractAnimation.cpp sipQtCoreQList0101QAbstractState.cpp sipQtCoreQList0101QAbstractTransition.cpp sipQtCoreQList0101QObject.cpp sipQtCoreQList0600QPair0100QByteArray0100QByteArray.cpp sipQtCoreQList0600QPair0100QString0100QString.cpp sipQtCoreQList0600QPair18001800.cpp sipQtCoreQList0600QPair24002400.cpp sipQtCoreQList1800.cpp sipQtCoreQList1900.cpp sipQtCoreQList2400.cpp sipQtCoreQLocale.cpp sipQtCoreQLocaleNumberOptions.cpp sipQtCoreQMap0100QString0100QVariant.cpp sipQtCoreQMap18000100QVariant.cpp sipQtCoreQMargins.cpp sipQtCoreQMetaClassInfo.cpp sipQtCoreQMetaEnum.cpp sipQtCoreQMetaMethod.cpp sipQtCoreQMetaObject.cpp sipQtCoreQMetaProperty.cpp sipQtCoreQMetaType.cpp sipQtCoreQMimeData.cpp sipQtCoreQModelIndex.cpp sipQtCoreQMutex.cpp sipQtCoreQMutexLocker.cpp sipQtCoreQObject.cpp sipQtCoreQObjectCleanupHandler.cpp sipQtCoreQPair18001800.cpp sipQtCoreQPair19001900.cpp sipQtCoreQParallelAnimationGroup.cpp sipQtCoreQPauseAnimation.cpp sipQtCoreQPersistentModelIndex.cpp sipQtCoreQPluginLoader.cpp sipQtCoreQPoint.cpp sipQtCoreQPointF.cpp sipQtCoreQProcess.cpp sipQtCoreQProcessEnvironment.cpp sipQtCoreQPropertyAnimation.cpp sipQtCoreQPyNullVariant_5.cpp sipQtCoreQReadLocker.cpp sipQtCoreQReadWriteLock.cpp sipQtCoreQRect.cpp sipQtCoreQRectF.cpp sipQtCoreQRegExp.cpp sipQtCoreQResource.cpp sipQtCoreQRunnable.cpp sipQtCoreQSemaphore.cpp sipQtCoreQSequentialAnimationGroup.cpp sipQtCoreQSet0100QtDayOfWeek.cpp sipQtCoreQSet0101QAbstractState.cpp sipQtCoreQSet1800.cpp sipQtCoreQSet1900.cpp sipQtCoreQSettings.cpp sipQtCoreQSharedMemory.cpp sipQtCoreQSignalMapper.cpp sipQtCoreQSignalTransition.cpp sipQtCoreQSize.cpp sipQtCoreQSizeF.cpp sipQtCoreQSocketNotifier.cpp sipQtCoreQState.cpp sipQtCoreQStateMachine.cpp sipQtCoreQStateMachineSignalEvent.cpp sipQtCoreQStateMachineWrappedEvent.cpp sipQtCoreQString_0.cpp sipQtCoreQString_1.cpp sipQtCoreQStringList_0.cpp sipQtCoreQStringList_1.cpp sipQtCoreQStringMatcher_0.cpp sipQtCoreQStringRef_0.cpp sipQtCoreQStringRef_1.cpp sipQtCoreQStringSectionFlags_0.cpp sipQtCoreQSysInfo.cpp sipQtCoreQSystemLocale.cpp sipQtCoreQSystemSemaphore.cpp sipQtCoreQt.cpp sipQtCoreQtAlignment.cpp sipQtCoreQtDockWidgetAreas.cpp sipQtCoreQtDropActions.cpp sipQtCoreQTemporaryFile.cpp sipQtCoreQTextBoundaryFinder.cpp sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp sipQtCoreQTextCodec.cpp sipQtCoreQTextCodecConversionFlags.cpp sipQtCoreQTextCodecConverterState.cpp sipQtCoreQTextDecoder.cpp sipQtCoreQTextEncoder.cpp sipQtCoreQTextStream.cpp sipQtCoreQTextStreamManipulator.cpp sipQtCoreQTextStreamNumberFlags.cpp sipQtCoreQtGestureFlags.cpp sipQtCoreQThread.cpp sipQtCoreQThreadPool.cpp sipQtCoreQtImageConversionFlags.cpp sipQtCoreQTime.cpp sipQtCoreQTimeLine.cpp sipQtCoreQTimer.cpp sipQtCoreQTimerEvent.cpp sipQtCoreQtInputMethodHints.cpp sipQtCoreQtItemFlags.cpp sipQtCoreQtKeyboardModifiers.cpp sipQtCoreQtMatchFlags.cpp sipQtCoreQtMouseButtons.cpp sipQtCoreQtOrientations.cpp sipQtCoreQTranslator.cpp sipQtCoreQtTextInteractionFlags.cpp sipQtCoreQtToolBarAreas.cpp sipQtCoreQtTouchPointStates.cpp sipQtCoreQtWindowFlags.cpp sipQtCoreQtWindowStates.cpp sipQtCorequintptr.cpp sipQtCoreQUrl.cpp sipQtCoreQUrlFormattingOptions.cpp sipQtCoreQUuid.cpp sipQtCoreQVariant_4.cpp sipQtCoreQVariant_5.cpp sipQtCoreQVariantAnimation.cpp sipQtCoreQVector0100QXmlStreamEntityDeclaration.cpp sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp sipQtCoreQVector0600QPair24000100QVariant.cpp sipQtCoreQVector1800.cpp sipQtCoreQVector1900.cpp sipQtCoreQVector2400.cpp sipQtCoreQWaitCondition.cpp sipQtCoreQWriteLocker.cpp sipQtCoreQXmlStreamAttribute.cpp sipQtCoreQXmlStreamAttributes.cpp sipQtCoreQXmlStreamEntityDeclaration.cpp sipQtCoreQXmlStreamEntityResolver.cpp sipQtCoreQXmlStreamNamespaceDeclaration.cpp sipQtCoreQXmlStreamNotationDeclaration.cpp sipQtCoreQXmlStreamReader.cpp sipQtCoreQXmlStreamWriter.cpp ../qpy/QtCore/qpycore_chimera.cpp ../qpy/QtCore/qpycore_chimera_signature.cpp ../qpy/QtCore/qpycore_chimera_storage.cpp ../qpy/QtCore/qpycore_classinfo.cpp ../qpy/QtCore/qpycore_init.cpp ../qpy/QtCore/qpycore_misc.cpp ../qpy/QtCore/qpycore_public_api.cpp ../qpy/QtCore/qpycore_pyqtboundsignal.cpp ../qpy/QtCore/qpycore_pyqtconfigure.cpp ../qpy/QtCore/qpycore_pyqtmethodproxy.cpp ../qpy/QtCore/qpycore_pyqtproperty.cpp ../qpy/QtCore/qpycore_pyqtproxy.cpp ../qpy/QtCore/qpycore_pyqtpyobject.cpp ../qpy/QtCore/qpycore_pyqtsignal.cpp ../qpy/QtCore/qpycore_pyqtslot.cpp ../qpy/QtCore/qpycore_qabstracteventdispatcher.cpp ../qpy/QtCore/qpycore_qmetaobject.cpp ../qpy/QtCore/qpycore_qmetaobject_helpers.cpp ../qpy/QtCore/qpycore_qobject_getattr.cpp ../qpy/QtCore/qpycore_qobject_helpers.cpp ../qpy/QtCore/qpycore_qpynullvariant.cpp ../qpy/QtCore/qpycore_qstring.cpp ../qpy/QtCore/qpycore_qstringlist.cpp ../qpy/QtCore/qpycore_qtlib.cpp ../qpy/QtCore/qpycore_qvariant.cpp ../qpy/QtCore/qpycore_qvariant_value.cpp ../qpy/QtCore/qpycore_sip_helpers.cpp ../qpy/QtCore/qpycore_types.cpp
