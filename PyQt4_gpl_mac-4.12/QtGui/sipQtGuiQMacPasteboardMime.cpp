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

#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtGui/qmime.sip"
#include <qmime.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQMacPasteboardMime.cpp"

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQMacPasteboardMime.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQMacPasteboardMime.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQMacPasteboardMime.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQMacPasteboardMime.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtGui/sipQtGuiQMacPasteboardMime.cpp"


class sipQMacPasteboardMime : public  ::QMacPasteboardMime
{
public:
    sipQMacPasteboardMime(char);
    sipQMacPasteboardMime(const  ::QMacPasteboardMime&);
    virtual ~sipQMacPasteboardMime();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList< ::QByteArray> convertFromMime(const  ::QString&, ::QVariant, ::QString);
     ::QVariant convertToMime(const  ::QString&,QList< ::QByteArray>, ::QString);
     ::QString flavorFor(const  ::QString&);
     ::QString mimeFor( ::QString);
    bool canConvert(const  ::QString&, ::QString);
     ::QString convertorName();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMacPasteboardMime(const sipQMacPasteboardMime &);
    sipQMacPasteboardMime &operator = (const sipQMacPasteboardMime &);

    char sipPyMethods[6];
};

sipQMacPasteboardMime::sipQMacPasteboardMime(char a0):  ::QMacPasteboardMime(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMacPasteboardMime::sipQMacPasteboardMime(const  ::QMacPasteboardMime& a0):  ::QMacPasteboardMime(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMacPasteboardMime::~sipQMacPasteboardMime()
{
    sipCommonDtor(sipPySelf);
}

QList< ::QByteArray> sipQMacPasteboardMime::convertFromMime(const  ::QString& a0, ::QVariant a1, ::QString a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QMacPasteboardMime,sipName_convertFromMime);

    if (!sipMeth)
        return QList< ::QByteArray>();

    extern QList< ::QByteArray> sipVH_QtGui_221(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&, ::QVariant, ::QString);

    return sipVH_QtGui_221(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QVariant sipQMacPasteboardMime::convertToMime(const  ::QString& a0,QList< ::QByteArray> a1, ::QString a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QMacPasteboardMime,sipName_convertToMime);

    if (!sipMeth)
        return  ::QVariant();

    extern  ::QVariant sipVH_QtGui_220(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,QList< ::QByteArray>, ::QString);

    return sipVH_QtGui_220(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QString sipQMacPasteboardMime::flavorFor(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QMacPasteboardMime,sipName_flavorFor);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtGui_219(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtGui_219(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QString sipQMacPasteboardMime::mimeFor( ::QString a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QMacPasteboardMime,sipName_mimeFor);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtGui_218(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QString);

    return sipVH_QtGui_218(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQMacPasteboardMime::canConvert(const  ::QString& a0, ::QString a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QMacPasteboardMime,sipName_canConvert);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtGui_217(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&, ::QString);

    return sipVH_QtGui_217(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

 ::QString sipQMacPasteboardMime::convertorName()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QMacPasteboardMime,sipName_convertorName);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtGui_185(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_185(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QMacPasteboardMime_all, "all(int) -> object");

extern "C" {static PyObject *meth_QMacPasteboardMime_all(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_all(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::uchar a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "M", &a0))
        {
            QList< ::QMacPasteboardMime*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList< ::QMacPasteboardMime*>( ::QMacPasteboardMime::all(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QMacPasteboardMime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_all, doc_QMacPasteboardMime_all);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_convertor, "convertor(int, str, str) -> QMacPasteboardMime");

extern "C" {static PyObject *meth_QMacPasteboardMime_convertor(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_convertor(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::uchar a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QString* a2;
        int a2State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "MJ1J1", &a0, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
             ::QMacPasteboardMime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::QMacPasteboardMime::convertor(a0,*a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(a2,sipType_QString,a2State);

            return sipConvertFromType(sipRes,sipType_QMacPasteboardMime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_convertor, doc_QMacPasteboardMime_convertor);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_flavorToMime, "flavorToMime(int, str) -> str");

extern "C" {static PyObject *meth_QMacPasteboardMime_flavorToMime(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_flavorToMime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::uchar a0;
         ::QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "MJ1", &a0, sipType_QString,&a1, &a1State))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString( ::QMacPasteboardMime::flavorToMime(a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_flavorToMime, doc_QMacPasteboardMime_flavorToMime);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_convertorName, "convertorName(self) -> str");

extern "C" {static PyObject *meth_QMacPasteboardMime_convertorName(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_convertorName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QMacPasteboardMime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMacPasteboardMime, &sipCpp))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMacPasteboardMime, sipName_convertorName);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->convertorName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_convertorName, doc_QMacPasteboardMime_convertorName);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_canConvert, "canConvert(self, str, str) -> bool");

extern "C" {static PyObject *meth_QMacPasteboardMime_canConvert(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_canConvert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QString* a1;
        int a1State = 0;
         ::QMacPasteboardMime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QMacPasteboardMime, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMacPasteboardMime, sipName_canConvert);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canConvert(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_canConvert, doc_QMacPasteboardMime_canConvert);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_mimeFor, "mimeFor(self, str) -> str");

extern "C" {static PyObject *meth_QMacPasteboardMime_mimeFor(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_mimeFor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QString* a0;
        int a0State = 0;
         ::QMacPasteboardMime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QMacPasteboardMime, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMacPasteboardMime, sipName_mimeFor);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->mimeFor(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_mimeFor, doc_QMacPasteboardMime_mimeFor);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_flavorFor, "flavorFor(self, str) -> str");

extern "C" {static PyObject *meth_QMacPasteboardMime_flavorFor(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_flavorFor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QMacPasteboardMime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QMacPasteboardMime, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMacPasteboardMime, sipName_flavorFor);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->flavorFor(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_flavorFor, doc_QMacPasteboardMime_flavorFor);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_convertToMime, "convertToMime(self, str, Sequence[Union[QByteArray, bytes, bytearray]], str) -> Any");

extern "C" {static PyObject *meth_QMacPasteboardMime_convertToMime(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_convertToMime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        QList< ::QByteArray>* a1;
        int a1State = 0;
         ::QString* a2;
        int a2State = 0;
         ::QMacPasteboardMime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QMacPasteboardMime, &sipCpp, sipType_QString,&a0, &a0State, sipType_QList_0100QByteArray,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
             ::QVariant*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMacPasteboardMime, sipName_convertToMime);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVariant(sipCpp->convertToMime(*a0,*a1,*a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QList_0100QByteArray,a1State);
            sipReleaseType(a2,sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_convertToMime, doc_QMacPasteboardMime_convertToMime);

    return NULL;
}


PyDoc_STRVAR(doc_QMacPasteboardMime_convertFromMime, "convertFromMime(self, str, Any, str) -> List[QByteArray]");

extern "C" {static PyObject *meth_QMacPasteboardMime_convertFromMime(PyObject *, PyObject *);}
static PyObject *meth_QMacPasteboardMime_convertFromMime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QVariant* a1;
        int a1State = 0;
         ::QString* a2;
        int a2State = 0;
         ::QMacPasteboardMime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QMacPasteboardMime, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            QList< ::QByteArray>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMacPasteboardMime, sipName_convertFromMime);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList< ::QByteArray>(sipCpp->convertFromMime(*a0,*a1,*a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QVariant,a1State);
            sipReleaseType(a2,sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMacPasteboardMime, sipName_convertFromMime, doc_QMacPasteboardMime_convertFromMime);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMacPasteboardMime(void *, int);}
static void release_QMacPasteboardMime(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQMacPasteboardMime *>(sipCppV);
    else
        delete reinterpret_cast< ::QMacPasteboardMime *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMacPasteboardMime(sipSimpleWrapper *);}
static void dealloc_QMacPasteboardMime(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQMacPasteboardMime *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMacPasteboardMime(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QMacPasteboardMime(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMacPasteboardMime(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMacPasteboardMime *sipCpp = 0;

    {
        char a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "L", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMacPasteboardMime(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QMacPasteboardMime* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMacPasteboardMime, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMacPasteboardMime(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMacPasteboardMime[] = {
    {SIP_MLNAME_CAST(sipName_all), meth_QMacPasteboardMime_all, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_all)},
    {SIP_MLNAME_CAST(sipName_canConvert), meth_QMacPasteboardMime_canConvert, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_canConvert)},
    {SIP_MLNAME_CAST(sipName_convertFromMime), meth_QMacPasteboardMime_convertFromMime, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_convertFromMime)},
    {SIP_MLNAME_CAST(sipName_convertToMime), meth_QMacPasteboardMime_convertToMime, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_convertToMime)},
    {SIP_MLNAME_CAST(sipName_convertor), meth_QMacPasteboardMime_convertor, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_convertor)},
    {SIP_MLNAME_CAST(sipName_convertorName), meth_QMacPasteboardMime_convertorName, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_convertorName)},
    {SIP_MLNAME_CAST(sipName_flavorFor), meth_QMacPasteboardMime_flavorFor, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_flavorFor)},
    {SIP_MLNAME_CAST(sipName_flavorToMime), meth_QMacPasteboardMime_flavorToMime, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_flavorToMime)},
    {SIP_MLNAME_CAST(sipName_mimeFor), meth_QMacPasteboardMime_mimeFor, METH_VARARGS, SIP_MLDOC_CAST(doc_QMacPasteboardMime_mimeFor)}
};

static sipEnumMemberDef enummembers_QMacPasteboardMime[] = {
    {sipName_MIME_ALL, static_cast<int>( ::QMacPasteboardMime::MIME_ALL), 325},
    {sipName_MIME_CLIP, static_cast<int>( ::QMacPasteboardMime::MIME_CLIP), 325},
    {sipName_MIME_DND, static_cast<int>( ::QMacPasteboardMime::MIME_DND), 325},
    {sipName_MIME_QT3_CONVERTOR, static_cast<int>( ::QMacPasteboardMime::MIME_QT3_CONVERTOR), 325},
    {sipName_MIME_QT_CONVERTOR, static_cast<int>( ::QMacPasteboardMime::MIME_QT_CONVERTOR), 325},
};

PyDoc_STRVAR(doc_QMacPasteboardMime, "\1QMacPasteboardMime(int)\n"
    "QMacPasteboardMime(QMacPasteboardMime)");


static pyqt4ClassPluginDef plugin_QMacPasteboardMime = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QMacPasteboardMime = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QMacPasteboardMime,
        {0},
        &plugin_QMacPasteboardMime
    },
    {
        sipNameNr_QMacPasteboardMime,
        {0, 0, 1},
        9, methods_QMacPasteboardMime,
        5, enummembers_QMacPasteboardMime,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMacPasteboardMime,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMacPasteboardMime,
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
    dealloc_QMacPasteboardMime,
    0,
    0,
    0,
    release_QMacPasteboardMime,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
