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

#include "sipAPIQtXmlPatterns.h"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtXmlPatterns/qxmlformatter.sip"
#include <qxmlformatter.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtXmlPatterns/qxmlquery.sip"
#include <qxmlquery.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"
#line 789 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"
#line 26 "sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtXmlPatterns/sipQtXmlPatternsQXmlFormatter.cpp"


class sipQXmlFormatter : public  ::QXmlFormatter
{
public:
    sipQXmlFormatter(const  ::QXmlQuery&, ::QIODevice*);
    virtual ~sipQXmlFormatter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void endOfSequence();
    void startOfSequence();
    void namespaceBinding(const  ::QXmlName&);
    void atomicValue(const  ::QVariant&);
    void processingInstruction(const  ::QXmlName&,const  ::QString&);
    void endDocument();
    void startDocument();
    void characters(const  ::QStringRef&);
    void comment(const  ::QString&);
    void attribute(const  ::QXmlName&,const  ::QStringRef&);
    void endElement();
    void startElement(const  ::QXmlName&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlFormatter(const sipQXmlFormatter &);
    sipQXmlFormatter &operator = (const sipQXmlFormatter &);

    char sipPyMethods[12];
};

sipQXmlFormatter::sipQXmlFormatter(const  ::QXmlQuery& a0, ::QIODevice*a1):  ::QXmlFormatter(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlFormatter::~sipQXmlFormatter()
{
    sipCommonDtor(sipPySelf);
}

void sipQXmlFormatter::endOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_endOfSequence);

    if (!sipMeth)
    {
         ::QXmlFormatter::endOfSequence();
        return;
    }

    extern void sipVH_QtXmlPatterns_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtXmlPatterns_21(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQXmlFormatter::startOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_startOfSequence);

    if (!sipMeth)
    {
         ::QXmlFormatter::startOfSequence();
        return;
    }

