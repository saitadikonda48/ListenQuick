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

#line 37 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDesigner/extension.sip"
#include <extension.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDesigner/extension.sip"
#include <extension.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"


class sipQAbstractExtensionManager : public  ::QAbstractExtensionManager
{
public:
    sipQAbstractExtensionManager();
    sipQAbstractExtensionManager(const  ::QAbstractExtensionManager&);
    virtual ~sipQAbstractExtensionManager();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QObject* extension( ::QObject*,const  ::QString&) const;
    void unregisterExtensions( ::QAbstractExtensionFactory*,const  ::QString&);
    void registerExtensions( ::QAbstractExtensionFactory*,const  ::QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractExtensionManager(const sipQAbstractExtensionManager &);
    sipQAbstractExtensionManager &operator = (const sipQAbstractExtensionManager &);

    char sipPyMethods[3];
};

sipQAbstractExtensionManager::sipQAbstractExtensionManager():  ::QAbstractExtensionManager(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractExtensionManager::sipQAbstractExtensionManager(const  ::QAbstractExtensionManager& a0):  ::QAbstractExtensionManager(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractExtensionManager::~sipQAbstractExtensionManager()
{
    sipCommonDtor(sipPySelf);
}

 ::QObject* sipQAbstractExtensionManager::extension( ::QObject*a0,const  ::QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QAbstractExtensionManager,sipName_extension);

    if (!sipMeth)
        return 0;

    extern  ::QObject* sipVH_QtDesigner_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*,const  ::QString&);

    return sipVH_QtDesigner_60(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQAbstractExtensionManager::unregisterExtensions( ::QAbstractExtensionFactory*a0,const  ::QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QAbstractExtensionManager,sipName_unregisterExtensions);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_62(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QAbstractExtensionFactory*,const  ::QString&);

    sipVH_QtDesigner_62(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQAbstractExtensionManager::registerExtensions( ::QAbstractExtensionFactory*a0,const  ::QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QAbstractExtensionManager,sipName_registerExtensions);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_62(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QAbstractExtensionFactory*,const  ::QString&);

    sipVH_QtDesigner_62(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QAbstractExtensionManager_registerExtensions, "registerExtensions(self, QAbstractExtensionFactory, str)");

extern "C" {static PyObject *meth_QAbstractExtensionManager_registerExtensions(PyObject *, PyObject *);}
static PyObject *meth_QAbstractExtensionManager_registerExtensions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QAbstractExtensionFactory* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QAbstractExtensionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QAbstractExtensionManager, &sipCpp, sipType_QAbstractExtensionFactory, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractExtensionManager, sipName_registerExtensions);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->registerExtensions(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractExtensionManager, sipName_registerExtensions, doc_QAbstractExtensionManager_registerExtensions);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractExtensionManager_unregisterExtensions, "unregisterExtensions(self, QAbstractExtensionFactory, str)");

extern "C" {static PyObject *meth_QAbstractExtensionManager_unregisterExtensions(PyObject *, PyObject *);}
static PyObject *meth_QAbstractExtensionManager_unregisterExtensions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QAbstractExtensionFactory* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QAbstractExtensionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QAbstractExtensionManager, &sipCpp, sipType_QAbstractExtensionFactory, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractExtensionManager, sipName_unregisterExtensions);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->unregisterExtensions(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractExtensionManager, sipName_unregisterExtensions, doc_QAbstractExtensionManager_unregisterExtensions);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractExtensionManager_extension, "extension(self, QObject, str) -> QObject");

extern "C" {static PyObject *meth_QAbstractExtensionManager_extension(PyObject *, PyObject *);}
static PyObject *meth_QAbstractExtensionManager_extension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QObject* a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QAbstractExtensionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QAbstractExtensionManager, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
             ::QObject*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractExtensionManager, sipName_extension);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->extension(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractExtensionManager, sipName_extension, doc_QAbstractExtensionManager_extension);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractExtensionManager(void *, int);}
static void release_QAbstractExtensionManager(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQAbstractExtensionManager *>(sipCppV);
    else
        delete reinterpret_cast< ::QAbstractExtensionManager *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractExtensionManager(sipSimpleWrapper *);}
static void dealloc_QAbstractExtensionManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQAbstractExtensionManager *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractExtensionManager(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QAbstractExtensionManager(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractExtensionManager(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractExtensionManager *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractExtensionManager();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QAbstractExtensionManager* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAbstractExtensionManager, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractExtensionManager(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractExtensionManager[] = {
    {SIP_MLNAME_CAST(sipName_extension), meth_QAbstractExtensionManager_extension, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractExtensionManager_extension)},
    {SIP_MLNAME_CAST(sipName_registerExtensions), meth_QAbstractExtensionManager_registerExtensions, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractExtensionManager_registerExtensions)},
    {SIP_MLNAME_CAST(sipName_unregisterExtensions), meth_QAbstractExtensionManager_unregisterExtensions, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractExtensionManager_unregisterExtensions)}
};

PyDoc_STRVAR(doc_QAbstractExtensionManager, "\1QAbstractExtensionManager()\n"
    "QAbstractExtensionManager(QAbstractExtensionManager)");


static pyqt4ClassPluginDef plugin_QAbstractExtensionManager = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QAbstractExtensionManager = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractExtensionManager,
        {0},
        &plugin_QAbstractExtensionManager
    },
    {
        sipNameNr_QAbstractExtensionManager,
        {0, 0, 1},
        3, methods_QAbstractExtensionManager,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractExtensionManager,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractExtensionManager,
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
    dealloc_QAbstractExtensionManager,
    0,
    0,
    0,
    release_QAbstractExtensionManager,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
