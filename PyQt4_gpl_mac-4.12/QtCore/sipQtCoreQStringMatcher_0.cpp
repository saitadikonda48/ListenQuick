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

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstringmatcher.sip"
#include <qstringmatcher.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringMatcher_0.cpp"

#line 27 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringMatcher_0.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringMatcher_0.cpp"


PyDoc_STRVAR(doc_QStringMatcher_0_setPattern, "setPattern(self, str)");

extern "C" {static PyObject *meth_QStringMatcher_0_setPattern(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_setPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QStringMatcher, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPattern(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_setPattern, doc_QStringMatcher_0_setPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_setCaseSensitivity, "setCaseSensitivity(self, Qt.CaseSensitivity)");

extern "C" {static PyObject *meth_QStringMatcher_0_setCaseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_setCaseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::CaseSensitivity a0;
         ::QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QStringMatcher, &sipCpp, sipType_Qt_CaseSensitivity, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCaseSensitivity(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_setCaseSensitivity, doc_QStringMatcher_0_setCaseSensitivity);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_indexIn, "indexIn(self, str, from_: int = 0) -> int");

extern "C" {static PyObject *meth_QStringMatcher_0_indexIn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_indexIn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        int a1 = 0;
        const  ::QStringMatcher *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_from,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|i", &sipSelf, sipType_QStringMatcher, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indexIn(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_indexIn, doc_QStringMatcher_0_indexIn);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_pattern, "pattern(self) -> str");

extern "C" {static PyObject *meth_QStringMatcher_0_pattern(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_pattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStringMatcher, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->pattern());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_pattern, doc_QStringMatcher_0_pattern);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_caseSensitivity, "caseSensitivity(self) -> Qt.CaseSensitivity");

extern "C" {static PyObject *meth_QStringMatcher_0_caseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_caseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStringMatcher, &sipCpp))
        {
             ::Qt::CaseSensitivity sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->caseSensitivity();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_CaseSensitivity);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_caseSensitivity, doc_QStringMatcher_0_caseSensitivity);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStringMatcher_0(void *, int);}
static void release_QStringMatcher_0(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QStringMatcher *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStringMatcher_0(void *, SIP_SSIZE_T, const void *);}
static void assign_QStringMatcher_0(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QStringMatcher *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QStringMatcher *>(sipSrc);
}


extern "C" {static void *array_QStringMatcher_0(SIP_SSIZE_T);}
static void *array_QStringMatcher_0(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStringMatcher[sipNrElem];
}


extern "C" {static void *copy_QStringMatcher_0(const void *, SIP_SSIZE_T);}
static void *copy_QStringMatcher_0(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStringMatcher(reinterpret_cast<const  ::QStringMatcher *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStringMatcher_0(sipSimpleWrapper *);}
static void dealloc_QStringMatcher_0(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStringMatcher_0(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStringMatcher_0(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStringMatcher_0(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStringMatcher *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStringMatcher();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::Qt::CaseSensitivity a1 = Qt::CaseSensitive;

        static const char *sipKwdList[] = {
            NULL,
            sipName_cs,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_CaseSensitivity, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStringMatcher(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QStringMatcher* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStringMatcher, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStringMatcher(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QStringMatcher_0[] = {
    {SIP_MLNAME_CAST(sipName_caseSensitivity), meth_QStringMatcher_0_caseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_caseSensitivity)},
    {SIP_MLNAME_CAST(sipName_indexIn), (PyCFunction)meth_QStringMatcher_0_indexIn, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QStringMatcher_0_indexIn)},
    {SIP_MLNAME_CAST(sipName_pattern), meth_QStringMatcher_0_pattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_pattern)},
    {SIP_MLNAME_CAST(sipName_setCaseSensitivity), meth_QStringMatcher_0_setCaseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_setCaseSensitivity)},
    {SIP_MLNAME_CAST(sipName_setPattern), meth_QStringMatcher_0_setPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_setPattern)}
};

PyDoc_STRVAR(doc_QStringMatcher_0, "\1QStringMatcher()\n"
    "QStringMatcher(str, cs: Qt.CaseSensitivity = Qt.CaseSensitive)\n"
    "QStringMatcher(QStringMatcher)");


static pyqt4ClassPluginDef plugin_QStringMatcher_0 = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QStringMatcher_0 = {
    {
        0,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStringMatcher,
        {0},
        &plugin_QStringMatcher_0
    },
    {
        sipNameNr_QStringMatcher,
        {0, 0, 1},
        5, methods_QStringMatcher_0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStringMatcher_0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QStringMatcher_0,
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
    dealloc_QStringMatcher_0,
    assign_QStringMatcher_0,
    array_QStringMatcher_0,
    copy_QStringMatcher_0,
    release_QStringMatcher_0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
