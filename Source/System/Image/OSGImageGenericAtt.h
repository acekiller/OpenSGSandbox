/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                 Copyright (C) 2000-2002 by the OpenSG Forum               *
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


#ifndef _OSGIMAGEGENERICATT_H_
#define _OSGIMAGEGENERICATT_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGSystemDef.h"
#include "OSGBaseTypes.h"
#include "OSGBaseFunctions.h"

#include <vector>
#include <string>

#ifdef OSG_STL_HAS_HASH_MAP
#ifdef OSG_HASH_MAP_AS_EXT
#include <ext/hash_map>
#else
#include <hash_map>
#endif
#else
#include <map>
#endif

#include "OSGFieldContainer.h"
#include "OSGFieldContainerAttachment.h"
#include "OSGDynamicAttachmentMixin.h"
#include "OSGFieldContainerFieldTraits.h"

#include "OSGPointerSField.h"
#include "OSGPointerMField.h"

#include "OSGRefCountPolicies.h"

OSG_BEGIN_NAMESPACE

class FieldDescriptionBase;

/*! \hideinhierarchy */

struct ImageGenericAttDesc
{
    typedef FieldContainerAttachment    Parent;
    typedef FieldContainerAttachmentPtr ParentPtr;

    static const Char8 *getTypeName      (void) { return "ImageGenericAtt"; }
    static const Char8 *getParentTypeName(void) 
    {
        return "FieldContainerAttachment";      
    }
    static const Char8 *getGroupName     (void) { return "ImageGenAtt";     }

    static InitContainerF         getInitMethod(void) { return NULL; }

    static FieldDescriptionBase **getDesc      (void) { return NULL; }
};

typedef DynFieldAttachment<ImageGenericAttDesc>  ImageGenericAtt;

typedef ImageGenericAtt::ObjPtr                  ImageGenericAttPtr;
typedef RefCountPtr<ImageGenericAtt, 
                    UnrecordedRefCountPolicy>    ImageGenericAttUnrecPtr;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#ifndef OSG_IMAGEGENERICATT
#if defined(OSG_WIN32_CL) && _MSC_VER > 1300
OSG_ABSTR_FC_DLLEXPORT_DECL(DynFieldAttachment, 
                            ImageGenericAttDesc,
                            )
#else
OSG_ABSTR_FC_DLLEXPORT_DECL(DynFieldAttachment, 
                            ImageGenericAttDesc,
                            OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif
#endif

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ImageGenericAttPtr, 0> : 
    public FieldTraitsFCPtrBase<ImageGenericAttPtr>
{
    static  DataType                        _type;
    typedef FieldTraits<ImageGenericAttPtr>  Self;

    enum                            { Convertible = Self::NotConvertible };

    static       DataType &getType (void) { return _type;                      }

    template<typename RefCountPolicy> inline
    static const Char8    *getSName(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName(void);
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class FieldTraitsRecurseMapper<ImageGenericAttPtr, true> */
/*! \hideinhierarchy                                     */
#endif

template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecImageGenericAttPtr"; 
}

template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecImageGenericAttPtr"; 
}

template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakImageGenericAttPtr"; 
}

template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdImageGenericAttPtr"; 
}



template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecImageGenericAttPtr"; 
}

template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecImageGenericAttPtr"; 
}

template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakImageGenericAttPtr"; 
}

template<> inline
const Char8 *FieldTraits<
    ImageGenericAttPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdImageGenericAttPtr"; 
}

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS) 
/*! \ingroup GrpSystemFieldSingle */

typedef PointerSField<ImageGenericAttPtr, 
                      RecordedRefCountPolicy  > SFRecImageGenericAtPtr;
typedef PointerSField<ImageGenericAttPtr, 
                      UnrecordedRefCountPolicy> SFUnrecImageGenericAtPtr;
typedef PointerSField<ImageGenericAttPtr, 
                      WeakRefCountPolicy      > SFWeakImageGenericAtPtr;
typedef PointerSField<ImageGenericAttPtr, 
                      NoRefCountPolicy        > SFUncountedImageGenericAtPtr;

#endif

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS) 
/*! \ingroup GrpSystemFieldMulti */

typedef PointerMField<ImageGenericAttPtr, 
                      RecordedRefCountPolicy  > MFRecImageGenericAttPtr;
typedef PointerMField<ImageGenericAttPtr, 
                      UnrecordedRefCountPolicy> MFUnrecImageGenericAttPtr;
typedef PointerMField<ImageGenericAttPtr, 
                      WeakRefCountPolicy      > MFWeakImageGenericAttPtr;
typedef PointerMField<ImageGenericAttPtr, 
                      NoRefCountPolicy        > MFUncountedImageGenericAttPtr;

#endif

OSG_END_NAMESPACE

#endif /* _OSGIMAGEGENERICATT_H_ */


