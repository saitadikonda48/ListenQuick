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

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qlocalserver.sip"
#include <qlocalserver.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 466 "sip/QtCore/qglobal.sip"
#include <QtGlobal>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qlocalsocket.sip"
#include <qlocalsocket.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQLocalServer.cpp"


class sipQLocalServer : public  ::QLocalServer
{
public:
    sipQLocalServer( ::QObject*);
    virtual ~sipQLocalServer();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void incomingConnection( ::quintptr);
     ::QLocalSocket* nextPendingConnection();
    bool hasPendingConnections() const;
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
    sipQLocalServer(const sipQLocalServer &);
    sipQLocalServer &operator = (const sipQLocalServer &);

    char sipPyMethods[10];
};

sipQLocalServer::sipQLocalServer( ::QObject*a0):  ::QLocalServer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLocalServer::~sipQLocalServer()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQLocalServer::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QLocalServer);
}

int sipQLocalServer::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QLocalServer::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QLocalServer,_c,_id,_a);

    return _id;
}

void *sipQLocalServer::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast(sipPySelf, sipType_QLocalServer, _clname)) ? this :  ::QLocalServer::qt_metacast(_clname);
}

void sipQLocalServer::incomingConnection( ::quintptr a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_incomingConnection);

    if (!sipMeth)
    {
         ::QLocalServer::incomingConnection(a0);
        return;
    }

    extern void sipVH_QtNetwork_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::quintptr);

    sipVH_QtNetwork_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QLocalSocket* sipQLocalServer::nextPendingConnection()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_nextPendingConnection);

    if (!sipMeth)
        return  ::QLocalServer::nextPendingConnection();

    extern  ::QLocalSocket* sipVH_QtNetwork_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_24(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQLocalServer::hasPendingConnections() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_hasPendingConnections);

    if (!sipMeth)
        return  ::QLocalServer::hasPendingConnections();

    extern bool sipVH_QtNetwork_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtNetwork_18(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQLocalServer::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QLocalServer::event(a0);

    extern bool sipVH_QtNetwork_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtNetwork_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQLocalServer::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QLocalServer::eventFilter(a0,a1);

    extern bool sipVH_QtNetwork_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtNetwork_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQLocalServer::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QLocalServer::timerEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtNetwork_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLocalServer::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QLocalServer::childEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtNetwork_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLocalServer::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QLocalServer::customEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtNetwork_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLocalServer::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QLocalServer::connectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtNetwork_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLocalServer::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QLocalServer::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtNetwork_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QLocalServer_close, "close(self)");

