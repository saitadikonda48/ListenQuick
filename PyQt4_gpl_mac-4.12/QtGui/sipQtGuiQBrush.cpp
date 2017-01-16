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

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
#line 147 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
#line 34 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
#line 30 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qmatrix.sip"
#include <qmatrix.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"


PyDoc_STRVAR(doc_QBrush_setStyle, "setStyle(self, Qt.BrushStyle)");

extern "C" {static PyObject *meth_QBrush_setStyle(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::BrushStyle a0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QBrush, &sipCpp, sipType_Qt_BrushStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setStyle, doc_QBrush_setStyle);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_texture, "texture(self) -> QPixmap");

extern "C" {static PyObject *meth_QBrush_texture(PyObject *, PyObject *);}
static PyObject *meth_QBrush_texture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
             ::QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPixmap(sipCpp->texture());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_texture, doc_QBrush_texture);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_setTexture, "setTexture(self, QPixmap)");

extern "C" {static PyObject *meth_QBrush_setTexture(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPixmap* a0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QPixmap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTexture(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setTexture, doc_QBrush_setTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_setColor, "setColor(self, Union[QColor, Qt.GlobalColor, QGradient])\n"
    "setColor(self, Qt.GlobalColor)");

extern "C" {static PyObject *meth_QBrush_setColor(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QBrush, &sipCpp, sipType_QColor, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setColor(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::Qt::GlobalColor a0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QBrush, &sipCpp, sipType_Qt_GlobalColor, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setColor(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setColor, doc_QBrush_setColor);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_gradient, "gradient(self) -> QGradient");

extern "C" {static PyObject *meth_QBrush_gradient(PyObject *, PyObject *);}
static PyObject *meth_QBrush_gradient(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            const  ::QGradient*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->gradient();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast< ::QGradient *>(sipRes),sipType_QGradient,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_gradient, doc_QBrush_gradient);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_isOpaque, "isOpaque(self) -> bool");

extern "C" {static PyObject *meth_QBrush_isOpaque(PyObject *, PyObject *);}
static PyObject *meth_QBrush_isOpaque(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isOpaque();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_isOpaque, doc_QBrush_isOpaque);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_style, "style(self) -> Qt.BrushStyle");

extern "C" {static PyObject *meth_QBrush_style(PyObject *, PyObject *);}
static PyObject *meth_QBrush_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
             ::Qt::BrushStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->style();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_BrushStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_style, doc_QBrush_style);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_color, "color(self) -> QColor");

extern "C" {static PyObject *meth_QBrush_color(PyObject *, PyObject *);}
static PyObject *meth_QBrush_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
             ::QColor*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QColor(sipCpp->color());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_color, doc_QBrush_color);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_setMatrix, "setMatrix(self, QMatrix)");

extern "C" {static PyObject *meth_QBrush_setMatrix(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMatrix* a0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QMatrix, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMatrix(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setMatrix, doc_QBrush_setMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_matrix, "matrix(self) -> QMatrix");

extern "C" {static PyObject *meth_QBrush_matrix(PyObject *, PyObject *);}
static PyObject *meth_QBrush_matrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
             ::QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QMatrix(sipCpp->matrix());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_matrix, doc_QBrush_matrix);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_setTextureImage, "setTextureImage(self, QImage)");

extern "C" {static PyObject *meth_QBrush_setTextureImage(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setTextureImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QImage* a0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QImage, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTextureImage(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setTextureImage, doc_QBrush_setTextureImage);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_textureImage, "textureImage(self) -> QImage");

extern "C" {static PyObject *meth_QBrush_textureImage(PyObject *, PyObject *);}
static PyObject *meth_QBrush_textureImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
             ::QImage*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QImage(sipCpp->textureImage());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_textureImage, doc_QBrush_textureImage);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_setTransform, "setTransform(self, QTransform)");

