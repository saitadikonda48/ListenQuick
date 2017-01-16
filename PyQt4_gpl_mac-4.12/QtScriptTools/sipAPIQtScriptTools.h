/*
 * Internal module API header file.
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

#ifndef _QtScriptToolsAPI_H
#define _QtScriptToolsAPI_H

#include <sip.h>

#include <QMetaType>
#include <QThread>

/* These are the qualifiers that are enabled. */
#define SIP_FEATURE_PyQt_Process
#define SIP_FEATURE_PyQt_NotBootstrapped
#define SIP_FEATURE_PyQt_Deprecated_5_0
#define SIP_FEATURE_PyQt_NoOpenGLES
#define SIP_FEATURE_PyQt_RawFont
#define SIP_FEATURE_PyQt_SystemTrayIcon
#define SIP_FEATURE_PyQt_PrintPreviewDialog
#define SIP_FEATURE_PyQt_PrintPreviewWidget
#define SIP_FEATURE_PyQt_Printer
#define SIP_FEATURE_PyQt_PrintDialog
#define SIP_FEATURE_PyQt_qreal_double
#define SIP_FEATURE_PyQt_SizeGrip
#define SIP_FEATURE_PyQt_OpenSSL
#define SIP_FEATURE_Py_DateTime
#define SIP_FEATURE_PyQt_NoQtPrintRangeBug
#define SIP_FEATURE_PyQt_WhatsThis
#define SIP_FEATURE_PyQt_ToolTip
#define SIP_FEATURE_PyQt_StatusTip
#define SIP_FEATURE_PyQt_SessionManager
#define SIP_FEATURE_PyQt_Accessibility
#define SIP_PLATFORM_WS_MACX
#define SIP_TIMELINE_Qt_4_8_7


