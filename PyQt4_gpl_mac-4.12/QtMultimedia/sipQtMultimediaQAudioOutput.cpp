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

#include "sipAPIQtMultimedia.h"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtMultimedia/qaudiooutput.sip"
#include <qaudiooutput.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"

#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtMultimedia/qaudiodeviceinfo.sip"
#include <qaudiodeviceinfo.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 28 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtMultimedia/qaudio.sip"
#include <qaudio.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 75 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtMultimedia/sipQtMultimediaQAudioOutput.cpp"


class sipQAudioOutput : public  ::QAudioOutput
{
public:
    sipQAudioOutput(const  ::QAudioFormat&, ::QObject*);
    sipQAudioOutput(const  ::QAudioDeviceInfo&,const  ::QAudioFormat&, ::QObject*);
    virtual ~sipQAudioOutput();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event( ::QEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    void timerEvent( ::QTimerEvent*);
    void childEvent( ::QChildEvent*);
    void customEvent( ::QEvent*);
    void connectNotify(const char*);
    void disconnectNotify(const char*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAudioOutput(const sipQAudioOutput &);
    sipQAudioOutput &operator = (const sipQAudioOutput &);

    char sipPyMethods[7];
};

sipQAudioOutput::sipQAudioOutput(const  ::QAudioFormat& a0, ::QObject*a1):  ::QAudioOutput(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAudioOutput::sipQAudioOutput(const  ::QAudioDeviceInfo& a0,const  ::QAudioFormat& a1, ::QObject*a2):  ::QAudioOutput(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAudioOutput::~sipQAudioOutput()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAudioOutput::metaObject() const
{
    return sip_QtMultimedia_qt_metaobject(sipPySelf,sipType_QAudioOutput);
}

int sipQAudioOutput::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QAudioOutput::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMultimedia_qt_metacall(sipPySelf,sipType_QAudioOutput,_c,_id,_a);

    return _id;
}

void *sipQAudioOutput::qt_metacast(const char *_clname)
{
    return (sip_QtMultimedia_qt_metacast(sipPySelf, sipType_QAudioOutput, _clname)) ? this :  ::QAudioOutput::qt_metacast(_clname);
}

bool sipQAudioOutput::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QAudioOutput::event(a0);

    extern bool sipVH_QtMultimedia_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtMultimedia_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQAudioOutput::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QAudioOutput::eventFilter(a0,a1);

    extern bool sipVH_QtMultimedia_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtMultimedia_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQAudioOutput::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QAudioOutput::timerEvent(a0);
        return;
    }

    extern void sipVH_QtMultimedia_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtMultimedia_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioOutput::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QAudioOutput::childEvent(a0);
        return;
    }

    extern void sipVH_QtMultimedia_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtMultimedia_6(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioOutput::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QAudioOutput::customEvent(a0);
        return;
    }

    extern void sipVH_QtMultimedia_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtMultimedia_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioOutput::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QAudioOutput::connectNotify(a0);
        return;
    }

    extern void sipVH_QtMultimedia_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtMultimedia_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioOutput::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QAudioOutput::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtMultimedia_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtMultimedia_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAudioOutput_format, "format(self) -> QAudioFormat");

extern "C" {static PyObject *meth_QAudioOutput_format(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
             ::QAudioFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QAudioFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QAudioFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_format, doc_QAudioOutput_format);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_start, "start(self, QIODevice)\n"
    "start(self) -> QIODevice");

extern "C" {static PyObject *meth_QAudioOutput_start(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QIODevice* a0;
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAudioOutput, &sipCpp, sipType_QIODevice, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
             ::QIODevice*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->start();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_start, doc_QAudioOutput_start);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_stop, "stop(self)");

extern "C" {static PyObject *meth_QAudioOutput_stop(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->stop();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_stop, doc_QAudioOutput_stop);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_reset, "reset(self)");