extern "C" {static PyObject *meth_QBrush_setTransform(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTransform* a0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QTransform, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTransform(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setTransform, doc_QBrush_setTransform);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_transform, "transform(self) -> QTransform");

extern "C" {static PyObject *meth_QBrush_transform(PyObject *, PyObject *);}
static PyObject *meth_QBrush_transform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
             ::QTransform*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QTransform(sipCpp->transform());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTransform,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_transform, doc_QBrush_transform);

    return NULL;
}


PyDoc_STRVAR(doc_QBrush_swap, "swap(self, Union[QBrush, QColor, Qt.GlobalColor, QGradient])");

extern "C" {static PyObject *meth_QBrush_swap(PyObject *, PyObject *);}
static PyObject *meth_QBrush_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QBrush* a0;
        int a0State = 0;
         ::QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QBrush, &sipCpp, sipType_QBrush, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QBrush,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_swap, doc_QBrush_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QBrush___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBrush___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QBrush *sipCpp = reinterpret_cast< ::QBrush *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBrush));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBrush, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QBrush::operator!=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QBrush *>(a0),sipType_QBrush,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QBrush, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QBrush___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBrush___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QBrush *sipCpp = reinterpret_cast< ::QBrush *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBrush));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QBrush* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBrush, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QBrush::operator==(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QBrush *>(a0),sipType_QBrush,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QBrush, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QBrush(void *, int);}
static void release_QBrush(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QBrush *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QBrush(void *, SIP_SSIZE_T, const void *);}
static void assign_QBrush(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QBrush *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QBrush *>(sipSrc);
}


extern "C" {static void *array_QBrush(SIP_SSIZE_T);}
static void *array_QBrush(SIP_SSIZE_T sipNrElem)
{
    return new  ::QBrush[sipNrElem];
}


