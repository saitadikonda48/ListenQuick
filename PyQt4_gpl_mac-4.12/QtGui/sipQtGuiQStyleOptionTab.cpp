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

#line 759 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionTab.cpp"

#line 759 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionTab.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionTab.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qtabbar.sip"
#include <qtabbar.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionTab.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionTab.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQStyleOptionTab.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionTab(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTab(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTab(void *, int);}
static void release_QStyleOptionTab(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QStyleOptionTab *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTab(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTab(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionTab *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QStyleOptionTab *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTab(SIP_SSIZE_T);}
static void *array_QStyleOptionTab(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionTab[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTab(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTab(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionTab(reinterpret_cast<const  ::QStyleOptionTab *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTab(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTab(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionTab(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionTab(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTab(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionTab *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionTab();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionTab* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTab, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QStyleOptionTab(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTab[] = {{500, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTab[] = {
    {sipName_Beginning, static_cast<int>( ::QStyleOptionTab::Beginning), 573},
    {sipName_End, static_cast<int>( ::QStyleOptionTab::End), 573},
    {sipName_LeftCornerWidget, static_cast<int>( ::QStyleOptionTab::LeftCornerWidget), 568},
    {sipName_Middle, static_cast<int>( ::QStyleOptionTab::Middle), 573},
    {sipName_NextIsSelected, static_cast<int>( ::QStyleOptionTab::NextIsSelected), 570},
    {sipName_NoCornerWidgets, static_cast<int>( ::QStyleOptionTab::NoCornerWidgets), 568},
    {sipName_NotAdjacent, static_cast<int>( ::QStyleOptionTab::NotAdjacent), 570},
    {sipName_OnlyOneTab, static_cast<int>( ::QStyleOptionTab::OnlyOneTab), 573},
    {sipName_PreviousIsSelected, static_cast<int>( ::QStyleOptionTab::PreviousIsSelected), 570},
    {sipName_RightCornerWidget, static_cast<int>( ::QStyleOptionTab::RightCornerWidget), 568},
    {sipName_Type, static_cast<int>( ::QStyleOptionTab::Type), 571},
    {sipName_Version, static_cast<int>( ::QStyleOptionTab::Version), 572},
};


extern "C" {static PyObject *varget_QStyleOptionTab_cornerWidgets(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_cornerWidgets(void *sipSelf, PyObject *, PyObject *)
{
     ::QStyleOptionTab::CornerWidgets*sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->cornerWidgets;

    return sipConvertFromType(sipVal, sipType_QStyleOptionTab_CornerWidgets, NULL);
}


extern "C" {static int varset_QStyleOptionTab_cornerWidgets(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_cornerWidgets(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyleOptionTab::CornerWidgets*sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QStyleOptionTab::CornerWidgets *>(sipForceConvertToType(sipPy,sipType_QStyleOptionTab_CornerWidgets,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->cornerWidgets = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionTab_CornerWidgets, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_icon(void *sipSelf, PyObject *, PyObject *)
{
     ::QIcon*sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->icon;

    return sipConvertFromType(sipVal, sipType_QIcon, NULL);
}


extern "C" {static int varset_QStyleOptionTab_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QIcon*sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_position(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_position(void *sipSelf, PyObject *, PyObject *)
{
     ::QStyleOptionTab::TabPosition sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->position;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionTab_TabPosition);
}


extern "C" {static int varset_QStyleOptionTab_position(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_position(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyleOptionTab::TabPosition sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = ( ::QStyleOptionTab::TabPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->position = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_row(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_row(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->row;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTab_row(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_row(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->row = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_selectedPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_selectedPosition(void *sipSelf, PyObject *, PyObject *)
{
     ::QStyleOptionTab::SelectedPosition sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->selectedPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionTab_SelectedPosition);
}


extern "C" {static int varset_QStyleOptionTab_selectedPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_selectedPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyleOptionTab::SelectedPosition sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = ( ::QStyleOptionTab::SelectedPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->selectedPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_shape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_shape(void *sipSelf, PyObject *, PyObject *)
{
     ::QTabBar::Shape sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(sipVal, sipType_QTabBar_Shape);
}


extern "C" {static int varset_QStyleOptionTab_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QTabBar::Shape sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = ( ::QTabBar::Shape)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_text(void *sipSelf, PyObject *, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionTab_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionTab *sipCpp = reinterpret_cast< ::QStyleOptionTab *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionTab[] = {
    {InstanceVariable, sipName_cornerWidgets, (PyMethodDef *)varget_QStyleOptionTab_cornerWidgets, (PyMethodDef *)varset_QStyleOptionTab_cornerWidgets, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionTab_icon, (PyMethodDef *)varset_QStyleOptionTab_icon, NULL, NULL},
    {InstanceVariable, sipName_position, (PyMethodDef *)varget_QStyleOptionTab_position, (PyMethodDef *)varset_QStyleOptionTab_position, NULL, NULL},
    {InstanceVariable, sipName_row, (PyMethodDef *)varget_QStyleOptionTab_row, (PyMethodDef *)varset_QStyleOptionTab_row, NULL, NULL},
    {InstanceVariable, sipName_selectedPosition, (PyMethodDef *)varget_QStyleOptionTab_selectedPosition, (PyMethodDef *)varset_QStyleOptionTab_selectedPosition, NULL, NULL},
    {InstanceVariable, sipName_shape, (PyMethodDef *)varget_QStyleOptionTab_shape, (PyMethodDef *)varset_QStyleOptionTab_shape, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionTab_text, (PyMethodDef *)varset_QStyleOptionTab_text, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionTab, "\1QStyleOptionTab()\n"
    "QStyleOptionTab(QStyleOptionTab)");


static pyqt4ClassPluginDef plugin_QStyleOptionTab = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QStyleOptionTab = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTab,
        {0},
        &plugin_QStyleOptionTab
    },
    {
        sipNameNr_QStyleOptionTab,
        {0, 0, 1},
        0, 0,
        12, enummembers_QStyleOptionTab,
        7, variables_QStyleOptionTab,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTab,
    -1,
    -1,
    supers_QStyleOptionTab,
    0,
    init_type_QStyleOptionTab,
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
    dealloc_QStyleOptionTab,
    assign_QStyleOptionTab,
    array_QStyleOptionTab,
    copy_QStyleOptionTab,
    release_QStyleOptionTab,
    cast_QStyleOptionTab,
    0,
    0,
    0,
    0,
    0,
    0
};
