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

#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQVector0100QVariant.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQVector0100QVariant.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQVector0100QVariant.cpp"


extern "C" {static void assign_QVector_0100QVariant(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector< ::QVariant> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector< ::QVariant> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QVariant(SIP_SSIZE_T);}
static void *array_QVector_0100QVariant(SIP_SSIZE_T sipNrElem)
{
    return new QVector< ::QVariant>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QVariant(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector< ::QVariant>(reinterpret_cast<const QVector< ::QVariant> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QVariant(void *, int);}
static void release_QVector_0100QVariant(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector< ::QVariant> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector< ::QVariant> **sipCppPtr = reinterpret_cast<QVector< ::QVariant> **>(sipCppPtrV);

#line 59 "sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QVariant, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QVariant> *qv = new QVector<QVariant>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QVariant *t = reinterpret_cast<QVariant *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QVariant, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QVariant, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QVariant, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 113 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQVector0100QVariant.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QVariant(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QVariant(void *sipCppV, PyObject *sipTransferObj)
{
   QVector< ::QVariant> *sipCpp = reinterpret_cast<QVector< ::QVariant> *>(sipCppV);

#line 32 "sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QVariant *t = new QVariant(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QVariant, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 147 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtSql/sipQtSqlQVector0100QVariant.cpp"
}


sipMappedTypeDef sipTypeDef_QtSql_QVector_0100QVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_970,     /* QVector<QVariant> */
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
    assign_QVector_0100QVariant,
    array_QVector_0100QVariant,
    copy_QVector_0100QVariant,
    release_QVector_0100QVariant,
    convertTo_QVector_0100QVariant,
    convertFrom_QVector_0100QVariant
};