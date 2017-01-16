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

#include "sipAPIQtDesigner.h"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDesigner/default_extensionfactory.sip"
#include <default_extensionfactory.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDesigner/qextensionmanager.sip"
#include <qextensionmanager.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQExtensionFactory.cpp"


class sipQExtensionFactory : public  ::QExtensionFactory
{
public:
    sipQExtensionFactory( ::QExtensionManager*);
    virtual ~sipQExtensionFactory();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QObject* createExtension( ::QObject*,const  ::QString&, ::QObject*) const;
     ::QObject* extension( ::QObject*,const  ::QString&) const;
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
    sipQExtensionFactory(const sipQExtensionFactory &);
    sipQExtensionFactory &operator = (const sipQExtensionFactory &);

    char sipPyMethods[9];
};

sipQExtensionFactory::sipQExtensionFactory( ::QExtensionManager*a0):  ::QExtensionFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQExtensionFactory::~sipQExtensionFactory()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQExtensionFactory::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QExtensionFactory);
}

int sipQExtensionFactory::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QExtensionFactory::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QExtensionFactory,_c,_id,_a);

    return _id;
}

void *sipQExtensionFactory::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QExtensionFactory, _clname)) ? this :  ::QExtensionFactory::qt_metacast(_clname);
}

 ::QObject* sipQExtensionFactory::createExtension( ::QObject*a0,const  ::QString& a1, ::QObject*a2) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_createExtension);

    if (!sipMeth)
        return  ::QExtensionFactory::createExtension(a0,a1,a2);

    extern  ::QObject* sipVH_QtDesigner_61(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*,const  ::QString&, ::QObject*);

    return sipVH_QtDesigner_61(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QObject* sipQExtensionFactory::extension( ::QObject*a0,const  ::QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_extension);

    if (!sipMeth)
        return  ::QExtensionFactory::extension(a0,a1);

    extern  ::QObject* sipVH_QtDesigner_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*,const  ::QString&);

    return sipVH_QtDesigner_60(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQExtensionFactory::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QExtensionFactory::event(a0);

    extern bool sipVH_QtDesigner_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtDesigner_30(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQExtensionFactory::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QExtensionFactory::eventFilter(a0,a1);

    extern bool sipVH_QtDesigner_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtDesigner_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQExtensionFactory::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QExtensionFactory::timerEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtDesigner_32(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQExtensionFactory::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QExtensionFactory::childEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtDesigner_33(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQExtensionFactory::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QExtensionFactory::customEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtDesigner_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQExtensionFactory::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QExtensionFactory::connectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQExtensionFactory::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QExtensionFactory::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QExtensionFactory_extension, "extension(self, QObject, str) -> QObject");

extern "C" {static PyObject *meth_QExtensionFactory_extension(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_extension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QObject* a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QExtensionFactory, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QExtensionFactory::extension(a0,*a1) : sipCpp->extension(a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_extension, doc_QExtensionFactory_extension);

    return NULL;
}


PyDoc_STRVAR(doc_QExtensionFactory_extensionManager, "extensionManager(self) -> QExtensionManager");

extern "C" {static PyObject *meth_QExtensionFactory_extensionManager(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_extensionManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QExtensionFactory, &sipCpp))
        {
             ::QExtensionManager*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->extensionManager();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QExtensionManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_extensionManager, doc_QExtensionFactory_extensionManager);

    return NULL;
}


PyDoc_STRVAR(doc_QExtensionFactory_createExtension, "createExtension(self, QObject, str, QObject) -> QObject");

extern "C" {static PyObject *meth_QExtensionFactory_createExtension(PyObject *, PyObject *);}
static PyObject *meth_QExtensionFactory_createExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QObject* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QObject* a2;
        sipWrapper *sipOwner = 0;
        const  ::QExtensionFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8J1JH", &sipSelf, sipType_QExtensionFactory, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QObject, &a2, &sipOwner))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QExtensionFactory::createExtension(a0,*a1,a2) : sipCpp->createExtension(a0,*a1,a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QObject,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QExtensionFactory, sipName_createExtension, doc_QExtensionFactory_createExtension);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QExtensionFactory(void *, const sipTypeDef *);}
static void *cast_QExtensionFactory(void *sipCppV, const sipTypeDef *targetType)
{
     ::QExtensionFactory *sipCpp = reinterpret_cast< ::QExtensionFactory *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    if (targetType == sipType_QAbstractExtensionFactory)
        return static_cast< ::QAbstractExtensionFactory *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QExtensionFactory(void *, int);}
static void release_QExtensionFactory(void *sipCppV, int)
{
     ::QExtensionFactory *sipCpp = reinterpret_cast< ::QExtensionFactory *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QExtensionFactory(sipSimpleWrapper *);}
static void dealloc_QExtensionFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQExtensionFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QExtensionFactory(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QExtensionFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QExtensionFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQExtensionFactory *sipCpp = 0;

    {
         ::QExtensionManager* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QExtensionManager, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQExtensionFactory(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QExtensionFactory[] = {{5, 0, 0}, {0, 255, 1}};


static PyMethodDef methods_QExtensionFactory[] = {
    {SIP_MLNAME_CAST(sipName_createExtension), meth_QExtensionFactory_createExtension, METH_VARARGS, SIP_MLDOC_CAST(doc_QExtensionFactory_createExtension)},
    {SIP_MLNAME_CAST(sipName_extension), meth_QExtensionFactory_extension, METH_VARARGS, SIP_MLDOC_CAST(doc_QExtensionFactory_extension)},
    {SIP_MLNAME_CAST(sipName_extensionManager), meth_QExtensionFactory_extensionManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QExtensionFactory_extensionManager)}
};

PyDoc_STRVAR(doc_QExtensionFactory, "\1QExtensionFactory(parent: QExtensionManager = None)");


static pyqt4ClassPluginDef plugin_QExtensionFactory = {
    & ::QExtensionFactory::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QExtensionFactory = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QExtensionFactory,
        {0},
        &plugin_QExtensionFactory
    },
    {
        sipNameNr_QExtensionFactory,
        {0, 0, 1},
        3, methods_QExtensionFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QExtensionFactory,
    -1,
    -1,
    supers_QExtensionFactory,
    0,
    init_type_QExtensionFactory,
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
    dealloc_QExtensionFactory,
    0,
    0,
    0,
    release_QExtensionFactory,
    cast_QExtensionFactory,
    0,
    0,
    0,
    0,
    0,
    0
};
