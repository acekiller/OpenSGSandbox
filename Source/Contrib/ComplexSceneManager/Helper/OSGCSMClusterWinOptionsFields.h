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


#ifndef _OSGCSMCLUSTERWINOPTIONSFIELDS_H_
#define _OSGCSMCLUSTERWINOPTIONSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CSMClusterWinOptions;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! CSMClusterWinOptionsPtr

OSG_GEN_CONTAINERPTR(CSMClusterWinOptions);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpContribCSMFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<CSMClusterWinOptions *> :
    public FieldTraitsFCPtrBase<CSMClusterWinOptions *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CSMClusterWinOptions *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCSMClusterWinOptionsPtr"; }
};

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMClusterWinOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMClusterWinOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMClusterWinOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMClusterWinOptionsPtr"; 
}


#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<CSMClusterWinOptionsPtr, 0>
    \hideinhierarchy
 */
#endif

class CSMClusterWindow;

template <>
struct FieldTraits<CSMClusterWinOptions *, 1> :
    public FieldTraitsFCPtrBase<CSMClusterWinOptions *, 1>
{
  private:

  public:

    typedef CSMClusterWindow            *ParentType;
    typedef FieldTraits<CSMClusterWinOptions *, 1>  Self;


    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCSMClusterWinOptionsPtr"; }
};

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildCSMClusterWinOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildCSMClusterWinOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildCSMClusterWinOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMClusterWinOptions *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildCSMClusterWinOptionsPtr"; 
}



#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribCSMFieldSingle */

typedef PointerSField<CSMClusterWinOptions *,
                      RecordedRefCountPolicy  > SFRecCSMClusterWinOptionsPtr;
typedef PointerSField<CSMClusterWinOptions *,
                      UnrecordedRefCountPolicy> SFUnrecCSMClusterWinOptionsPtr;
typedef PointerSField<CSMClusterWinOptions *,
                      WeakRefCountPolicy      > SFWeakCSMClusterWinOptionsPtr;
typedef PointerSField<CSMClusterWinOptions *,
                      NoRefCountPolicy        > SFUncountedCSMClusterWinOptionsPtr;
#endif



typedef ChildPointerSField<
          CSMClusterWinOptions *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildCSMClusterWinOptionsPtr;

OSG_END_NAMESPACE

#endif /* _OSGCSMCLUSTERWINOPTIONSFIELDS_H_ */
