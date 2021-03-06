/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtNetwork.h"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qtcpsocket.sip"
#include <qtcpsocket.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qauthenticator.sip"
#include <qauthenticator.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 75 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 78 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 81 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQTcpSocket.cpp"


class sipQTcpSocket : public  ::QTcpSocket
{
public:
    sipQTcpSocket( ::QObject*);
    virtual ~sipQTcpSocket();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::qint64 writeData(const char*,PY_LONG_LONG);
     ::qint64 readLineData(char*, ::qint64);
     ::qint64 readData(char*, ::qint64);
    bool waitForBytesWritten(int);
    bool waitForReadyRead(int);
    bool canReadLine() const;
     ::qint64 bytesToWrite() const;
     ::qint64 bytesAvailable() const;
    bool reset();
    bool atEnd() const;
    bool seek( ::qint64);
     ::qint64 size() const;
     ::qint64 pos() const;
    void close();
    bool open( ::QIODevice::OpenMode);
    bool isSequential() const;
    bool event( ::QEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    void timerEvent( ::QTimerEvent*);
    void childEvent( ::QChildEvent*);
    void customEvent( ::QEvent*);
    void connectNotify(const char*);
    void disconnectNotify(const char*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTcpSocket(const sipQTcpSocket &);
    sipQTcpSocket &operator = (const sipQTcpSocket &);

    char sipPyMethods[23];
};

sipQTcpSocket::sipQTcpSocket( ::QObject*a0):  ::QTcpSocket(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTcpSocket::~sipQTcpSocket()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTcpSocket::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QTcpSocket);
}

int sipQTcpSocket::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QTcpSocket::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QTcpSocket,_c,_id,_a);

    return _id;
}

