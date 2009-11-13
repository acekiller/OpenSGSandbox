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
 **     class FogChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FogChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 FogChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 FogChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the FogChunk::_sfMode field.

inline
GLenum &FogChunkBase::editMode(void)
{
    editSField(ModeFieldMask);

    return _sfMode.getValue();
}

//! Get the value of the FogChunk::_sfMode field.
inline
const GLenum &FogChunkBase::getMode(void) const
{
    return _sfMode.getValue();
}

//! Set the value of the FogChunk::_sfMode field.
inline
void FogChunkBase::setMode(const GLenum &value)
{
    editSField(ModeFieldMask);

    _sfMode.setValue(value);
}
//! Get the value of the FogChunk::_sfColor field.

inline
Color4f &FogChunkBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the FogChunk::_sfColor field.
inline
const Color4f &FogChunkBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the FogChunk::_sfColor field.
inline
void FogChunkBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the FogChunk::_sfStart field.

inline
Real32 &FogChunkBase::editStart(void)
{
    editSField(StartFieldMask);

    return _sfStart.getValue();
}

//! Get the value of the FogChunk::_sfStart field.
inline
      Real32  FogChunkBase::getStart(void) const
{
    return _sfStart.getValue();
}

//! Set the value of the FogChunk::_sfStart field.
inline
void FogChunkBase::setStart(const Real32 value)
{
    editSField(StartFieldMask);

    _sfStart.setValue(value);
}
//! Get the value of the FogChunk::_sfEnd field.

inline
Real32 &FogChunkBase::editEnd(void)
{
    editSField(EndFieldMask);

    return _sfEnd.getValue();
}

//! Get the value of the FogChunk::_sfEnd field.
inline
      Real32  FogChunkBase::getEnd(void) const
{
    return _sfEnd.getValue();
}

//! Set the value of the FogChunk::_sfEnd field.
inline
void FogChunkBase::setEnd(const Real32 value)
{
    editSField(EndFieldMask);

    _sfEnd.setValue(value);
}
//! Get the value of the FogChunk::_sfDensity field.

inline
Real32 &FogChunkBase::editDensity(void)
{
    editSField(DensityFieldMask);

    return _sfDensity.getValue();
}

//! Get the value of the FogChunk::_sfDensity field.
inline
      Real32  FogChunkBase::getDensity(void) const
{
    return _sfDensity.getValue();
}

//! Set the value of the FogChunk::_sfDensity field.
inline
void FogChunkBase::setDensity(const Real32 value)
{
    editSField(DensityFieldMask);

    _sfDensity.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void FogChunkBase::execSync (      FogChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pFrom->_sfMode);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (StartFieldMask & whichField))
        _sfStart.syncWith(pFrom->_sfStart);

    if(FieldBits::NoField != (EndFieldMask & whichField))
        _sfEnd.syncWith(pFrom->_sfEnd);

    if(FieldBits::NoField != (DensityFieldMask & whichField))
        _sfDensity.syncWith(pFrom->_sfDensity);
}
#endif


inline
const Char8 *FogChunkBase::getClassname(void)
{
    return "FogChunk";
}
OSG_GEN_CONTAINERPTR(FogChunk);

OSG_END_NAMESPACE

