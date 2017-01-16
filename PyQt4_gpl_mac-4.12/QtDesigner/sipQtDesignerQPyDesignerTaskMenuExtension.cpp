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

#include "sipAPIQtDesigner.h"

#line 24 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtDesigner/qpydesignertaskmenuextension.sip"
#include <qpydesignertaskmenuextension.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 265 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtGui/qaction.sip"
#include <qaction.h>
#line 72 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 75 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"


class sipQPyDesignerTaskMenuExtension : public  ::QPyDesignerTaskMenuExtension
{
public:
    sipQPyDesignerTaskMenuExtension( ::QObject*);
    virtual ~sipQPyDesignerTaskMenuExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList< ::QAction*> taskActions() const;
     ::QAction* preferredEditAction() const;
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
    sipQPyDesignerTaskMenuExtension(const sipQPyDesignerTaskMenuExtension &);
    sipQPyDesignerTaskMenuExtension &operator = (const sipQPyDesignerTaskMenuExtension &);

    char sipPyMethods[9];
};

sipQPyDesignerTaskMenuExtension::sipQPyDesignerTaskMenuExtension( ::QObject*a0):  ::QPyDesignerTaskMenuExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerTaskMenuExtension::~sipQPyDesignerTaskMenuExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerTaskMenuExtension::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerTaskMenuExtension);
}

int sipQPyDesignerTaskMenuExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QPyDesignerTaskMenuExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerTaskMenuExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerTaskMenuExtension::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerTaskMenuExtension, _clname)) ? this :  ::QPyDesignerTaskMenuExtension::qt_metacast(_clname);
}

QList< ::QAction*> sipQPyDesignerTaskMenuExtension::taskActions() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QPyDesignerTaskMenuExtension,sipName_taskActions);

    if (!sipMeth)
        return QList< ::QAction*>();

    extern QList< ::QAction*> sipVH_QtDesigner_71(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_71(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QAction* sipQPyDesignerTaskMenuExtension::preferredEditAction() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_preferredEditAction);

    if (!sipMeth)
        return  ::QPyDesignerTaskMenuExtension::preferredEditAction();

    extern  ::QAction* sipVH_QtDesigner_72(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_72(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQPyDesignerTaskMenuExtension::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QPyDesignerTaskMenuExtension::event(a0);

    extern bool sipVH_QtDesigner_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtDesigner_30(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerTaskMenuExtension::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QPyDesignerTaskMenuExtension::eventFilter(a0,a1);

    extern bool sipVH_QtDesigner_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtDesigner_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQPyDesignerTaskMenuExtension::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QPyDesignerTaskMenuExtension::timerEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtDesigner_32(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QPyDesignerTaskMenuExtension::childEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtDesigner_33(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QPyDesignerTaskMenuExtension::customEvent(a0);
        return;
    }

    extern void sipVH_QtDesigner_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtDesigner_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QPyDesignerTaskMenuExtension::connectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QPyDesignerTaskMenuExtension::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtDesigner_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDesigner_34(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPyDesignerTaskMenuExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerTaskMenuExtension(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPyDesignerTaskMenuExtension *sipCpp = reinterpret_cast< ::QPyDesignerTaskMenuExtension *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    if (targetType == sipType_QDesignerTaskMenuExtension)
        return static_cast< ::QDesignerTaskMenuExtension *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerTaskMenuExtension(void *, int);}
static void release_QPyDesignerTaskMenuExtension(void *sipCppV, int)
{
     ::QPyDesignerTaskMenuExtension *sipCpp = reinterpret_cast< ::QPyDesignerTaskMenuExtension *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPyDesignerTaskMenuExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPyDesignerTaskMenuExtension(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPyDesignerTaskMenuExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerTaskMenuExtension *sipCpp = 0;

    {
         ::QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerTaskMenuExtension(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerTaskMenuExtension[] = {{5, 0, 0}, {19, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerTaskMenuExtension, "\1QPyDesignerTaskMenuExtension(QObject)");


static pyqt4ClassPluginDef plugin_QPyDesignerTaskMenuExtension = {
    & ::QPyDesignerTaskMenuExtension::staticMetaObject,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDesigner_QPyDesignerTaskMenuExtension = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0},
        &plugin_QPyDesignerTaskMenuExtension
    },
    {
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerTaskMenuExtension,
    -1,
    -1,
    supers_QPyDesignerTaskMenuExtension,
    0,
    init_type_QPyDesignerTaskMenuExtension,
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
    dealloc_QPyDesignerTaskMenuExtension,
    0,
    0,
    0,
    release_QPyDesignerTaskMenuExtension,
    cast_QPyDesignerTaskMenuExtension,
    0,
    0,
    0,
    0,
    0,
    0
};
