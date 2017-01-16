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

#line 227 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQRadialGradient.cpp"

#line 110 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQRadialGradient.cpp"
#line 147 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQRadialGradient.cpp"
#line 247 "sip/QtCore/qvector.sip"
#include <qvector.h>
#include <qpair.h>
#line 40 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQRadialGradient.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 43 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQRadialGradient.cpp"


PyDoc_STRVAR(doc_QRadialGradient_center, "center(self) -> QPointF");

extern "C" {static PyObject *meth_QRadialGradient_center(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRadialGradient, &sipCpp))
        {
             ::QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPointF(sipCpp->center());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_center, doc_QRadialGradient_center);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_focalPoint, "focalPoint(self) -> QPointF");

extern "C" {static PyObject *meth_QRadialGradient_focalPoint(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_focalPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRadialGradient, &sipCpp))
        {
             ::QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPointF(sipCpp->focalPoint());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_focalPoint, doc_QRadialGradient_focalPoint);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_radius, "radius(self) -> float");

extern "C" {static PyObject *meth_QRadialGradient_radius(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_radius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRadialGradient, &sipCpp))
        {
             ::qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->radius();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_radius, doc_QRadialGradient_radius);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_setCenter, "setCenter(self, Union[QPointF, QPoint])\n"
    "setCenter(self, float, float)");

