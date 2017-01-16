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

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qfontinfo.sip"
#include <qfontinfo.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQFontInfo.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQFontInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQFontInfo.cpp"


PyDoc_STRVAR(doc_QFontInfo_family, "family(self) -> str");

extern "C" {static PyObject *meth_QFontInfo_family(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_family(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->family());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_family, doc_QFontInfo_family);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_pixelSize, "pixelSize(self) -> int");

extern "C" {static PyObject *meth_QFontInfo_pixelSize(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_pixelSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pixelSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_pixelSize, doc_QFontInfo_pixelSize);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_pointSize, "pointSize(self) -> int");

extern "C" {static PyObject *meth_QFontInfo_pointSize(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_pointSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pointSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_pointSize, doc_QFontInfo_pointSize);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_pointSizeF, "pointSizeF(self) -> float");

extern "C" {static PyObject *meth_QFontInfo_pointSizeF(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_pointSizeF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
             ::qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pointSizeF();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_pointSizeF, doc_QFontInfo_pointSizeF);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_italic, "italic(self) -> bool");

extern "C" {static PyObject *meth_QFontInfo_italic(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_italic(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->italic();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_italic, doc_QFontInfo_italic);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_style, "style(self) -> QFont.Style");

extern "C" {static PyObject *meth_QFontInfo_style(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
             ::QFont::Style sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->style();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QFont_Style);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_style, doc_QFontInfo_style);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_weight, "weight(self) -> int");

extern "C" {static PyObject *meth_QFontInfo_weight(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->weight();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_weight, doc_QFontInfo_weight);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_bold, "bold(self) -> bool");

extern "C" {static PyObject *meth_QFontInfo_bold(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_bold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bold();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_bold, doc_QFontInfo_bold);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_fixedPitch, "fixedPitch(self) -> bool");

extern "C" {static PyObject *meth_QFontInfo_fixedPitch(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_fixedPitch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->fixedPitch();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_fixedPitch, doc_QFontInfo_fixedPitch);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_styleHint, "styleHint(self) -> QFont.StyleHint");

extern "C" {static PyObject *meth_QFontInfo_styleHint(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_styleHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
             ::QFont::StyleHint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->styleHint();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QFont_StyleHint);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_styleHint, doc_QFontInfo_styleHint);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_rawMode, "rawMode(self) -> bool");

extern "C" {static PyObject *meth_QFontInfo_rawMode(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_rawMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rawMode();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_rawMode, doc_QFontInfo_rawMode);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_exactMatch, "exactMatch(self) -> bool");

extern "C" {static PyObject *meth_QFontInfo_exactMatch(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_exactMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exactMatch();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_exactMatch, doc_QFontInfo_exactMatch);

    return NULL;
}


PyDoc_STRVAR(doc_QFontInfo_styleName, "styleName(self) -> str");

extern "C" {static PyObject *meth_QFontInfo_styleName(PyObject *, PyObject *);}
static PyObject *meth_QFontInfo_styleName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFontInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontInfo, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->styleName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontInfo, sipName_styleName, doc_QFontInfo_styleName);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontInfo(void *, int);}
static void release_QFontInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QFontInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFontInfo(sipSimpleWrapper *);}
static void dealloc_QFontInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFontInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QFontInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFontInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QFontInfo *sipCpp = 0;

    {
        const  ::QFont* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFontInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QFontInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QFontInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QFontInfo[] = {
    {SIP_MLNAME_CAST(sipName_bold), meth_QFontInfo_bold, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_bold)},
    {SIP_MLNAME_CAST(sipName_exactMatch), meth_QFontInfo_exactMatch, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_exactMatch)},
    {SIP_MLNAME_CAST(sipName_family), meth_QFontInfo_family, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_family)},
    {SIP_MLNAME_CAST(sipName_fixedPitch), meth_QFontInfo_fixedPitch, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_fixedPitch)},
    {SIP_MLNAME_CAST(sipName_italic), meth_QFontInfo_italic, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_italic)},
    {SIP_MLNAME_CAST(sipName_pixelSize), meth_QFontInfo_pixelSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_pixelSize)},
    {SIP_MLNAME_CAST(sipName_pointSize), meth_QFontInfo_pointSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_pointSize)},
    {SIP_MLNAME_CAST(sipName_pointSizeF), meth_QFontInfo_pointSizeF, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_pointSizeF)},
    {SIP_MLNAME_CAST(sipName_rawMode), meth_QFontInfo_rawMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_rawMode)},
    {SIP_MLNAME_CAST(sipName_style), meth_QFontInfo_style, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_style)},
    {SIP_MLNAME_CAST(sipName_styleHint), meth_QFontInfo_styleHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_styleHint)},
    {SIP_MLNAME_CAST(sipName_styleName), meth_QFontInfo_styleName, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_styleName)},
    {SIP_MLNAME_CAST(sipName_weight), meth_QFontInfo_weight, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontInfo_weight)}
};

PyDoc_STRVAR(doc_QFontInfo, "\1QFontInfo(QFont)\n"
    "QFontInfo(QFontInfo)");


static pyqt4ClassPluginDef plugin_QFontInfo = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QFontInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFontInfo,
        {0},
        &plugin_QFontInfo
    },
    {
        sipNameNr_QFontInfo,
        {0, 0, 1},
        13, methods_QFontInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFontInfo,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QFontInfo,
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
    dealloc_QFontInfo,
    0,
    0,
    0,
    release_QFontInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
