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

#line 474 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"

#line 474 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"
#line 405 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionFrameV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFrameV2(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionFrameV2 *sipCpp = reinterpret_cast< ::QStyleOptionFrameV2 *>(sipCppV);

    if (targetType == sipType_QStyleOptionFrame)
        return static_cast< ::QStyleOptionFrame *>(sipCpp);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrameV2(void *, int);}
static void release_QStyleOptionFrameV2(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QStyleOptionFrameV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionFrameV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFrameV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionFrameV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QStyleOptionFrameV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrameV2(SIP_SSIZE_T);}
static void *array_QStyleOptionFrameV2(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionFrameV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrameV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrameV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionFrameV2(reinterpret_cast<const  ::QStyleOptionFrameV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrameV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrameV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionFrameV2(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionFrameV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFrameV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionFrameV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionFrameV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionFrameV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrameV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrame, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFrameV2[] = {{523, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFrameV2[] = {
    {sipName_Flat, static_cast<int>( ::QStyleOptionFrameV2::Flat), 527},
    {sipName_None_, static_cast<int>( ::QStyleOptionFrameV2::None), 527},
    {sipName_Version, static_cast<int>( ::QStyleOptionFrameV2::Version), 529},
};


extern "C" {static PyObject *varget_QStyleOptionFrameV2_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrameV2_features(void *sipSelf, PyObject *, PyObject *)
{
     ::QStyleOptionFrameV2::FrameFeatures*sipVal;
     ::QStyleOptionFrameV2 *sipCpp = reinterpret_cast< ::QStyleOptionFrameV2 *>(sipSelf);

    sipVal = &sipCpp->features;

    return sipConvertFromType(sipVal, sipType_QStyleOptionFrameV2_FrameFeatures, NULL);
}


extern "C" {static int varset_QStyleOptionFrameV2_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrameV2_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyleOptionFrameV2::FrameFeatures*sipVal;
     ::QStyleOptionFrameV2 *sipCpp = reinterpret_cast< ::QStyleOptionFrameV2 *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QStyleOptionFrameV2::FrameFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionFrameV2_FrameFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionFrameV2_FrameFeatures, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionFrameV2[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionFrameV2_features, (PyMethodDef *)varset_QStyleOptionFrameV2_features, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionFrameV2, "\1QStyleOptionFrameV2()\n"
    "QStyleOptionFrameV2(QStyleOptionFrameV2)\n"
    "QStyleOptionFrameV2(QStyleOptionFrame)");


static pyqt4ClassPluginDef plugin_QStyleOptionFrameV2 = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QStyleOptionFrameV2 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrameV2,
        {0},
        &plugin_QStyleOptionFrameV2
    },
    {
        sipNameNr_QStyleOptionFrameV2,
        {0, 0, 1},
        0, 0,
        3, enummembers_QStyleOptionFrameV2,
        1, variables_QStyleOptionFrameV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFrameV2,
    -1,
    -1,
    supers_QStyleOptionFrameV2,
    0,
    init_type_QStyleOptionFrameV2,
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
    dealloc_QStyleOptionFrameV2,
    assign_QStyleOptionFrameV2,
    array_QStyleOptionFrameV2,
    copy_QStyleOptionFrameV2,
    release_QStyleOptionFrameV2,
    cast_QStyleOptionFrameV2,
    0,
    0,
    0,
    0,
    0,
    0
};
