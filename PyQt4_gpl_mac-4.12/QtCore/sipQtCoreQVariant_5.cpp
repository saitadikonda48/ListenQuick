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

#line 265 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQVariant_5.cpp"



extern "C" {static void assign_QVariant_5(void *, SIP_SSIZE_T, const void *);}
static void assign_QVariant_5(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QVariant *>(sipSrc);
}


extern "C" {static void *array_QVariant_5(SIP_SSIZE_T);}
static void *array_QVariant_5(SIP_SSIZE_T sipNrElem)
{
    return new  ::QVariant[sipNrElem];
}


extern "C" {static void *copy_QVariant_5(const void *, SIP_SSIZE_T);}
static void *copy_QVariant_5(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QVariant(reinterpret_cast<const  ::QVariant *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVariant_5(void *, int);}
static void release_QVariant_5(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QVariant *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVariant_5(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVariant_5(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QVariant **sipCppPtr = reinterpret_cast< ::QVariant **>(sipCppPtrV);

#line 269 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qvariant.sip"
    if (!sipIsErr)
        // We can always convert to a QVariant.
        return 1;

    // If it is a null QVariant then just return it.
    if (Py_TYPE(sipPy) == sipTypeAsPyTypeObject(sipType_QPyNullVariant))
    {
        *sipCppPtr = reinterpret_cast<QVariant *>(
                sipConvertToType(sipPy, sipType_QPyNullVariant, sipTransferObj,
                        SIP_NO_CONVERTORS, 0, sipIsErr));

        return 0;
    }

    QVariant var = qpycore_PyObject_AsQVariant(sipPy, sipIsErr);

    if (*sipIsErr)
        return 0;

    *sipCppPtr = new QVariant(var);

    return sipGetState(sipTransferObj);
#line 93 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQVariant_5.cpp"
}


extern "C" {static PyObject *convertFrom_QVariant_5(void *, PyObject *);}
static PyObject *convertFrom_QVariant_5(void *sipCppV, PyObject *)
{
    ::QVariant *sipCpp = reinterpret_cast< ::QVariant *>(sipCppV);

#line 294 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qvariant.sip"
    return qpycore_PyObject_FromQVariant(*sipCpp);
#line 104 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQVariant_5.cpp"
}


extern "C" {static PyObject *meth_QVariant_5_nameToType(PyObject *, PyObject *);}
static PyObject *meth_QVariant_5_nameToType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "s", &a0))
        {
             ::QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QVariant::nameToType(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_nameToType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVariant_5_typeToName(PyObject *, PyObject *);}
static PyObject *meth_QVariant_5_typeToName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QVariant::Type a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QVariant_Type, &a0))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QVariant::typeToName(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_typeToName, NULL);

    return NULL;
}


