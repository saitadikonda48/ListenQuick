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

#include "sipAPIQtSql.h"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtSql/qsqlindex.sip"
#include <qsqlindex.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQSqlIndex.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQSqlIndex.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtSql/qsqlfield.sip"
#include <qsqlfield.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQSqlIndex.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQSqlIndex.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtSql/qsqlrecord.sip"
#include <qsqlrecord.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQSqlIndex.cpp"


PyDoc_STRVAR(doc_QSqlIndex_setCursorName, "setCursorName(self, str)");

extern "C" {static PyObject *meth_QSqlIndex_setCursorName(PyObject *, PyObject *);}
static PyObject *meth_QSqlIndex_setCursorName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlIndex, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCursorName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlIndex, sipName_setCursorName, doc_QSqlIndex_setCursorName);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlIndex_cursorName, "cursorName(self) -> str");

extern "C" {static PyObject *meth_QSqlIndex_cursorName(PyObject *, PyObject *);}
static PyObject *meth_QSqlIndex_cursorName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlIndex, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->cursorName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlIndex, sipName_cursorName, doc_QSqlIndex_cursorName);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlIndex_setName, "setName(self, str)");

extern "C" {static PyObject *meth_QSqlIndex_setName(PyObject *, PyObject *);}
static PyObject *meth_QSqlIndex_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlIndex, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlIndex, sipName_setName, doc_QSqlIndex_setName);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlIndex_name, "name(self) -> str");

extern "C" {static PyObject *meth_QSqlIndex_name(PyObject *, PyObject *);}
static PyObject *meth_QSqlIndex_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlIndex, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlIndex, sipName_name, doc_QSqlIndex_name);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlIndex_append, "append(self, QSqlField)\n"
    "append(self, QSqlField, bool)");

extern "C" {static PyObject *meth_QSqlIndex_append(PyObject *, PyObject *);}
static PyObject *meth_QSqlIndex_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlField* a0;
         ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSqlIndex, &sipCpp, sipType_QSqlField, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->append(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QSqlField* a0;
        bool a1;
         ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9b", &sipSelf, sipType_QSqlIndex, &sipCpp, sipType_QSqlField, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->append(*a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlIndex, sipName_append, doc_QSqlIndex_append);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlIndex_isDescending, "isDescending(self, int) -> bool");

extern "C" {static PyObject *meth_QSqlIndex_isDescending(PyObject *, PyObject *);}
static PyObject *meth_QSqlIndex_isDescending(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlIndex, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDescending(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlIndex, sipName_isDescending, doc_QSqlIndex_isDescending);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlIndex_setDescending, "setDescending(self, int, bool)");

extern "C" {static PyObject *meth_QSqlIndex_setDescending(PyObject *, PyObject *);}
static PyObject *meth_QSqlIndex_setDescending(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        bool a1;
         ::QSqlIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QSqlIndex, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDescending(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlIndex, sipName_setDescending, doc_QSqlIndex_setDescending);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QSqlIndex(void *, const sipTypeDef *);}
static void *cast_QSqlIndex(void *sipCppV, const sipTypeDef *targetType)
{
     ::QSqlIndex *sipCpp = reinterpret_cast< ::QSqlIndex *>(sipCppV);

    if (targetType == sipType_QSqlRecord)
        return static_cast< ::QSqlRecord *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlIndex(void *, int);}
static void release_QSqlIndex(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QSqlIndex *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSqlIndex(void *, SIP_SSIZE_T, const void *);}
static void assign_QSqlIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QSqlIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QSqlIndex *>(sipSrc);
}


extern "C" {static void *array_QSqlIndex(SIP_SSIZE_T);}
static void *array_QSqlIndex(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSqlIndex[sipNrElem];
}


extern "C" {static void *copy_QSqlIndex(const void *, SIP_SSIZE_T);}
static void *copy_QSqlIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSqlIndex(reinterpret_cast<const  ::QSqlIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSqlIndex(sipSimpleWrapper *);}
static void dealloc_QSqlIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSqlIndex(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSqlIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSqlIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSqlIndex *sipCpp = 0;

    {
        const  ::QString& a0def = QString();
        const  ::QString* a0 = &a0def;
        int a0State = 0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            sipName_cursorName,
            sipName_name,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSqlIndex(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const  ::QSqlIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSqlIndex, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSqlIndex(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSqlIndex[] = {{20, 255, 1}};


static PyMethodDef methods_QSqlIndex[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QSqlIndex_append, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlIndex_append)},
    {SIP_MLNAME_CAST(sipName_cursorName), meth_QSqlIndex_cursorName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlIndex_cursorName)},
    {SIP_MLNAME_CAST(sipName_isDescending), meth_QSqlIndex_isDescending, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlIndex_isDescending)},
    {SIP_MLNAME_CAST(sipName_name), meth_QSqlIndex_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlIndex_name)},
    {SIP_MLNAME_CAST(sipName_setCursorName), meth_QSqlIndex_setCursorName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlIndex_setCursorName)},
    {SIP_MLNAME_CAST(sipName_setDescending), meth_QSqlIndex_setDescending, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlIndex_setDescending)},
    {SIP_MLNAME_CAST(sipName_setName), meth_QSqlIndex_setName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlIndex_setName)}
};

PyDoc_STRVAR(doc_QSqlIndex, "\1QSqlIndex(cursorName: str = '', name: str = '')\n"
    "QSqlIndex(QSqlIndex)");


static pyqt4ClassPluginDef plugin_QSqlIndex = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSql_QSqlIndex = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSqlIndex,
        {0},
        &plugin_QSqlIndex
    },
    {
        sipNameNr_QSqlIndex,
        {0, 0, 1},
        7, methods_QSqlIndex,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSqlIndex,
    -1,
    -1,
    supers_QSqlIndex,
    0,
    init_type_QSqlIndex,
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
    dealloc_QSqlIndex,
    assign_QSqlIndex,
    array_QSqlIndex,
    copy_QSqlIndex,
    release_QSqlIndex,
    cast_QSqlIndex,
    0,
    0,
    0,
    0,
    0,
    0
};