/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_QScriptEngineDebugger__DebuggerAction 0
#define sipName_QScriptEngineDebugger__DebuggerAction &sipStrings_QtScriptTools[0]
#define sipNameNr_QScriptEngineDebugger__DebuggerWidget 38
#define sipName_QScriptEngineDebugger__DebuggerWidget &sipStrings_QtScriptTools[38]
#define sipNameNr_QScriptEngineDebugger__DebuggerState 76
#define sipName_QScriptEngineDebugger__DebuggerState &sipStrings_QtScriptTools[76]
#define sipNameNr_FindPreviousInScriptAction 113
#define sipName_FindPreviousInScriptAction &sipStrings_QtScriptTools[113]
#define sipNameNr_setAutoShowStandardWindow 140
#define sipName_setAutoShowStandardWindow &sipStrings_QtScriptTools[140]
#define sipNameNr_autoShowStandardWindow 166
#define sipName_autoShowStandardWindow &sipStrings_QtScriptTools[166]
#define sipNameNr_FindNextInScriptAction 189
#define sipName_FindNextInScriptAction &sipStrings_QtScriptTools[189]
#define sipNameNr_ClearDebugOutputAction 212
#define sipName_ClearDebugOutputAction &sipStrings_QtScriptTools[212]
#define sipNameNr_ToggleBreakpointAction 235
#define sipName_ToggleBreakpointAction &sipStrings_QtScriptTools[235]
#define sipNameNr_createStandardToolBar 258
#define sipName_createStandardToolBar &sipStrings_QtScriptTools[258]
#define sipNameNr_QScriptEngineDebugger 280
#define sipName_QScriptEngineDebugger &sipStrings_QtScriptTools[280]
#define sipNameNr_RunToNewScriptAction 302
#define sipName_RunToNewScriptAction &sipStrings_QtScriptTools[302]
#define sipNameNr_evaluationSuspended 323
#define sipName_evaluationSuspended &sipStrings_QtScriptTools[323]
#define sipNameNr_ClearErrorLogAction 343
#define sipName_ClearErrorLogAction &sipStrings_QtScriptTools[343]
#define sipNameNr_defaultButtonNumber 363
#define sipName_defaultButtonNumber &sipStrings_QtScriptTools[363]
#define sipNameNr_PyQt4_QtScriptTools 383
#define sipName_PyQt4_QtScriptTools &sipStrings_QtScriptTools[383]
#define sipNameNr_createStandardMenu 403
#define sipName_createStandardMenu &sipStrings_QtScriptTools[403]
#define sipNameNr_FindInScriptAction 422
#define sipName_FindInScriptAction &sipStrings_QtScriptTools[422]
#define sipNameNr_ClearConsoleAction 441
#define sipName_ClearConsoleAction &sipStrings_QtScriptTools[441]
#define sipNameNr_escapeButtonNumber 460
#define sipName_escapeButtonNumber &sipStrings_QtScriptTools[460]
#define sipNameNr_evaluationResumed 479
#define sipName_evaluationResumed &sipStrings_QtScriptTools[479]
#define sipNameNr_RunToCursorAction 497
#define sipName_RunToCursorAction &sipStrings_QtScriptTools[497]
#define sipNameNr_DebugOutputWidget 515
#define sipName_DebugOutputWidget &sipStrings_QtScriptTools[515]
#define sipNameNr_BreakpointsWidget 533
#define sipName_BreakpointsWidget &sipStrings_QtScriptTools[533]
#define sipNameNr_CodeFinderWidget 551
#define sipName_CodeFinderWidget &sipStrings_QtScriptTools[551]
#define sipNameNr_disconnectNotify 568
#define sipName_disconnectNotify &sipStrings_QtScriptTools[568]
#define sipNameNr_InterruptAction 585
#define sipName_InterruptAction &sipStrings_QtScriptTools[585]
#define sipNameNr_aspectRatioMode 601
#define sipName_aspectRatioMode &sipStrings_QtScriptTools[601]
#define sipNameNr_deviceTransform 617
#define sipName_deviceTransform &sipStrings_QtScriptTools[617]
#define sipNameNr_SuspendedState 633
#define sipName_SuspendedState &sipStrings_QtScriptTools[633]
#define sipNameNr_standardWindow 648
#define sipName_standardWindow &sipStrings_QtScriptTools[648]
#define sipNameNr_GoToLineAction 663
#define sipName_GoToLineAction &sipStrings_QtScriptTools[663]
#define sipNameNr_StepOverAction 678
#define sipName_StepOverAction &sipStrings_QtScriptTools[678]
#define sipNameNr_StepIntoAction 693
#define sipName_StepIntoAction &sipStrings_QtScriptTools[693]
#define sipNameNr_ContinueAction 708
#define sipName_ContinueAction &sipStrings_QtScriptTools[708]
#define sipNameNr_DebuggerAction 23
#define sipName_DebuggerAction &sipStrings_QtScriptTools[23]
#define sipNameNr_ErrorLogWidget 723
#define sipName_ErrorLogWidget &sipStrings_QtScriptTools[723]
#define sipNameNr_DebuggerWidget 61
#define sipName_DebuggerWidget &sipStrings_QtScriptTools[61]
#define sipNameNr_selectedFilter 738
#define sipName_selectedFilter &sipStrings_QtScriptTools[738]
#define sipNameNr_DebuggerState 99
#define sipName_DebuggerState &sipStrings_QtScriptTools[99]
#define sipNameNr_StepOutAction 753
#define sipName_StepOutAction &sipStrings_QtScriptTools[753]
#define sipNameNr_ScriptsWidget 767
#define sipName_ScriptsWidget &sipStrings_QtScriptTools[767]
#define sipNameNr_ConsoleWidget 781
#define sipName_ConsoleWidget &sipStrings_QtScriptTools[781]
#define sipNameNr_transformMode 795
#define sipName_transformMode &sipStrings_QtScriptTools[795]
#define sipNameNr_connectNotify 571
#define sipName_connectNotify &sipStrings_QtScriptTools[571]
#define sipNameNr_RunningState 809
#define sipName_RunningState &sipStrings_QtScriptTools[809]
#define sipNameNr_LocalsWidget 822
#define sipName_LocalsWidget &sipStrings_QtScriptTools[822]
#define sipNameNr_sourceRegion 835
#define sipName_sourceRegion &sipStrings_QtScriptTools[835]
#define sipNameNr_targetOffset 848
#define sipName_targetOffset &sipStrings_QtScriptTools[848]
#define sipNameNr_boundingRect 861
#define sipName_boundingRect &sipStrings_QtScriptTools[861]
#define sipNameNr_midLineWidth 874
#define sipName_midLineWidth &sipStrings_QtScriptTools[874]
#define sipNameNr_StackWidget 887
#define sipName_StackWidget &sipStrings_QtScriptTools[887]
#define sipNameNr_button2Text 899
#define sipName_button2Text &sipStrings_QtScriptTools[899]
#define sipNameNr_button1Text 911
#define sipName_button1Text &sipStrings_QtScriptTools[911]
#define sipNameNr_customEvent 923
#define sipName_customEvent &sipStrings_QtScriptTools[923]
#define sipNameNr_eventFilter 935
#define sipName_eventFilter &sipStrings_QtScriptTools[935]
#define sipNameNr_CodeWidget 947
#define sipName_CodeWidget &sipStrings_QtScriptTools[947]
#define sipNameNr_fieldWidth 958
#define sipName_fieldWidth &sipStrings_QtScriptTools[958]
#define sipNameNr_childEvent 969
#define sipName_childEvent &sipStrings_QtScriptTools[969]
#define sipNameNr_timerEvent 980
#define sipName_timerEvent &sipStrings_QtScriptTools[980]
#define sipNameNr_ownership 991
#define sipName_ownership &sipStrings_QtScriptTools[991]
#define sipNameNr_operation 1001
#define sipName_operation &sipStrings_QtScriptTools[1001]
#define sipNameNr_lineWidth 1011
#define sipName_lineWidth &sipStrings_QtScriptTools[1011]
#define sipNameNr_directory 1021
#define sipName_directory &sipStrings_QtScriptTools[1021]
#define sipNameNr_alignment 1031
#define sipName_alignment &sipStrings_QtScriptTools[1031]
#define sipNameNr_precision 1041
#define sipName_precision &sipStrings_QtScriptTools[1041]
#define sipNameNr_attachTo 1051
#define sipName_attachTo &sipStrings_QtScriptTools[1051]
#define sipNameNr_fillRule 1060
#define sipName_fillRule &sipStrings_QtScriptTools[1060]
#define sipNameNr_tabArray 1069
#define sipName_tabArray &sipStrings_QtScriptTools[1069]
#define sipNameNr_tabStops 1078
#define sipName_tabStops &sipStrings_QtScriptTools[1078]
#define sipNameNr_userData 1087
#define sipName_userData &sipStrings_QtScriptTools[1087]
#define sipNameNr_shortcut 1096
#define sipName_shortcut &sipStrings_QtScriptTools[1096]
#define sipNameNr_behavior 1105
#define sipName_behavior &sipStrings_QtScriptTools[1105]
#define sipNameNr_position 1114
#define sipName_position &sipStrings_QtScriptTools[1114]
#define sipNameNr_fillChar 1123
#define sipName_fillChar &sipStrings_QtScriptTools[1123]
#define sipNameNr_exposed 1132
#define sipName_exposed &sipStrings_QtScriptTools[1132]
#define sipNameNr_button2 1140
#define sipName_button2 &sipStrings_QtScriptTools[1140]
#define sipNameNr_button1 1148
#define sipName_button1 &sipStrings_QtScriptTools[1148]
#define sipNameNr_quality 1156
#define sipName_quality &sipStrings_QtScriptTools[1156]
#define sipNameNr_yMargin 1164
#define sipName_yMargin &sipStrings_QtScriptTools[1164]
#define sipNameNr_xMargin 1172
#define sipName_xMargin &sipStrings_QtScriptTools[1172]
#define sipNameNr_caption 1180
#define sipName_caption &sipStrings_QtScriptTools[1180]
#define sipNameNr_options 1188
#define sipName_options &sipStrings_QtScriptTools[1188]
#define sipNameNr_filters 1196
#define sipName_filters &sipStrings_QtScriptTools[1196]
#define sipNameNr_yRound 1204
#define sipName_yRound &sipStrings_QtScriptTools[1204]
#define sipNameNr_xRound 1211
#define sipName_xRound &sipStrings_QtScriptTools[1211]
#define sipNameNr_layers 1218
#define sipName_layers &sipStrings_QtScriptTools[1218]
#define sipNameNr_sunken 1225
#define sipName_sunken &sipStrings_QtScriptTools[1225]
#define sipNameNr_option 1232
#define sipName_option &sipStrings_QtScriptTools[1232]
#define sipNameNr_widget 1239
#define sipName_widget &sipStrings_QtScriptTools[1239]
#define sipNameNr_proper 1246
#define sipName_proper &sipStrings_QtScriptTools[1246]
#define sipNameNr_value9 1253
#define sipName_value9 &sipStrings_QtScriptTools[1253]
#define sipNameNr_value8 1260
#define sipName_value8 &sipStrings_QtScriptTools[1260]
#define sipNameNr_value7 1267
#define sipName_value7 &sipStrings_QtScriptTools[1267]
#define sipNameNr_value6 1274
#define sipName_value6 &sipStrings_QtScriptTools[1274]
#define sipNameNr_value5 1281
#define sipName_value5 &sipStrings_QtScriptTools[1281]
#define sipNameNr_value4 1288
#define sipName_value4 &sipStrings_QtScriptTools[1288]
#define sipNameNr_value3 1295
#define sipName_value3 &sipStrings_QtScriptTools[1295]
#define sipNameNr_value2 1302
#define sipName_value2 &sipStrings_QtScriptTools[1302]
#define sipNameNr_value1 1309
#define sipName_value1 &sipStrings_QtScriptTools[1309]
#define sipNameNr_value0 1316
#define sipName_value0 &sipStrings_QtScriptTools[1316]
#define sipNameNr_symbol 1323
#define sipName_symbol &sipStrings_QtScriptTools[1323]
#define sipNameNr_suffix 1330
#define sipName_suffix &sipStrings_QtScriptTools[1330]
#define sipNameNr_prefix 1337
#define sipName_prefix &sipStrings_QtScriptTools[1337]
#define sipNameNr_format 1344
#define sipName_format &sipStrings_QtScriptTools[1344]
#define sipNameNr_length 1351
#define sipName_length &sipStrings_QtScriptTools[1351]
#define sipNameNr_detach 1358
#define sipName_detach &sipStrings_QtScriptTools[1358]
#define sipNameNr_action 1365
#define sipName_action &sipStrings_QtScriptTools[1365]
#define sipNameNr_column 1372
#define sipName_column &sipStrings_QtScriptTools[1372]
#define sipNameNr_filter 1379
#define sipName_filter &sipStrings_QtScriptTools[1379]
#define sipNameNr_parent 1386
#define sipName_parent &sipStrings_QtScriptTools[1386]
#define sipNameNr_brush 1393
#define sipName_brush &sipStrings_QtScriptTools[1393]
#define sipNameNr_hints 1399
#define sipName_hints &sipStrings_QtScriptTools[1399]
#define sipNameNr_flags 1405
#define sipName_flags &sipStrings_QtScriptTools[1405]
#define sipNameNr_event 1411
#define sipName_event &sipStrings_QtScriptTools[1411]
#define sipNameNr_msecs 1417
#define sipName_msecs &sipStrings_QtScriptTools[1417]
#define sipNameNr_state 1423
#define sipName_state &sipStrings_QtScriptTools[1423]
#define sipNameNr_mode 1429
#define sipName_mode &sipStrings_QtScriptTools[1429]
#define sipNameNr_name 1434
#define sipName_name &sipStrings_QtScriptTools[1434]
#define sipNameNr_base 1439
#define sipName_base &sipStrings_QtScriptTools[1439]
#define sipNameNr_fill 1444
#define sipName_fill &sipStrings_QtScriptTools[1444]
#define sipNameNr_from 1449
#define sipName_from &sipStrings_QtScriptTools[1449]
#define sipNameNr_sort 1454
#define sipName_sort &sipStrings_QtScriptTools[1454]
#define sipNameNr_pen 1459
#define sipName_pen &sipStrings_QtScriptTools[1459]
#define sipNameNr_end 1463
#define sipName_end &sipStrings_QtScriptTools[1463]
#define sipNameNr_pos 1467
#define sipName_pos &sipStrings_QtScriptTools[1467]
#define sipNameNr_sw 1471
#define sipName_sw &sipStrings_QtScriptTools[1471]
#define sipNameNr_sy 1474
#define sipName_sy &sipStrings_QtScriptTools[1474]
#define sipNameNr_sx 1477
#define sipName_sx &sipStrings_QtScriptTools[1477]
#define sipNameNr_sh 1396
#define sipName_sh &sipStrings_QtScriptTools[1396]
#define sipNameNr_cs 1420
#define sipName_cs &sipStrings_QtScriptTools[1420]

