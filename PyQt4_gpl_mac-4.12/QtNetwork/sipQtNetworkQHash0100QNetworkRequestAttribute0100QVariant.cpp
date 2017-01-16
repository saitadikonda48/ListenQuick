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

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qabstractnetworkcache.sip"
#include <qhash.h>
#include <qnetworkrequest.h>
#include <qvariant.h>
#line 31 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 35 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"


extern "C" {static void assign_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *, SIP_SSIZE_T, const void *);}
static void assign_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipSrc);
}


extern "C" {static void *array_QHash_0100QNetworkRequest_Attribute_0100QVariant(SIP_SSIZE_T);}
static void *array_QHash_0100QNetworkRequest_Attribute_0100QVariant(SIP_SSIZE_T sipNrElem)
{
    return new  ::QHash< ::QNetworkRequest::Attribute, ::QVariant>[sipNrElem];
}


extern "C" {static void *copy_QHash_0100QNetworkRequest_Attribute_0100QVariant(const void *, SIP_SSIZE_T);}
static void *copy_QHash_0100QNetworkRequest_Attribute_0100QVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QHash< ::QNetworkRequest::Attribute, ::QVariant>(reinterpret_cast<const  ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *, int);}
static void release_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QHash_0100QNetworkRequest_Attribute_0100QVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHash_0100QNetworkRequest_Attribute_0100QVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QHash< ::QNetworkRequest::Attribute, ::QVariant> **sipCppPtr = reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> **>(sipCppPtrV);

#line 79 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qabstractnetworkcache.sip"
    PyObject *t1obj, *t2obj;
    SIP_SSIZE_T i = 0;

    // Check the type if that is all that is required.
    if (!sipIsErr)
    {
        if (!PyDict_Check(sipPy))
            return 0;

        while (PyDict_Next(sipPy, &i, &t1obj, &t2obj))
        {
            if (!sipCanConvertToEnum(t1obj, sipType_QNetworkRequest_Attribute))
                return 0;

            if (!sipCanConvertToType(t2obj, sipType_QVariant, SIP_NOT_NONE))
                return 0;
        } 

        return 1;
    }

    QHash<QNetworkRequest::Attribute, QVariant> *qm = new QHash<QNetworkRequest::Attribute, QVariant>;
 
    while (PyDict_Next(sipPy, &i, &t1obj, &t2obj))
    {
        PyErr_Clear();
        QNetworkRequest::Attribute t1 = (QNetworkRequest::Attribute)SIPLong_AsLong(t1obj);

        if (PyErr_Occurred())
            *sipIsErr = 1;

        int state2;
        QVariant *t2 = reinterpret_cast<QVariant *>(sipConvertToType(t2obj,
                sipType_QVariant, sipTransferObj, SIP_NOT_NONE, &state2,
                sipIsErr));

        if (*sipIsErr)
        {
            delete qm;
            return 0;
        }

        qm->insert(t1, *t2);
 
        sipReleaseType(t2, sipType_QVariant, state2);
    }
 
    *sipCppPtr = qm;
 
    return sipGetState(sipTransferObj);
#line 129 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"
}


extern "C" {static PyObject *convertFrom_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *, PyObject *);}
static PyObject *convertFrom_QHash_0100QNetworkRequest_Attribute_0100QVariant(void *sipCppV, PyObject *sipTransferObj)
{
    ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *sipCpp = reinterpret_cast< ::QHash< ::QNetworkRequest::Attribute, ::QVariant> *>(sipCppV);

#line 34 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtNetwork/qabstractnetworkcache.sip"
    // Create the dictionary.
    PyObject *d = PyDict_New();

    if (!d)
        return NULL;

    // Set the dictionary elements.
    QHash<QNetworkRequest::Attribute, QVariant>::const_iterator i = sipCpp->constBegin();

    while (i != sipCpp->constEnd())
    {
        PyObject *t1obj = sipConvertFromEnum((int)i.key(),
                sipType_QNetworkRequest_Attribute);

        QVariant *t2 = new QVariant(i.value());
        PyObject *t2obj = sipConvertFromNewType(t2, sipType_QVariant,
                sipTransferObj);

        if (!t1obj || !t2obj || PyDict_SetItem(d, t1obj, t2obj) < 0)
        {
            Py_DECREF(d);
            Py_XDECREF(t1obj);

            if (t2obj)
            {
                Py_DECREF(t2obj);
            }
            else
            {
                delete t2;
            }

            return 0;
        }

        Py_DECREF(t1obj);
        Py_DECREF(t2obj);

        ++i;
    }

    return d;
#line 181 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtNetwork/sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QHash_0100QNetworkRequest_Attribute_0100QVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_135,     /* QHash<QNetworkRequest::Attribute,QVariant> */
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
    assign_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    array_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    copy_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    release_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    convertTo_QHash_0100QNetworkRequest_Attribute_0100QVariant,
    convertFrom_QHash_0100QNetworkRequest_Attribute_0100QVariant
};
