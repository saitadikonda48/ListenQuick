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

#line 100 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qset.sip"
#include <qset.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSet1800.cpp"



extern "C" {static void assign_QSet_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QSet_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QSet<int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QSet<int> *>(sipSrc);
}


extern "C" {static void *array_QSet_1800(SIP_SSIZE_T);}
static void *array_QSet_1800(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSet<int>[sipNrElem];
}


extern "C" {static void *copy_QSet_1800(const void *, SIP_SSIZE_T);}
static void *copy_QSet_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSet<int>(reinterpret_cast<const  ::QSet<int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_1800(void *, int);}
static void release_QSet_1800(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QSet<int> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QSet_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QSet<int> **sipCppPtr = reinterpret_cast< ::QSet<int> **>(sipCppPtrV);

#line 132 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qset.sip"
    PyObject *it = PyObject_GetIter(sipPy), *itm;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (it == NULL)
            return 0;

        Py_DECREF(it);
        return 1;
    }

    if (it == NULL)
    {
        *sipIsErr = 1;
        return 0;
    }

    QSet<int> *qs = new QSet<int>;

    while ((itm = PyIter_Next(it)) != NULL)
    {
        qs->insert(SIPLong_AsLong(itm));
        Py_DECREF(itm);
    }

    Py_DECREF(it);

    *sipCppPtr = qs;

    return sipGetState(sipTransferObj);
#line 102 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSet1800.cpp"
}


extern "C" {static PyObject *convertFrom_QSet_1800(void *, PyObject *);}
static PyObject *convertFrom_QSet_1800(void *sipCppV, PyObject *)
{
    ::QSet<int> *sipCpp = reinterpret_cast< ::QSet<int> *>(sipCppV);

#line 104 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qset.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    QSet<int>::const_iterator it = sipCpp->constBegin();

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *el_obj;

        if ((el_obj = SIPLong_FromLong(*it)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, el_obj);

        ++it;
    }

    return l;
#line 137 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSet1800.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QSet_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_39208,     /* QSet<int> */
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
    assign_QSet_1800,
    array_QSet_1800,
    copy_QSet_1800,
    release_QSet_1800,
    convertTo_QSet_1800,
    convertFrom_QSet_1800
};
