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

#include "sipAPIQtNetwork.h"

#line 83 "sip/QtCore/qpair.sip"
#include <qpair.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"


extern "C" {static void assign_QPair_0100QHostAddress_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QPair_0100QHostAddress_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPair< ::QHostAddress,int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPair< ::QHostAddress,int> *>(sipSrc);
}


extern "C" {static void *array_QPair_0100QHostAddress_1800(SIP_SSIZE_T);}
static void *array_QPair_0100QHostAddress_1800(SIP_SSIZE_T sipNrElem)
{
    return new QPair< ::QHostAddress,int>[sipNrElem];
}


extern "C" {static void *copy_QPair_0100QHostAddress_1800(const void *, SIP_SSIZE_T);}
static void *copy_QPair_0100QHostAddress_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPair< ::QHostAddress,int>(reinterpret_cast<const QPair< ::QHostAddress,int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPair_0100QHostAddress_1800(void *, int);}
static void release_QPair_0100QHostAddress_1800(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QPair< ::QHostAddress,int> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QPair_0100QHostAddress_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPair_0100QHostAddress_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPair< ::QHostAddress,int> **sipCppPtr = reinterpret_cast<QPair< ::QHostAddress,int> **>(sipCppPtrV);

#line 125 "sip/QtCore/qpair.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PyTuple_Size(sipPy) == 2 && sipCanConvertToType(PyTuple_GET_ITEM(sipPy, 0), sipType_QHostAddress, SIP_NOT_NONE));

    QPair<QHostAddress, int> *qp = new QPair<QHostAddress, int>;

    int state;
    QHostAddress *t = reinterpret_cast<QHostAddress *>(sipConvertToType(PyTuple_GET_ITEM(sipPy, 0), sipType_QHostAddress, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

    if (*sipIsErr)
    {
        sipReleaseType(t, sipType_QHostAddress, state);

        delete qp;
        return 0;
    }

    qp->first = *t;
    sipReleaseType(t, sipType_QHostAddress, state);

    qp->second = SIPLong_AsLong(PyTuple_GET_ITEM(sipPy, 1));

    *sipCppPtr = qp;

    return sipGetState(sipTransferObj);
#line 99 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"
}


extern "C" {static PyObject *convertFrom_QPair_0100QHostAddress_1800(void *, PyObject *);}
static PyObject *convertFrom_QPair_0100QHostAddress_1800(void *sipCppV, PyObject *sipTransferObj)
{
   QPair< ::QHostAddress,int> *sipCpp = reinterpret_cast<QPair< ::QHostAddress,int> *>(sipCppV);

#line 87 "sip/QtCore/qpair.sip"
    // Create the tuple.
    PyObject *tup = PyTuple_New(2);

    if (!tup)
        return 0;

    PyObject *obj;

    // Convert the first part.
    QHostAddress *t = new QHostAddress(sipCpp->first);

    obj = sipConvertFromNewType(t, sipType_QHostAddress, sipTransferObj);

    if (!obj)
    {
        delete t;

        Py_DECREF(tup);
        return 0;
    }

    PyTuple_SET_ITEM(tup, 0, obj);

    // Convert the second part.
    obj = SIPLong_FromLong(sipCpp->second);

    if (!obj)
    {
        Py_DECREF(tup);
        return 0;
    }

    PyTuple_SET_ITEM(tup, 1, obj);

    return tup;
#line 144 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QPair_0100QHostAddress_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2903,     /* QPair<QHostAddress,int> */
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
    assign_QPair_0100QHostAddress_1800,
    array_QPair_0100QHostAddress_1800,
    copy_QPair_0100QHostAddress_1800,
    release_QPair_0100QHostAddress_1800,
    convertTo_QPair_0100QHostAddress_1800,
    convertFrom_QPair_0100QHostAddress_1800
};
