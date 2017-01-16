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

#include "sipAPIQtGui.h"

#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qprinterinfo.sip"
#include <qprinterinfo.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQPrinterInfo.cpp"

#line 210 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qprinter.sip"
#include <qprinter.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQPrinterInfo.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQPrinterInfo.cpp"
#line 128 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qprinterinfo.sip"
#include <qlist.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQPrinterInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQPrinterInfo.cpp"


PyDoc_STRVAR(doc_QPrinterInfo_printerName, "printerName(self) -> str");

extern "C" {static PyObject *meth_QPrinterInfo_printerName(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_printerName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->printerName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_printerName, doc_QPrinterInfo_printerName);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isNull, doc_QPrinterInfo_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_isDefault, "isDefault(self) -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isDefault(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isDefault(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDefault();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isDefault, doc_QPrinterInfo_isDefault);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedPaperSizes, "supportedPaperSizes(self) -> List[QPrinter.PageSize]");

extern "C" {static PyObject *meth_QPrinterInfo_supportedPaperSizes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedPaperSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QList< ::QPrinter::PageSize>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QList< ::QPrinter::PageSize>(sipCpp->supportedPaperSizes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPrinter_PageSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedPaperSizes, doc_QPrinterInfo_supportedPaperSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_availablePrinters, "availablePrinters() -> object");

extern "C" {static PyObject *meth_QPrinterInfo_availablePrinters(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_availablePrinters(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList< ::QPrinterInfo>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList< ::QPrinterInfo>( ::QPrinterInfo::availablePrinters());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPrinterInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_availablePrinters, doc_QPrinterInfo_availablePrinters);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultPrinter, "defaultPrinter() -> QPrinterInfo");

extern "C" {static PyObject *meth_QPrinterInfo_defaultPrinter(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultPrinter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QPrinterInfo*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPrinterInfo( ::QPrinterInfo::defaultPrinter());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPrinterInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultPrinter, doc_QPrinterInfo_defaultPrinter);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPrinterInfo(void *, int);}
static void release_QPrinterInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QPrinterInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPrinterInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QPrinterInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QPrinterInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QPrinterInfo *>(sipSrc);
}


extern "C" {static void *array_QPrinterInfo(SIP_SSIZE_T);}
static void *array_QPrinterInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPrinterInfo[sipNrElem];
}


extern "C" {static void *copy_QPrinterInfo(const void *, SIP_SSIZE_T);}
static void *copy_QPrinterInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPrinterInfo(reinterpret_cast<const  ::QPrinterInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPrinterInfo(sipSimpleWrapper *);}
static void dealloc_QPrinterInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPrinterInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPrinterInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPrinterInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPrinterInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPrinterInfo();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QPrinterInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPrinterInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPrinterInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QPrinter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPrinter, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPrinterInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPrinterInfo[] = {
    {SIP_MLNAME_CAST(sipName_availablePrinters), meth_QPrinterInfo_availablePrinters, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_availablePrinters)},
    {SIP_MLNAME_CAST(sipName_defaultPrinter), meth_QPrinterInfo_defaultPrinter, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_defaultPrinter)},
    {SIP_MLNAME_CAST(sipName_isDefault), meth_QPrinterInfo_isDefault, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_isDefault)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPrinterInfo_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_isNull)},
    {SIP_MLNAME_CAST(sipName_printerName), meth_QPrinterInfo_printerName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_printerName)},
    {SIP_MLNAME_CAST(sipName_supportedPaperSizes), meth_QPrinterInfo_supportedPaperSizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_supportedPaperSizes)}
};

PyDoc_STRVAR(doc_QPrinterInfo, "\1QPrinterInfo()\n"
    "QPrinterInfo(QPrinterInfo)\n"
    "QPrinterInfo(QPrinter)");


static pyqt4ClassPluginDef plugin_QPrinterInfo = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPrinterInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPrinterInfo,
        {0},
        &plugin_QPrinterInfo
    },
    {
        sipNameNr_QPrinterInfo,
        {0, 0, 1},
        6, methods_QPrinterInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPrinterInfo,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPrinterInfo,
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
    dealloc_QPrinterInfo,
    assign_QPrinterInfo,
    array_QPrinterInfo,
    copy_QPrinterInfo,
    release_QPrinterInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