#define sipMalloc                   sipAPI_QtScriptTools->api_malloc
#define sipFree                     sipAPI_QtScriptTools->api_free
#define sipBuildResult              sipAPI_QtScriptTools->api_build_result
#define sipCallMethod               sipAPI_QtScriptTools->api_call_method
#define sipCallProcedureMethod      sipAPI_QtScriptTools->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_QtScriptTools->api_call_error_handler
#define sipParseResultEx            sipAPI_QtScriptTools->api_parse_result_ex
#define sipParseResult              sipAPI_QtScriptTools->api_parse_result
#define sipParseArgs                sipAPI_QtScriptTools->api_parse_args
#define sipParseKwdArgs             sipAPI_QtScriptTools->api_parse_kwd_args
#define sipParsePair                sipAPI_QtScriptTools->api_parse_pair
#define sipCommonDtor               sipAPI_QtScriptTools->api_common_dtor
#define sipConvertFromSequenceIndex sipAPI_QtScriptTools->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_QtScriptTools->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_QtScriptTools->api_convert_to_void_ptr
#define sipAddException             sipAPI_QtScriptTools->api_add_exception
#define sipNoFunction               sipAPI_QtScriptTools->api_no_function
#define sipNoMethod                 sipAPI_QtScriptTools->api_no_method
#define sipAbstractMethod           sipAPI_QtScriptTools->api_abstract_method
#define sipBadClass                 sipAPI_QtScriptTools->api_bad_class
#define sipBadCatcherResult         sipAPI_QtScriptTools->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_QtScriptTools->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_QtScriptTools->api_bad_operator_arg
#define sipTrace                    sipAPI_QtScriptTools->api_trace
#define sipTransferBack             sipAPI_QtScriptTools->api_transfer_back
#define sipTransferTo               sipAPI_QtScriptTools->api_transfer_to
#define sipTransferBreak            sipAPI_QtScriptTools->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_QtScriptTools->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_QtScriptTools->api_wrapper_type
#define sipWrapperType_Type         sipAPI_QtScriptTools->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_QtScriptTools->api_voidptr_type
#define sipGetPyObject              sipAPI_QtScriptTools->api_get_pyobject
#define sipGetAddress               sipAPI_QtScriptTools->api_get_address
#define sipGetMixinAddress          sipAPI_QtScriptTools->api_get_mixin_address
#define sipGetCppPtr                sipAPI_QtScriptTools->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_QtScriptTools->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_QtScriptTools->api_is_py_method
#define sipCallHook                 sipAPI_QtScriptTools->api_call_hook
#define sipEndThread                sipAPI_QtScriptTools->api_end_thread
#define sipConnectRx                sipAPI_QtScriptTools->api_connect_rx
#define sipDisconnectRx             sipAPI_QtScriptTools->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_QtScriptTools->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_QtScriptTools->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_QtScriptTools->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_QtScriptTools->api_add_type_instance
#define sipFreeSipslot              sipAPI_QtScriptTools->api_free_sipslot
#define sipSameSlot                 sipAPI_QtScriptTools->api_same_slot
#define sipPySlotExtend             sipAPI_QtScriptTools->api_pyslot_extend
#define sipConvertRx                sipAPI_QtScriptTools->api_convert_rx
#define sipAddDelayedDtor           sipAPI_QtScriptTools->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_QtScriptTools->api_can_convert_to_type
#define sipConvertToType            sipAPI_QtScriptTools->api_convert_to_type
#define sipForceConvertToType       sipAPI_QtScriptTools->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_QtScriptTools->api_can_convert_to_enum
#define sipReleaseType              sipAPI_QtScriptTools->api_release_type
#define sipConvertFromType          sipAPI_QtScriptTools->api_convert_from_type
#define sipConvertFromNewType       sipAPI_QtScriptTools->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_QtScriptTools->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_QtScriptTools->api_convert_from_enum
#define sipGetState                 sipAPI_QtScriptTools->api_get_state
#define sipLong_AsUnsignedLong      sipAPI_QtScriptTools->api_long_as_unsigned_long
#define sipExportSymbol             sipAPI_QtScriptTools->api_export_symbol
#define sipImportSymbol             sipAPI_QtScriptTools->api_import_symbol
#define sipFindType                 sipAPI_QtScriptTools->api_find_type
#define sipFindNamedEnum            sipAPI_QtScriptTools->api_find_named_enum
#define sipBytes_AsChar             sipAPI_QtScriptTools->api_bytes_as_char
#define sipBytes_AsString           sipAPI_QtScriptTools->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_QtScriptTools->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_QtScriptTools->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_QtScriptTools->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_QtScriptTools->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_QtScriptTools->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_QtScriptTools->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_QtScriptTools->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_QtScriptTools->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_QtScriptTools->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_QtScriptTools->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_QtScriptTools->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_QtScriptTools->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_QtScriptTools->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_QtScriptTools->api_save_slot
#define sipClearAnySlotReference    sipAPI_QtScriptTools->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_QtScriptTools->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->type->td_cname)
#define sipDeprecated               sipAPI_QtScriptTools->api_deprecated
#define sipGetReference             sipAPI_QtScriptTools->api_get_reference
#define sipKeepReference            sipAPI_QtScriptTools->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_QtScriptTools->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_QtScriptTools->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_QtScriptTools->api_type_from_py_type_object
#define sipTypeScope                sipAPI_QtScriptTools->api_type_scope
#define sipResolveTypedef           sipAPI_QtScriptTools->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_QtScriptTools->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_QtScriptTools->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_QtScriptTools->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_QtScriptTools->api_enable_autoconversion
#define sipInitMixin                sipAPI_QtScriptTools->api_init_mixin
#define sipExportModule             sipAPI_QtScriptTools->api_export_module
#define sipInitModule               sipAPI_QtScriptTools->api_init_module
#define sipGetInterpreter           sipAPI_QtScriptTools->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_QtScriptTools->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_QtScriptTools->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_QtScriptTools->api_get_type_user_data
#define sipPyTypeDict               sipAPI_QtScriptTools->api_py_type_dict
#define sipPyTypeName               sipAPI_QtScriptTools->api_py_type_name
#define sipGetCFunction             sipAPI_QtScriptTools->api_get_c_function
#define sipGetMethod                sipAPI_QtScriptTools->api_get_method
#define sipFromMethod               sipAPI_QtScriptTools->api_from_method
#define sipGetDate                  sipAPI_QtScriptTools->api_get_date
#define sipFromDate                 sipAPI_QtScriptTools->api_from_date
#define sipGetDateTime              sipAPI_QtScriptTools->api_get_datetime
#define sipFromDateTime             sipAPI_QtScriptTools->api_from_datetime
#define sipGetTime                  sipAPI_QtScriptTools->api_get_time
#define sipFromTime                 sipAPI_QtScriptTools->api_from_time
#define sipIsUserType               sipAPI_QtScriptTools->api_is_user_type
#define sipGetFrame                 sipAPI_QtScriptTools->api_get_frame
#define sipCheckPluginForType       sipAPI_QtScriptTools->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_QtScriptTools->api_unicode_new
#define sipUnicodeWrite             sipAPI_QtScriptTools->api_unicode_write
#define sipUnicodeData              sipAPI_QtScriptTools->api_unicode_data
#define sipGetBufferInfo            sipAPI_QtScriptTools->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_QtScriptTools->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_QtScriptTools->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_QtScriptTools->api_is_derived_class
#define sipGetUserObject            sipAPI_QtScriptTools->api_get_user_object
#define sipSetUserObject            sipAPI_QtScriptTools->api_set_user_object

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_QtScriptTools->api_map_string_to_class
#define sipMapIntToClass            sipAPI_QtScriptTools->api_map_int_to_class
#define sipFindClass                sipAPI_QtScriptTools->api_find_class
#define sipFindMappedType           sipAPI_QtScriptTools->api_find_mapped_type
#define sipConvertToArray           sipAPI_QtScriptTools->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_QtScriptTools->api_convert_to_typed_array
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_QtScriptTools->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->type)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->type, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->type, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->type, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->type, (t))

