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
 **     class ImageComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ImageComposerBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ImageComposerBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ImageComposerBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ImageComposer::_sfEnabled field.

inline
bool &ImageComposerBase::editEnabled(void)
{
    editSField(EnabledFieldMask);

    return _sfEnabled.getValue();
}

//! Get the value of the ImageComposer::_sfEnabled field.
inline
const bool &ImageComposerBase::getEnabled(void) const
{
    return _sfEnabled.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &ImageComposerBase::getEnabled        (void)
{
    return this->editEnabled        ();
}
#endif

//! Set the value of the ImageComposer::_sfEnabled field.
inline
void ImageComposerBase::setEnabled(const bool &value)
{
    editSField(EnabledFieldMask);

    _sfEnabled.setValue(value);
}
//! Get the value of the ImageComposer::_sfStatistics field.

inline
bool &ImageComposerBase::editStatistics(void)
{
    editSField(StatisticsFieldMask);

    return _sfStatistics.getValue();
}

//! Get the value of the ImageComposer::_sfStatistics field.
inline
const bool &ImageComposerBase::getStatistics(void) const
{
    return _sfStatistics.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &ImageComposerBase::getStatistics     (void)
{
    return this->editStatistics     ();
}
#endif

//! Set the value of the ImageComposer::_sfStatistics field.
inline
void ImageComposerBase::setStatistics(const bool &value)
{
    editSField(StatisticsFieldMask);

    _sfStatistics.setValue(value);
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ImageComposerBase::execSync(      ImageComposerBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pOther->_sfEnabled);

    if(FieldBits::NoField != (StatisticsFieldMask & whichField))
        _sfStatistics.syncWith(pOther->_sfStatistics);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ImageComposerBase::execSync (      ImageComposerBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pFrom->_sfEnabled);

    if(FieldBits::NoField != (StatisticsFieldMask & whichField))
        _sfStatistics.syncWith(pFrom->_sfStatistics);
}
#endif

#if 0
inline
void ImageComposerBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ImageComposerBase::getClassname(void)
{
    return "ImageComposer";
}

typedef PointerBuilder<ImageComposer>::ObjPtr          ImageComposerPtr;
typedef PointerBuilder<ImageComposer>::ObjPtrConst     ImageComposerPtrConst;
typedef PointerBuilder<ImageComposer>::ObjConstPtr     ImageComposerConstPtr;

typedef PointerBuilder<ImageComposer>::ObjPtrArg       ImageComposerPtrArg;
typedef PointerBuilder<ImageComposer>::ObjConstPtrArg  ImageComposerConstPtrArg;
typedef PointerBuilder<ImageComposer>::ObjPtrConstArg  ImageComposerPtrConstArg;

OSG_END_NAMESPACE

#define OSGIMAGECOMPOSERBASE_INLINE_CVSID "@(#)$Id$"
