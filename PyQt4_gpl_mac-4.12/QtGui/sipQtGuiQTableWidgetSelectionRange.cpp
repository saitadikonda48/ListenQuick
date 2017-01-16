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

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qtablewidget.sip"
#include <qtablewidget.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQTableWidgetSelectionRange.cpp"



PyDoc_STRVAR(doc_QTableWidgetSelectionRange_topRow, "topRow(self) -> int");

extern "C" {static PyObject *meth_QTableWidgetSelectionRange_topRow(PyObject *, PyObject *);}
static PyObject *meth_QTableWidgetSelectionRange_topRow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTableWidgetSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTableWidgetSelectionRange, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->topRow();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTableWidgetSelectionRange, sipName_topRow, doc_QTableWidgetSelectionRange_topRow);

    return NULL;
}


PyDoc_STRVAR(doc_QTableWidgetSelectionRange_bottomRow, "bottomRow(self) -> int");

extern "C" {static PyObject *meth_QTableWidgetSelectionRange_bottomRow(PyObject *, PyObject *);}
static PyObject *meth_QTableWidgetSelectionRange_bottomRow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTableWidgetSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTableWidgetSelectionRange, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bottomRow();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTableWidgetSelectionRange, sipName_bottomRow, doc_QTableWidgetSelectionRange_bottomRow);

    return NULL;
}


PyDoc_STRVAR(doc_QTableWidgetSelectionRange_leftColumn, "leftColumn(self) -> int");

extern "C" {static PyObject *meth_QTableWidgetSelectionRange_leftColumn(PyObject *, PyObject *);}
static PyObject *meth_QTableWidgetSelectionRange_leftColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTableWidgetSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTableWidgetSelectionRange, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leftColumn();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTableWidgetSelectionRange, sipName_leftColumn, doc_QTableWidgetSelectionRange_leftColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QTableWidgetSelectionRange_rightColumn, "rightColumn(self) -> int");

extern "C" {static PyObject *meth_QTableWidgetSelectionRange_rightColumn(PyObject *, PyObject *);}
static PyObject *meth_QTableWidgetSelectionRange_rightColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTableWidgetSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTableWidgetSelectionRange, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rightColumn();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTableWidgetSelectionRange, sipName_rightColumn, doc_QTableWidgetSelectionRange_rightColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QTableWidgetSelectionRange_rowCount, "rowCount(self) -> int");

extern "C" {static PyObject *meth_QTableWidgetSelectionRange_rowCount(PyObject *, PyObject *);}
static PyObject *meth_QTableWidgetSelectionRange_rowCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTableWidgetSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTableWidgetSelectionRange, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rowCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTableWidgetSelectionRange, sipName_rowCount, doc_QTableWidgetSelectionRange_rowCount);

    return NULL;
}


PyDoc_STRVAR(doc_QTableWidgetSelectionRange_columnCount, "columnCount(self) -> int");

extern "C" {static PyObject *meth_QTableWidgetSelectionRange_columnCount(PyObject *, PyObject *);}
static PyObject *meth_QTableWidgetSelectionRange_columnCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTableWidgetSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTableWidgetSelectionRange, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->columnCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTableWidgetSelectionRange, sipName_columnCount, doc_QTableWidgetSelectionRange_columnCount);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTableWidgetSelectionRange(void *, int);}
static void release_QTableWidgetSelectionRange(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QTableWidgetSelectionRange *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTableWidgetSelectionRange(void *, SIP_SSIZE_T, const void *);}
static void assign_QTableWidgetSelectionRange(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QTableWidgetSelectionRange *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QTableWidgetSelectionRange *>(sipSrc);
}


extern "C" {static void *array_QTableWidgetSelectionRange(SIP_SSIZE_T);}
static void *array_QTableWidgetSelectionRange(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTableWidgetSelectionRange[sipNrElem];
}


extern "C" {static void *copy_QTableWidgetSelectionRange(const void *, SIP_SSIZE_T);}
static void *copy_QTableWidgetSelectionRange(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTableWidgetSelectionRange(reinterpret_cast<const  ::QTableWidgetSelectionRange *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTableWidgetSelectionRange(sipSimpleWrapper *);}
static void dealloc_QTableWidgetSelectionRange(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTableWidgetSelectionRange(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTableWidgetSelectionRange(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTableWidgetSelectionRange(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTableWidgetSelectionRange *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTableWidgetSelectionRange();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iiii", &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTableWidgetSelectionRange(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QTableWidgetSelectionRange* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTableWidgetSelectionRange, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QTableWidgetSelectionRange(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTableWidgetSelectionRange[] = {
    {SIP_MLNAME_CAST(sipName_bottomRow), meth_QTableWidgetSelectionRange_bottomRow, METH_VARARGS, SIP_MLDOC_CAST(doc_QTableWidgetSelectionRange_bottomRow)},
    {SIP_MLNAME_CAST(sipName_columnCount), meth_QTableWidgetSelectionRange_columnCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTableWidgetSelectionRange_columnCount)},
    {SIP_MLNAME_CAST(sipName_leftColumn), meth_QTableWidgetSelectionRange_leftColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_QTableWidgetSelectionRange_leftColumn)},
    {SIP_MLNAME_CAST(sipName_rightColumn), meth_QTableWidgetSelectionRange_rightColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_QTableWidgetSelectionRange_rightColumn)},
    {SIP_MLNAME_CAST(sipName_rowCount), meth_QTableWidgetSelectionRange_rowCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTableWidgetSelectionRange_rowCount)},
    {SIP_MLNAME_CAST(sipName_topRow), meth_QTableWidgetSelectionRange_topRow, METH_VARARGS, SIP_MLDOC_CAST(doc_QTableWidgetSelectionRange_topRow)}
};

PyDoc_STRVAR(doc_QTableWidgetSelectionRange, "\1QTableWidgetSelectionRange()\n"
    "QTableWidgetSelectionRange(int, int, int, int)\n"
    "QTableWidgetSelectionRange(QTableWidgetSelectionRange)");


static pyqt4ClassPluginDef plugin_QTableWidgetSelectionRange = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTableWidgetSelectionRange = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTableWidgetSelectionRange,
        {0},
        &plugin_QTableWidgetSelectionRange
    },
    {
        sipNameNr_QTableWidgetSelectionRange,
        {0, 0, 1},
        6, methods_QTableWidgetSelectionRange,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTableWidgetSelectionRange,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTableWidgetSelectionRange,
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
    dealloc_QTableWidgetSelectionRange,
    assign_QTableWidgetSelectionRange,
    array_QTableWidgetSelectionRange,
    copy_QTableWidgetSelectionRange,
    release_QTableWidgetSelectionRange,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
