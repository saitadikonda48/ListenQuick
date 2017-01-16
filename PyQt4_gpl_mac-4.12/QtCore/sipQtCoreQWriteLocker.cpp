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

#line 96 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQWriteLocker.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQWriteLocker.cpp"


PyDoc_STRVAR(doc_QWriteLocker_unlock, "unlock(self)");

extern "C" {static PyObject *meth_QWriteLocker_unlock(PyObject *, PyObject *);}
static PyObject *meth_QWriteLocker_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWriteLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWriteLocker, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWriteLocker, sipName_unlock, doc_QWriteLocker_unlock);

    return NULL;
}


PyDoc_STRVAR(doc_QWriteLocker_relock, "relock(self)");

extern "C" {static PyObject *meth_QWriteLocker_relock(PyObject *, PyObject *);}
static PyObject *meth_QWriteLocker_relock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWriteLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWriteLocker, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->relock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWriteLocker, sipName_relock, doc_QWriteLocker_relock);

    return NULL;
}


PyDoc_STRVAR(doc_QWriteLocker_readWriteLock, "readWriteLock(self) -> QReadWriteLock");

extern "C" {static PyObject *meth_QWriteLocker_readWriteLock(PyObject *, PyObject *);}
static PyObject *meth_QWriteLocker_readWriteLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWriteLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWriteLocker, &sipCpp))
        {
             ::QReadWriteLock*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->readWriteLock();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QReadWriteLock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWriteLocker, sipName_readWriteLock, doc_QWriteLocker_readWriteLock);

    return NULL;
}


PyDoc_STRVAR(doc_QWriteLocker___enter__, "__enter__(self) -> object");

extern "C" {static PyObject *meth_QWriteLocker___enter__(PyObject *, PyObject *);}
static PyObject *meth_QWriteLocker___enter__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWriteLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWriteLocker, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 107 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qreadwritelock.sip"
        // Just return a reference to self.
        sipRes = sipSelf;
        Py_INCREF(sipRes);
#line 143 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQWriteLocker.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWriteLocker, sipName___enter__, doc_QWriteLocker___enter__);

    return NULL;
}


PyDoc_STRVAR(doc_QWriteLocker___exit__, "__exit__(self, object, object, object)");

extern "C" {static PyObject *meth_QWriteLocker___exit__(PyObject *, PyObject *);}
static PyObject *meth_QWriteLocker___exit__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        PyObject * a1;
        PyObject * a2;
         ::QWriteLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0P0P0", &sipSelf, sipType_QWriteLocker, &sipCpp, &a0, &a1, &a2))
        {
#line 114 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qreadwritelock.sip"
        sipCpp->unlock();
#line 174 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQWriteLocker.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWriteLocker, sipName___exit__, doc_QWriteLocker___exit__);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWriteLocker(void *, int);}
static void release_QWriteLocker(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QWriteLocker *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWriteLocker(sipSimpleWrapper *);}
static void dealloc_QWriteLocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWriteLocker(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWriteLocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWriteLocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWriteLocker *sipCpp = 0;

    {
         ::QReadWriteLock* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QReadWriteLock, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWriteLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWriteLocker[] = {
    {SIP_MLNAME_CAST(sipName___enter__), meth_QWriteLocker___enter__, METH_VARARGS, SIP_MLDOC_CAST(doc_QWriteLocker___enter__)},
    {SIP_MLNAME_CAST(sipName___exit__), meth_QWriteLocker___exit__, METH_VARARGS, SIP_MLDOC_CAST(doc_QWriteLocker___exit__)},
    {SIP_MLNAME_CAST(sipName_readWriteLock), meth_QWriteLocker_readWriteLock, METH_VARARGS, SIP_MLDOC_CAST(doc_QWriteLocker_readWriteLock)},
    {SIP_MLNAME_CAST(sipName_relock), meth_QWriteLocker_relock, METH_VARARGS, SIP_MLDOC_CAST(doc_QWriteLocker_relock)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QWriteLocker_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QWriteLocker_unlock)}
};

PyDoc_STRVAR(doc_QWriteLocker, "\1QWriteLocker(QReadWriteLock)");


static pyqt4ClassPluginDef plugin_QWriteLocker = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QWriteLocker = {
    {
        -1,
        0,
        0,
        SIP_TYPE_NONLAZY|SIP_TYPE_CLASS,
        sipNameNr_QWriteLocker,
        {0},
        &plugin_QWriteLocker
    },
    {
        sipNameNr_QWriteLocker,
        {0, 0, 1},
        5, methods_QWriteLocker,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWriteLocker,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWriteLocker,
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
    dealloc_QWriteLocker,
    0,
    0,
    0,
    release_QWriteLocker,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
