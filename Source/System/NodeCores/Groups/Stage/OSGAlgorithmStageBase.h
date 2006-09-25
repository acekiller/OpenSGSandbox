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
 **     class AlgorithmStage
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGALGORITHMSTAGEBASE_H_
#define _OSGALGORITHMSTAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGStage.h" // Parent

#include "OSGAlgorithmFields.h" // Algorithm type
#include "OSGUInt32Fields.h" // ProjectionMode type
#include "OSGMatrixFields.h" // ProjectionMatrix type

#include "OSGAlgorithmStageFields.h"

OSG_BEGIN_NAMESPACE

class AlgorithmStage;

//! \brief AlgorithmStage Base Class.

class OSG_GROUP_DLLMAPPING AlgorithmStageBase : public Stage
{
  public:

    typedef Stage Inherited;
    typedef Stage ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StagePtr, 
                              StageConstPtr, 
                              AlgorithmStage>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StagePtr, 
                              StageConstPtr, 
                              AlgorithmStage>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StagePtr, 
                              StageConstPtr,
                              AlgorithmStage>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StagePtr, 
                              StageConstPtr,
                              AlgorithmStage>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StagePtr, 
                              StageConstPtr,
                              AlgorithmStage>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StagePtr, 
                              StageConstPtr,
                              AlgorithmStage>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        AlgorithmFieldId = Inherited::NextFieldId,
        ProjectionModeFieldId = AlgorithmFieldId + 1,
        ProjectionMatrixFieldId = ProjectionModeFieldId + 1,
        NextFieldId = ProjectionMatrixFieldId + 1
    };

    static const OSG::BitVector AlgorithmFieldMask = 
        (TypeTraits<BitVector>::One << AlgorithmFieldId);
    static const OSG::BitVector ProjectionModeFieldMask = 
        (TypeTraits<BitVector>::One << ProjectionModeFieldId);
    static const OSG::BitVector ProjectionMatrixFieldMask = 
        (TypeTraits<BitVector>::One << ProjectionMatrixFieldId);
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

     const SFAlgorithmPtr *getSFAlgorithm (void) const;

#ifdef OSG_1_COMPAT
           SFUInt32 *getSFProjectionMode(void);
#endif
           SFUInt32 *editSFProjectionMode(void);
     const SFUInt32 *getSFProjectionMode (void) const;

#ifdef OSG_1_COMPAT
           SFMatrix *getSFProjectionMatrix(void);
#endif
           SFMatrix *editSFProjectionMatrix(void);
     const SFMatrix *getSFProjectionMatrix (void) const;


           AlgorithmPtrConst getAlgorithm(void) const;

#ifdef OSG_1_COMPAT
           UInt32 &getProjectionMode(void);
#endif
           UInt32 &editProjectionMode(void);
     const UInt32 &getProjectionMode (void) const;

#ifdef OSG_1_COMPAT
           Matrix &getProjectionMatrix(void);
#endif
           Matrix &editProjectionMatrix(void);
     const Matrix &getProjectionMatrix (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setAlgorithm(AlgorithmPtrConstArg value);
     void setProjectionMode(const UInt32 &value);
     void setProjectionMatrix(const Matrix &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex, 
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement, 
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex, 
                                  const UInt32                    uiFieldId  );
    
    virtual void removeFromMField(      FieldContainerPtrConstArg pElement, 
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

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

    static  AlgorithmStagePtr create     (void); 
    static  AlgorithmStagePtr createEmpty(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFAlgorithmPtr _sfAlgorithm;
    SFUInt32 _sfProjectionMode;
    SFMatrix _sfProjectionMatrix;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    AlgorithmStageBase(void);
    AlgorithmStageBase(const AlgorithmStageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AlgorithmStageBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const AlgorithmStage *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      AlgorithmStageBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      AlgorithmStageBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const AlgorithmStageBase &source);
};

typedef AlgorithmStageBase *AlgorithmStageBaseP;

/** Type specific RefPtr type for AlgorithmStage. */
typedef RefPtr<AlgorithmStagePtr> AlgorithmStageRefPtr;

typedef osgIF<
    AlgorithmStageBase::isNodeCore,

    CoredNodePtr<AlgorithmStage>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        AlgorithmStageNodePtr;

OSG_END_NAMESPACE

#define OSGALGORITHMSTAGEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h 106 2006-09-14 03:15:53Z dirk $"

#endif /* _OSGALGORITHMSTAGEBASE_H_ */
