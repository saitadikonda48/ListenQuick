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

#line 64 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/sip/QtCore/qglobal.sip"
#include <qglobal.h>
#line 29 "/Users/saitadikonda/Desktop/TestingFolder/PyQt4_gpl_mac-4.12/QtCore/sipQtCoreQSysInfo.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QSysInfo(void *, int);}
static void release_QSysInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QSysInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSysInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QSysInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::QSysInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::QSysInfo *>(sipSrc);
}


extern "C" {static void *array_QSysInfo(SIP_SSIZE_T);}
static void *array_QSysInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSysInfo[sipNrElem];
}


extern "C" {static void *copy_QSysInfo(const void *, SIP_SSIZE_T);}
static void *copy_QSysInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSysInfo(reinterpret_cast<const  ::QSysInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSysInfo(sipSimpleWrapper *);}
static void dealloc_QSysInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSysInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSysInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSysInfo();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QSysInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSysInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QSysInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

static sipEnumMemberDef enummembers_QSysInfo[] = {
    {sipName_BigEndian, static_cast<int>( ::QSysInfo::BigEndian), 206},
    {sipName_ByteOrder, static_cast<int>( ::QSysInfo::ByteOrder), 206},
    {sipName_LittleEndian, static_cast<int>( ::QSysInfo::LittleEndian), 206},
    {sipName_MV_10_0, static_cast<int>( ::QSysInfo::MV_10_0), 207},
    {sipName_MV_10_1, static_cast<int>( ::QSysInfo::MV_10_1), 207},
    {sipName_MV_10_10, static_cast<int>( ::QSysInfo::MV_10_10), 207},
    {sipName_MV_10_2, static_cast<int>( ::QSysInfo::MV_10_2), 207},
    {sipName_MV_10_3, static_cast<int>( ::QSysInfo::MV_10_3), 207},
    {sipName_MV_10_4, static_cast<int>( ::QSysInfo::MV_10_4), 207},
    {sipName_MV_10_5, static_cast<int>( ::QSysInfo::MV_10_5), 207},
    {sipName_MV_10_6, static_cast<int>( ::QSysInfo::MV_10_6), 207},
    {sipName_MV_10_7, static_cast<int>( ::QSysInfo::MV_10_7), 207},
    {sipName_MV_10_8, static_cast<int>( ::QSysInfo::MV_10_8), 207},
    {sipName_MV_10_9, static_cast<int>( ::QSysInfo::MV_10_9), 207},
    {sipName_MV_9, static_cast<int>( ::QSysInfo::MV_9), 207},
    {sipName_MV_CHEETAH, static_cast<int>( ::QSysInfo::MV_CHEETAH), 207},
    {sipName_MV_JAGUAR, static_cast<int>( ::QSysInfo::MV_JAGUAR), 207},
    {sipName_MV_LEOPARD, static_cast<int>( ::QSysInfo::MV_LEOPARD), 207},
    {sipName_MV_LION, static_cast<int>( ::QSysInfo::MV_LION), 207},
    {sipName_MV_MAVERICKS, static_cast<int>( ::QSysInfo::MV_MAVERICKS), 207},
    {sipName_MV_MOUNTAINLION, static_cast<int>( ::QSysInfo::MV_MOUNTAINLION), 207},
    {sipName_MV_PANTHER, static_cast<int>( ::QSysInfo::MV_PANTHER), 207},
    {sipName_MV_PUMA, static_cast<int>( ::QSysInfo::MV_PUMA), 207},
    {sipName_MV_SNOWLEOPARD, static_cast<int>( ::QSysInfo::MV_SNOWLEOPARD), 207},
    {sipName_MV_TIGER, static_cast<int>( ::QSysInfo::MV_TIGER), 207},
    {sipName_MV_Unknown, static_cast<int>( ::QSysInfo::MV_Unknown), 207},
    {sipName_MV_YOSEMITE, static_cast<int>( ::QSysInfo::MV_YOSEMITE), 207},
    {sipName_WordSize, static_cast<int>( ::QSysInfo::WordSize), 208},
};


extern "C" {static PyObject *varget_QSysInfo_MacintoshVersion(void *, PyObject *, PyObject *);}
static PyObject *varget_QSysInfo_MacintoshVersion(void *, PyObject *, PyObject *)
{
     ::QSysInfo::MacVersion sipVal;

    sipVal =  ::QSysInfo::MacintoshVersion;

    return sipConvertFromEnum(sipVal, sipType_QSysInfo_MacVersion);
}

sipVariableDef variables_QSysInfo[] = {
    {ClassVariable, sipName_MacintoshVersion, (PyMethodDef *)varget_QSysInfo_MacintoshVersion, NULL, NULL, NULL},
};

PyDoc_STRVAR(doc_QSysInfo, "\1QSysInfo()\n"
    "QSysInfo(QSysInfo)");


static pyqt4ClassPluginDef plugin_QSysInfo = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QSysInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSysInfo,
        {0},
        &plugin_QSysInfo
    },
    {
        sipNameNr_QSysInfo,
        {0, 0, 1},
        0, 0,
        28, enummembers_QSysInfo,
        1, variables_QSysInfo,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSysInfo,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSysInfo,
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
    dealloc_QSysInfo,
    assign_QSysInfo,
    array_QSysInfo,
    copy_QSysInfo,
    release_QSysInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};