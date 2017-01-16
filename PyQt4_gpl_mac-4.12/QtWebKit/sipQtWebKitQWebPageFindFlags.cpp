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

#include "sipAPIQtWebKit.h"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"


extern "C" {static int slot_QWebPage_FindFlags___bool__(PyObject *);}
static int slot_QWebPage_FindFlags___bool__(PyObject *sipSelf)
{
     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 381 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QWebPage::FindFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebPage_FindFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebPage::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebPage_FindFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 372 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QWebPage::FindFlags::Int() != a0->operator QWebPage::FindFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"
            sipReleaseType(const_cast< ::QWebPage::FindFlags *>(a0),sipType_QWebPage_FindFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit, ne_slot, sipType_QWebPage_FindFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QWebPage_FindFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QWebPage::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebPage_FindFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 363 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QWebPage::FindFlags::Int() == a0->operator QWebPage::FindFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"
            sipReleaseType(const_cast< ::QWebPage::FindFlags *>(a0),sipType_QWebPage_FindFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit, eq_slot, sipType_QWebPage_FindFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QWebPage_FindFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebPage_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 357 "sip/QtCore/qglobal.sip"
        *sipCpp = QWebPage::FindFlags(*sipCpp ^ a0);
#line 168 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"

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


extern "C" {static PyObject *slot_QWebPage_FindFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebPage::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebPage_FindFlags, &a0, &a0State, &a1))
        {
             ::QWebPage::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QWebPage::FindFlags((*a0 ^ a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWebPage_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebPage_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebPage_FindFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebPage_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 351 "sip/QtCore/qglobal.sip"
        *sipCpp = QWebPage::FindFlags(*sipCpp | a0);
#line 242 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"

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


extern "C" {static PyObject *slot_QWebPage_FindFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebPage::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebPage_FindFlags, &a0, &a0State, &a1))
        {
             ::QWebPage::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QWebPage::FindFlags((*a0 | a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWebPage_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebPage_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebPage_FindFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebPage_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::QWebPage::FindFlags::operator&=(a0);
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


extern "C" {static PyObject *slot_QWebPage_FindFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QWebPage_FindFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QWebPage::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebPage_FindFlags, &a0, &a0State, &a1))
        {
             ::QWebPage::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QWebPage::FindFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWebPage_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebPage_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QWebPage_FindFlags___invert__(PyObject *);}
static PyObject *slot_QWebPage_FindFlags___invert__(PyObject *sipSelf)
{
     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QWebPage::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QWebPage::FindFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebPage_FindFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebPage_FindFlags___int__(PyObject *);}
static PyObject *slot_QWebPage_FindFlags___int__(PyObject *sipSelf)
{
     ::QWebPage::FindFlags *sipCpp = reinterpret_cast< ::QWebPage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPage_FindFlags));

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
extern "C" {static void release_QWebPage_FindFlags(void *, int);}
static void release_QWebPage_FindFlags(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QWebPage::FindFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPage_FindFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_FindFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QWebPage::FindFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QWebPage::FindFlags *>(sipSrc);
}


extern "C" {static void *array_QWebPage_FindFlags(SIP_SSIZE_T);}
static void *array_QWebPage_FindFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QWebPage::FindFlags[sipNrElem];
}


extern "C" {static void *copy_QWebPage_FindFlags(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_FindFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QWebPage::FindFlags(reinterpret_cast<const  ::QWebPage::FindFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_FindFlags(sipSimpleWrapper *);}
static void dealloc_QWebPage_FindFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebPage_FindFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebPage_FindFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_FindFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebPage::FindFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWebPage::FindFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWebPage::FindFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QWebPage::FindFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QWebPage_FindFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWebPage::FindFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QWebPage::FindFlags *>(a0),sipType_QWebPage_FindFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QWebPage_FindFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QWebPage_FindFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QWebPage::FindFlags **sipCppPtr = reinterpret_cast< ::QWebPage::FindFlags **>(sipCppPtrV);

#line 390 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QWebPage::FindFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebPage_FindFlag)) ||
            sipCanConvertToType(sipPy, sipType_QWebPage_FindFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebPage_FindFlag)))
{
    *sipCppPtr = new QWebPage::FindFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QWebPage::FindFlags *>(sipConvertToType(sipPy, sipType_QWebPage_FindFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 530 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtWebKit/sipQtWebKitQWebPageFindFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebPage_FindFlags[] = {
    {(void *)slot_QWebPage_FindFlags___bool__, bool_slot},
    {(void *)slot_QWebPage_FindFlags___ne__, ne_slot},
    {(void *)slot_QWebPage_FindFlags___eq__, eq_slot},
    {(void *)slot_QWebPage_FindFlags___ixor__, ixor_slot},
    {(void *)slot_QWebPage_FindFlags___xor__, xor_slot},
    {(void *)slot_QWebPage_FindFlags___ior__, ior_slot},
    {(void *)slot_QWebPage_FindFlags___or__, or_slot},
    {(void *)slot_QWebPage_FindFlags___iand__, iand_slot},
    {(void *)slot_QWebPage_FindFlags___and__, and_slot},
    {(void *)slot_QWebPage_FindFlags___invert__, invert_slot},
    {(void *)slot_QWebPage_FindFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QWebPage_FindFlags, "\1QWebPage.FindFlags()\n"
    "QWebPage.FindFlags(Union[QWebPage.FindFlags, QWebPage.FindFlag])\n"
    "QWebPage.FindFlags(QWebPage.FindFlags)");


static pyqt4ClassPluginDef plugin_QWebPage_FindFlags = {
    0,
    1,
    0
};


sipClassTypeDef sipTypeDef_QtWebKit_QWebPage_FindFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPage__FindFlags,
        {0},
        &plugin_QWebPage_FindFlags
    },
    {
        sipNameNr_FindFlags,
        {20, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_FindFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebPage_FindFlags,
    init_type_QWebPage_FindFlags,
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
    dealloc_QWebPage_FindFlags,
    assign_QWebPage_FindFlags,
    array_QWebPage_FindFlags,
    copy_QWebPage_FindFlags,
    release_QWebPage_FindFlags,
    0,
    convertTo_QWebPage_FindFlags,
    0,
    0,
    0,
    0,
    0
};