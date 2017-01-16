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

#line 125 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQTextEncoder.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQTextEncoder.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQTextEncoder.cpp"
#line 32 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQTextEncoder.cpp"
#line 27 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQTextEncoder.cpp"


PyDoc_STRVAR(doc_QTextEncoder_fromUnicode, "fromUnicode(self, str) -> QByteArray");

extern "C" {static PyObject *meth_QTextEncoder_fromUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextEncoder_fromUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QTextEncoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextEncoder, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QByteArray(sipCpp->fromUnicode(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextEncoder, sipName_fromUnicode, doc_QTextEncoder_fromUnicode);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextEncoder(void *, int);}
static void release_QTextEncoder(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QTextEncoder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextEncoder(sipSimpleWrapper *);}
static void dealloc_QTextEncoder(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextEncoder(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextEncoder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextEncoder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextEncoder *sipCpp = 0;

    {
        const  ::QTextCodec* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextEncoder(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QTextCodec* a0;
         ::QTextCodec::ConversionFlags* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J1", sipType_QTextCodec, &a0, sipType_QTextCodec_ConversionFlags, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTextEncoder(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QTextCodec_ConversionFlags,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextEncoder[] = {
    {SIP_MLNAME_CAST(sipName_fromUnicode), meth_QTextEncoder_fromUnicode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextEncoder_fromUnicode)}
};

PyDoc_STRVAR(doc_QTextEncoder, "\1QTextEncoder(QTextCodec)\n"
    "QTextEncoder(QTextCodec, QTextCodec.ConversionFlags)");


static pyqt4ClassPluginDef plugin_QTextEncoder = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QTextEncoder = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextEncoder,
        {0},
        &plugin_QTextEncoder
    },
    {
        sipNameNr_QTextEncoder,
        {0, 0, 1},
        1, methods_QTextEncoder,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextEncoder,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QTextEncoder,
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
    dealloc_QTextEncoder,
    0,
    0,
    0,
    release_QTextEncoder,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};