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
 **     class DeferredShadingStageData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include "OSGFrameBufferObject.h"       // GBufferTarget Class
#include "OSGBackground.h"              // GBufferBackground Class
#include "OSGState.h"                   // ShadingStates Class
#include "OSGShaderProgramChunk.h"      // ShadingProgramChunks Class
#include "OSGDSLightChunk.h"            // LightChunks Class
#include "OSGBlendChunk.h"              // BlendChunk Class

#include "OSGDeferredShadingStageDataBase.h"
#include "OSGDeferredShadingStageData.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DeferredShadingStageData
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FrameBufferObject * DeferredShadingStageDataBase::_sfGBufferTarget
    
*/

/*! \var Background *    DeferredShadingStageDataBase::_sfGBufferBackground
    
*/

/*! \var FrameBufferObject * DeferredShadingStageDataBase::_sfShadingTarget
    
*/

/*! \var State *         DeferredShadingStageDataBase::_mfShadingStates
    State used to render the various light passes (the first one is used for
    the global ambient pass).
*/

/*! \var ShaderProgramChunk * DeferredShadingStageDataBase::_mfShadingProgramChunks
    
*/

/*! \var DSLightChunk *  DeferredShadingStageDataBase::_mfLightChunks
    
*/

/*! \var BlendChunk *    DeferredShadingStageDataBase::_sfBlendChunk
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DeferredShadingStageData *>::_type("DeferredShadingStageDataPtr", "StageDataPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DeferredShadingStageData *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DeferredShadingStageDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "gBufferTarget",
        "",
        GBufferTargetFieldId, GBufferTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStageData::editHandleGBufferTarget),
        static_cast<FieldGetMethodSig >(&DeferredShadingStageData::getHandleGBufferTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecBackgroundPtr::Description(
        SFUnrecBackgroundPtr::getClassType(),
        "gBufferBackground",
        "",
        GBufferBackgroundFieldId, GBufferBackgroundFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStageData::editHandleGBufferBackground),
        static_cast<FieldGetMethodSig >(&DeferredShadingStageData::getHandleGBufferBackground));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "shadingTarget",
        "",
        ShadingTargetFieldId, ShadingTargetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStageData::editHandleShadingTarget),
        static_cast<FieldGetMethodSig >(&DeferredShadingStageData::getHandleShadingTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecStatePtr::Description(
        MFUnrecStatePtr::getClassType(),
        "shadingStates",
        "State used to render the various light passes (the first one is used for\n"
        "the global ambient pass).\n",
        ShadingStatesFieldId, ShadingStatesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStageData::editHandleShadingStates),
        static_cast<FieldGetMethodSig >(&DeferredShadingStageData::getHandleShadingStates));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecShaderProgramChunkPtr::Description(
        MFUnrecShaderProgramChunkPtr::getClassType(),
        "shadingProgramChunks",
        "",
        ShadingProgramChunksFieldId, ShadingProgramChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStageData::editHandleShadingProgramChunks),
        static_cast<FieldGetMethodSig >(&DeferredShadingStageData::getHandleShadingProgramChunks));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecDSLightChunkPtr::Description(
        MFUnrecDSLightChunkPtr::getClassType(),
        "lightChunks",
        "",
        LightChunksFieldId, LightChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStageData::editHandleLightChunks),
        static_cast<FieldGetMethodSig >(&DeferredShadingStageData::getHandleLightChunks));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecBlendChunkPtr::Description(
        SFUnrecBlendChunkPtr::getClassType(),
        "blendChunk",
        "",
        BlendChunkFieldId, BlendChunkFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStageData::editHandleBlendChunk),
        static_cast<FieldGetMethodSig >(&DeferredShadingStageData::getHandleBlendChunk));

    oType.addInitialDesc(pDesc);
}


DeferredShadingStageDataBase::TypeObject DeferredShadingStageDataBase::_type(
    DeferredShadingStageDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DeferredShadingStageDataBase::createEmptyLocal),
    DeferredShadingStageData::initMethod,
    DeferredShadingStageData::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DeferredShadingStageData::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"DeferredShadingStageData\"\n"
    "    parent=\"StageData\"\n"
    "    library=\"EffectGroups\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "    <Field\n"
    "        name=\"gBufferTarget\"\n"
    "        category=\"pointer\"\n"
    "        type=\"FrameBufferObject\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"gBufferBackground\"\n"
    "        category=\"pointer\"\n"
    "        type=\"Background\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"shadingTarget\"\n"
    "        category=\"pointer\"\n"
    "        type=\"FrameBufferObject\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"shadingStates\"\n"
    "        category=\"pointer\"\n"
    "        type=\"State\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    State used to render the various light passes (the first one is used for\n"
    "    the global ambient pass).\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"shadingProgramChunks\"\n"
    "        category=\"pointer\"\n"
    "        type=\"ShaderProgramChunk\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"lightChunks\"\n"
    "        category=\"pointer\"\n"
    "        type=\"DSLightChunk\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"blendChunk\"\n"
    "        category=\"pointer\"\n"
    "        type=\"BlendChunk\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DeferredShadingStageDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &DeferredShadingStageDataBase::getType(void) const
{
    return _type;
}

UInt32 DeferredShadingStageDataBase::getContainerSize(void) const
{
    return sizeof(DeferredShadingStageData);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DeferredShadingStageData::_sfGBufferTarget field.
const SFUnrecFrameBufferObjectPtr *DeferredShadingStageDataBase::getSFGBufferTarget(void) const
{
    return &_sfGBufferTarget;
}

SFUnrecFrameBufferObjectPtr *DeferredShadingStageDataBase::editSFGBufferTarget  (void)
{
    editSField(GBufferTargetFieldMask);

    return &_sfGBufferTarget;
}

//! Get the DeferredShadingStageData::_sfGBufferBackground field.
const SFUnrecBackgroundPtr *DeferredShadingStageDataBase::getSFGBufferBackground(void) const
{
    return &_sfGBufferBackground;
}

SFUnrecBackgroundPtr *DeferredShadingStageDataBase::editSFGBufferBackground(void)
{
    editSField(GBufferBackgroundFieldMask);

    return &_sfGBufferBackground;
}

//! Get the DeferredShadingStageData::_sfShadingTarget field.
const SFUnrecFrameBufferObjectPtr *DeferredShadingStageDataBase::getSFShadingTarget(void) const
{
    return &_sfShadingTarget;
}

SFUnrecFrameBufferObjectPtr *DeferredShadingStageDataBase::editSFShadingTarget  (void)
{
    editSField(ShadingTargetFieldMask);

    return &_sfShadingTarget;
}

//! Get the DeferredShadingStageData::_mfShadingStates field.
const MFUnrecStatePtr *DeferredShadingStageDataBase::getMFShadingStates(void) const
{
    return &_mfShadingStates;
}

MFUnrecStatePtr     *DeferredShadingStageDataBase::editMFShadingStates  (void)
{
    editMField(ShadingStatesFieldMask, _mfShadingStates);

    return &_mfShadingStates;
}

//! Get the DeferredShadingStageData::_mfShadingProgramChunks field.
const MFUnrecShaderProgramChunkPtr *DeferredShadingStageDataBase::getMFShadingProgramChunks(void) const
{
    return &_mfShadingProgramChunks;
}

MFUnrecShaderProgramChunkPtr *DeferredShadingStageDataBase::editMFShadingProgramChunks(void)
{
    editMField(ShadingProgramChunksFieldMask, _mfShadingProgramChunks);

    return &_mfShadingProgramChunks;
}

//! Get the DeferredShadingStageData::_mfLightChunks field.
const MFUnrecDSLightChunkPtr *DeferredShadingStageDataBase::getMFLightChunks(void) const
{
    return &_mfLightChunks;
}

MFUnrecDSLightChunkPtr *DeferredShadingStageDataBase::editMFLightChunks    (void)
{
    editMField(LightChunksFieldMask, _mfLightChunks);

    return &_mfLightChunks;
}

//! Get the DeferredShadingStageData::_sfBlendChunk field.
const SFUnrecBlendChunkPtr *DeferredShadingStageDataBase::getSFBlendChunk(void) const
{
    return &_sfBlendChunk;
}

SFUnrecBlendChunkPtr *DeferredShadingStageDataBase::editSFBlendChunk     (void)
{
    editSField(BlendChunkFieldMask);

    return &_sfBlendChunk;
}



void DeferredShadingStageDataBase::pushToShadingStates(State * const value)
{
    editMField(ShadingStatesFieldMask, _mfShadingStates);

    _mfShadingStates.push_back(value);
}

void DeferredShadingStageDataBase::assignShadingStates(const MFUnrecStatePtr   &value)
{
    MFUnrecStatePtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecStatePtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<DeferredShadingStageData *>(this)->clearShadingStates();

    while(elemIt != elemEnd)
    {
        this->pushToShadingStates(*elemIt);

        ++elemIt;
    }
}

void DeferredShadingStageDataBase::removeFromShadingStates(UInt32 uiIndex)
{
    if(uiIndex < _mfShadingStates.size())
    {
        editMField(ShadingStatesFieldMask, _mfShadingStates);

        _mfShadingStates.erase(uiIndex);
    }
}

void DeferredShadingStageDataBase::removeObjFromShadingStates(State * const value)
{
    Int32 iElemIdx = _mfShadingStates.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ShadingStatesFieldMask, _mfShadingStates);

        _mfShadingStates.erase(iElemIdx);
    }
}
void DeferredShadingStageDataBase::clearShadingStates(void)
{
    editMField(ShadingStatesFieldMask, _mfShadingStates);


    _mfShadingStates.clear();
}

void DeferredShadingStageDataBase::pushToShadingProgramChunks(ShaderProgramChunk * const value)
{
    editMField(ShadingProgramChunksFieldMask, _mfShadingProgramChunks);

    _mfShadingProgramChunks.push_back(value);
}

void DeferredShadingStageDataBase::assignShadingProgramChunks(const MFUnrecShaderProgramChunkPtr &value)
{
    MFUnrecShaderProgramChunkPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecShaderProgramChunkPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<DeferredShadingStageData *>(this)->clearShadingProgramChunks();

    while(elemIt != elemEnd)
    {
        this->pushToShadingProgramChunks(*elemIt);

        ++elemIt;
    }
}

void DeferredShadingStageDataBase::removeFromShadingProgramChunks(UInt32 uiIndex)
{
    if(uiIndex < _mfShadingProgramChunks.size())
    {
        editMField(ShadingProgramChunksFieldMask, _mfShadingProgramChunks);

        _mfShadingProgramChunks.erase(uiIndex);
    }
}

void DeferredShadingStageDataBase::removeObjFromShadingProgramChunks(ShaderProgramChunk * const value)
{
    Int32 iElemIdx = _mfShadingProgramChunks.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ShadingProgramChunksFieldMask, _mfShadingProgramChunks);

        _mfShadingProgramChunks.erase(iElemIdx);
    }
}
void DeferredShadingStageDataBase::clearShadingProgramChunks(void)
{
    editMField(ShadingProgramChunksFieldMask, _mfShadingProgramChunks);


    _mfShadingProgramChunks.clear();
}

void DeferredShadingStageDataBase::pushToLightChunks(DSLightChunk * const value)
{
    editMField(LightChunksFieldMask, _mfLightChunks);

    _mfLightChunks.push_back(value);
}

void DeferredShadingStageDataBase::assignLightChunks(const MFUnrecDSLightChunkPtr &value)
{
    MFUnrecDSLightChunkPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecDSLightChunkPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<DeferredShadingStageData *>(this)->clearLightChunks();

    while(elemIt != elemEnd)
    {
        this->pushToLightChunks(*elemIt);

        ++elemIt;
    }
}

void DeferredShadingStageDataBase::removeFromLightChunks(UInt32 uiIndex)
{
    if(uiIndex < _mfLightChunks.size())
    {
        editMField(LightChunksFieldMask, _mfLightChunks);

        _mfLightChunks.erase(uiIndex);
    }
}

void DeferredShadingStageDataBase::removeObjFromLightChunks(DSLightChunk * const value)
{
    Int32 iElemIdx = _mfLightChunks.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(LightChunksFieldMask, _mfLightChunks);

        _mfLightChunks.erase(iElemIdx);
    }
}
void DeferredShadingStageDataBase::clearLightChunks(void)
{
    editMField(LightChunksFieldMask, _mfLightChunks);


    _mfLightChunks.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 DeferredShadingStageDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GBufferTargetFieldMask & whichField))
    {
        returnValue += _sfGBufferTarget.getBinSize();
    }
    if(FieldBits::NoField != (GBufferBackgroundFieldMask & whichField))
    {
        returnValue += _sfGBufferBackground.getBinSize();
    }
    if(FieldBits::NoField != (ShadingTargetFieldMask & whichField))
    {
        returnValue += _sfShadingTarget.getBinSize();
    }
    if(FieldBits::NoField != (ShadingStatesFieldMask & whichField))
    {
        returnValue += _mfShadingStates.getBinSize();
    }
    if(FieldBits::NoField != (ShadingProgramChunksFieldMask & whichField))
    {
        returnValue += _mfShadingProgramChunks.getBinSize();
    }
    if(FieldBits::NoField != (LightChunksFieldMask & whichField))
    {
        returnValue += _mfLightChunks.getBinSize();
    }
    if(FieldBits::NoField != (BlendChunkFieldMask & whichField))
    {
        returnValue += _sfBlendChunk.getBinSize();
    }

    return returnValue;
}

void DeferredShadingStageDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GBufferTargetFieldMask & whichField))
    {
        _sfGBufferTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GBufferBackgroundFieldMask & whichField))
    {
        _sfGBufferBackground.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadingTargetFieldMask & whichField))
    {
        _sfShadingTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadingStatesFieldMask & whichField))
    {
        _mfShadingStates.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadingProgramChunksFieldMask & whichField))
    {
        _mfShadingProgramChunks.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LightChunksFieldMask & whichField))
    {
        _mfLightChunks.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlendChunkFieldMask & whichField))
    {
        _sfBlendChunk.copyToBin(pMem);
    }
}

void DeferredShadingStageDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GBufferTargetFieldMask & whichField))
    {
        _sfGBufferTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GBufferBackgroundFieldMask & whichField))
    {
        _sfGBufferBackground.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadingTargetFieldMask & whichField))
    {
        _sfShadingTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadingStatesFieldMask & whichField))
    {
        _mfShadingStates.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadingProgramChunksFieldMask & whichField))
    {
        _mfShadingProgramChunks.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LightChunksFieldMask & whichField))
    {
        _mfLightChunks.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlendChunkFieldMask & whichField))
    {
        _sfBlendChunk.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DeferredShadingStageDataTransitPtr DeferredShadingStageDataBase::createLocal(BitVector bFlags)
{
    DeferredShadingStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DeferredShadingStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DeferredShadingStageDataTransitPtr DeferredShadingStageDataBase::createDependent(BitVector bFlags)
{
    DeferredShadingStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DeferredShadingStageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DeferredShadingStageDataTransitPtr DeferredShadingStageDataBase::create(void)
{
    DeferredShadingStageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DeferredShadingStageData>(tmpPtr);
    }

    return fc;
}

DeferredShadingStageData *DeferredShadingStageDataBase::createEmptyLocal(BitVector bFlags)
{
    DeferredShadingStageData *returnValue;

    newPtr<DeferredShadingStageData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DeferredShadingStageData *DeferredShadingStageDataBase::createEmpty(void)
{
    DeferredShadingStageData *returnValue;

    newPtr<DeferredShadingStageData>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DeferredShadingStageDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DeferredShadingStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DeferredShadingStageData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DeferredShadingStageDataBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DeferredShadingStageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DeferredShadingStageData *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DeferredShadingStageDataBase::shallowCopy(void) const
{
    DeferredShadingStageData *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DeferredShadingStageData *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DeferredShadingStageDataBase::DeferredShadingStageDataBase(void) :
    Inherited(),
    _sfGBufferTarget          (NULL),
    _sfGBufferBackground      (NULL),
    _sfShadingTarget          (NULL),
    _mfShadingStates          (),
    _mfShadingProgramChunks   (),
    _mfLightChunks            (),
    _sfBlendChunk             (NULL)
{
}

DeferredShadingStageDataBase::DeferredShadingStageDataBase(const DeferredShadingStageDataBase &source) :
    Inherited(source),
    _sfGBufferTarget          (NULL),
    _sfGBufferBackground      (NULL),
    _sfShadingTarget          (NULL),
    _mfShadingStates          (),
    _mfShadingProgramChunks   (),
    _mfLightChunks            (),
    _sfBlendChunk             (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

DeferredShadingStageDataBase::~DeferredShadingStageDataBase(void)
{
}

void DeferredShadingStageDataBase::onCreate(const DeferredShadingStageData *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DeferredShadingStageData *pThis = static_cast<DeferredShadingStageData *>(this);

        pThis->setGBufferTarget(source->getGBufferTarget());

        pThis->setGBufferBackground(source->getGBufferBackground());

        pThis->setShadingTarget(source->getShadingTarget());

        MFUnrecStatePtr::const_iterator ShadingStatesIt  =
            source->_mfShadingStates.begin();
        MFUnrecStatePtr::const_iterator ShadingStatesEnd =
            source->_mfShadingStates.end  ();

        while(ShadingStatesIt != ShadingStatesEnd)
        {
            pThis->pushToShadingStates(*ShadingStatesIt);

            ++ShadingStatesIt;
        }

        MFUnrecShaderProgramChunkPtr::const_iterator ShadingProgramChunksIt  =
            source->_mfShadingProgramChunks.begin();
        MFUnrecShaderProgramChunkPtr::const_iterator ShadingProgramChunksEnd =
            source->_mfShadingProgramChunks.end  ();

        while(ShadingProgramChunksIt != ShadingProgramChunksEnd)
        {
            pThis->pushToShadingProgramChunks(*ShadingProgramChunksIt);

            ++ShadingProgramChunksIt;
        }

        MFUnrecDSLightChunkPtr::const_iterator LightChunksIt  =
            source->_mfLightChunks.begin();
        MFUnrecDSLightChunkPtr::const_iterator LightChunksEnd =
            source->_mfLightChunks.end  ();

        while(LightChunksIt != LightChunksEnd)
        {
            pThis->pushToLightChunks(*LightChunksIt);

            ++LightChunksIt;
        }

        pThis->setBlendChunk(source->getBlendChunk());
    }
}

GetFieldHandlePtr DeferredShadingStageDataBase::getHandleGBufferTarget   (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfGBufferTarget,
             this->getType().getFieldDesc(GBufferTargetFieldId),
             const_cast<DeferredShadingStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageDataBase::editHandleGBufferTarget  (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfGBufferTarget,
             this->getType().getFieldDesc(GBufferTargetFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DeferredShadingStageData::setGBufferTarget,
                    static_cast<DeferredShadingStageData *>(this), _1));

    editSField(GBufferTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageDataBase::getHandleGBufferBackground (void) const
{
    SFUnrecBackgroundPtr::GetHandlePtr returnValue(
        new  SFUnrecBackgroundPtr::GetHandle(
             &_sfGBufferBackground,
             this->getType().getFieldDesc(GBufferBackgroundFieldId),
             const_cast<DeferredShadingStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageDataBase::editHandleGBufferBackground(void)
{
    SFUnrecBackgroundPtr::EditHandlePtr returnValue(
        new  SFUnrecBackgroundPtr::EditHandle(
             &_sfGBufferBackground,
             this->getType().getFieldDesc(GBufferBackgroundFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DeferredShadingStageData::setGBufferBackground,
                    static_cast<DeferredShadingStageData *>(this), _1));

    editSField(GBufferBackgroundFieldMask);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageDataBase::getHandleShadingTarget   (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfShadingTarget,
             this->getType().getFieldDesc(ShadingTargetFieldId),
             const_cast<DeferredShadingStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageDataBase::editHandleShadingTarget  (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfShadingTarget,
             this->getType().getFieldDesc(ShadingTargetFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DeferredShadingStageData::setShadingTarget,
                    static_cast<DeferredShadingStageData *>(this), _1));

    editSField(ShadingTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageDataBase::getHandleShadingStates   (void) const
{
    MFUnrecStatePtr::GetHandlePtr returnValue(
        new  MFUnrecStatePtr::GetHandle(
             &_mfShadingStates,
             this->getType().getFieldDesc(ShadingStatesFieldId),
             const_cast<DeferredShadingStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageDataBase::editHandleShadingStates  (void)
{
    MFUnrecStatePtr::EditHandlePtr returnValue(
        new  MFUnrecStatePtr::EditHandle(
             &_mfShadingStates,
             this->getType().getFieldDesc(ShadingStatesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&DeferredShadingStageData::pushToShadingStates,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&DeferredShadingStageData::removeFromShadingStates,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&DeferredShadingStageData::removeObjFromShadingStates,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&DeferredShadingStageData::clearShadingStates,
                    static_cast<DeferredShadingStageData *>(this)));

    editMField(ShadingStatesFieldMask, _mfShadingStates);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageDataBase::getHandleShadingProgramChunks (void) const
{
    MFUnrecShaderProgramChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecShaderProgramChunkPtr::GetHandle(
             &_mfShadingProgramChunks,
             this->getType().getFieldDesc(ShadingProgramChunksFieldId),
             const_cast<DeferredShadingStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageDataBase::editHandleShadingProgramChunks(void)
{
    MFUnrecShaderProgramChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecShaderProgramChunkPtr::EditHandle(
             &_mfShadingProgramChunks,
             this->getType().getFieldDesc(ShadingProgramChunksFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&DeferredShadingStageData::pushToShadingProgramChunks,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&DeferredShadingStageData::removeFromShadingProgramChunks,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&DeferredShadingStageData::removeObjFromShadingProgramChunks,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&DeferredShadingStageData::clearShadingProgramChunks,
                    static_cast<DeferredShadingStageData *>(this)));

    editMField(ShadingProgramChunksFieldMask, _mfShadingProgramChunks);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageDataBase::getHandleLightChunks     (void) const
{
    MFUnrecDSLightChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecDSLightChunkPtr::GetHandle(
             &_mfLightChunks,
             this->getType().getFieldDesc(LightChunksFieldId),
             const_cast<DeferredShadingStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageDataBase::editHandleLightChunks    (void)
{
    MFUnrecDSLightChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecDSLightChunkPtr::EditHandle(
             &_mfLightChunks,
             this->getType().getFieldDesc(LightChunksFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&DeferredShadingStageData::pushToLightChunks,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&DeferredShadingStageData::removeFromLightChunks,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&DeferredShadingStageData::removeObjFromLightChunks,
                    static_cast<DeferredShadingStageData *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&DeferredShadingStageData::clearLightChunks,
                    static_cast<DeferredShadingStageData *>(this)));

    editMField(LightChunksFieldMask, _mfLightChunks);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageDataBase::getHandleBlendChunk      (void) const
{
    SFUnrecBlendChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecBlendChunkPtr::GetHandle(
             &_sfBlendChunk,
             this->getType().getFieldDesc(BlendChunkFieldId),
             const_cast<DeferredShadingStageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageDataBase::editHandleBlendChunk     (void)
{
    SFUnrecBlendChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecBlendChunkPtr::EditHandle(
             &_sfBlendChunk,
             this->getType().getFieldDesc(BlendChunkFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DeferredShadingStageData::setBlendChunk,
                    static_cast<DeferredShadingStageData *>(this), _1));

    editSField(BlendChunkFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DeferredShadingStageDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DeferredShadingStageData *pThis = static_cast<DeferredShadingStageData *>(this);

    pThis->execSync(static_cast<DeferredShadingStageData *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DeferredShadingStageDataBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DeferredShadingStageData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DeferredShadingStageData *>(pRefAspect),
                  dynamic_cast<const DeferredShadingStageData *>(this));

    return returnValue;
}
#endif

void DeferredShadingStageDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DeferredShadingStageData *>(this)->setGBufferTarget(NULL);

    static_cast<DeferredShadingStageData *>(this)->setGBufferBackground(NULL);

    static_cast<DeferredShadingStageData *>(this)->setShadingTarget(NULL);

    static_cast<DeferredShadingStageData *>(this)->clearShadingStates();

    static_cast<DeferredShadingStageData *>(this)->clearShadingProgramChunks();

    static_cast<DeferredShadingStageData *>(this)->clearLightChunks();

    static_cast<DeferredShadingStageData *>(this)->setBlendChunk(NULL);


}


OSG_END_NAMESPACE