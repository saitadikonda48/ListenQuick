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

#include "sipAPIQtScript.h"

#line 306 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtScript/qscriptengine.sip"
#include <qscriptengine.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtScript/sipQtScriptQScriptSyntaxCheckResult.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtScript/sipQtScriptQScriptSyntaxCheckResult.cpp"


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_state, "state(self) -> QScriptSyntaxCheckResult.State");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_state(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
             ::QScriptSyntaxCheckResult::State sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->state();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QScriptSyntaxCheckResult_State);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_state, doc_QScriptSyntaxCheckResult_state);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_errorLineNumber, "errorLineNumber(self) -> int");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_errorLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_errorLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->errorLineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_errorLineNumber, doc_QScriptSyntaxCheckResult_errorLineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_errorColumnNumber, "errorColumnNumber(self) -> int");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_errorColumnNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_errorColumnNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->errorColumnNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_errorColumnNumber, doc_QScriptSyntaxCheckResult_errorColumnNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_errorMessage, "errorMessage(self) -> str");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_errorMessage(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_errorMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->errorMessage());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_errorMessage, doc_QScriptSyntaxCheckResult_errorMessage);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptSyntaxCheckResult(void *, int);}
static void release_QScriptSyntaxCheckResult(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QScriptSyntaxCheckResult *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QScriptSyntaxCheckResult(sipSimpleWrapper *);}
static void dealloc_QScriptSyntaxCheckResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QScriptSyntaxCheckResult(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QScriptSyntaxCheckResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptSyntaxCheckResult(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QScriptSyntaxCheckResult *sipCpp = 0;

    {
        const  ::QScriptSyntaxCheckResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QScriptSyntaxCheckResult, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QScriptSyntaxCheckResult(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QScriptSyntaxCheckResult[] = {
    {SIP_MLNAME_CAST(sipName_errorColumnNumber), meth_QScriptSyntaxCheckResult_errorColumnNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_errorColumnNumber)},
    {SIP_MLNAME_CAST(sipName_errorLineNumber), meth_QScriptSyntaxCheckResult_errorLineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_errorLineNumber)},
    {SIP_MLNAME_CAST(sipName_errorMessage), meth_QScriptSyntaxCheckResult_errorMessage, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_errorMessage)},
    {SIP_MLNAME_CAST(sipName_state), meth_QScriptSyntaxCheckResult_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_state)}
};

static sipEnumMemberDef enummembers_QScriptSyntaxCheckResult[] = {
    {sipName_Error, static_cast<int>( ::QScriptSyntaxCheckResult::Error), 20},
    {sipName_Intermediate, static_cast<int>( ::QScriptSyntaxCheckResult::Intermediate), 20},
    {sipName_Valid, static_cast<int>( ::QScriptSyntaxCheckResult::Valid), 20},
};

PyDoc_STRVAR(doc_QScriptSyntaxCheckResult, "\1QScriptSyntaxCheckResult(QScriptSyntaxCheckResult)");


static pyqt4ClassPluginDef plugin_QScriptSyntaxCheckResult = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtScript_QScriptSyntaxCheckResult = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptSyntaxCheckResult,
        {0},
        &plugin_QScriptSyntaxCheckResult
    },
    {
        sipNameNr_QScriptSyntaxCheckResult,
        {0, 0, 1},
        4, methods_QScriptSyntaxCheckResult,
        3, enummembers_QScriptSyntaxCheckResult,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptSyntaxCheckResult,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QScriptSyntaxCheckResult,
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
    dealloc_QScriptSyntaxCheckResult,
    0,
    0,
    0,
    release_QScriptSyntaxCheckResult,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
