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

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"


extern "C" {static int slot_Qt_MatchFlags___bool__(PyObject *);}
static int slot_Qt_MatchFlags___bool__(PyObject *sipSelf)
{
     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::MatchFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MatchFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::MatchFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MatchFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::MatchFlags::Int() != a0->operator Qt::MatchFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"
            sipReleaseType(const_cast< ::Qt::MatchFlags *>(a0),sipType_Qt_MatchFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_MatchFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_MatchFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::MatchFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MatchFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::MatchFlags::Int() == a0->operator Qt::MatchFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"
            sipReleaseType(const_cast< ::Qt::MatchFlags *>(a0),sipType_Qt_MatchFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_MatchFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_MatchFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MatchFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::MatchFlags(*sipCpp ^ a0);
#line 168 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_MatchFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::MatchFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MatchFlags, &a0, &a0State, &a1))
        {
             ::Qt::MatchFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::MatchFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_MatchFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MatchFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MatchFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MatchFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::MatchFlags(*sipCpp | a0);
#line 242 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_MatchFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::MatchFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MatchFlags, &a0, &a0State, &a1))
        {
             ::Qt::MatchFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::MatchFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_MatchFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MatchFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MatchFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MatchFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::Qt::MatchFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_MatchFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MatchFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::MatchFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MatchFlags, &a0, &a0State, &a1))
        {
             ::Qt::MatchFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::MatchFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_MatchFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MatchFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MatchFlags___invert__(PyObject *);}
static PyObject *slot_Qt_MatchFlags___invert__(PyObject *sipSelf)
{
     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::MatchFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::Qt::MatchFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MatchFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MatchFlags___int__(PyObject *);}
static PyObject *slot_Qt_MatchFlags___int__(PyObject *sipSelf)
{
     ::Qt::MatchFlags *sipCpp = reinterpret_cast< ::Qt::MatchFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MatchFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_MatchFlags(void *, int);}
static void release_Qt_MatchFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::Qt::MatchFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_MatchFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_MatchFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::Qt::MatchFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::Qt::MatchFlags *>(sipSrc);
}


extern "C" {static void *array_Qt_MatchFlags(SIP_SSIZE_T);}
static void *array_Qt_MatchFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::MatchFlags[sipNrElem];
}


extern "C" {static void *copy_Qt_MatchFlags(const void *, SIP_SSIZE_T);}
static void *copy_Qt_MatchFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::MatchFlags(reinterpret_cast<const  ::Qt::MatchFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_MatchFlags(sipSimpleWrapper *);}
static void dealloc_Qt_MatchFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_MatchFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_MatchFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_MatchFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::MatchFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::MatchFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::MatchFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::Qt::MatchFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_MatchFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::Qt::MatchFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::Qt::MatchFlags *>(a0),sipType_Qt_MatchFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_MatchFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_MatchFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::MatchFlags **sipCppPtr = reinterpret_cast< ::Qt::MatchFlags **>(sipCppPtrV);

#line 390 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::MatchFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MatchFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_MatchFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MatchFlag)))
{
    *sipCppPtr = new Qt::MatchFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::MatchFlags *>(sipConvertToType(sipPy, sipType_Qt_MatchFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQtMatchFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_MatchFlags[] = {
    {(void *)slot_Qt_MatchFlags___bool__, bool_slot},
    {(void *)slot_Qt_MatchFlags___ne__, ne_slot},
    {(void *)slot_Qt_MatchFlags___eq__, eq_slot},
    {(void *)slot_Qt_MatchFlags___ixor__, ixor_slot},
    {(void *)slot_Qt_MatchFlags___xor__, xor_slot},
    {(void *)slot_Qt_MatchFlags___ior__, ior_slot},
    {(void *)slot_Qt_MatchFlags___or__, or_slot},
    {(void *)slot_Qt_MatchFlags___iand__, iand_slot},
    {(void *)slot_Qt_MatchFlags___and__, and_slot},
    {(void *)slot_Qt_MatchFlags___invert__, invert_slot},
    {(void *)slot_Qt_MatchFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_MatchFlags, "\1Qt.MatchFlags()\n"
    "Qt.MatchFlags(Union[Qt.MatchFlags, Qt.MatchFlag])\n"
    "Qt.MatchFlags(Qt.MatchFlags)");


static pyqt4ClassPluginDef plugin_Qt_MatchFlags = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_MatchFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__MatchFlags,
        {0},
        &plugin_Qt_MatchFlags
    },
    {
        sipNameNr_MatchFlags,
        {274, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_MatchFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_MatchFlags,
    init_type_Qt_MatchFlags,
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
    dealloc_Qt_MatchFlags,
    assign_Qt_MatchFlags,
    array_Qt_MatchFlags,
    copy_Qt_MatchFlags,
    release_Qt_MatchFlags,
    0,
    convertTo_Qt_MatchFlags,
    0,
    0,
    0,
    0,
    0
};
