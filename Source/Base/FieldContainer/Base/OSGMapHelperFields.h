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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMAPHELPERFIELDS_H_
#define _OSGMAPHELPERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGBaseDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MapHelper;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! MapHelperPtr

OSG_GEN_CONTAINERPTR(MapHelper);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<MapHelper *> :
    public FieldTraitsFCPtrBase<MapHelper *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MapHelper *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_BASE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMapHelperPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMapHelperPtr"; }
};

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMapHelperPtr"; 
}

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMapHelperPtr"; 
}

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMapHelperPtr"; 
}

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMapHelperPtr"; 
}

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMapHelperPtr"; 
}

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMapHelperPtr"; 
}

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMapHelperPtr"; 
}

template<> inline
const Char8 *FieldTraits<MapHelper *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMapHelperPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<MapHelperPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpBaseFieldSingle */

typedef PointerSField<MapHelper *,
                      RecordedRefCountPolicy  > SFRecMapHelperPtr;
typedef PointerSField<MapHelper *,
                      UnrecordedRefCountPolicy> SFUnrecMapHelperPtr;
typedef PointerSField<MapHelper *,
                      WeakRefCountPolicy      > SFWeakMapHelperPtr;
typedef PointerSField<MapHelper *,
                      NoRefCountPolicy        > SFUncountedMapHelperPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpBaseFieldMulti */

typedef PointerMField<MapHelper *,
                      RecordedRefCountPolicy  > MFRecMapHelperPtr;
typedef PointerMField<MapHelper *,
                      UnrecordedRefCountPolicy> MFUnrecMapHelperPtr;
typedef PointerMField<MapHelper *,
                      WeakRefCountPolicy      > MFWeakMapHelperPtr;
typedef PointerMField<MapHelper *,
                      NoRefCountPolicy        > MFUncountedMapHelperPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGMAPHELPERFIELDS_H_ */