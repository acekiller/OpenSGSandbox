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
 **     class Foreground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFOREGROUNDINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGForegroundBase.h"
#include "OSGForeground.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var bool ForegroundBase::_sfActive
    	Activate the grabber.

*/

void ForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFBool *(ForegroundBase::*GetSFActiveF)(void) const;

    GetSFActiveF GetSFActive = &ForegroundBase::getSFActive;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(), 
        "active", 
        "	Activate the grabber.\n",
        ActiveFieldId, ActiveFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ForegroundBase::editSFActive),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFActive));
#else
        reinterpret_cast<FieldGetMethodSig >(&ForegroundBase::getSFActive));
#endif

    oType.addInitialDesc(pDesc);
}


ForegroundBase::TypeObject ForegroundBase::_type(true,
    ForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL, 
    Foreground::initMethod,
    (InitalInsertDescFunc) &ForegroundBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
"\n"
"<FieldContainer\n"
"	name=\"Foreground\"\n"
"	parent=\"AttachmentContainer\"\n"
"	library=\"System\"\n"
"	pointerfieldtypes=\"both\"\n"
"	structure=\"abstract\"\n"
"	systemcomponent=\"true\"\n"
"	parentsystemcomponent=\"true\"\n"
">\n"
"Background is the base class for all background clearing. \n"
"	<Field\n"
"		name=\"active\"\n"
"		type=\"bool\"\n"
"		cardinality=\"single\"\n"
"		visibility=\"external\"\n"
"		defaultValue=\"true\"\n"
"		access=\"public\"\n"
"	>\n"
"	Activate the grabber.\n"
"	</Field>\n"
"</FieldContainer>\n"
,
    "Background is the base class for all background clearing. \n" 
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ForegroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ForegroundBase::getType(void) const 
{
    return _type;
} 

UInt32 ForegroundBase::getContainerSize(void) const 
{ 
    return sizeof(Foreground); 
}

/*------------------------- decorator get ------------------------------*/


SFBool *ForegroundBase::editSFActive(void)
{
    editSField(ActiveFieldMask);

    return &_sfActive;
}

const SFBool *ForegroundBase::getSFActive(void) const
{
    return &_sfActive;
}

#ifdef OSG_1_COMPAT
SFBool *ForegroundBase::getSFActive(void)
{
    return this->editSFActive();
}
#endif



/*------------------------------ access -----------------------------------*/

UInt32 ForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        returnValue += _sfActive.getBinSize();
    }

    return returnValue;
}

void ForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyToBin(pMem);
    }
}

void ForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyFromBin(pMem);
    }
}



/*------------------------- constructors ----------------------------------*/

ForegroundBase::ForegroundBase(void) :
    Inherited(),
    _sfActive(bool(true))
{
}

ForegroundBase::ForegroundBase(const ForegroundBase &source) :
    Inherited(source),
    _sfActive(source._sfActive)
{
}

/*-------------------------- destructors ----------------------------------*/

ForegroundBase::~ForegroundBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ForegroundBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ForegroundBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ForegroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


void ForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


#include "OSGSField.ins"
#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ForegroundPtr>::_type("ForegroundPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ForegroundPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, ForegroundPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, ForegroundPtr);

OSG_END_NAMESPACE


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
    static Char8 cvsid_hpp       [] = OSGFOREGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFOREGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFOREGROUNDFIELDS_HEADER_CVSID;
}