extern "C" {static PyObject *meth_QLocalServer_close(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_close(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->close();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_close, doc_QLocalServer_close);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QLocalServer_errorString(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_errorString, doc_QLocalServer_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_hasPendingConnections, "hasPendingConnections(self) -> bool");

extern "C" {static PyObject *meth_QLocalServer_hasPendingConnections(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_hasPendingConnections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QLocalServer::hasPendingConnections() : sipCpp->hasPendingConnections());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_hasPendingConnections, doc_QLocalServer_hasPendingConnections);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_isListening, "isListening(self) -> bool");

extern "C" {static PyObject *meth_QLocalServer_isListening(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_isListening(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isListening();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_isListening, doc_QLocalServer_isListening);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_listen, "listen(self, str) -> bool");

extern "C" {static PyObject *meth_QLocalServer_listen(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_listen(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLocalServer, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->listen(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_listen, doc_QLocalServer_listen);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_maxPendingConnections, "maxPendingConnections(self) -> int");

extern "C" {static PyObject *meth_QLocalServer_maxPendingConnections(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_maxPendingConnections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maxPendingConnections();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_maxPendingConnections, doc_QLocalServer_maxPendingConnections);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_nextPendingConnection, "nextPendingConnection(self) -> QLocalSocket");

extern "C" {static PyObject *meth_QLocalServer_nextPendingConnection(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_nextPendingConnection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
             ::QLocalSocket*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QLocalServer::nextPendingConnection() : sipCpp->nextPendingConnection());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QLocalSocket,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_nextPendingConnection, doc_QLocalServer_nextPendingConnection);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_serverName, "serverName(self) -> str");

extern "C" {static PyObject *meth_QLocalServer_serverName(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_serverName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->serverName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_serverName, doc_QLocalServer_serverName);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_fullServerName, "fullServerName(self) -> str");

extern "C" {static PyObject *meth_QLocalServer_fullServerName(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_fullServerName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->fullServerName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_fullServerName, doc_QLocalServer_fullServerName);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_serverError, "serverError(self) -> QAbstractSocket.SocketError");

extern "C" {static PyObject *meth_QLocalServer_serverError(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_serverError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLocalServer, &sipCpp))
        {
             ::QAbstractSocket::SocketError sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->serverError();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAbstractSocket_SocketError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_serverError, doc_QLocalServer_serverError);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_setMaxPendingConnections, "setMaxPendingConnections(self, int)");

extern "C" {static PyObject *meth_QLocalServer_setMaxPendingConnections(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_setMaxPendingConnections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QLocalServer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMaxPendingConnections(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_setMaxPendingConnections, doc_QLocalServer_setMaxPendingConnections);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_waitForNewConnection, "waitForNewConnection(self, msecs: int = 0) -> Tuple[bool, bool]");

extern "C" {static PyObject *meth_QLocalServer_waitForNewConnection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_waitForNewConnection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        bool a1;
         ::QLocalServer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QLocalServer, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->waitForNewConnection(a0,&a1);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(bb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_waitForNewConnection, doc_QLocalServer_waitForNewConnection);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_removeServer, "removeServer(str) -> bool");

extern "C" {static PyObject *meth_QLocalServer_removeServer(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_removeServer(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QLocalServer::removeServer(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_removeServer, doc_QLocalServer_removeServer);

    return NULL;
}


PyDoc_STRVAR(doc_QLocalServer_incomingConnection, "incomingConnection(self, sip.voidptr)");

extern "C" {static PyObject *meth_QLocalServer_incomingConnection(PyObject *, PyObject *);}
static PyObject *meth_QLocalServer_incomingConnection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::quintptr* a0;
        int a0State = 0;
         ::QLocalServer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1", &sipSelf, sipType_QLocalServer, &sipCpp, sipType_quintptr,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QLocalServer::incomingConnection(*a0) : sipCpp->incomingConnection(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_quintptr,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLocalServer, sipName_incomingConnection, doc_QLocalServer_incomingConnection);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QLocalServer(void *, const sipTypeDef *);}
static void *cast_QLocalServer(void *sipCppV, const sipTypeDef *targetType)
{
     ::QLocalServer *sipCpp = reinterpret_cast< ::QLocalServer *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLocalServer(void *, int);}
static void release_QLocalServer(void *sipCppV, int)
{
     ::QLocalServer *sipCpp = reinterpret_cast< ::QLocalServer *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QLocalServer(sipSimpleWrapper *);}
static void dealloc_QLocalServer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQLocalServer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QLocalServer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QLocalServer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLocalServer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQLocalServer *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLocalServer(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QLocalServer[] = {{12, 0, 1}};


static PyMethodDef methods_QLocalServer[] = {
    {SIP_MLNAME_CAST(sipName_close), meth_QLocalServer_close, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_close)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QLocalServer_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_errorString)},
    {SIP_MLNAME_CAST(sipName_fullServerName), meth_QLocalServer_fullServerName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_fullServerName)},
    {SIP_MLNAME_CAST(sipName_hasPendingConnections), meth_QLocalServer_hasPendingConnections, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_hasPendingConnections)},
    {SIP_MLNAME_CAST(sipName_incomingConnection), meth_QLocalServer_incomingConnection, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_incomingConnection)},
    {SIP_MLNAME_CAST(sipName_isListening), meth_QLocalServer_isListening, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_isListening)},
    {SIP_MLNAME_CAST(sipName_listen), meth_QLocalServer_listen, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_listen)},
    {SIP_MLNAME_CAST(sipName_maxPendingConnections), meth_QLocalServer_maxPendingConnections, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_maxPendingConnections)},
    {SIP_MLNAME_CAST(sipName_nextPendingConnection), meth_QLocalServer_nextPendingConnection, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_nextPendingConnection)},
    {SIP_MLNAME_CAST(sipName_removeServer), meth_QLocalServer_removeServer, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_removeServer)},
    {SIP_MLNAME_CAST(sipName_serverError), meth_QLocalServer_serverError, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_serverError)},
    {SIP_MLNAME_CAST(sipName_serverName), meth_QLocalServer_serverName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_serverName)},
    {SIP_MLNAME_CAST(sipName_setMaxPendingConnections), meth_QLocalServer_setMaxPendingConnections, METH_VARARGS, SIP_MLDOC_CAST(doc_QLocalServer_setMaxPendingConnections)},
    {SIP_MLNAME_CAST(sipName_waitForNewConnection), (PyCFunction)meth_QLocalServer_waitForNewConnection, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QLocalServer_waitForNewConnection)}
};

PyDoc_STRVAR(doc_QLocalServer, "\1QLocalServer(parent: QObject = None)");


/* Define this type's signals. */
static const pyqt4QtSignal signals_QLocalServer[] = {
    {"newConnection()", "\1newConnection(self)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt4ClassPluginDef plugin_QLocalServer = {
    & ::QLocalServer::staticMetaObject,
    0,
    signals_QLocalServer
};


sipClassTypeDef sipTypeDef_QtNetwork_QLocalServer = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QLocalServer,
        {0},
        &plugin_QLocalServer
    },
    {
        sipNameNr_QLocalServer,
        {0, 0, 1},
        14, methods_QLocalServer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLocalServer,
    -1,
    -1,
    supers_QLocalServer,
    0,
    init_type_QLocalServer,
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
    dealloc_QLocalServer,
    0,
    0,
    0,
    release_QLocalServer,
    cast_QLocalServer,
    0,
    0,
    0,
    0,
    0,
    0
};