    extern void sipVH_QtXmlPatterns_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtXmlPatterns_21(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQXmlFormatter::namespaceBinding(const  ::QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_namespaceBinding);

    if (!sipMeth)
    {
         ::QXmlFormatter::namespaceBinding(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlName&);

    sipVH_QtXmlPatterns_20(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQXmlFormatter::atomicValue(const  ::QVariant& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_atomicValue);

    if (!sipMeth)
    {
         ::QXmlFormatter::atomicValue(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QVariant&);

    sipVH_QtXmlPatterns_26(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQXmlFormatter::processingInstruction(const  ::QXmlName& a0,const  ::QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_processingInstruction);

    if (!sipMeth)
    {
         ::QXmlFormatter::processingInstruction(a0,a1);
        return;
    }

    extern void sipVH_QtXmlPatterns_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlName&,const  ::QString&);

    sipVH_QtXmlPatterns_25(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQXmlFormatter::endDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_endDocument);

    if (!sipMeth)
    {
         ::QXmlFormatter::endDocument();
        return;
    }

    extern void sipVH_QtXmlPatterns_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtXmlPatterns_21(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQXmlFormatter::startDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_startDocument);

    if (!sipMeth)
    {
         ::QXmlFormatter::startDocument();
        return;
    }

    extern void sipVH_QtXmlPatterns_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtXmlPatterns_21(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQXmlFormatter::characters(const  ::QStringRef& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_characters);

    if (!sipMeth)
    {
         ::QXmlFormatter::characters(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QStringRef&);

    sipVH_QtXmlPatterns_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQXmlFormatter::comment(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_comment);

    if (!sipMeth)
    {
         ::QXmlFormatter::comment(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    sipVH_QtXmlPatterns_23(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQXmlFormatter::attribute(const  ::QXmlName& a0,const  ::QStringRef& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_attribute);

    if (!sipMeth)
    {
         ::QXmlFormatter::attribute(a0,a1);
        return;
    }

    extern void sipVH_QtXmlPatterns_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlName&,const  ::QStringRef&);

    sipVH_QtXmlPatterns_22(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQXmlFormatter::endElement()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_endElement);

    if (!sipMeth)
    {
         ::QXmlFormatter::endElement();
        return;
    }

    extern void sipVH_QtXmlPatterns_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtXmlPatterns_21(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQXmlFormatter::startElement(const  ::QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_startElement);

    if (!sipMeth)
    {
         ::QXmlFormatter::startElement(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlName&);

    sipVH_QtXmlPatterns_20(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QXmlFormatter_characters, "characters(self, str)");

extern "C" {static PyObject *meth_QXmlFormatter_characters(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_characters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QStringRef* a0;
        int a0State = 0;
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlFormatter, &sipCpp, sipType_QStringRef,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::characters(*a0) : sipCpp->characters(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QStringRef *>(a0),sipType_QStringRef,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_characters, doc_QXmlFormatter_characters);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_comment, "comment(self, str)");

extern "C" {static PyObject *meth_QXmlFormatter_comment(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlFormatter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::comment(*a0) : sipCpp->comment(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_comment, doc_QXmlFormatter_comment);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_startElement, "startElement(self, QXmlName)");

extern "C" {static PyObject *meth_QXmlFormatter_startElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_startElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QXmlName* a0;
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlFormatter, &sipCpp, sipType_QXmlName, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::startElement(*a0) : sipCpp->startElement(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_startElement, doc_QXmlFormatter_startElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_endElement, "endElement(self)");

extern "C" {static PyObject *meth_QXmlFormatter_endElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_endElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlFormatter, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::endElement() : sipCpp->endElement());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_endElement, doc_QXmlFormatter_endElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_attribute, "attribute(self, QXmlName, str)");

extern "C" {static PyObject *meth_QXmlFormatter_attribute(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QXmlName* a0;
        const  ::QStringRef* a1;
        int a1State = 0;
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QXmlFormatter, &sipCpp, sipType_QXmlName, &a0, sipType_QStringRef,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::attribute(*a0,*a1) : sipCpp->attribute(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QStringRef *>(a1),sipType_QStringRef,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_attribute, doc_QXmlFormatter_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_processingInstruction, "processingInstruction(self, QXmlName, str)");

extern "C" {static PyObject *meth_QXmlFormatter_processingInstruction(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_processingInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QXmlName* a0;
        const  ::QString* a1;
        int a1State = 0;
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QXmlFormatter, &sipCpp, sipType_QXmlName, &a0, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::processingInstruction(*a0,*a1) : sipCpp->processingInstruction(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_processingInstruction, doc_QXmlFormatter_processingInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_atomicValue, "atomicValue(self, Any)");

extern "C" {static PyObject *meth_QXmlFormatter_atomicValue(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_atomicValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QVariant* a0;
        int a0State = 0;
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlFormatter, &sipCpp, sipType_QVariant,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::atomicValue(*a0) : sipCpp->atomicValue(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_atomicValue, doc_QXmlFormatter_atomicValue);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_startDocument, "startDocument(self)");

extern "C" {static PyObject *meth_QXmlFormatter_startDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_startDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlFormatter, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::startDocument() : sipCpp->startDocument());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_startDocument, doc_QXmlFormatter_startDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_endDocument, "endDocument(self)");

extern "C" {static PyObject *meth_QXmlFormatter_endDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_endDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlFormatter, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::endDocument() : sipCpp->endDocument());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_endDocument, doc_QXmlFormatter_endDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_startOfSequence, "startOfSequence(self)");

extern "C" {static PyObject *meth_QXmlFormatter_startOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_startOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlFormatter, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::startOfSequence() : sipCpp->startOfSequence());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_startOfSequence, doc_QXmlFormatter_startOfSequence);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_endOfSequence, "endOfSequence(self)");

extern "C" {static PyObject *meth_QXmlFormatter_endOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_endOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlFormatter, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QXmlFormatter::endOfSequence() : sipCpp->endOfSequence());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_endOfSequence, doc_QXmlFormatter_endOfSequence);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_indentationDepth, "indentationDepth(self) -> int");

extern "C" {static PyObject *meth_QXmlFormatter_indentationDepth(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_indentationDepth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlFormatter, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indentationDepth();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_indentationDepth, doc_QXmlFormatter_indentationDepth);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlFormatter_setIndentationDepth, "setIndentationDepth(self, int)");

extern "C" {static PyObject *meth_QXmlFormatter_setIndentationDepth(PyObject *, PyObject *);}
static PyObject *meth_QXmlFormatter_setIndentationDepth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QXmlFormatter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QXmlFormatter, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setIndentationDepth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlFormatter, sipName_setIndentationDepth, doc_QXmlFormatter_setIndentationDepth);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QXmlFormatter(void *, const sipTypeDef *);}
static void *cast_QXmlFormatter(void *sipCppV, const sipTypeDef *targetType)
{
     ::QXmlFormatter *sipCpp = reinterpret_cast< ::QXmlFormatter *>(sipCppV);

    if (targetType == sipType_QXmlSerializer)
        return static_cast< ::QXmlSerializer *>(sipCpp);

    if (targetType == sipType_QAbstractXmlReceiver)
        return static_cast< ::QAbstractXmlReceiver *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlFormatter(void *, int);}
static void release_QXmlFormatter(void *sipCppV, int sipIsDerived)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipIsDerived)
        delete reinterpret_cast<sipQXmlFormatter *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlFormatter *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlFormatter(sipSimpleWrapper *);}
static void dealloc_QXmlFormatter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlFormatter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlFormatter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlFormatter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlFormatter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlFormatter *sipCpp = 0;

    {
        const  ::QXmlQuery* a0;
         ::QIODevice* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J8", sipType_QXmlQuery, &a0, sipType_QIODevice, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlFormatter(*a0,a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QXmlFormatter[] = {{21, 255, 1}};


static PyMethodDef methods_QXmlFormatter[] = {
    {SIP_MLNAME_CAST(sipName_atomicValue), meth_QXmlFormatter_atomicValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_atomicValue)},
    {SIP_MLNAME_CAST(sipName_attribute), meth_QXmlFormatter_attribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_attribute)},
    {SIP_MLNAME_CAST(sipName_characters), meth_QXmlFormatter_characters, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_characters)},
    {SIP_MLNAME_CAST(sipName_comment), meth_QXmlFormatter_comment, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_comment)},
    {SIP_MLNAME_CAST(sipName_endDocument), meth_QXmlFormatter_endDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_endDocument)},
    {SIP_MLNAME_CAST(sipName_endElement), meth_QXmlFormatter_endElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_endElement)},
    {SIP_MLNAME_CAST(sipName_endOfSequence), meth_QXmlFormatter_endOfSequence, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_endOfSequence)},
    {SIP_MLNAME_CAST(sipName_indentationDepth), meth_QXmlFormatter_indentationDepth, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_indentationDepth)},
    {SIP_MLNAME_CAST(sipName_processingInstruction), meth_QXmlFormatter_processingInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_processingInstruction)},
    {SIP_MLNAME_CAST(sipName_setIndentationDepth), meth_QXmlFormatter_setIndentationDepth, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_setIndentationDepth)},
    {SIP_MLNAME_CAST(sipName_startDocument), meth_QXmlFormatter_startDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_startDocument)},
    {SIP_MLNAME_CAST(sipName_startElement), meth_QXmlFormatter_startElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_startElement)},
    {SIP_MLNAME_CAST(sipName_startOfSequence), meth_QXmlFormatter_startOfSequence, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlFormatter_startOfSequence)}
};

PyDoc_STRVAR(doc_QXmlFormatter, "\1QXmlFormatter(QXmlQuery, QIODevice)");


static pyqt4ClassPluginDef plugin_QXmlFormatter = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXmlPatterns_QXmlFormatter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlFormatter,
        {0},
        &plugin_QXmlFormatter
    },
    {
        sipNameNr_QXmlFormatter,
        {0, 0, 1},
        13, methods_QXmlFormatter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlFormatter,
    -1,
    -1,
    supers_QXmlFormatter,
    0,
    init_type_QXmlFormatter,
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
    dealloc_QXmlFormatter,
    0,
    0,
    0,
    release_QXmlFormatter,
    cast_QXmlFormatter,
    0,
    0,
    0,
    0,
    0,
    0
};
