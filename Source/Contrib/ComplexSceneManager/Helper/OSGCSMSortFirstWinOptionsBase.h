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
 **     class CSMSortFirstWinOptions
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMSORTFIRSTWINOPTIONSBASE_H_
#define _OSGCSMSORTFIRSTWINOPTIONSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGBaseTypes.h"

#include "OSGCSMClusterWinOptions.h" // Parent

#include "OSGStringFields.h" // Compression type
#include "OSGUInt32Fields.h" // SubtileSize type
#include "OSGBoolFields.h" // Compose type
#include "OSGBoolFields.h" // UseFaceDistribution type

#include "OSGCSMSortFirstWinOptionsFields.h"

OSG_BEGIN_NAMESPACE

class CSMSortFirstWinOptions;

//! \brief CSMSortFirstWinOptions Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMSortFirstWinOptionsBase : public CSMClusterWinOptions
{
  public:

    typedef CSMClusterWinOptions Inherited;
    typedef CSMClusterWinOptions ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMSortFirstWinOptions);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CompressionFieldId = Inherited::NextFieldId,
        SubtileSizeFieldId = CompressionFieldId + 1,
        ComposeFieldId = SubtileSizeFieldId + 1,
        UseFaceDistributionFieldId = ComposeFieldId + 1,
        NextFieldId = UseFaceDistributionFieldId + 1
    };

    static const OSG::BitVector CompressionFieldMask =
        (TypeTraits<BitVector>::One << CompressionFieldId);
    static const OSG::BitVector SubtileSizeFieldMask =
        (TypeTraits<BitVector>::One << SubtileSizeFieldId);
    static const OSG::BitVector ComposeFieldMask =
        (TypeTraits<BitVector>::One << ComposeFieldId);
    static const OSG::BitVector UseFaceDistributionFieldMask =
        (TypeTraits<BitVector>::One << UseFaceDistributionFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFString            *editSFCompression    (void);
            const SFString            *getSFCompression     (void) const;

                  SFUInt32            *editSFSubtileSize    (void);
            const SFUInt32            *getSFSubtileSize     (void) const;

                  SFBool              *editSFCompose        (void);
            const SFBool              *getSFCompose         (void) const;

                  SFBool              *editSFUseFaceDistribution(void);
            const SFBool              *getSFUseFaceDistribution (void) const;


                  std::string         &editCompression    (void);
            const std::string         &getCompression     (void) const;

                  UInt32              &editSubtileSize    (void);
                  UInt32               getSubtileSize     (void) const;

                  bool                &editCompose        (void);
                  bool                 getCompose         (void) const;

                  bool                &editUseFaceDistribution(void);
                  bool                 getUseFaceDistribution (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCompression    (const std::string &value);
            void setSubtileSize    (const UInt32 value);
            void setCompose        (const bool value);
            void setUseFaceDistribution(const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  CSMSortFirstWinOptionsTransitPtr  create          (void);
    static  CSMSortFirstWinOptions           *createEmpty     (void);

    static  CSMSortFirstWinOptionsTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CSMSortFirstWinOptions            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFString          _sfCompression;
    SFUInt32          _sfSubtileSize;
    SFBool            _sfCompose;
    SFBool            _sfUseFaceDistribution;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMSortFirstWinOptionsBase(void);
    CSMSortFirstWinOptionsBase(const CSMSortFirstWinOptionsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMSortFirstWinOptionsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleCompression     (void) const;
    EditFieldHandlePtr editHandleCompression    (void);
    GetFieldHandlePtr  getHandleSubtileSize     (void) const;
    EditFieldHandlePtr editHandleSubtileSize    (void);
    GetFieldHandlePtr  getHandleCompose         (void) const;
    EditFieldHandlePtr editHandleCompose        (void);
    GetFieldHandlePtr  getHandleUseFaceDistribution (void) const;
    EditFieldHandlePtr editHandleUseFaceDistribution(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      CSMSortFirstWinOptionsBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CSMSortFirstWinOptionsBase &source);
};

typedef CSMSortFirstWinOptionsBase *CSMSortFirstWinOptionsBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMSORTFIRSTWINOPTIONSBASE_H_ */
