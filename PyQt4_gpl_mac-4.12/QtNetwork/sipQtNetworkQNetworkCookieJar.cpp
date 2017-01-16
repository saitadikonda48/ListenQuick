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

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qnetworkcookiejar.sip"
#include <qnetworkcookiejar.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qnetworkcookie.sip"
#include <qnetworkcookie.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 98 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"


class sipQNetworkCookieJar : public  ::QNetworkCookieJar
{
public:
    sipQNetworkCookieJar( ::QObject*);
    virtual ~sipQNetworkCookieJar();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setCookiesFromUrl(const QList< ::QNetworkCookie>&,const  ::QUrl&);
    QList< ::QNetworkCookie> cookiesForUrl(const  ::QUrl&) const;
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
    sipQNetworkCookieJar(const sipQNetworkCookieJar &);
    sipQNetworkCookieJar &operator = (const sipQNetworkCookieJar &);

    char sipPyMethods[9];
};

sipQNetworkCookieJar::sipQNetworkCookieJar( ::QObject*a0):  ::QNetworkCookieJar(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkCookieJar::~sipQNetworkCookieJar()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQNetworkCookieJar::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QNetworkCookieJar);
}

int sipQNetworkCookieJar::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QNetworkCookieJar::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QNetworkCookieJar,_c,_id,_a);

    return _id;
}

void *sipQNetworkCookieJar::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast(sipPySelf, sipType_QNetworkCookieJar, _clname)) ? this :  ::QNetworkCookieJar::qt_metacast(_clname);
}

bool sipQNetworkCookieJar::setCookiesFromUrl(const QList< ::QNetworkCookie>& a0,const  ::QUrl& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_setCookiesFromUrl);

    if (!sipMeth)
        return  ::QNetworkCookieJar::setCookiesFromUrl(a0,a1);

    extern bool sipVH_QtNetwork_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QList< ::QNetworkCookie>&,const  ::QUrl&);

    return sipVH_QtNetwork_28(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QList< ::QNetworkCookie> sipQNetworkCookieJar::cookiesForUrl(const  ::QUrl& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_cookiesForUrl);

    if (!sipMeth)
        return  ::QNetworkCookieJar::cookiesForUrl(a0);

    extern QList< ::QNetworkCookie> sipVH_QtNetwork_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QUrl&);

    return sipVH_QtNetwork_27(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQNetworkCookieJar::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QNetworkCookieJar::event(a0);

    extern bool sipVH_QtNetwork_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtNetwork_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQNetworkCookieJar::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QNetworkCookieJar::eventFilter(a0,a1);

    extern bool sipVH_QtNetwork_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtNetwork_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQNetworkCookieJar::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QNetworkCookieJar::timerEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtNetwork_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QNetworkCookieJar::childEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtNetwork_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QNetworkCookieJar::customEvent(a0);
        return;
    }

    extern void sipVH_QtNetwork_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtNetwork_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QNetworkCookieJar::connectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtNetwork_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QNetworkCookieJar::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtNetwork_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtNetwork_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QNetworkCookieJar_cookiesForUrl, "cookiesForUrl(self, QUrl) -> List[QNetworkCookie]");

extern "C" {static PyObject *meth_QNetworkCookieJar_cookiesForUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_cookiesForUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QUrl* a0;
        const  ::QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkCookieJar, &sipCpp, sipType_QUrl, &a0))
        {
            QList< ::QNetworkCookie>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList< ::QNetworkCookie>((sipSelfWasArg ? sipCpp-> ::QNetworkCookieJar::cookiesForUrl(*a0) : sipCpp->cookiesForUrl(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkCookie,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_cookiesForUrl, doc_QNetworkCookieJar_cookiesForUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookieJar_setCookiesFromUrl, "setCookiesFromUrl(self, Sequence[QNetworkCookie], QUrl) -> bool");

extern "C" {static PyObject *meth_QNetworkCookieJar_setCookiesFromUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_setCookiesFromUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const QList< ::QNetworkCookie>* a0;
        int a0State = 0;
        const  ::QUrl* a1;
         ::QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QNetworkCookieJar, &sipCpp, sipType_QList_0100QNetworkCookie,&a0, &a0State, sipType_QUrl, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QNetworkCookieJar::setCookiesFromUrl(*a0,*a1) : sipCpp->setCookiesFromUrl(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList< ::QNetworkCookie> *>(a0),sipType_QList_0100QNetworkCookie,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_setCookiesFromUrl, doc_QNetworkCookieJar_setCookiesFromUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookieJar_setAllCookies, "setAllCookies(self, Sequence[QNetworkCookie])");

extern "C" {static PyObject *meth_QNetworkCookieJar_setAllCookies(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_setAllCookies(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList< ::QNetworkCookie>* a0;
        int a0State = 0;
         ::QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1", &sipSelf, sipType_QNetworkCookieJar, &sipCpp, sipType_QList_0100QNetworkCookie,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAllCookies(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList< ::QNetworkCookie> *>(a0),sipType_QList_0100QNetworkCookie,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_setAllCookies, doc_QNetworkCookieJar_setAllCookies);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookieJar_allCookies, "allCookies(self) -> List[QNetworkCookie]");

extern "C" {static PyObject *meth_QNetworkCookieJar_allCookies(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_allCookies(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QNetworkCookieJar, &sipCpp))
        {
            QList< ::QNetworkCookie>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList< ::QNetworkCookie>(sipCpp->allCookies());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkCookie,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_allCookies, doc_QNetworkCookieJar_allCookies);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QNetworkCookieJar(void *, const sipTypeDef *);}
static void *cast_QNetworkCookieJar(void *sipCppV, const sipTypeDef *targetType)
{
     ::QNetworkCookieJar *sipCpp = reinterpret_cast< ::QNetworkCookieJar *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkCookieJar(void *, int);}
static void release_QNetworkCookieJar(void *sipCppV, int)
{
     ::QNetworkCookieJar *sipCpp = reinterpret_cast< ::QNetworkCookieJar *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QNetworkCookieJar(sipSimpleWrapper *);}
static void dealloc_QNetworkCookieJar(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQNetworkCookieJar *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QNetworkCookieJar(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QNetworkCookieJar(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkCookieJar(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQNetworkCookieJar *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQNetworkCookieJar(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNetworkCookieJar[] = {{12, 0, 1}};


static PyMethodDef methods_QNetworkCookieJar[] = {
    {SIP_MLNAME_CAST(sipName_allCookies), meth_QNetworkCookieJar_allCookies, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_allCookies)},
    {SIP_MLNAME_CAST(sipName_cookiesForUrl), meth_QNetworkCookieJar_cookiesForUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_cookiesForUrl)},
    {SIP_MLNAME_CAST(sipName_setAllCookies), meth_QNetworkCookieJar_setAllCookies, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_setAllCookies)},
    {SIP_MLNAME_CAST(sipName_setCookiesFromUrl), meth_QNetworkCookieJar_setCookiesFromUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_setCookiesFromUrl)}
};

PyDoc_STRVAR(doc_QNetworkCookieJar, "\1QNetworkCookieJar(parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QNetworkCookieJar = {
    & ::QNetworkCookieJar::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtNetwork_QNetworkCookieJar = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QNetworkCookieJar,
        {0},
        &plugin_QNetworkCookieJar
    },
    {
        sipNameNr_QNetworkCookieJar,
        {0, 0, 1},
        4, methods_QNetworkCookieJar,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkCookieJar,
    -1,
    -1,
    supers_QNetworkCookieJar,
    0,
    init_type_QNetworkCookieJar,
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
    dealloc_QNetworkCookieJar,
    0,
    0,
    0,
    release_QNetworkCookieJar,
    cast_QNetworkCookieJar,
    0,
    0,
    0,
    0,
    0,
    0
};