extern "C" {static PyObject *meth_QAudioOutput_reset(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->reset();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_reset, doc_QAudioOutput_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_suspend, "suspend(self)");

extern "C" {static PyObject *meth_QAudioOutput_suspend(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_suspend(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->suspend();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_suspend, doc_QAudioOutput_suspend);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_resume, "resume(self)");

extern "C" {static PyObject *meth_QAudioOutput_resume(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_resume(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->resume();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_resume, doc_QAudioOutput_resume);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_setBufferSize, "setBufferSize(self, int)");

extern "C" {static PyObject *meth_QAudioOutput_setBufferSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_setBufferSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioOutput, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBufferSize(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_setBufferSize, doc_QAudioOutput_setBufferSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_bufferSize, "bufferSize(self) -> int");

extern "C" {static PyObject *meth_QAudioOutput_bufferSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_bufferSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bufferSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_bufferSize, doc_QAudioOutput_bufferSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_bytesFree, "bytesFree(self) -> int");

extern "C" {static PyObject *meth_QAudioOutput_bytesFree(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_bytesFree(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bytesFree();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_bytesFree, doc_QAudioOutput_bytesFree);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_periodSize, "periodSize(self) -> int");

extern "C" {static PyObject *meth_QAudioOutput_periodSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_periodSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->periodSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_periodSize, doc_QAudioOutput_periodSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_setNotifyInterval, "setNotifyInterval(self, int)");

extern "C" {static PyObject *meth_QAudioOutput_setNotifyInterval(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_setNotifyInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioOutput, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNotifyInterval(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_setNotifyInterval, doc_QAudioOutput_setNotifyInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_notifyInterval, "notifyInterval(self) -> int");

extern "C" {static PyObject *meth_QAudioOutput_notifyInterval(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_notifyInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->notifyInterval();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_notifyInterval, doc_QAudioOutput_notifyInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_processedUSecs, "processedUSecs(self) -> int");

extern "C" {static PyObject *meth_QAudioOutput_processedUSecs(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_processedUSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
             ::qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->processedUSecs();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_processedUSecs, doc_QAudioOutput_processedUSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_elapsedUSecs, "elapsedUSecs(self) -> int");

extern "C" {static PyObject *meth_QAudioOutput_elapsedUSecs(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_elapsedUSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
             ::qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->elapsedUSecs();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_elapsedUSecs, doc_QAudioOutput_elapsedUSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_error, "error(self) -> QAudio.Error");

extern "C" {static PyObject *meth_QAudioOutput_error(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
             ::QAudio::Error sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->error();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAudio_Error);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_error, doc_QAudioOutput_error);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioOutput_state, "state(self) -> QAudio.State");

extern "C" {static PyObject *meth_QAudioOutput_state(PyObject *, PyObject *);}
static PyObject *meth_QAudioOutput_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QAudioOutput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioOutput, &sipCpp))
        {
             ::QAudio::State sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->state();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAudio_State);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioOutput, sipName_state, doc_QAudioOutput_state);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QAudioOutput(void *, const sipTypeDef *);}
static void *cast_QAudioOutput(void *sipCppV, const sipTypeDef *targetType)
{
     ::QAudioOutput *sipCpp = reinterpret_cast< ::QAudioOutput *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAudioOutput(void *, int);}
static void release_QAudioOutput(void *sipCppV, int)
{
     ::QAudioOutput *sipCpp = reinterpret_cast< ::QAudioOutput *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAudioOutput(sipSimpleWrapper *);}
static void dealloc_QAudioOutput(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQAudioOutput *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAudioOutput(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QAudioOutput(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAudioOutput(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAudioOutput *sipCpp = 0;

    {
        const  ::QAudioFormat& a0def = QAudioFormat();
        const  ::QAudioFormat* a0 = &a0def;
         ::QObject* a1 = 0;

        static const char *sipKwdList[] = {
            sipName_format,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J9JH", sipType_QAudioFormat, &a0, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAudioOutput(*a0,a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QAudioDeviceInfo* a0;
        const  ::QAudioFormat& a1def = QAudioFormat();
        const  ::QAudioFormat* a1 = &a1def;
         ::QObject* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|J9JH", sipType_QAudioDeviceInfo, &a0, sipType_QAudioFormat, &a1, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAudioOutput(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAudioOutput[] = {{5, 0, 1}};


static PyMethodDef methods_QAudioOutput[] = {
    {SIP_MLNAME_CAST(sipName_bufferSize), meth_QAudioOutput_bufferSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_bufferSize)},
    {SIP_MLNAME_CAST(sipName_bytesFree), meth_QAudioOutput_bytesFree, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_bytesFree)},
    {SIP_MLNAME_CAST(sipName_elapsedUSecs), meth_QAudioOutput_elapsedUSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_elapsedUSecs)},
    {SIP_MLNAME_CAST(sipName_error), meth_QAudioOutput_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_error)},
    {SIP_MLNAME_CAST(sipName_format), meth_QAudioOutput_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_format)},
    {SIP_MLNAME_CAST(sipName_notifyInterval), meth_QAudioOutput_notifyInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_notifyInterval)},
    {SIP_MLNAME_CAST(sipName_periodSize), meth_QAudioOutput_periodSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_periodSize)},
    {SIP_MLNAME_CAST(sipName_processedUSecs), meth_QAudioOutput_processedUSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_processedUSecs)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QAudioOutput_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_reset)},
    {SIP_MLNAME_CAST(sipName_resume), meth_QAudioOutput_resume, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_resume)},
    {SIP_MLNAME_CAST(sipName_setBufferSize), meth_QAudioOutput_setBufferSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_setBufferSize)},
    {SIP_MLNAME_CAST(sipName_setNotifyInterval), meth_QAudioOutput_setNotifyInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_setNotifyInterval)},
    {SIP_MLNAME_CAST(sipName_start), meth_QAudioOutput_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_start)},
    {SIP_MLNAME_CAST(sipName_state), meth_QAudioOutput_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_state)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QAudioOutput_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_stop)},
    {SIP_MLNAME_CAST(sipName_suspend), meth_QAudioOutput_suspend, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioOutput_suspend)}
};

PyDoc_STRVAR(doc_QAudioOutput, "\1QAudioOutput(format: QAudioFormat = QAudioFormat(), parent: QObject = None)\n"
    "QAudioOutput(QAudioDeviceInfo, format: QAudioFormat = QAudioFormat(), parent: QObject = None)");


/* Define this type's signals. */
static const pyqt4QtSignal signals_QAudioOutput[] = {
    {"notify()", "\1notify(self)", 0, 0},
    {"stateChanged(QAudio::State)", "\1stateChanged(self, QAudio.State)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt4ClassPluginDef plugin_QAudioOutput = {
    & ::QAudioOutput::staticMetaObject,
    0,
    signals_QAudioOutput
};


sipClassTypeDef sipTypeDef_QtMultimedia_QAudioOutput = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAudioOutput,
        {0},
        &plugin_QAudioOutput
    },
    {
        sipNameNr_QAudioOutput,
        {0, 0, 1},
        16, methods_QAudioOutput,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAudioOutput,
    -1,
    -1,
    supers_QAudioOutput,
    0,
    init_type_QAudioOutput,
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
    dealloc_QAudioOutput,
    0,
    0,
    0,
    release_QAudioOutput,
    cast_QAudioOutput,
    0,
    0,
    0,
    0,
    0,
    0
};
