/*
 * Module code.
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

#include "sipAPIQtScriptTools.h"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtScriptTools/sipQtScriptToolscmodule.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 32 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtScriptTools/sipQtScriptToolscmodule.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 35 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtScriptTools/sipQtScriptToolscmodule.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 38 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtScriptTools/sipQtScriptToolscmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtScriptTools[] = {
    'Q', 'S', 'c', 'r', 'i', 'p', 't', 'E', 'n', 'g', 'i', 'n', 'e', 'D', 'e', 'b', 'u', 'g', 'g', 'e', 'r', ':', ':', 'D', 'e', 'b', 'u', 'g', 'g', 'e', 'r', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'Q', 'S', 'c', 'r', 'i', 'p', 't', 'E', 'n', 'g', 'i', 'n', 'e', 'D', 'e', 'b', 'u', 'g', 'g', 'e', 'r', ':', ':', 'D', 'e', 'b', 'u', 'g', 'g', 'e', 'r', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'Q', 'S', 'c', 'r', 'i', 'p', 't', 'E', 'n', 'g', 'i', 'n', 'e', 'D', 'e', 'b', 'u', 'g', 'g', 'e', 'r', ':', ':', 'D', 'e', 'b', 'u', 'g', 'g', 'e', 'r', 'S', 't', 'a', 't', 'e', 0,
    'F', 'i', 'n', 'd', 'P', 'r', 'e', 'v', 'i', 'o', 'u', 's', 'I', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'A', 'u', 't', 'o', 'S', 'h', 'o', 'w', 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'a', 'u', 't', 'o', 'S', 'h', 'o', 'w', 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'F', 'i', 'n', 'd', 'N', 'e', 'x', 't', 'I', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'C', 'l', 'e', 'a', 'r', 'D', 'e', 'b', 'u', 'g', 'O', 'u', 't', 'p', 'u', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'T', 'o', 'g', 'g', 'l', 'e', 'B', 'r', 'e', 'a', 'k', 'p', 'o', 'i', 'n', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', 'T', 'o', 'o', 'l', 'B', 'a', 'r', 0,
    'Q', 'S', 'c', 'r', 'i', 'p', 't', 'E', 'n', 'g', 'i', 'n', 'e', 'D', 'e', 'b', 'u', 'g', 'g', 'e', 'r', 0,
    'R', 'u', 'n', 'T', 'o', 'N', 'e', 'w', 'S', 'c', 'r', 'i', 'p', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'e', 'v', 'a', 'l', 'u', 'a', 't', 'i', 'o', 'n', 'S', 'u', 's', 'p', 'e', 'n', 'd', 'e', 'd', 0,
    'C', 'l', 'e', 'a', 'r', 'E', 'r', 'r', 'o', 'r', 'L', 'o', 'g', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'S', 'c', 'r', 'i', 'p', 't', 'T', 'o', 'o', 'l', 's', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', 'M', 'e', 'n', 'u', 0,
    'F', 'i', 'n', 'd', 'I', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'C', 'l', 'e', 'a', 'r', 'C', 'o', 'n', 's', 'o', 'l', 'e', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'e', 's', 'c', 'a', 'p', 'e', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'e', 'v', 'a', 'l', 'u', 'a', 't', 'i', 'o', 'n', 'R', 'e', 's', 'u', 'm', 'e', 'd', 0,
    'R', 'u', 'n', 'T', 'o', 'C', 'u', 'r', 's', 'o', 'r', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'D', 'e', 'b', 'u', 'g', 'O', 'u', 't', 'p', 'u', 't', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'B', 'r', 'e', 'a', 'k', 'p', 'o', 'i', 'n', 't', 's', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'C', 'o', 'd', 'e', 'F', 'i', 'n', 'd', 'e', 'r', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'I', 'n', 't', 'e', 'r', 'r', 'u', 'p', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'S', 'u', 's', 'p', 'e', 'n', 'd', 'e', 'd', 'S', 't', 'a', 't', 'e', 0,
    's', 't', 'a', 'n', 'd', 'a', 'r', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'G', 'o', 'T', 'o', 'L', 'i', 'n', 'e', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'S', 't', 'e', 'p', 'O', 'v', 'e', 'r', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'S', 't', 'e', 'p', 'I', 'n', 't', 'o', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'C', 'o', 'n', 't', 'i', 'n', 'u', 'e', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'E', 'r', 'r', 'o', 'r', 'L', 'o', 'g', 'W', 'i', 'd', 'g', 'e', 't', 0,
    's', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'S', 't', 'e', 'p', 'O', 'u', 't', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'S', 'c', 'r', 'i', 'p', 't', 's', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'C', 'o', 'n', 's', 'o', 'l', 'e', 'W', 'i', 'd', 'g', 'e', 't', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'R', 'u', 'n', 'n', 'i', 'n', 'g', 'S', 't', 'a', 't', 'e', 0,
    'L', 'o', 'c', 'a', 'l', 's', 'W', 'i', 'd', 'g', 'e', 't', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'S', 't', 'a', 'c', 'k', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 'T', 'e', 'x', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 'T', 'e', 'x', 't', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'C', 'o', 'd', 'e', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'o', 'w', 'n', 'e', 'r', 's', 'h', 'i', 'p', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'a', 't', 't', 'a', 'c', 'h', 'T', 'o', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'c', 'a', 'p', 't', 'i', 'o', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'y', 'R', 'o', 'u', 'n', 'd', 0,
    'x', 'R', 'o', 'u', 'n', 'd', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'w', 'i', 'd', 'g', 'e', 't', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'l', 'e', 'n', 'g', 't', 'h', 0,
    'd', 'e', 't', 'a', 'c', 'h', 0,
    'a', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'b', 'r', 'u', 's', 'h', 0,
    'h', 'i', 'n', 't', 's', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 't', 'e', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'p', 'e', 'n', 0,
    'e', 'n', 'd', 0,
    'p', 'o', 's', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
};

bool sipVH_QtScriptTools_5(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QEvent*a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "D", a0, sipType_QEvent, NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

bool sipVH_QtScriptTools_4(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QObject*a0, ::QEvent*a1)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "DD", a0, sipType_QObject, NULL, a1, sipType_QEvent, NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

void sipVH_QtScriptTools_3(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QTimerEvent*a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", a0, sipType_QTimerEvent, NULL);
}

void sipVH_QtScriptTools_2(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QChildEvent*a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", a0, sipType_QChildEvent, NULL);
}

void sipVH_QtScriptTools_1(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::QEvent*a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", a0, sipType_QEvent, NULL);
}

void sipVH_QtScriptTools_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const char*a0)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "S", a0);
}


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QScriptEngineDebugger(void **);}
static const sipTypeDef *sipSubClass_QScriptEngineDebugger(void **sipCppRet)
{
     ::QObject *sipCpp = reinterpret_cast< ::QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 32 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtScriptTools/qscriptenginedebugger.sip"
    if (sipCpp->inherits(sipName_QScriptEngineDebugger))
        sipType = sipType_QScriptEngineDebugger;
    else
        sipType = 0;
#line 222 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtScriptTools/sipQtScriptToolscmodule.cpp"

    return sipType;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QScriptEngineDebugger__DebuggerState, {0}, 0}, sipNameNr_DebuggerState, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QScriptEngineDebugger__DebuggerAction, {0}, 0}, sipNameNr_DebuggerAction, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QScriptEngineDebugger__DebuggerWidget, {0}, 0}, sipNameNr_DebuggerWidget, 0, NULL},
};


/*
 * This defines each type in this module.
 */
