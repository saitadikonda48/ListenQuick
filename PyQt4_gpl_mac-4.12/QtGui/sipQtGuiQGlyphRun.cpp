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

#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qglyphrun.sip"
#include <qglyphrun.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQGlyphRun.cpp"

#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQGlyphRun.cpp"
#line 110 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQGlyphRun.cpp"
#line 150 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQGlyphRun.cpp"
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qrawfont.sip"
#include <qrawfont.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQGlyphRun.cpp"


PyDoc_STRVAR(doc_QGlyphRun_rawFont, "rawFont(self) -> QRawFont");

extern "C" {static PyObject *meth_QGlyphRun_rawFont(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_rawFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
             ::QRawFont*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QRawFont(sipCpp->rawFont());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRawFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_rawFont, doc_QGlyphRun_rawFont);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setRawFont, "setRawFont(self, QRawFont)");

extern "C" {static PyObject *meth_QGlyphRun_setRawFont(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setRawFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRawFont* a0;
         ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QRawFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRawFont(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setRawFont, doc_QGlyphRun_setRawFont);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_glyphIndexes, "glyphIndexes(self) -> List[int]");

extern "C" {static PyObject *meth_QGlyphRun_glyphIndexes(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_glyphIndexes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
             ::QVector<uint>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVector<uint>(sipCpp->glyphIndexes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_1900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_glyphIndexes, doc_QGlyphRun_glyphIndexes);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setGlyphIndexes, "setGlyphIndexes(self, List[int])");

extern "C" {static PyObject *meth_QGlyphRun_setGlyphIndexes(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setGlyphIndexes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QVector<uint>* a0;
        int a0State = 0;
         ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QVector_1900,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGlyphIndexes(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QVector<uint> *>(a0),sipType_QVector_1900,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setGlyphIndexes, doc_QGlyphRun_setGlyphIndexes);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_positions, "positions(self) -> object");

extern "C" {static PyObject *meth_QGlyphRun_positions(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_positions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            QVector< ::QPointF>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector< ::QPointF>(sipCpp->positions());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_positions, doc_QGlyphRun_positions);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setPositions, "setPositions(self, List[Union[QPointF, QPoint]])");

extern "C" {static PyObject *meth_QGlyphRun_setPositions(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setPositions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector< ::QPointF>* a0;
        int a0State = 0;
         ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QVector_0100QPointF,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPositions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVector< ::QPointF> *>(a0),sipType_QVector_0100QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setPositions, doc_QGlyphRun_setPositions);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_clear, "clear(self)");

extern "C" {static PyObject *meth_QGlyphRun_clear(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_clear, doc_QGlyphRun_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setOverline, "setOverline(self, bool)");

extern "C" {static PyObject *meth_QGlyphRun_setOverline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setOverline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGlyphRun, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOverline(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setOverline, doc_QGlyphRun_setOverline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_overline, "overline(self) -> bool");

extern "C" {static PyObject *meth_QGlyphRun_overline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_overline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->overline();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_overline, doc_QGlyphRun_overline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setUnderline, "setUnderline(self, bool)");

extern "C" {static PyObject *meth_QGlyphRun_setUnderline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setUnderline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGlyphRun, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUnderline(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setUnderline, doc_QGlyphRun_setUnderline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_underline, "underline(self) -> bool");

extern "C" {static PyObject *meth_QGlyphRun_underline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_underline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->underline();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_underline, doc_QGlyphRun_underline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setStrikeOut, "setStrikeOut(self, bool)");

extern "C" {static PyObject *meth_QGlyphRun_setStrikeOut(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setStrikeOut(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGlyphRun, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStrikeOut(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setStrikeOut, doc_QGlyphRun_setStrikeOut);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_strikeOut, "strikeOut(self) -> bool");

extern "C" {static PyObject *meth_QGlyphRun_strikeOut(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_strikeOut(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->strikeOut();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_strikeOut, doc_QGlyphRun_strikeOut);

    return NULL;
}


extern "C" {static PyObject *slot_QGlyphRun___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGlyphRun___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGlyphRun *sipCpp = reinterpret_cast< ::QGlyphRun *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGlyphRun));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGlyphRun, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QGlyphRun::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QGlyphRun, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGlyphRun___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGlyphRun___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGlyphRun *sipCpp = reinterpret_cast< ::QGlyphRun *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGlyphRun));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QGlyphRun* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGlyphRun, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QGlyphRun::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QGlyphRun, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QGlyphRun(void *, int);}
static void release_QGlyphRun(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QGlyphRun *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGlyphRun(void *, SIP_SSIZE_T, const void *);}
static void assign_QGlyphRun(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QGlyphRun *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QGlyphRun *>(sipSrc);
}


extern "C" {static void *array_QGlyphRun(SIP_SSIZE_T);}
static void *array_QGlyphRun(SIP_SSIZE_T sipNrElem)
{
    return new  ::QGlyphRun[sipNrElem];
}


extern "C" {static void *copy_QGlyphRun(const void *, SIP_SSIZE_T);}
static void *copy_QGlyphRun(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QGlyphRun(reinterpret_cast<const  ::QGlyphRun *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGlyphRun(sipSimpleWrapper *);}
static void dealloc_QGlyphRun(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGlyphRun(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QGlyphRun(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGlyphRun(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QGlyphRun *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QGlyphRun();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QGlyphRun* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGlyphRun, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QGlyphRun(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGlyphRun[] = {
    {(void *)slot_QGlyphRun___ne__, ne_slot},
    {(void *)slot_QGlyphRun___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGlyphRun[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QGlyphRun_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_clear)},
    {SIP_MLNAME_CAST(sipName_glyphIndexes), meth_QGlyphRun_glyphIndexes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_glyphIndexes)},
    {SIP_MLNAME_CAST(sipName_overline), meth_QGlyphRun_overline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_overline)},
    {SIP_MLNAME_CAST(sipName_positions), meth_QGlyphRun_positions, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_positions)},
    {SIP_MLNAME_CAST(sipName_rawFont), meth_QGlyphRun_rawFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_rawFont)},
    {SIP_MLNAME_CAST(sipName_setGlyphIndexes), meth_QGlyphRun_setGlyphIndexes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setGlyphIndexes)},
    {SIP_MLNAME_CAST(sipName_setOverline), meth_QGlyphRun_setOverline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setOverline)},
    {SIP_MLNAME_CAST(sipName_setPositions), meth_QGlyphRun_setPositions, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setPositions)},
    {SIP_MLNAME_CAST(sipName_setRawFont), meth_QGlyphRun_setRawFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setRawFont)},
    {SIP_MLNAME_CAST(sipName_setStrikeOut), meth_QGlyphRun_setStrikeOut, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setStrikeOut)},
    {SIP_MLNAME_CAST(sipName_setUnderline), meth_QGlyphRun_setUnderline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setUnderline)},
    {SIP_MLNAME_CAST(sipName_strikeOut), meth_QGlyphRun_strikeOut, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_strikeOut)},
    {SIP_MLNAME_CAST(sipName_underline), meth_QGlyphRun_underline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_underline)}
};

PyDoc_STRVAR(doc_QGlyphRun, "\1QGlyphRun()\n"
    "QGlyphRun(QGlyphRun)");


static pyqt4ClassPluginDef plugin_QGlyphRun = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QGlyphRun = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGlyphRun,
        {0},
        &plugin_QGlyphRun
    },
    {
        sipNameNr_QGlyphRun,
        {0, 0, 1},
        13, methods_QGlyphRun,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGlyphRun,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGlyphRun,
    init_type_QGlyphRun,
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
    dealloc_QGlyphRun,
    assign_QGlyphRun,
    array_QGlyphRun,
    copy_QGlyphRun,
    release_QGlyphRun,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
