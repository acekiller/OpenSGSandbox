/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class PointChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PointChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PointChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PointChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PointChunk::_sfSize field.

inline
Real32 &PointChunkBase::editSize(void)
{
    editSField(SizeFieldMask);

    return _sfSize.getValue();
}

//! Get the value of the PointChunk::_sfSize field.
inline
const Real32 &PointChunkBase::getSize(void) const
{
    return _sfSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PointChunkBase::getSize           (void)
{
    return this->editSize           ();
}
#endif

//! Set the value of the PointChunk::_sfSize field.
inline
void PointChunkBase::setSize(const Real32 &value)
{
    editSField(SizeFieldMask);

    _sfSize.setValue(value);
}
//! Get the value of the PointChunk::_sfSmooth field.

inline
bool &PointChunkBase::editSmooth(void)
{
    editSField(SmoothFieldMask);

    return _sfSmooth.getValue();
}

//! Get the value of the PointChunk::_sfSmooth field.
inline
const bool &PointChunkBase::getSmooth(void) const
{
    return _sfSmooth.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &PointChunkBase::getSmooth         (void)
{
    return this->editSmooth         ();
}
#endif

//! Set the value of the PointChunk::_sfSmooth field.
inline
void PointChunkBase::setSmooth(const bool &value)
{
    editSField(SmoothFieldMask);

    _sfSmooth.setValue(value);
}
//! Get the value of the PointChunk::_sfMinSize field.

inline
Real32 &PointChunkBase::editMinSize(void)
{
    editSField(MinSizeFieldMask);

    return _sfMinSize.getValue();
}

//! Get the value of the PointChunk::_sfMinSize field.
inline
const Real32 &PointChunkBase::getMinSize(void) const
{
    return _sfMinSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PointChunkBase::getMinSize        (void)
{
    return this->editMinSize        ();
}
#endif

//! Set the value of the PointChunk::_sfMinSize field.
inline
void PointChunkBase::setMinSize(const Real32 &value)
{
    editSField(MinSizeFieldMask);

    _sfMinSize.setValue(value);
}
//! Get the value of the PointChunk::_sfMaxSize field.

inline
Real32 &PointChunkBase::editMaxSize(void)
{
    editSField(MaxSizeFieldMask);

    return _sfMaxSize.getValue();
}

//! Get the value of the PointChunk::_sfMaxSize field.
inline
const Real32 &PointChunkBase::getMaxSize(void) const
{
    return _sfMaxSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PointChunkBase::getMaxSize        (void)
{
    return this->editMaxSize        ();
}
#endif

//! Set the value of the PointChunk::_sfMaxSize field.
inline
void PointChunkBase::setMaxSize(const Real32 &value)
{
    editSField(MaxSizeFieldMask);

    _sfMaxSize.setValue(value);
}
//! Get the value of the PointChunk::_sfConstantAttenuation field.

inline
Real32 &PointChunkBase::editConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return _sfConstantAttenuation.getValue();
}

//! Get the value of the PointChunk::_sfConstantAttenuation field.
inline
const Real32 &PointChunkBase::getConstantAttenuation(void) const
{
    return _sfConstantAttenuation.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PointChunkBase::getConstantAttenuation(void)
{
    return this->editConstantAttenuation();
}
#endif

//! Set the value of the PointChunk::_sfConstantAttenuation field.
inline
void PointChunkBase::setConstantAttenuation(const Real32 &value)
{
    editSField(ConstantAttenuationFieldMask);

    _sfConstantAttenuation.setValue(value);
}
//! Get the value of the PointChunk::_sfLinearAttenuation field.

inline
Real32 &PointChunkBase::editLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return _sfLinearAttenuation.getValue();
}

//! Get the value of the PointChunk::_sfLinearAttenuation field.
inline
const Real32 &PointChunkBase::getLinearAttenuation(void) const
{
    return _sfLinearAttenuation.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PointChunkBase::getLinearAttenuation(void)
{
    return this->editLinearAttenuation();
}
#endif

//! Set the value of the PointChunk::_sfLinearAttenuation field.
inline
void PointChunkBase::setLinearAttenuation(const Real32 &value)
{
    editSField(LinearAttenuationFieldMask);

    _sfLinearAttenuation.setValue(value);
}
//! Get the value of the PointChunk::_sfQuadraticAttenuation field.

inline
Real32 &PointChunkBase::editQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return _sfQuadraticAttenuation.getValue();
}

//! Get the value of the PointChunk::_sfQuadraticAttenuation field.
inline
const Real32 &PointChunkBase::getQuadraticAttenuation(void) const
{
    return _sfQuadraticAttenuation.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PointChunkBase::getQuadraticAttenuation(void)
{
    return this->editQuadraticAttenuation();
}
#endif

//! Set the value of the PointChunk::_sfQuadraticAttenuation field.
inline
void PointChunkBase::setQuadraticAttenuation(const Real32 &value)
{
    editSField(QuadraticAttenuationFieldMask);

    _sfQuadraticAttenuation.setValue(value);
}
//! Get the value of the PointChunk::_sfFadeThreshold field.

inline
Real32 &PointChunkBase::editFadeThreshold(void)
{
    editSField(FadeThresholdFieldMask);

    return _sfFadeThreshold.getValue();
}

//! Get the value of the PointChunk::_sfFadeThreshold field.
inline
const Real32 &PointChunkBase::getFadeThreshold(void) const
{
    return _sfFadeThreshold.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PointChunkBase::getFadeThreshold  (void)
{
    return this->editFadeThreshold  ();
}
#endif

//! Set the value of the PointChunk::_sfFadeThreshold field.
inline
void PointChunkBase::setFadeThreshold(const Real32 &value)
{
    editSField(FadeThresholdFieldMask);

    _sfFadeThreshold.setValue(value);
}
//! Get the value of the PointChunk::_sfSprite field.

inline
bool &PointChunkBase::editSprite(void)
{
    editSField(SpriteFieldMask);

    return _sfSprite.getValue();
}

//! Get the value of the PointChunk::_sfSprite field.
inline
const bool &PointChunkBase::getSprite(void) const
{
    return _sfSprite.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &PointChunkBase::getSprite         (void)
{
    return this->editSprite         ();
}
#endif

//! Set the value of the PointChunk::_sfSprite field.
inline
void PointChunkBase::setSprite(const bool &value)
{
    editSField(SpriteFieldMask);

    _sfSprite.setValue(value);
}
//! Get the value of the PointChunk::_sfRMode field.

inline
GLenum &PointChunkBase::editRMode(void)
{
    editSField(RModeFieldMask);

    return _sfRMode.getValue();
}

//! Get the value of the PointChunk::_sfRMode field.
inline
const GLenum &PointChunkBase::getRMode(void) const
{
    return _sfRMode.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum              &PointChunkBase::getRMode          (void)
{
    return this->editRMode          ();
}
#endif

//! Set the value of the PointChunk::_sfRMode field.
inline
void PointChunkBase::setRMode(const GLenum &value)
{
    editSField(RModeFieldMask);

    _sfRMode.setValue(value);
}

//! create a new instance of the class
inline
PointChunkPtr PointChunkBase::create(void)
{
    PointChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<PointChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void PointChunkBase::execSync(      PointChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pOther->_sfSmooth);

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
        _sfMinSize.syncWith(pOther->_sfMinSize);

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
        _sfMaxSize.syncWith(pOther->_sfMaxSize);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
        _sfFadeThreshold.syncWith(pOther->_sfFadeThreshold);

    if(FieldBits::NoField != (SpriteFieldMask & whichField))
        _sfSprite.syncWith(pOther->_sfSprite);

    if(FieldBits::NoField != (RModeFieldMask & whichField))
        _sfRMode.syncWith(pOther->_sfRMode);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void PointChunkBase::execSync (      PointChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pFrom->_sfSize);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pFrom->_sfSmooth);

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
        _sfMinSize.syncWith(pFrom->_sfMinSize);

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
        _sfMaxSize.syncWith(pFrom->_sfMaxSize);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pFrom->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pFrom->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pFrom->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
        _sfFadeThreshold.syncWith(pFrom->_sfFadeThreshold);

    if(FieldBits::NoField != (SpriteFieldMask & whichField))
        _sfSprite.syncWith(pFrom->_sfSprite);

    if(FieldBits::NoField != (RModeFieldMask & whichField))
        _sfRMode.syncWith(pFrom->_sfRMode);
}
#endif

#if 0
inline
void PointChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *PointChunkBase::getClassname(void)
{
    return "PointChunk";
}

typedef PointerBuilder<PointChunk>::ObjPtr          PointChunkPtr;
typedef PointerBuilder<PointChunk>::ObjPtrConst     PointChunkPtrConst;
typedef PointerBuilder<PointChunk>::ObjConstPtr     PointChunkConstPtr;

typedef PointerBuilder<PointChunk>::ObjPtrArg       PointChunkPtrArg;
typedef PointerBuilder<PointChunk>::ObjConstPtrArg  PointChunkConstPtrArg;
typedef PointerBuilder<PointChunk>::ObjPtrConstArg  PointChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGPOINTCHUNKBASE_INLINE_CVSID "@(#)$Id$"
