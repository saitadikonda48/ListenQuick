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

#include "sipAPIQtDeclarative.h"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDeclarative/qdeclarativepropertymap.sip"
#include <qdeclarativepropertymap.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 27 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"


class sipQDeclarativePropertyMap : public  ::QDeclarativePropertyMap
{
public:
    sipQDeclarativePropertyMap( ::QObject*);
    virtual ~sipQDeclarativePropertyMap();

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
    sipQDeclarativePropertyMap(const sipQDeclarativePropertyMap &);
    sipQDeclarativePropertyMap &operator = (const sipQDeclarativePropertyMap &);

    char sipPyMethods[7];
};

sipQDeclarativePropertyMap::sipQDeclarativePropertyMap( ::QObject*a0):  ::QDeclarativePropertyMap(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativePropertyMap::~sipQDeclarativePropertyMap()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDeclarativePropertyMap::metaObject() const
{
    return sip_QtDeclarative_qt_metaobject(sipPySelf,sipType_QDeclarativePropertyMap);
}

int sipQDeclarativePropertyMap::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QDeclarativePropertyMap::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDeclarative_qt_metacall(sipPySelf,sipType_QDeclarativePropertyMap,_c,_id,_a);

    return _id;
}

void *sipQDeclarativePropertyMap::qt_metacast(const char *_clname)
{
    return (sip_QtDeclarative_qt_metacast(sipPySelf, sipType_QDeclarativePropertyMap, _clname)) ? this :  ::QDeclarativePropertyMap::qt_metacast(_clname);
}

bool sipQDeclarativePropertyMap::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QDeclarativePropertyMap::event(a0);

    extern bool sipVH_QtDeclarative_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtDeclarative_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDeclarativePropertyMap::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QDeclarativePropertyMap::eventFilter(a0,a1);

    extern bool sipVH_QtDeclarative_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtDeclarative_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQDeclarativePropertyMap::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QDeclarativePropertyMap::timerEvent(a0);
        return;
    }

    extern void sipVH_QtDeclarative_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtDeclarative_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativePropertyMap::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QDeclarativePropertyMap::childEvent(a0);
        return;
    }

    extern void sipVH_QtDeclarative_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtDeclarative_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativePropertyMap::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QDeclarativePropertyMap::customEvent(a0);
        return;
    }

    extern void sipVH_QtDeclarative_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtDeclarative_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativePropertyMap::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QDeclarativePropertyMap::connectNotify(a0);
        return;
    }

    extern void sipVH_QtDeclarative_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDeclarative_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativePropertyMap::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QDeclarativePropertyMap::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtDeclarative_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDeclarative_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_value, "value(self, str) -> Any");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_value(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVariant(sipCpp->value(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_value, doc_QDeclarativePropertyMap_value);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_insert, "insert(self, str, Any)");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_insert(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->insert(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_insert, doc_QDeclarativePropertyMap_insert);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_clear, "clear(self, str)");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_clear(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_clear, doc_QDeclarativePropertyMap_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_keys, "keys(self) -> List[str]");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_keys(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_keys(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp))
        {
             ::QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QStringList(sipCpp->keys());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_keys, doc_QDeclarativePropertyMap_keys);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_count, "count(self) -> int");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_count(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_count, doc_QDeclarativePropertyMap_count);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_size, "size(self) -> int");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_size(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_size, doc_QDeclarativePropertyMap_size);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_isEmpty, doc_QDeclarativePropertyMap_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativePropertyMap_contains, "contains(self, str) -> bool");

extern "C" {static PyObject *meth_QDeclarativePropertyMap_contains(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyMap_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QDeclarativePropertyMap *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDeclarativePropertyMap, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contains(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName_contains, doc_QDeclarativePropertyMap_contains);

    return NULL;
}


extern "C" {static PyObject *slot_QDeclarativePropertyMap___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QDeclarativePropertyMap___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDeclarativePropertyMap *sipCpp = reinterpret_cast< ::QDeclarativePropertyMap *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeclarativePropertyMap));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
             ::QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVariant((*sipCpp)[*a0]);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyMap, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static SIP_SSIZE_T slot_QDeclarativePropertyMap___len__(PyObject *);}
static SIP_SSIZE_T slot_QDeclarativePropertyMap___len__(PyObject *sipSelf)
{
     ::QDeclarativePropertyMap *sipCpp = reinterpret_cast< ::QDeclarativePropertyMap *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDeclarativePropertyMap));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 561 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativePropertyMap.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QDeclarativePropertyMap(void *, const sipTypeDef *);}
static void *cast_QDeclarativePropertyMap(void *sipCppV, const sipTypeDef *targetType)
{
     ::QDeclarativePropertyMap *sipCpp = reinterpret_cast< ::QDeclarativePropertyMap *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativePropertyMap(void *, int);}
static void release_QDeclarativePropertyMap(void *sipCppV, int)
{
     ::QDeclarativePropertyMap *sipCpp = reinterpret_cast< ::QDeclarativePropertyMap *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDeclarativePropertyMap(sipSimpleWrapper *);}
static void dealloc_QDeclarativePropertyMap(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQDeclarativePropertyMap *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDeclarativePropertyMap(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QDeclarativePropertyMap(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativePropertyMap(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDeclarativePropertyMap *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativePropertyMap(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDeclarativePropertyMap[] = {{6, 0, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QDeclarativePropertyMap[] = {
    {(void *)slot_QDeclarativePropertyMap___getitem__, getitem_slot},
    {(void *)slot_QDeclarativePropertyMap___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDeclarativePropertyMap[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QDeclarativePropertyMap_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_clear)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QDeclarativePropertyMap_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_contains)},
    {SIP_MLNAME_CAST(sipName_count), meth_QDeclarativePropertyMap_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_count)},
    {SIP_MLNAME_CAST(sipName_insert), meth_QDeclarativePropertyMap_insert, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_insert)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QDeclarativePropertyMap_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_isEmpty)},
    {SIP_MLNAME_CAST(sipName_keys), meth_QDeclarativePropertyMap_keys, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_keys)},
    {SIP_MLNAME_CAST(sipName_size), meth_QDeclarativePropertyMap_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_size)},
    {SIP_MLNAME_CAST(sipName_value), meth_QDeclarativePropertyMap_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyMap_value)}
};

PyDoc_STRVAR(doc_QDeclarativePropertyMap, "\1QDeclarativePropertyMap(parent: QObject = None)");


/* Define this type's signals. */
static const pyqt4QtSignal signals_QDeclarativePropertyMap[] = {
    {"valueChanged(QString,QVariant)", "\1valueChanged(self, str, Any)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt4ClassPluginDef plugin_QDeclarativePropertyMap = {
    & ::QDeclarativePropertyMap::staticMetaObject,
    0,
    signals_QDeclarativePropertyMap
};


sipClassTypeDef sipTypeDef_QtDeclarative_QDeclarativePropertyMap = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDeclarativePropertyMap,
        {0},
        &plugin_QDeclarativePropertyMap
    },
    {
        sipNameNr_QDeclarativePropertyMap,
        {0, 0, 1},
        8, methods_QDeclarativePropertyMap,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativePropertyMap,
    -1,
    -1,
    supers_QDeclarativePropertyMap,
    slots_QDeclarativePropertyMap,
    init_type_QDeclarativePropertyMap,
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
    dealloc_QDeclarativePropertyMap,
    0,
    0,
    0,
    release_QDeclarativePropertyMap,
    cast_QDeclarativePropertyMap,
    0,
    0,
    0,
    0,
    0,
    0
};
