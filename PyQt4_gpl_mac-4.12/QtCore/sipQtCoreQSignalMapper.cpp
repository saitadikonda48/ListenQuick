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

#include "sipAPIQtCore.h"

#line 30 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qsignalmapper.sip"
#include <qsignalmapper.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"

#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 27 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 368 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 351 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 265 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 32 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 115 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSignalMapper.cpp"


class sipQSignalMapper : public  ::QSignalMapper
{
public:
    sipQSignalMapper( ::QObject*);
    virtual ~sipQSignalMapper();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
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
    sipQSignalMapper(const sipQSignalMapper &);
    sipQSignalMapper &operator = (const sipQSignalMapper &);

    char sipPyMethods[7];
};

sipQSignalMapper::sipQSignalMapper( ::QObject*a0):  ::QSignalMapper(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSignalMapper::~sipQSignalMapper()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSignalMapper::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QSignalMapper);
}

int sipQSignalMapper::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QSignalMapper::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QSignalMapper,_c,_id,_a);

    return _id;
}

void *sipQSignalMapper::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QSignalMapper, _clname)) ? this :  ::QSignalMapper::qt_metacast(_clname);
}

bool sipQSignalMapper::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QSignalMapper::event(a0);

    extern bool sipVH_QtCore_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtCore_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQSignalMapper::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QSignalMapper::eventFilter(a0,a1);

    extern bool sipVH_QtCore_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtCore_1(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQSignalMapper::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QSignalMapper::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtCore_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSignalMapper::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QSignalMapper::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtCore_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSignalMapper::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QSignalMapper::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtCore_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSignalMapper::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QSignalMapper::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQSignalMapper::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QSignalMapper::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSignalMapper_setMapping, "setMapping(self, QObject, int)\n"
    "setMapping(self, QObject, str)\n"
    "setMapping(self, QObject, QWidget)\n"
    "setMapping(self, QObject, QObject)");

extern "C" {static PyObject *meth_QSignalMapper_setMapping(PyObject *, PyObject *);}
static PyObject *meth_QSignalMapper_setMapping(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QObject* a0;
        int a1;
         ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8i", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QObject, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMapping(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QObject* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMapping(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QObject* a0;
         ::QWidget* a1;
         ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QObject, &a0, sipType_QWidget, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMapping(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QObject* a0;
         ::QObject* a1;
         ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QObject, &a0, sipType_QObject, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMapping(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalMapper, sipName_setMapping, doc_QSignalMapper_setMapping);

    return NULL;
}


PyDoc_STRVAR(doc_QSignalMapper_removeMappings, "removeMappings(self, QObject)");

extern "C" {static PyObject *meth_QSignalMapper_removeMappings(PyObject *, PyObject *);}
static PyObject *meth_QSignalMapper_removeMappings(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QObject* a0;
         ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QObject, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeMappings(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalMapper, sipName_removeMappings, doc_QSignalMapper_removeMappings);

    return NULL;
}


PyDoc_STRVAR(doc_QSignalMapper_mapping, "mapping(self, int) -> QObject\n"
    "mapping(self, str) -> QObject\n"
    "mapping(self, QWidget) -> QObject\n"
    "mapping(self, QObject) -> QObject");

extern "C" {static PyObject *meth_QSignalMapper_mapping(PyObject *, PyObject *);}
static PyObject *meth_QSignalMapper_mapping(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSignalMapper, &sipCpp, &a0))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mapping(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mapping(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    {
         ::QWidget* a0;
        const  ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QWidget, &a0))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mapping(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    {
         ::QObject* a0;
        const  ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QObject, &a0))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mapping(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalMapper, sipName_mapping, doc_QSignalMapper_mapping);

    return NULL;
}


PyDoc_STRVAR(doc_QSignalMapper_map, "map(self)\n"
    "map(self, QObject)");

extern "C" {static PyObject *meth_QSignalMapper_map(PyObject *, PyObject *);}
static PyObject *meth_QSignalMapper_map(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSignalMapper, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->map();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QObject* a0;
         ::QSignalMapper *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSignalMapper, &sipCpp, sipType_QObject, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->map(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSignalMapper, sipName_map, doc_QSignalMapper_map);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSignalMapper(void *, const sipTypeDef *);}
static void *cast_QSignalMapper(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSignalMapper *sipCpp = reinterpret_cast< ::QSignalMapper *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSignalMapper(void *, int);}
static void release_QSignalMapper(void *sipCppV, int)
{
     ::QSignalMapper *sipCpp = reinterpret_cast< ::QSignalMapper *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSignalMapper(sipSimpleWrapper *);}
static void dealloc_QSignalMapper(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQSignalMapper *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSignalMapper(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QSignalMapper(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSignalMapper(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSignalMapper *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSignalMapper(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSignalMapper[] = {{141, 255, 1}};


static PyMethodDef methods_QSignalMapper[] = {
    {SIP_MLNAME_CAST(sipName_map), meth_QSignalMapper_map, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalMapper_map)},
    {SIP_MLNAME_CAST(sipName_mapping), meth_QSignalMapper_mapping, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalMapper_mapping)},
    {SIP_MLNAME_CAST(sipName_removeMappings), meth_QSignalMapper_removeMappings, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalMapper_removeMappings)},
    {SIP_MLNAME_CAST(sipName_setMapping), meth_QSignalMapper_setMapping, METH_VARARGS, SIP_MLDOC_CAST(doc_QSignalMapper_setMapping)}
};

PyDoc_STRVAR(doc_QSignalMapper, "\1QSignalMapper(parent: QObject = None)");


/* Define this type's signals. */
static const pyqt4QtSignal signals_QSignalMapper[] = {
    {"mapped(int)", "\1mapped(self, int)", 0, 0},
    {"mapped(QString)", "\1mapped(self, str)", 0, 0},
    {"mapped(QWidget*)", "\1mapped(self, QWidget)", 0, 0},
    {"mapped(QObject*)", "\1mapped(self, QObject)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt4ClassPluginDef plugin_QSignalMapper = {
    & ::QSignalMapper::staticMetaObject,
    0,
    signals_QSignalMapper
};


sipClassTypeDef sipTypeDef_QtCore_QSignalMapper = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSignalMapper,
        {0},
        &plugin_QSignalMapper
    },
    {
        sipNameNr_QSignalMapper,
        {0, 0, 1},
        4, methods_QSignalMapper,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSignalMapper,
    -1,
    -1,
    supers_QSignalMapper,
    0,
    init_type_QSignalMapper,
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
    dealloc_QSignalMapper,
    0,
    0,
    0,
    release_QSignalMapper,
    cast_QSignalMapper,
    0,
    0,
    0,
    0,
    0,
    0
};