/* The strings used by this module. */
extern const char sipStrings_QtScriptTools[];

#define sipType_QScriptEngineDebugger sipExportedTypes_QtScriptTools[0]
#define sipClass_QScriptEngineDebugger sipExportedTypes_QtScriptTools[0]->u.td_wrapper_type

#define sipType_QScriptEngineDebugger_DebuggerState sipExportedTypes_QtScriptTools[2]
#define sipEnum_QScriptEngineDebugger_DebuggerState sipExportedTypes_QtScriptTools[2]->u.td_py_type

#define sipType_QScriptEngineDebugger_DebuggerAction sipExportedTypes_QtScriptTools[1]
#define sipEnum_QScriptEngineDebugger_DebuggerAction sipExportedTypes_QtScriptTools[1]->u.td_py_type

#define sipType_QScriptEngineDebugger_DebuggerWidget sipExportedTypes_QtScriptTools[3]
#define sipEnum_QScriptEngineDebugger_DebuggerWidget sipExportedTypes_QtScriptTools[3]->u.td_py_type

extern sipClassTypeDef sipTypeDef_QtScriptTools_QScriptEngineDebugger;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_QtScriptTools;
extern sipExportedModuleDef sipModuleAPI_QtScriptTools;
extern sipTypeDef *sipExportedTypes_QtScriptTools[];