void *sipQTcpSocket::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast(sipPySelf, sipType_QTcpSocket, _clname)) ? this :  ::QTcpSocket::qt_metacast(_clname);
}

 ::qint64 sipQTcpSocket::writeData(const char*a0,PY_LONG_LONG a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_writeData);

    if (!sipMeth)
        return  ::QTcpSocket::writeData(a0,a1);

    extern  ::qint64 sipVH_QtNetwork_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*,PY_LONG_LONG);

    return sipVH_QtNetwork_14(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

 ::qint64 sipQTcpSocket::readLineData(char*a0, ::qint64 a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_readLineData);

    if (!sipMeth)
        return  ::QTcpSocket::readLineData(a0,a1);

    extern  ::qint64 sipVH_QtNetwork_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, char*, ::qint64);

    return sipVH_QtNetwork_15(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

 ::qint64 sipQTcpSocket::readData(char*a0, ::qint64 a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_readData);

    if (!sipMeth)
        return  ::QTcpSocket::readData(a0,a1);

    extern  ::qint64 sipVH_QtNetwork_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, char*, ::qint64);

    return sipVH_QtNetwork_16(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQTcpSocket::waitForBytesWritten(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_waitForBytesWritten);

    if (!sipMeth)
        return  ::QTcpSocket::waitForBytesWritten(a0);

    extern bool sipVH_QtNetwork_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtNetwork_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTcpSocket::waitForReadyRead(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_waitForReadyRead);

    if (!sipMeth)
        return  ::QTcpSocket::waitForReadyRead(a0);

    extern bool sipVH_QtNetwork_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtNetwork_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTcpSocket::canReadLine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_canReadLine);

    if (!sipMeth)
        return  ::QTcpSocket::canReadLine();

    extern bool sipVH_QtNetwork_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_18(sipGILState, 0, sipPySelf, sipMeth);
}

 ::qint64 sipQTcpSocket::bytesToWrite() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_bytesToWrite);

    if (!sipMeth)
        return  ::QTcpSocket::bytesToWrite();

    extern  ::qint64 sipVH_QtNetwork_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_10(sipGILState, 0, sipPySelf, sipMeth);
}

 ::qint64 sipQTcpSocket::bytesAvailable() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_bytesAvailable);

    if (!sipMeth)
        return  ::QTcpSocket::bytesAvailable();

    extern  ::qint64 sipVH_QtNetwork_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_10(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQTcpSocket::reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_reset);

    if (!sipMeth)
        return  ::QTcpSocket::reset();

    extern bool sipVH_QtNetwork_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_18(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQTcpSocket::atEnd() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_atEnd);

    if (!sipMeth)
        return  ::QTcpSocket::atEnd();

    extern bool sipVH_QtNetwork_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_18(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQTcpSocket::seek( ::qint64 a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_seek);

    if (!sipMeth)
        return  ::QTcpSocket::seek(a0);

    extern bool sipVH_QtNetwork_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::qint64);

    return sipVH_QtNetwork_19(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::qint64 sipQTcpSocket::size() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_size);

    if (!sipMeth)
        return  ::QTcpSocket::size();

    extern  ::qint64 sipVH_QtNetwork_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_10(sipGILState, 0, sipPySelf, sipMeth);
}

 ::qint64 sipQTcpSocket::pos() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,NULL,sipName_pos);

    if (!sipMeth)
        return  ::QTcpSocket::pos();

    extern  ::qint64 sipVH_QtNetwork_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_10(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQTcpSocket::close()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_close);

    if (!sipMeth)
    {
         ::QTcpSocket::close();
        return;
    }

    extern void sipVH_QtNetwork_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtNetwork_13(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQTcpSocket::open( ::QIODevice::OpenMode a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_open);

    if (!sipMeth)
        return  ::QTcpSocket::open(a0);

    extern bool sipVH_QtNetwork_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QIODevice::OpenMode);

    return sipVH_QtNetwork_20(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTcpSocket::isSequential() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,NULL,sipName_isSequential);

    if (!sipMeth)
        return  ::QTcpSocket::isSequential();

    extern bool sipVH_QtNetwork_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_18(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQTcpSocket::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QTcpSocket::event(a0);

    extern bool sipVH_QtNetwork_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtNetwork_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTcpSocket::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[17],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QTcpSocket::eventFilter(a0,a1);

    extern bool sipVH_QtNetwork_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtNetwork_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQTcpSocket::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QTcpSocket::timerEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtNetwork_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTcpSocket::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QTcpSocket::childEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtNetwork_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTcpSocket::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[20],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QTcpSocket::customEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtNetwork_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTcpSocket::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[21],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QTcpSocket::connectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtNetwork_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTcpSocket::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[22],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QTcpSocket::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtNetwork_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTcpSocket(void *, const sipTypeDef *);}
static void *cast_QTcpSocket(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTcpSocket *sipCpp = reinterpret_cast< ::QTcpSocket *>(sipCppV);

    if (targetType == sipType_QAbstractSocket)
        return static_cast< ::QAbstractSocket *>(sipCpp);

    if (targetType == sipType_QIODevice)
        return static_cast< ::QIODevice *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTcpSocket(void *, int);}
static void release_QTcpSocket(void *sipCppV, int)
{
     ::QTcpSocket *sipCpp = reinterpret_cast< ::QTcpSocket *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTcpSocket(sipSimpleWrapper *);}
static void dealloc_QTcpSocket(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTcpSocket *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTcpSocket(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTcpSocket(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTcpSocket(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQTcpSocket *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTcpSocket(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTcpSocket[] = {{1, 255, 1}};

PyDoc_STRVAR(doc_QTcpSocket, "\1QTcpSocket(parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QTcpSocket = {
    & ::QTcpSocket::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QTcpSocket = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTcpSocket,
        {0},
        &plugin_QTcpSocket
    },
    {
        sipNameNr_QTcpSocket,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTcpSocket,
    -1,
    -1,
    supers_QTcpSocket,
    0,
    init_type_QTcpSocket,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTcpSocket,
    0,
    0,
    0,
    release_QTcpSocket,
    cast_QTcpSocket,
    0,
    0,
    0,
    0,
    0,
    0
};
