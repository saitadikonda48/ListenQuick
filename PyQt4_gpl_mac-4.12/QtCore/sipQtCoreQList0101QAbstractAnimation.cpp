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

#line 115 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQList0101QAbstractAnimation.cpp"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qabstractanimation.sip"
#include <qabstractanimation.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQList0101QAbstractAnimation.cpp"


extern "C" {static void assign_QList_0101QAbstractAnimation(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QAbstractAnimation(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList< ::QAbstractAnimation*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList< ::QAbstractAnimation*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QAbstractAnimation(SIP_SSIZE_T);}
static void *array_QList_0101QAbstractAnimation(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QAbstractAnimation*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QAbstractAnimation(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QAbstractAnimation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QAbstractAnimation*>(reinterpret_cast<const QList< ::QAbstractAnimation*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QAbstractAnimation(void *, int);}
static void release_QList_0101QAbstractAnimation(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList< ::QAbstractAnimation*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QAbstractAnimation(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QAbstractAnimation(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QAbstractAnimation*> **sipCppPtr = reinterpret_cast<QList< ::QAbstractAnimation*> **>(sipCppPtrV);

#line 145 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QAbstractAnimation, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QAbstractAnimation *> *ql = new QList<QAbstractAnimation *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QAbstractAnimation *t = reinterpret_cast<QAbstractAnimation *>(sipConvertToType(itm, sipType_QAbstractAnimation, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 118 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQList0101QAbstractAnimation.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QAbstractAnimation(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QAbstractAnimation(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QAbstractAnimation*> *sipCpp = reinterpret_cast<QList< ::QAbstractAnimation*> *>(sipCppV);

#line 119 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QAbstractAnimation *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QAbstractAnimation to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QAbstractAnimation, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 151 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQList0101QAbstractAnimation.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0101QAbstractAnimation = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2746,     /* QList<QAbstractAnimation*> */
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
    assign_QList_0101QAbstractAnimation,
    array_QList_0101QAbstractAnimation,
    copy_QList_0101QAbstractAnimation,
    release_QList_0101QAbstractAnimation,
    convertTo_QList_0101QAbstractAnimation,
    convertFrom_QList_0101QAbstractAnimation
};
