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

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDeclarative/qdeclarativelist.sip"
#include <qdeclarativelist.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativeListReference.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativeListReference.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDeclarative/qdeclarativeengine.sip"
#include <qdeclarativeengine.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativeListReference.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDeclarative/sipQtDeclarativeQDeclarativeListReference.cpp"


PyDoc_STRVAR(doc_QDeclarativeListReference_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QDeclarativeListReference_isValid(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_isValid, doc_QDeclarativeListReference_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_object, "object(self) -> QObject");

extern "C" {static PyObject *meth_QDeclarativeListReference_object(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->object();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_object, doc_QDeclarativeListReference_object);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_listElementType, "listElementType(self) -> QMetaObject");

extern "C" {static PyObject *meth_QDeclarativeListReference_listElementType(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_listElementType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            const  ::QMetaObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->listElementType();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast< ::QMetaObject *>(sipRes),sipType_QMetaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_listElementType, doc_QDeclarativeListReference_listElementType);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_canAppend, "canAppend(self) -> bool");

extern "C" {static PyObject *meth_QDeclarativeListReference_canAppend(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_canAppend(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canAppend();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_canAppend, doc_QDeclarativeListReference_canAppend);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_canAt, "canAt(self) -> bool");

extern "C" {static PyObject *meth_QDeclarativeListReference_canAt(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_canAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canAt();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_canAt, doc_QDeclarativeListReference_canAt);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_canClear, "canClear(self) -> bool");

extern "C" {static PyObject *meth_QDeclarativeListReference_canClear(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_canClear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canClear();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_canClear, doc_QDeclarativeListReference_canClear);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_canCount, "canCount(self) -> bool");

extern "C" {static PyObject *meth_QDeclarativeListReference_canCount(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_canCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canCount();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_canCount, doc_QDeclarativeListReference_canCount);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_append, "append(self, QObject) -> bool");

extern "C" {static PyObject *meth_QDeclarativeListReference_append(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QObject* a0;
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDeclarativeListReference, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->append(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_append, doc_QDeclarativeListReference_append);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_at, "at(self, int) -> QObject");

extern "C" {static PyObject *meth_QDeclarativeListReference_at(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_at(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDeclarativeListReference, &sipCpp, &a0))
        {
             ::QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->at(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_at, doc_QDeclarativeListReference_at);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_clear, "clear(self) -> bool");

extern "C" {static PyObject *meth_QDeclarativeListReference_clear(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->clear();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_clear, doc_QDeclarativeListReference_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeListReference_count, "count(self) -> int");

extern "C" {static PyObject *meth_QDeclarativeListReference_count(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeListReference_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDeclarativeListReference *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeListReference, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeListReference, sipName_count, doc_QDeclarativeListReference_count);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeListReference(void *, int);}
static void release_QDeclarativeListReference(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QDeclarativeListReference *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDeclarativeListReference(void *, SIP_SSIZE_T, const void *);}
static void assign_QDeclarativeListReference(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QDeclarativeListReference *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QDeclarativeListReference *>(sipSrc);
}


extern "C" {static void *array_QDeclarativeListReference(SIP_SSIZE_T);}
static void *array_QDeclarativeListReference(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDeclarativeListReference[sipNrElem];
}


extern "C" {static void *copy_QDeclarativeListReference(const void *, SIP_SSIZE_T);}
static void *copy_QDeclarativeListReference(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDeclarativeListReference(reinterpret_cast<const  ::QDeclarativeListReference *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDeclarativeListReference(sipSimpleWrapper *);}
static void dealloc_QDeclarativeListReference(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDeclarativeListReference(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDeclarativeListReference(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativeListReference(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDeclarativeListReference *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDeclarativeListReference();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::QObject* a0;
        const char* a1;
         ::QDeclarativeEngine* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_engine,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8s|J8", sipType_QObject, &a0, &a1, sipType_QDeclarativeEngine, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDeclarativeListReference(a0,a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QDeclarativeListReference* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeclarativeListReference, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QDeclarativeListReference(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDeclarativeListReference[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QDeclarativeListReference_append, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_append)},
    {SIP_MLNAME_CAST(sipName_at), meth_QDeclarativeListReference_at, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_at)},
    {SIP_MLNAME_CAST(sipName_canAppend), meth_QDeclarativeListReference_canAppend, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_canAppend)},
    {SIP_MLNAME_CAST(sipName_canAt), meth_QDeclarativeListReference_canAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_canAt)},
    {SIP_MLNAME_CAST(sipName_canClear), meth_QDeclarativeListReference_canClear, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_canClear)},
    {SIP_MLNAME_CAST(sipName_canCount), meth_QDeclarativeListReference_canCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_canCount)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QDeclarativeListReference_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_clear)},
    {SIP_MLNAME_CAST(sipName_count), meth_QDeclarativeListReference_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_count)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QDeclarativeListReference_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_isValid)},
    {SIP_MLNAME_CAST(sipName_listElementType), meth_QDeclarativeListReference_listElementType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_listElementType)},
    {SIP_MLNAME_CAST(sipName_object), meth_QDeclarativeListReference_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeListReference_object)}
};

PyDoc_STRVAR(doc_QDeclarativeListReference, "\1QDeclarativeListReference()\n"
    "QDeclarativeListReference(QObject, str, engine: QDeclarativeEngine = None)\n"
    "QDeclarativeListReference(QDeclarativeListReference)");


static pyqt4ClassPluginDef plugin_QDeclarativeListReference = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeListReference = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeListReference,
        {0},
        &plugin_QDeclarativeListReference
    },
    {
        sipNameNr_QDeclarativeListReference,
        {0, 0, 1},
        11, methods_QDeclarativeListReference,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativeListReference,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDeclarativeListReference,
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
    dealloc_QDeclarativeListReference,
    assign_QDeclarativeListReference,
    array_QDeclarativeListReference,
    copy_QDeclarativeListReference,
    release_QDeclarativeListReference,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};