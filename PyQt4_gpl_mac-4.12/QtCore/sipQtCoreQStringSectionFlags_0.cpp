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

#line 68 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"

#line 68 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"


extern "C" {static int slot_QString_SectionFlags_0___bool__(PyObject *);}
static int slot_QString_SectionFlags_0___bool__(PyObject *sipSelf)
{
     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QString::SectionFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QString_SectionFlags_0___ne__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QString::SectionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString_SectionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QString::SectionFlags::Int() != a0->operator QString::SectionFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"
            sipReleaseType(const_cast< ::QString::SectionFlags *>(a0),sipType_QString_SectionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QString_SectionFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QString_SectionFlags_0___eq__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QString::SectionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString_SectionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QString::SectionFlags::Int() == a0->operator QString::SectionFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"
            sipReleaseType(const_cast< ::QString::SectionFlags *>(a0),sipType_QString_SectionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QString_SectionFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QString_SectionFlags_0___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QString_SectionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = QString::SectionFlags(*sipCpp ^ a0);
#line 168 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"

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


extern "C" {static PyObject *slot_QString_SectionFlags_0___xor__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QString::SectionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QString_SectionFlags, &a0, &a0State, &a1))
        {
             ::QString::SectionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString::SectionFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QString_SectionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString_SectionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QString_SectionFlags_0___ior__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QString_SectionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = QString::SectionFlags(*sipCpp | a0);
#line 242 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"

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


extern "C" {static PyObject *slot_QString_SectionFlags_0___or__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QString::SectionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QString_SectionFlags, &a0, &a0State, &a1))
        {
             ::QString::SectionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString::SectionFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QString_SectionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString_SectionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QString_SectionFlags_0___iand__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QString_SectionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QString::SectionFlags::operator&=(a0);
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


extern "C" {static PyObject *slot_QString_SectionFlags_0___and__(PyObject *,PyObject *);}
static PyObject *slot_QString_SectionFlags_0___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QString::SectionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QString_SectionFlags, &a0, &a0State, &a1))
        {
             ::QString::SectionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString::SectionFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QString_SectionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString_SectionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QString_SectionFlags_0___invert__(PyObject *);}
static PyObject *slot_QString_SectionFlags_0___invert__(PyObject *sipSelf)
{
     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QString::SectionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString::SectionFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString_SectionFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QString_SectionFlags_0___int__(PyObject *);}
static PyObject *slot_QString_SectionFlags_0___int__(PyObject *sipSelf)
{
     ::QString::SectionFlags *sipCpp = reinterpret_cast< ::QString::SectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QString_SectionFlags));

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
extern "C" {static void release_QString_SectionFlags_0(void *, int);}
static void release_QString_SectionFlags_0(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QString::SectionFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QString_SectionFlags_0(void *, SIP_SSIZE_T, const void *);}
static void assign_QString_SectionFlags_0(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QString::SectionFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QString::SectionFlags *>(sipSrc);
}


extern "C" {static void *array_QString_SectionFlags_0(SIP_SSIZE_T);}
static void *array_QString_SectionFlags_0(SIP_SSIZE_T sipNrElem)
{
    return new  ::QString::SectionFlags[sipNrElem];
}


extern "C" {static void *copy_QString_SectionFlags_0(const void *, SIP_SSIZE_T);}
static void *copy_QString_SectionFlags_0(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QString::SectionFlags(reinterpret_cast<const  ::QString::SectionFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QString_SectionFlags_0(sipSimpleWrapper *);}
static void dealloc_QString_SectionFlags_0(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QString_SectionFlags_0(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QString_SectionFlags_0(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QString_SectionFlags_0(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QString::SectionFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QString::SectionFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QString::SectionFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QString::SectionFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString_SectionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QString::SectionFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString::SectionFlags *>(a0),sipType_QString_SectionFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QString_SectionFlags_0(PyObject *, void **, int *, PyObject *);}
static int convertTo_QString_SectionFlags_0(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QString::SectionFlags **sipCppPtr = reinterpret_cast< ::QString::SectionFlags **>(sipCppPtrV);

#line 390 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QString::SectionFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QString_SectionFlag)) ||
            sipCanConvertToType(sipPy, sipType_QString_SectionFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QString_SectionFlag)))
{
    *sipCppPtr = new QString::SectionFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QString::SectionFlags *>(sipConvertToType(sipPy, sipType_QString_SectionFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQStringSectionFlags_0.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QString_SectionFlags_0[] = {
    {(void *)slot_QString_SectionFlags_0___bool__, bool_slot},
    {(void *)slot_QString_SectionFlags_0___ne__, ne_slot},
    {(void *)slot_QString_SectionFlags_0___eq__, eq_slot},
    {(void *)slot_QString_SectionFlags_0___ixor__, ixor_slot},
    {(void *)slot_QString_SectionFlags_0___xor__, xor_slot},
    {(void *)slot_QString_SectionFlags_0___ior__, ior_slot},
    {(void *)slot_QString_SectionFlags_0___or__, or_slot},
    {(void *)slot_QString_SectionFlags_0___iand__, iand_slot},
    {(void *)slot_QString_SectionFlags_0___and__, and_slot},
    {(void *)slot_QString_SectionFlags_0___invert__, invert_slot},
    {(void *)slot_QString_SectionFlags_0___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QString_SectionFlags_0, "\1QString.SectionFlags()\n"
    "QString.SectionFlags(Union[QString.SectionFlags, QString.SectionFlag])\n"
    "QString.SectionFlags(QString.SectionFlags)");


static pyqt4ClassPluginDef plugin_QString_SectionFlags_0 = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QString_SectionFlags_0 = {
    {
        0,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QString__SectionFlags,
        {0},
        &plugin_QString_SectionFlags_0
    },
    {
        sipNameNr_SectionFlags,
        {197, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QString_SectionFlags_0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QString_SectionFlags_0,
    init_type_QString_SectionFlags_0,
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
    dealloc_QString_SectionFlags_0,
    assign_QString_SectionFlags_0,
    array_QString_SectionFlags_0,
    copy_QString_SectionFlags_0,
    release_QString_SectionFlags_0,
    0,
    convertTo_QString_SectionFlags_0,
    0,
    0,
    0,
    0,
    0
};
