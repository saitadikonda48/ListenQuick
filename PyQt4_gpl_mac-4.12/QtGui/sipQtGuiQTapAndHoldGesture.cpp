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

#include "sipAPIQtGui.h"

#line 193 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 110 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 75 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTapAndHoldGesture.cpp"


class sipQTapAndHoldGesture : public  ::QTapAndHoldGesture
{
public:
    sipQTapAndHoldGesture( ::QObject*);
    virtual ~sipQTapAndHoldGesture();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent( ::QEvent*);
    void childEvent( ::QChildEvent*);
    void timerEvent( ::QTimerEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    bool event( ::QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTapAndHoldGesture(const sipQTapAndHoldGesture &);
    sipQTapAndHoldGesture &operator = (const sipQTapAndHoldGesture &);

    char sipPyMethods[7];
};

sipQTapAndHoldGesture::sipQTapAndHoldGesture( ::QObject*a0):  ::QTapAndHoldGesture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTapAndHoldGesture::~sipQTapAndHoldGesture()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTapAndHoldGesture::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QTapAndHoldGesture);
}

int sipQTapAndHoldGesture::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QTapAndHoldGesture::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QTapAndHoldGesture,_c,_id,_a);

    return _id;
}

void *sipQTapAndHoldGesture::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QTapAndHoldGesture, _clname)) ? this :  ::QTapAndHoldGesture::qt_metacast(_clname);
}

void sipQTapAndHoldGesture::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtGui_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::connectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtGui_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::customEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::childEvent(a0);
        return;
    }

    extern void sipVH_QtGui_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtGui_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::timerEvent(a0);
        return;
    }

    extern void sipVH_QtGui_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtGui_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTapAndHoldGesture::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QTapAndHoldGesture::eventFilter(a0,a1);

    extern bool sipVH_QtGui_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtGui_6(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQTapAndHoldGesture::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QTapAndHoldGesture::event(a0);

    extern bool sipVH_QtGui_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtGui_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_position, "position(self) -> QPointF");

extern "C" {static PyObject *meth_QTapAndHoldGesture_position(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTapAndHoldGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp))
        {
             ::QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPointF(sipCpp->position());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_position, doc_QTapAndHoldGesture_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_setPosition, "setPosition(self, Union[QPointF, QPoint])");

extern "C" {static PyObject *meth_QTapAndHoldGesture_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::QTapAndHoldGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_setPosition, doc_QTapAndHoldGesture_setPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_setTimeout, "setTimeout(int)");

extern "C" {static PyObject *meth_QTapAndHoldGesture_setTimeout(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_setTimeout(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QTapAndHoldGesture::setTimeout(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_setTimeout, doc_QTapAndHoldGesture_setTimeout);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_timeout, "timeout() -> int");

extern "C" {static PyObject *meth_QTapAndHoldGesture_timeout(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_timeout(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QTapAndHoldGesture::timeout();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_timeout, doc_QTapAndHoldGesture_timeout);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTapAndHoldGesture(void *, const sipTypeDef *);}
static void *cast_QTapAndHoldGesture(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTapAndHoldGesture *sipCpp = reinterpret_cast< ::QTapAndHoldGesture *>(sipCppV);

    if (targetType == sipType_QGesture)
        return static_cast< ::QGesture *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTapAndHoldGesture(void *, int);}
static void release_QTapAndHoldGesture(void *sipCppV, int)
{
     ::QTapAndHoldGesture *sipCpp = reinterpret_cast< ::QTapAndHoldGesture *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTapAndHoldGesture(sipSimpleWrapper *);}
static void dealloc_QTapAndHoldGesture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTapAndHoldGesture *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTapAndHoldGesture(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTapAndHoldGesture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTapAndHoldGesture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQTapAndHoldGesture *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTapAndHoldGesture(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTapAndHoldGesture[] = {{146, 255, 1}};


static PyMethodDef methods_QTapAndHoldGesture[] = {
    {SIP_MLNAME_CAST(sipName_position), meth_QTapAndHoldGesture_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_position)},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QTapAndHoldGesture_setPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_setPosition)},
    {SIP_MLNAME_CAST(sipName_setTimeout), meth_QTapAndHoldGesture_setTimeout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_setTimeout)},
    {SIP_MLNAME_CAST(sipName_timeout), meth_QTapAndHoldGesture_timeout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_timeout)}
};

PyDoc_STRVAR(doc_QTapAndHoldGesture, "\1QTapAndHoldGesture(parent: QObject = None)");


static pyqt4ClassPluginDef plugin_QTapAndHoldGesture = {
    & ::QTapAndHoldGesture::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTapAndHoldGesture = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTapAndHoldGesture,
        {0},
        &plugin_QTapAndHoldGesture
    },
    {
        sipNameNr_QTapAndHoldGesture,
        {0, 0, 1},
        4, methods_QTapAndHoldGesture,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTapAndHoldGesture,
    -1,
    -1,
    supers_QTapAndHoldGesture,
    0,
    init_type_QTapAndHoldGesture,
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
    dealloc_QTapAndHoldGesture,
    0,
    0,
    0,
    release_QTapAndHoldGesture,
    cast_QTapAndHoldGesture,
    0,
    0,
    0,
    0,
    0,
    0
};