#define sipType_QObject sipImportedTypes_QtScriptTools_QtCore[2].it_td
#define sipClass_QObject sipImportedTypes_QtScriptTools_QtCore[2].it_td->u.td_wrapper_type

#define sipType_QEvent sipImportedTypes_QtScriptTools_QtCore[1].it_td
#define sipClass_QEvent sipImportedTypes_QtScriptTools_QtCore[1].it_td->u.td_wrapper_type

#define sipType_QTimerEvent sipImportedTypes_QtScriptTools_QtCore[3].it_td
#define sipClass_QTimerEvent sipImportedTypes_QtScriptTools_QtCore[3].it_td->u.td_wrapper_type

#define sipType_QChildEvent sipImportedTypes_QtScriptTools_QtCore[0].it_td
#define sipClass_QChildEvent sipImportedTypes_QtScriptTools_QtCore[0].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes_QtScriptTools_QtCore[];

#define sipType_QScriptEngine sipImportedTypes_QtScriptTools_QtScript[0].it_td
#define sipClass_QScriptEngine sipImportedTypes_QtScriptTools_QtScript[0].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes_QtScriptTools_QtScript[];

#define sipType_QWidget sipImportedTypes_QtScriptTools_QtGui[4].it_td
#define sipClass_QWidget sipImportedTypes_QtScriptTools_QtGui[4].it_td->u.td_wrapper_type

#define sipType_QAction sipImportedTypes_QtScriptTools_QtGui[0].it_td
#define sipClass_QAction sipImportedTypes_QtScriptTools_QtGui[0].it_td->u.td_wrapper_type

#define sipType_QMainWindow sipImportedTypes_QtScriptTools_QtGui[1].it_td
#define sipClass_QMainWindow sipImportedTypes_QtScriptTools_QtGui[1].it_td->u.td_wrapper_type

#define sipType_QMenu sipImportedTypes_QtScriptTools_QtGui[2].it_td
#define sipClass_QMenu sipImportedTypes_QtScriptTools_QtGui[2].it_td->u.td_wrapper_type

#define sipType_QToolBar sipImportedTypes_QtScriptTools_QtGui[3].it_td
#define sipClass_QToolBar sipImportedTypes_QtScriptTools_QtGui[3].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes_QtScriptTools_QtGui[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_QtScriptTools_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_QtScriptTools_qt_metacall;

typedef int (*sip_qt_metacast_func)(sipSimpleWrapper *, sipTypeDef *, const char *);
extern sip_qt_metacast_func sip_QtScriptTools_qt_metacast;

#endif