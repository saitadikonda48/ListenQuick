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

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qabstractfileengine.sip"
#include <qabstractfileengine.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qabstractfileengine.sip"
#include <qabstractfileengine.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"


extern "C" {static int slot_QAbstractFileEngine_FileFlags___bool__(PyObject *);}
static int slot_QAbstractFileEngine_FileFlags___bool__(PyObject *sipSelf)
{
     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractFileEngine::FileFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractFileEngine::FileFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractFileEngine_FileFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractFileEngine::FileFlags::Int() != a0->operator QAbstractFileEngine::FileFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"
            sipReleaseType(const_cast< ::QAbstractFileEngine::FileFlags *>(a0),sipType_QAbstractFileEngine_FileFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QAbstractFileEngine_FileFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractFileEngine::FileFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractFileEngine_FileFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractFileEngine::FileFlags::Int() == a0->operator QAbstractFileEngine::FileFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"
            sipReleaseType(const_cast< ::QAbstractFileEngine::FileFlags *>(a0),sipType_QAbstractFileEngine_FileFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QAbstractFileEngine_FileFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractFileEngine_FileFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractFileEngine::FileFlags(*sipCpp ^ a0);
#line 168 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"

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


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractFileEngine::FileFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractFileEngine_FileFlags, &a0, &a0State, &a1))
        {
             ::QAbstractFileEngine::FileFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractFileEngine::FileFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractFileEngine_FileFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractFileEngine_FileFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractFileEngine_FileFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractFileEngine::FileFlags(*sipCpp | a0);
#line 242 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"

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


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractFileEngine::FileFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractFileEngine_FileFlags, &a0, &a0State, &a1))
        {
             ::QAbstractFileEngine::FileFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractFileEngine::FileFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractFileEngine_FileFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractFileEngine_FileFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractFileEngine_FileFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QAbstractFileEngine::FileFlags::operator&=(a0);
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


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAbstractFileEngine::FileFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractFileEngine_FileFlags, &a0, &a0State, &a1))
        {
             ::QAbstractFileEngine::FileFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractFileEngine::FileFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractFileEngine_FileFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractFileEngine_FileFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___invert__(PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___invert__(PyObject *sipSelf)
{
     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QAbstractFileEngine::FileFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAbstractFileEngine::FileFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QAbstractFileEngine_FileFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractFileEngine_FileFlags___int__(PyObject *);}
static PyObject *slot_QAbstractFileEngine_FileFlags___int__(PyObject *sipSelf)
{
     ::QAbstractFileEngine::FileFlags *sipCpp = reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractFileEngine_FileFlags));

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
extern "C" {static void release_QAbstractFileEngine_FileFlags(void *, int);}
static void release_QAbstractFileEngine_FileFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAbstractFileEngine_FileFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractFileEngine_FileFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QAbstractFileEngine::FileFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QAbstractFileEngine::FileFlags *>(sipSrc);
}


extern "C" {static void *array_QAbstractFileEngine_FileFlags(SIP_SSIZE_T);}
static void *array_QAbstractFileEngine_FileFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QAbstractFileEngine::FileFlags[sipNrElem];
}


extern "C" {static void *copy_QAbstractFileEngine_FileFlags(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractFileEngine_FileFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QAbstractFileEngine::FileFlags(reinterpret_cast<const  ::QAbstractFileEngine::FileFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractFileEngine_FileFlags(sipSimpleWrapper *);}
static void dealloc_QAbstractFileEngine_FileFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractFileEngine_FileFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QAbstractFileEngine_FileFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractFileEngine_FileFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QAbstractFileEngine::FileFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractFileEngine::FileFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractFileEngine::FileFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QAbstractFileEngine::FileFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QAbstractFileEngine_FileFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QAbstractFileEngine::FileFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QAbstractFileEngine::FileFlags *>(a0),sipType_QAbstractFileEngine_FileFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QAbstractFileEngine_FileFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractFileEngine_FileFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QAbstractFileEngine::FileFlags **sipCppPtr = reinterpret_cast< ::QAbstractFileEngine::FileFlags **>(sipCppPtrV);

#line 390 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractFileEngine::FileFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractFileEngine_FileFlag)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractFileEngine_FileFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractFileEngine_FileFlag)))
{
    *sipCppPtr = new QAbstractFileEngine::FileFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractFileEngine::FileFlags *>(sipConvertToType(sipPy, sipType_QAbstractFileEngine_FileFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineFileFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractFileEngine_FileFlags[] = {
    {(void *)slot_QAbstractFileEngine_FileFlags___bool__, bool_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___ne__, ne_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___eq__, eq_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___ixor__, ixor_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___xor__, xor_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___ior__, ior_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___or__, or_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___iand__, iand_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___and__, and_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___invert__, invert_slot},
    {(void *)slot_QAbstractFileEngine_FileFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractFileEngine_FileFlags, "\1QAbstractFileEngine.FileFlags()\n"
    "QAbstractFileEngine.FileFlags(Union[QAbstractFileEngine.FileFlags, QAbstractFileEngine.FileFlag])\n"
    "QAbstractFileEngine.FileFlags(QAbstractFileEngine.FileFlags)");


static pyqt4ClassPluginDef plugin_QAbstractFileEngine_FileFlags = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QAbstractFileEngine_FileFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractFileEngine__FileFlags,
        {0},
        &plugin_QAbstractFileEngine_FileFlags
    },
    {
        sipNameNr_FileFlags,
        {5, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractFileEngine_FileFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAbstractFileEngine_FileFlags,
    init_type_QAbstractFileEngine_FileFlags,
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
    dealloc_QAbstractFileEngine_FileFlags,
    assign_QAbstractFileEngine_FileFlags,
    array_QAbstractFileEngine_FileFlags,
    copy_QAbstractFileEngine_FileFlags,
    release_QAbstractFileEngine_FileFlags,
    0,
    convertTo_QAbstractFileEngine_FileFlags,
    0,
    0,
    0,
    0,
    0
};
