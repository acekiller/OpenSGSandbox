/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class WIN32Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEWIN32WINDOWINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGWIN32WindowBase.h"
#include "OSGWIN32Window.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::WIN32Window
    The class for WIN32 windows.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var HWND            WIN32WindowBase::_sfHwnd
    
*/
/*! \var HDC             WIN32WindowBase::_sfHdc
    
*/
/*! \var HGLRC           WIN32WindowBase::_sfHglrc
    
*/

void WIN32WindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFHWND *(WIN32WindowBase::*GetSFHwndF)(void) const;

    GetSFHwndF GetSFHwnd = &WIN32WindowBase::getSFHwnd;
#endif

    pDesc = new SFHWND::Description(
        SFHWND::getClassType(),
        "hwnd",
        "",
        HwndFieldId, HwndFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&WIN32WindowBase::editSFHwnd),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHwnd));
#else
        reinterpret_cast<FieldGetMethodSig >(&WIN32WindowBase::getSFHwnd));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFHDC *(WIN32WindowBase::*GetSFHdcF)(void) const;

    GetSFHdcF GetSFHdc = &WIN32WindowBase::getSFHdc;
#endif

    pDesc = new SFHDC::Description(
        SFHDC::getClassType(),
        "hdc",
        "",
        HdcFieldId, HdcFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&WIN32WindowBase::editSFHdc),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHdc));
#else
        reinterpret_cast<FieldGetMethodSig >(&WIN32WindowBase::getSFHdc));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFHGLRC *(WIN32WindowBase::*GetSFHglrcF)(void) const;

    GetSFHglrcF GetSFHglrc = &WIN32WindowBase::getSFHglrc;
#endif

    pDesc = new SFHGLRC::Description(
        SFHGLRC::getClassType(),
        "hglrc",
        "",
        HglrcFieldId, HglrcFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&WIN32WindowBase::editSFHglrc),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHglrc));
#else
        reinterpret_cast<FieldGetMethodSig >(&WIN32WindowBase::getSFHglrc));
#endif

    oType.addInitialDesc(pDesc);
}


WIN32WindowBase::TypeObject WIN32WindowBase::_type(true,
    WIN32WindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &WIN32WindowBase::createEmpty,
    WIN32Window::initMethod,
    (InitalInsertDescFunc) &WIN32WindowBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"WIN32Window\"\n"
    "\tparent=\"Window\"\n"
    "\tlibrary=\"WindowWIN32\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "The class for WIN32 windows.\n"
    "\t<Field\n"
    "\t\tname=\"hwnd\"\n"
    "\t\ttype=\"HWND\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\theader=\"OSGWIN32WindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hdc\"\n"
    "\t\ttype=\"HDC\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\theader=\"OSGWIN32WindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hglrc\"\n"
    "\t\ttype=\"HGLRC\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\theader=\"OSGWIN32WindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The class for WIN32 windows.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &WIN32WindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &WIN32WindowBase::getType(void) const
{
    return _type;
}

UInt32 WIN32WindowBase::getContainerSize(void) const
{
    return sizeof(WIN32Window);
}

/*------------------------- decorator get ------------------------------*/


SFHWND *WIN32WindowBase::editSFHwnd(void)
{
    editSField(HwndFieldMask);

    return &_sfHwnd;
}

const SFHWND *WIN32WindowBase::getSFHwnd(void) const
{
    return &_sfHwnd;
}

#ifdef OSG_1_COMPAT
SFHWND              *WIN32WindowBase::getSFHwnd           (void)
{
    return this->editSFHwnd           ();
}
#endif

SFHDC *WIN32WindowBase::editSFHdc(void)
{
    editSField(HdcFieldMask);

    return &_sfHdc;
}

const SFHDC *WIN32WindowBase::getSFHdc(void) const
{
    return &_sfHdc;
}

#ifdef OSG_1_COMPAT
SFHDC               *WIN32WindowBase::getSFHdc            (void)
{
    return this->editSFHdc            ();
}
#endif

SFHGLRC *WIN32WindowBase::editSFHglrc(void)
{
    editSField(HglrcFieldMask);

    return &_sfHglrc;
}

const SFHGLRC *WIN32WindowBase::getSFHglrc(void) const
{
    return &_sfHglrc;
}

#ifdef OSG_1_COMPAT
SFHGLRC             *WIN32WindowBase::getSFHglrc          (void)
{
    return this->editSFHglrc          ();
}
#endif



/*------------------------------ access -----------------------------------*/

UInt32 WIN32WindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        returnValue += _sfHwnd.getBinSize();
    }
    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        returnValue += _sfHdc.getBinSize();
    }
    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        returnValue += _sfHglrc.getBinSize();
    }

    return returnValue;
}

void WIN32WindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        _sfHwnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        _sfHdc.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        _sfHglrc.copyToBin(pMem);
    }
}

void WIN32WindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HwndFieldMask & whichField))
    {
        _sfHwnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HdcFieldMask & whichField))
    {
        _sfHdc.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HglrcFieldMask & whichField))
    {
        _sfHglrc.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
WIN32WindowPtr WIN32WindowBase::createEmpty(void)
{
    WIN32WindowPtr returnValue;

    newPtr<WIN32Window>(returnValue);

    return returnValue;
}

FieldContainerPtr WIN32WindowBase::shallowCopy(void) const
{
    WIN32WindowPtr returnValue;

    newPtr(returnValue, dynamic_cast<const WIN32Window *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

WIN32WindowBase::WIN32WindowBase(void) :
    Inherited(),
    _sfHwnd                   (HWND(0)),
    _sfHdc                    (HDC(0)),
    _sfHglrc                  (HGLRC(0))
{
}

WIN32WindowBase::WIN32WindowBase(const WIN32WindowBase &source) :
    Inherited(source),
    _sfHwnd                   (source._sfHwnd                   ),
    _sfHdc                    (source._sfHdc                    ),
    _sfHglrc                  (source._sfHglrc                  )
{
}

/*-------------------------- destructors ----------------------------------*/

WIN32WindowBase::~WIN32WindowBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void WIN32WindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<WIN32WindowBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void WIN32WindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<WIN32WindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void WIN32WindowBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr WIN32WindowBase::createAspectCopy(void) const
{
    WIN32WindowPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const WIN32Window *>(this));

    return returnValue;
}
#endif

void WIN32WindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSField.ins"
#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<WIN32WindowPtr>::_type("WIN32WindowPtr", "WindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(WIN32WindowPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, WIN32WindowPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, WIN32WindowPtr);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGWIN32WINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGWIN32WINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGWIN32WINDOWFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