extern "C" {static PyObject *meth_QRadialGradient_setCenter(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_setCenter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRadialGradient, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCenter(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QRadialGradient, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCenter(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_setCenter, doc_QRadialGradient_setCenter);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_setFocalPoint, "setFocalPoint(self, Union[QPointF, QPoint])\n"
    "setFocalPoint(self, float, float)");

extern "C" {static PyObject *meth_QRadialGradient_setFocalPoint(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_setFocalPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRadialGradient, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFocalPoint(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QRadialGradient, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFocalPoint(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_setFocalPoint, doc_QRadialGradient_setFocalPoint);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_setRadius, "setRadius(self, float)");

extern "C" {static PyObject *meth_QRadialGradient_setRadius(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_setRadius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QRadialGradient, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRadius(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_setRadius, doc_QRadialGradient_setRadius);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_centerRadius, "centerRadius(self) -> float");

extern "C" {static PyObject *meth_QRadialGradient_centerRadius(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_centerRadius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRadialGradient, &sipCpp))
        {
             ::qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->centerRadius();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_centerRadius, doc_QRadialGradient_centerRadius);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_setCenterRadius, "setCenterRadius(self, float)");

extern "C" {static PyObject *meth_QRadialGradient_setCenterRadius(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_setCenterRadius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QRadialGradient, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCenterRadius(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_setCenterRadius, doc_QRadialGradient_setCenterRadius);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_focalRadius, "focalRadius(self) -> float");

extern "C" {static PyObject *meth_QRadialGradient_focalRadius(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_focalRadius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRadialGradient, &sipCpp))
        {
             ::qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->focalRadius();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_focalRadius, doc_QRadialGradient_focalRadius);

    return NULL;
}


PyDoc_STRVAR(doc_QRadialGradient_setFocalRadius, "setFocalRadius(self, float)");

extern "C" {static PyObject *meth_QRadialGradient_setFocalRadius(PyObject *, PyObject *);}
static PyObject *meth_QRadialGradient_setFocalRadius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::QRadialGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QRadialGradient, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFocalRadius(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRadialGradient, sipName_setFocalRadius, doc_QRadialGradient_setFocalRadius);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QRadialGradient(void *, const sipTypeDef *);}
static void *cast_QRadialGradient(void *sipCppV, const sipTypeDef *targetType)
{
     ::QRadialGradient *sipCpp = reinterpret_cast< ::QRadialGradient *>(sipCppV);

    if (targetType == sipType_QGradient)
        return static_cast< ::QGradient *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRadialGradient(void *, int);}
static void release_QRadialGradient(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QRadialGradient *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QRadialGradient(void *, SIP_SSIZE_T, const void *);}
static void assign_QRadialGradient(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QRadialGradient *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QRadialGradient *>(sipSrc);
}


extern "C" {static void *array_QRadialGradient(SIP_SSIZE_T);}
static void *array_QRadialGradient(SIP_SSIZE_T sipNrElem)
{
    return new  ::QRadialGradient[sipNrElem];
}


extern "C" {static void *copy_QRadialGradient(const void *, SIP_SSIZE_T);}
static void *copy_QRadialGradient(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QRadialGradient(reinterpret_cast<const  ::QRadialGradient *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRadialGradient(sipSimpleWrapper *);}
static void dealloc_QRadialGradient(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRadialGradient(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRadialGradient(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRadialGradient(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRadialGradient *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::qreal a1;
        const  ::QPointF* a2;
        int a2State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1dJ1", sipType_QPointF, &a0, &a0State, &a1, sipType_QPointF, &a2, &a2State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient(*a0,a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);

            return sipCpp;
        }
    }

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::qreal a1;
        const  ::QPointF* a2;
        int a2State = 0;
         ::qreal a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1dJ1d", sipType_QPointF, &a0, &a0State, &a1, sipType_QPointF, &a2, &a2State, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient(*a0,a1,*a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);

            return sipCpp;
        }
    }

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1d", sipType_QPointF, &a0, &a0State, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);

            return sipCpp;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
         ::qreal a4;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ddddd", &a0, &a1, &a2, &a3, &a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient(a0,a1,a2,a3,a4);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
         ::qreal a4;
         ::qreal a5;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dddddd", &a0, &a1, &a2, &a3, &a4, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient(a0,a1,a2,a3,a4,a5);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ddd", &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient(a0,a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QRadialGradient* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRadialGradient, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QRadialGradient(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QRadialGradient[] = {{153, 255, 1}};


static PyMethodDef methods_QRadialGradient[] = {
    {SIP_MLNAME_CAST(sipName_center), meth_QRadialGradient_center, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_center)},
    {SIP_MLNAME_CAST(sipName_centerRadius), meth_QRadialGradient_centerRadius, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_centerRadius)},
    {SIP_MLNAME_CAST(sipName_focalPoint), meth_QRadialGradient_focalPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_focalPoint)},
    {SIP_MLNAME_CAST(sipName_focalRadius), meth_QRadialGradient_focalRadius, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_focalRadius)},
    {SIP_MLNAME_CAST(sipName_radius), meth_QRadialGradient_radius, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_radius)},
    {SIP_MLNAME_CAST(sipName_setCenter), meth_QRadialGradient_setCenter, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_setCenter)},
    {SIP_MLNAME_CAST(sipName_setCenterRadius), meth_QRadialGradient_setCenterRadius, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_setCenterRadius)},
    {SIP_MLNAME_CAST(sipName_setFocalPoint), meth_QRadialGradient_setFocalPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_setFocalPoint)},
    {SIP_MLNAME_CAST(sipName_setFocalRadius), meth_QRadialGradient_setFocalRadius, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_setFocalRadius)},
    {SIP_MLNAME_CAST(sipName_setRadius), meth_QRadialGradient_setRadius, METH_VARARGS, SIP_MLDOC_CAST(doc_QRadialGradient_setRadius)}
};

PyDoc_STRVAR(doc_QRadialGradient, "\1QRadialGradient()\n"
    "QRadialGradient(Union[QPointF, QPoint], float, Union[QPointF, QPoint])\n"
    "QRadialGradient(Union[QPointF, QPoint], float, Union[QPointF, QPoint], float)\n"
    "QRadialGradient(Union[QPointF, QPoint], float)\n"
    "QRadialGradient(float, float, float, float, float)\n"
    "QRadialGradient(float, float, float, float, float, float)\n"
    "QRadialGradient(float, float, float)\n"
    "QRadialGradient(QRadialGradient)");


static pyqt4ClassPluginDef plugin_QRadialGradient = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QRadialGradient = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QRadialGradient,
        {0},
        &plugin_QRadialGradient
    },
    {
        sipNameNr_QRadialGradient,
        {0, 0, 1},
        10, methods_QRadialGradient,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRadialGradient,
    -1,
    -1,
    supers_QRadialGradient,
    0,
    init_type_QRadialGradient,
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
    dealloc_QRadialGradient,
    assign_QRadialGradient,
    array_QRadialGradient,
    copy_QRadialGradient,
    release_QRadialGradient,
    cast_QRadialGradient,
    0,
    0,
    0,
    0,
    0,
    0
};