static PyMethodDef methods_QVariant_5[] = {
    {SIP_MLNAME_CAST(sipName_nameToType), meth_QVariant_5_nameToType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_typeToName), meth_QVariant_5_typeToName, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QVariant_5[] = {
    {sipName_BitArray, static_cast<int>( ::QVariant::BitArray), 251},
    {sipName_Bitmap, static_cast<int>( ::QVariant::Bitmap), 251},
    {sipName_Bool, static_cast<int>( ::QVariant::Bool), 251},
    {sipName_Brush, static_cast<int>( ::QVariant::Brush), 251},
    {sipName_ByteArray, static_cast<int>( ::QVariant::ByteArray), 251},
    {sipName_Char, static_cast<int>( ::QVariant::Char), 251},
    {sipName_Color, static_cast<int>( ::QVariant::Color), 251},
    {sipName_Cursor, static_cast<int>( ::QVariant::Cursor), 251},
    {sipName_Date, static_cast<int>( ::QVariant::Date), 251},
    {sipName_DateTime, static_cast<int>( ::QVariant::DateTime), 251},
    {sipName_Double, static_cast<int>( ::QVariant::Double), 251},
    {sipName_EasingCurve, static_cast<int>( ::QVariant::EasingCurve), 251},
    {sipName_Font, static_cast<int>( ::QVariant::Font), 251},
    {sipName_Hash, static_cast<int>( ::QVariant::Hash), 251},
    {sipName_Icon, static_cast<int>( ::QVariant::Icon), 251},
    {sipName_Image, static_cast<int>( ::QVariant::Image), 251},
    {sipName_Int, static_cast<int>( ::QVariant::Int), 251},
    {sipName_Invalid, static_cast<int>( ::QVariant::Invalid), 251},
    {sipName_KeySequence, static_cast<int>( ::QVariant::KeySequence), 251},
    {sipName_Line, static_cast<int>( ::QVariant::Line), 251},
    {sipName_LineF, static_cast<int>( ::QVariant::LineF), 251},
    {sipName_List, static_cast<int>( ::QVariant::List), 251},
    {sipName_Locale, static_cast<int>( ::QVariant::Locale), 251},
    {sipName_LongLong, static_cast<int>( ::QVariant::LongLong), 251},
    {sipName_Map, static_cast<int>( ::QVariant::Map), 251},
    {sipName_Matrix, static_cast<int>( ::QVariant::Matrix), 251},
    {sipName_Matrix4x4, static_cast<int>( ::QVariant::Matrix4x4), 251},
    {sipName_Palette, static_cast<int>( ::QVariant::Palette), 251},
    {sipName_Pen, static_cast<int>( ::QVariant::Pen), 251},
    {sipName_Pixmap, static_cast<int>( ::QVariant::Pixmap), 251},
    {sipName_Point, static_cast<int>( ::QVariant::Point), 251},
    {sipName_PointF, static_cast<int>( ::QVariant::PointF), 251},
    {sipName_Polygon, static_cast<int>( ::QVariant::Polygon), 251},
    {sipName_Quaternion, static_cast<int>( ::QVariant::Quaternion), 251},
    {sipName_Rect, static_cast<int>( ::QVariant::Rect), 251},
    {sipName_RectF, static_cast<int>( ::QVariant::RectF), 251},
    {sipName_RegExp, static_cast<int>( ::QVariant::RegExp), 251},
    {sipName_Region, static_cast<int>( ::QVariant::Region), 251},
    {sipName_Size, static_cast<int>( ::QVariant::Size), 251},
    {sipName_SizeF, static_cast<int>( ::QVariant::SizeF), 251},
    {sipName_SizePolicy, static_cast<int>( ::QVariant::SizePolicy), 251},
    {sipName_String, static_cast<int>( ::QVariant::String), 251},
    {sipName_StringList, static_cast<int>( ::QVariant::StringList), 251},
    {sipName_TextFormat, static_cast<int>( ::QVariant::TextFormat), 251},
    {sipName_TextLength, static_cast<int>( ::QVariant::TextLength), 251},
    {sipName_Time, static_cast<int>( ::QVariant::Time), 251},
    {sipName_Transform, static_cast<int>( ::QVariant::Transform), 251},
    {sipName_UInt, static_cast<int>( ::QVariant::UInt), 251},
    {sipName_ULongLong, static_cast<int>( ::QVariant::ULongLong), 251},
    {sipName_Url, static_cast<int>( ::QVariant::Url), 251},
    {sipName_UserType, static_cast<int>( ::QVariant::UserType), 251},
    {sipName_Vector2D, static_cast<int>( ::QVariant::Vector2D), 251},
    {sipName_Vector3D, static_cast<int>( ::QVariant::Vector3D), 251},
    {sipName_Vector4D, static_cast<int>( ::QVariant::Vector4D), 251},
};


sipMappedTypeDef sipTypeDef_QtCore_QVariant_5 = {
    {
        5,
        0,
        0,
        SIP_TYPE_ALLOW_NONE|SIP_TYPE_MAPPED,
        sipNameNr_QVariant,     /* QVariant */
        {0},
        0
    },
    {
        sipNameNr_QVariant,
        {0, 0, 1},
        2, methods_QVariant_5,
        54, enummembers_QVariant_5,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVariant_5,
    array_QVariant_5,
    copy_QVariant_5,
    release_QVariant_5,
    convertTo_QVariant_5,
    convertFrom_QVariant_5
};