extern "C" {static void *copy_QBrush(const void *, SIP_SSIZE_T);}
static void *copy_QBrush(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QBrush(reinterpret_cast<const  ::QBrush *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBrush(sipSimpleWrapper *);}
static void dealloc_QBrush(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QBrush(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QBrush(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBrush(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QBrush *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::Qt::BrushStyle a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_Qt_BrushStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::Qt::BrushStyle a1 = Qt::SolidPattern;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|E", sipType_QColor, &a0, &a0State, sipType_Qt_BrushStyle, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QColor* a0;
        int a0State = 0;
        const  ::QPixmap* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J9", sipType_QColor, &a0, &a0State, sipType_QPixmap, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QPixmap* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixmap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QImage* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QImage, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QGradient* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGradient, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QBrush* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QBrush, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QBrush(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QBrush *>(a0),sipType_QBrush,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QVariant* a0;
        PyObject *a0Wrapper;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "@J1", &a0Wrapper, sipType_QVariant,&a0, &a0State))
        {
            sipErrorState sipError = sipErrorNone;

#line 94 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qbrush.sip"
        #if QT_VERSION >= 0x050000
        if (a0->canConvert<QBrush>())
            sipCpp = new QBrush(a0->value<QBrush>());
        #else
        if (qVariantCanConvert<QBrush>(*a0))
            sipCpp = new QBrush(qVariantValue<QBrush>(*a0));
        #endif
        else
            sipError = sipBadCallableArg(0, a0Wrapper);
#line 782 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QBrush(PyObject *, void **, int *, PyObject *);}
static int convertTo_QBrush(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QBrush **sipCppPtr = reinterpret_cast< ::QBrush **>(sipCppPtrV);

#line 30 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qbrush.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// QColor or a QGradient to be used whenever a QBrush is expected.  Note that
// SIP must process QColor before QBrush so that the former's QVariant cast
// operator is applied before the latter's.

if (sipIsErr == NULL)
    return (sipCanConvertToType(sipPy, sipType_QBrush, SIP_NO_CONVERTORS) ||
            sipCanConvertToType(sipPy, sipType_QColor, 0) ||
            sipCanConvertToType(sipPy, sipType_QGradient, 0));

if (sipCanConvertToType(sipPy, sipType_QBrush, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QBrush *>(sipConvertToType(sipPy, sipType_QBrush, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

int state;

if (sipCanConvertToType(sipPy, sipType_QColor, 0))
{
    QColor *c = reinterpret_cast<QColor *>(sipConvertToType(sipPy, sipType_QColor, 0, 0, &state, sipIsErr));

    if (*sipIsErr)
    {
        sipReleaseType(c, sipType_QColor, state);
        return 0;
    }

    *sipCppPtr = new QBrush(*c);

    sipReleaseType(c, sipType_QColor, state);

    return sipGetState(sipTransferObj);
}

QGradient *g = reinterpret_cast<QGradient *>(sipConvertToType(sipPy, sipType_QGradient, 0, 0, &state, sipIsErr));

if (*sipIsErr)
{
    sipReleaseType(g, sipType_QGradient, state);
    return 0;
}

*sipCppPtr = new QBrush(*g);

sipReleaseType(g, sipType_QGradient, state);

return sipGetState(sipTransferObj);
#line 859 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQBrush.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBrush[] = {
    {(void *)slot_QBrush___ne__, ne_slot},
    {(void *)slot_QBrush___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QBrush[] = {
    {SIP_MLNAME_CAST(sipName_color), meth_QBrush_color, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_color)},
    {SIP_MLNAME_CAST(sipName_gradient), meth_QBrush_gradient, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_gradient)},
    {SIP_MLNAME_CAST(sipName_isOpaque), meth_QBrush_isOpaque, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_isOpaque)},
    {SIP_MLNAME_CAST(sipName_matrix), meth_QBrush_matrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_matrix)},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QBrush_setColor, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_setColor)},
    {SIP_MLNAME_CAST(sipName_setMatrix), meth_QBrush_setMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_setMatrix)},
    {SIP_MLNAME_CAST(sipName_setStyle), meth_QBrush_setStyle, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_setStyle)},
    {SIP_MLNAME_CAST(sipName_setTexture), meth_QBrush_setTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_setTexture)},
    {SIP_MLNAME_CAST(sipName_setTextureImage), meth_QBrush_setTextureImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_setTextureImage)},
    {SIP_MLNAME_CAST(sipName_setTransform), meth_QBrush_setTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_setTransform)},
    {SIP_MLNAME_CAST(sipName_style), meth_QBrush_style, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_style)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QBrush_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_swap)},
    {SIP_MLNAME_CAST(sipName_texture), meth_QBrush_texture, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_texture)},
    {SIP_MLNAME_CAST(sipName_textureImage), meth_QBrush_textureImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_textureImage)},
    {SIP_MLNAME_CAST(sipName_transform), meth_QBrush_transform, METH_VARARGS, SIP_MLDOC_CAST(doc_QBrush_transform)}
};

PyDoc_STRVAR(doc_QBrush, "\1QBrush()\n"
    "QBrush(Qt.BrushStyle)\n"
    "QBrush(Union[QColor, Qt.GlobalColor, QGradient], style: Qt.BrushStyle = Qt.SolidPattern)\n"
    "QBrush(Union[QColor, Qt.GlobalColor, QGradient], QPixmap)\n"
    "QBrush(QPixmap)\n"
    "QBrush(QImage)\n"
    "QBrush(QGradient)\n"
    "QBrush(Union[QBrush, QColor, Qt.GlobalColor, QGradient])\n"
    "QBrush(Any)");


static pyqt4ClassPluginDef plugin_QBrush = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QBrush = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QBrush,
        {0},
        &plugin_QBrush
    },
    {
        sipNameNr_QBrush,
        {0, 0, 1},
        15, methods_QBrush,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBrush,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QBrush,
    init_type_QBrush,
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
    dealloc_QBrush,
    assign_QBrush,
    array_QBrush,
    copy_QBrush,
    release_QBrush,
    0,
    convertTo_QBrush,
    0,
    0,
    0,
    0,
    0
};
