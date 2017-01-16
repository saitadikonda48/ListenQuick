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

#include "sipAPIQtXmlPatterns.h"

#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"


extern "C" {static void assign_QVector_0100QXmlName(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QXmlName(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector< ::QXmlName> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector< ::QXmlName> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QXmlName(SIP_SSIZE_T);}
static void *array_QVector_0100QXmlName(SIP_SSIZE_T sipNrElem)
{
    return new QVector< ::QXmlName>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QXmlName(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QXmlName(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector< ::QXmlName>(reinterpret_cast<const QVector< ::QXmlName> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QXmlName(void *, int);}
static void release_QVector_0100QXmlName(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector< ::QXmlName> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QXmlName(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QXmlName(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector< ::QXmlName> **sipCppPtr = reinterpret_cast<QVector< ::QXmlName> **>(sipCppPtrV);

#line 59 "sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlName, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QXmlName> *qv = new QVector<QXmlName>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QXmlName *t = reinterpret_cast<QXmlName *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlName, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QXmlName, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QXmlName, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 110 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QXmlName(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QXmlName(void *sipCppV, PyObject *sipTransferObj)
{
   QVector< ::QXmlName> *sipCpp = reinterpret_cast<QVector< ::QXmlName> *>(sipCppV);

#line 32 "sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QXmlName *t = new QXmlName(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QXmlName, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 144 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"
}


sipMappedTypeDef sipTypeDef_QtXmlPatterns_QVector_0100QXmlName = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_538,     /* QVector<QXmlName> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVector_0100QXmlName,
    array_QVector_0100QXmlName,
    copy_QVector_0100QXmlName,
    release_QVector_0100QXmlName,
    convertTo_QVector_0100QXmlName,
    convertFrom_QVector_0100QXmlName
};