sipTypeDef *sipExportedTypes_QtScriptTools[] = {
    &sipTypeDef_QtScriptTools_QScriptEngineDebugger.ctd_base,
    &enumTypes[1].etd_base,
    &enumTypes[0].etd_base,
    &enumTypes[2].etd_base,
};


/* This defines the types that this module needs to import from QtCore. */
sipImportedTypeDef sipImportedTypes_QtScriptTools_QtCore[] = {
    {"QChildEvent"},
    {"QEvent"},
    {"QObject"},
    {"QTimerEvent"},
    {NULL}
};


/* This defines the types that this module needs to import from QtScript. */
sipImportedTypeDef sipImportedTypes_QtScriptTools_QtScript[] = {
    {"QScriptEngine"},
    {NULL}
};


/* This defines the types that this module needs to import from QtGui. */
sipImportedTypeDef sipImportedTypes_QtScriptTools_QtGui[] = {
    {"QAction"},
    {"QMainWindow"},
    {"QMenu"},
    {"QToolBar"},
    {"QWidget"},
    {NULL}
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", sipImportedTypes_QtScriptTools_QtCore, NULL, NULL},
    {"PyQt4.QtScript", sipImportedTypes_QtScriptTools_QtScript, NULL, NULL},
    {"PyQt4.QtGui", sipImportedTypes_QtScriptTools_QtGui, NULL, NULL},
    {NULL, NULL, NULL, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QScriptEngineDebugger, {2, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtScriptTools = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt4_QtScriptTools,
    0,
    sipStrings_QtScriptTools,
    importsTable,
    NULL,
    4,
    sipExportedTypes_QtScriptTools,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtScriptTools;

sip_qt_metaobject_func sip_QtScriptTools_qt_metaobject;
sip_qt_metacall_func sip_QtScriptTools_qt_metacall;
sip_qt_metacast_func sip_QtScriptTools_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtScriptTools
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtScriptTools
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.QtScriptTools",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt4_QtScriptTools, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt4_QtScriptTools), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtScriptTools = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtScriptTools = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtScriptTools == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtScriptTools,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtScriptTools_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtScriptTools_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtScriptTools_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtScriptTools_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtScriptTools,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    SIP_MODULE_RETURN(sipModule);
}
