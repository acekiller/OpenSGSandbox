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
 **     class DepthClearBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEPTHCLEARBACKGROUNDINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGDepthClearBackgroundBase.h"
#include "OSGDepthClearBackground.h"

OSG_USING_NAMESPACE


DepthClearBackgroundBase::TypeObject DepthClearBackgroundBase::_type(true,
    DepthClearBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &DepthClearBackgroundBase::createEmpty,
    DepthClearBackground::initMethod,
    NULL,
    false,
    "<?xml version=\"1.0\" ?>\n"
"\n"
"<FieldContainer\n"
"	name=\"DepthClearBackground\"\n"
"	parent=\"Background\"\n"
"	library=\"Window\"\n"
"	structure=\"concrete\"\n"
"	pointerfieldtypes=\"single\"\n"
"	systemcomponent=\"true\"\n"
"	parentsystemcomponent=\"true\"\n"
">\n"
"</FieldContainer>\n"
,
    "" 
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DepthClearBackgroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DepthClearBackgroundBase::getType(void) const 
{
    return _type;
} 

UInt32 DepthClearBackgroundBase::getContainerSize(void) const 
{ 
    return sizeof(DepthClearBackground); 
}

/*------------------------- decorator get ------------------------------*/




/*------------------------------ access -----------------------------------*/

UInt32 DepthClearBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void DepthClearBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void DepthClearBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create an empty new instance of the class, do not copy the prototype
DepthClearBackgroundPtr DepthClearBackgroundBase::createEmpty(void) 
{ 
    DepthClearBackgroundPtr returnValue; 
    
    newPtr<DepthClearBackground>(returnValue); 

    return returnValue; 
}

FieldContainerPtr DepthClearBackgroundBase::shallowCopy(void) const 
{ 
    DepthClearBackgroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DepthClearBackground *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

DepthClearBackgroundBase::DepthClearBackgroundBase(void) :
    Inherited()
{
}

DepthClearBackgroundBase::DepthClearBackgroundBase(const DepthClearBackgroundBase &source) :
    Inherited(source)
{
}

/*-------------------------- destructors ----------------------------------*/

DepthClearBackgroundBase::~DepthClearBackgroundBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void DepthClearBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<DepthClearBackgroundBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void DepthClearBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<DepthClearBackgroundBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void DepthClearBackgroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr DepthClearBackgroundBase::createAspectCopy(void) const
{
    DepthClearBackgroundPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const DepthClearBackground *>(this)); 

    return returnValue; 
}
#endif

void DepthClearBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


#include "OSGSField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DepthClearBackgroundPtr>::_type("DepthClearBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DepthClearBackgroundPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, DepthClearBackgroundPtr);

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
    static Char8 cvsid_hpp       [] = OSGDEPTHCLEARBACKGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEPTHCLEARBACKGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEPTHCLEARBACKGROUNDFIELDS_HEADER_CVSID;
}
