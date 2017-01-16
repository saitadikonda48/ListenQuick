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

#line 299 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qabstractfileengine.sip"
#include <qabstractfileengine.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineIterator.cpp"

#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineIterator.cpp"
#line 27 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineIterator.cpp"
#line 27 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineIterator.cpp"
#line 26 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qfileinfo.sip"
#include <qfileinfo.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQAbstractFileEngineIterator.cpp"


class sipQAbstractFileEngineIterator : public  ::QAbstractFileEngineIterator
{
public:
    sipQAbstractFileEngineIterator( ::QDir::Filters,const  ::QStringList&);
    virtual ~sipQAbstractFileEngineIterator();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QFileInfo currentFileInfo() const;
     ::QString currentFileName() const;
    bool hasNext() const;
     ::QString next();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractFileEngineIterator(const sipQAbstractFileEngineIterator &);
    sipQAbstractFileEngineIterator &operator = (const sipQAbstractFileEngineIterator &);

    char sipPyMethods[4];
};

sipQAbstractFileEngineIterator::sipQAbstractFileEngineIterator( ::QDir::Filters a0,const  ::QStringList& a1):  ::QAbstractFileEngineIterator(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractFileEngineIterator::~sipQAbstractFileEngineIterator()
{
    sipCommonDtor(sipPySelf);
}

 ::QFileInfo sipQAbstractFileEngineIterator::currentFileInfo() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_currentFileInfo);

    if (!sipMeth)
        return  ::QAbstractFileEngineIterator::currentFileInfo();

    extern  ::QFileInfo sipVH_QtCore_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_37(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipQAbstractFileEngineIterator::currentFileName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QAbstractFileEngineIterator,sipName_currentFileName);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtCore_36(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_36(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQAbstractFileEngineIterator::hasNext() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QAbstractFileEngineIterator,sipName_hasNext);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtCore_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_11(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipQAbstractFileEngineIterator::next()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QAbstractFileEngineIterator,sipName_next);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtCore_36(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_36(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_next, "next(self) -> str");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractFileEngineIterator, sipName_next);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->next());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_next, doc_QAbstractFileEngineIterator_next);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_hasNext, "hasNext(self) -> bool");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractFileEngineIterator, sipName_hasNext);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasNext();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_hasNext, doc_QAbstractFileEngineIterator_hasNext);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_path, "path(self) -> str");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_path(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->path());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_path, doc_QAbstractFileEngineIterator_path);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_nameFilters, "nameFilters(self) -> List[str]");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_nameFilters(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_nameFilters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
             ::QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QStringList(sipCpp->nameFilters());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_nameFilters, doc_QAbstractFileEngineIterator_nameFilters);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_filters, "filters(self) -> QDir.Filters");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_filters(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_filters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
             ::QDir::Filters*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QDir::Filters(sipCpp->filters());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDir_Filters,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_filters, doc_QAbstractFileEngineIterator_filters);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_currentFileName, "currentFileName(self) -> str");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_currentFileName(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_currentFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractFileEngineIterator, sipName_currentFileName);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->currentFileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_currentFileName, doc_QAbstractFileEngineIterator_currentFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_currentFileInfo, "currentFileInfo(self) -> QFileInfo");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_currentFileInfo(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_currentFileInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
             ::QFileInfo*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QFileInfo((sipSelfWasArg ? sipCpp-> ::QAbstractFileEngineIterator::currentFileInfo() : sipCpp->currentFileInfo()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFileInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_currentFileInfo, doc_QAbstractFileEngineIterator_currentFileInfo);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFileEngineIterator_currentFilePath, "currentFilePath(self) -> str");

extern "C" {static PyObject *meth_QAbstractFileEngineIterator_currentFilePath(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFileEngineIterator_currentFilePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAbstractFileEngineIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFileEngineIterator, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->currentFilePath());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFileEngineIterator, sipName_currentFilePath, doc_QAbstractFileEngineIterator_currentFilePath);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractFileEngineIterator(void *, int);}
static void release_QAbstractFileEngineIterator(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQAbstractFileEngineIterator *>(sipCppV);
    else
        delete reinterpret_cast< ::QAbstractFileEngineIterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractFileEngineIterator(sipSimpleWrapper *);}
static void dealloc_QAbstractFileEngineIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQAbstractFileEngineIterator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractFileEngineIterator(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QAbstractFileEngineIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractFileEngineIterator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractFileEngineIterator *sipCpp = 0;

    {
         ::QDir::Filters* a0;
        int a0State = 0;
        const  ::QStringList* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1", sipType_QDir_Filters, &a0, &a0State, sipType_QStringList,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractFileEngineIterator(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_Filters,a0State);
            sipReleaseType(const_cast< ::QStringList *>(a1),sipType_QStringList,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractFileEngineIterator[] = {
    {SIP_MLNAME_CAST(sipName_currentFileInfo), meth_QAbstractFileEngineIterator_currentFileInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_currentFileInfo)},
    {SIP_MLNAME_CAST(sipName_currentFileName), meth_QAbstractFileEngineIterator_currentFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_currentFileName)},
    {SIP_MLNAME_CAST(sipName_currentFilePath), meth_QAbstractFileEngineIterator_currentFilePath, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_currentFilePath)},
    {SIP_MLNAME_CAST(sipName_filters), meth_QAbstractFileEngineIterator_filters, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_filters)},
    {SIP_MLNAME_CAST(sipName_hasNext), meth_QAbstractFileEngineIterator_hasNext, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_hasNext)},
    {SIP_MLNAME_CAST(sipName_nameFilters), meth_QAbstractFileEngineIterator_nameFilters, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_nameFilters)},
    {SIP_MLNAME_CAST(sipName_next), meth_QAbstractFileEngineIterator_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_next)},
    {SIP_MLNAME_CAST(sipName_path), meth_QAbstractFileEngineIterator_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFileEngineIterator_path)}
};

PyDoc_STRVAR(doc_QAbstractFileEngineIterator, "\1QAbstractFileEngineIterator(QDir.Filters, Sequence[str])");


static pyqt4ClassPluginDef plugin_QAbstractFileEngineIterator = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QAbstractFileEngineIterator = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractFileEngineIterator,
        {0},
        &plugin_QAbstractFileEngineIterator
    },
    {
        sipNameNr_QAbstractFileEngineIterator,
        {0, 0, 1},
        8, methods_QAbstractFileEngineIterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractFileEngineIterator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QAbstractFileEngineIterator,
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
    dealloc_QAbstractFileEngineIterator,
    0,
    0,
    0,
    release_QAbstractFileEngineIterator,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
