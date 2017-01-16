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

#include "sipAPIQtDesigner.h"

#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDesigner/customwidget.sip"
#include <customwidget.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp"


extern "C" {static void assign_QList_0101QDesignerCustomWidgetInterface(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QDesignerCustomWidgetInterface(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList< ::QDesignerCustomWidgetInterface*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList< ::QDesignerCustomWidgetInterface*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QDesignerCustomWidgetInterface(SIP_SSIZE_T);}
static void *array_QList_0101QDesignerCustomWidgetInterface(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QDesignerCustomWidgetInterface*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QDesignerCustomWidgetInterface(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QDesignerCustomWidgetInterface(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QDesignerCustomWidgetInterface*>(reinterpret_cast<const QList< ::QDesignerCustomWidgetInterface*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QDesignerCustomWidgetInterface(void *, int);}
static void release_QList_0101QDesignerCustomWidgetInterface(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList< ::QDesignerCustomWidgetInterface*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QDesignerCustomWidgetInterface(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QDesignerCustomWidgetInterface(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QDesignerCustomWidgetInterface*> **sipCppPtr = reinterpret_cast<QList< ::QDesignerCustomWidgetInterface*> **>(sipCppPtrV);

#line 145 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QDesignerCustomWidgetInterface, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QDesignerCustomWidgetInterface *> *ql = new QList<QDesignerCustomWidgetInterface *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QDesignerCustomWidgetInterface *t = reinterpret_cast<QDesignerCustomWidgetInterface *>(sipConvertToType(itm, sipType_QDesignerCustomWidgetInterface, sipTransferObj, 0, 0, sipIsErr));

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
#line 118 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QDesignerCustomWidgetInterface(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QDesignerCustomWidgetInterface(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QDesignerCustomWidgetInterface*> *sipCpp = reinterpret_cast<QList< ::QDesignerCustomWidgetInterface*> *>(sipCppV);

#line 119 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QDesignerCustomWidgetInterface *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QDesignerCustomWidgetInterface to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QDesignerCustomWidgetInterface, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 151 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp"
}


sipMappedTypeDef sipTypeDef_QtDesigner_QList_0101QDesignerCustomWidgetInterface = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_218,     /* QList<QDesignerCustomWidgetInterface*> */
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
    assign_QList_0101QDesignerCustomWidgetInterface,
    array_QList_0101QDesignerCustomWidgetInterface,
    copy_QList_0101QDesignerCustomWidgetInterface,
    release_QList_0101QDesignerCustomWidgetInterface,
    convertTo_QList_0101QDesignerCustomWidgetInterface,
    convertFrom_QList_0101QDesignerCustomWidgetInterface
};
