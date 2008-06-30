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
 **     class CSMMultiWinOptions!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECSMMULTIWINOPTIONSINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGCSMMultiWinOptionsBase.h"
#include "OSGCSMMultiWinOptions.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMMultiWinOptions
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           CSMMultiWinOptionsBase::_sfXOverlap
    
*/

/*! \var Int32           CSMMultiWinOptionsBase::_sfYOverlap
    
*/

/*! \var bool            CSMMultiWinOptionsBase::_sfManageClientViewports
    
*/

/*! \var bool            CSMMultiWinOptionsBase::_sfBalance
    
*/

/*! \var bool            CSMMultiWinOptionsBase::_sfBestCut
    
*/

/*! \var bool            CSMMultiWinOptionsBase::_sfShowBalancing
    
*/


void CSMMultiWinOptionsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "xOverlap",
        "",
        XOverlapFieldId, XOverlapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMMultiWinOptions::editHandleXOverlap),
        static_cast<FieldGetMethodSig >(&CSMMultiWinOptions::getHandleXOverlap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "yOverlap",
        "",
        YOverlapFieldId, YOverlapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMMultiWinOptions::editHandleYOverlap),
        static_cast<FieldGetMethodSig >(&CSMMultiWinOptions::getHandleYOverlap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "manageClientViewports",
        "",
        ManageClientViewportsFieldId, ManageClientViewportsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMMultiWinOptions::editHandleManageClientViewports),
        static_cast<FieldGetMethodSig >(&CSMMultiWinOptions::getHandleManageClientViewports));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "balance",
        "",
        BalanceFieldId, BalanceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMMultiWinOptions::editHandleBalance),
        static_cast<FieldGetMethodSig >(&CSMMultiWinOptions::getHandleBalance));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "bestCut",
        "",
        BestCutFieldId, BestCutFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMMultiWinOptions::editHandleBestCut),
        static_cast<FieldGetMethodSig >(&CSMMultiWinOptions::getHandleBestCut));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "showBalancing",
        "",
        ShowBalancingFieldId, ShowBalancingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMMultiWinOptions::editHandleShowBalancing),
        static_cast<FieldGetMethodSig >(&CSMMultiWinOptions::getHandleShowBalancing));

    oType.addInitialDesc(pDesc);
}


CSMMultiWinOptionsBase::TypeObject CSMMultiWinOptionsBase::_type(
    CSMMultiWinOptionsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CSMMultiWinOptionsBase::createEmptyLocal),
    CSMMultiWinOptions::initMethod,
    CSMMultiWinOptions::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMMultiWinOptionsBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMMultiWinOptions\"\n"
    "    parent=\"CSMClusterWinOptions\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "    <Field\n"
    "       name=\"xOverlap\"\n"
    "       type=\"Int32\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "       name=\"yOverlap\"\n"
    "       type=\"Int32\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"manageClientViewports\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"balance\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bestCut\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"showBalancing\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMMultiWinOptionsBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMMultiWinOptionsBase::getType(void) const
{
    return _type;
}

UInt32 CSMMultiWinOptionsBase::getContainerSize(void) const
{
    return sizeof(CSMMultiWinOptions);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *CSMMultiWinOptionsBase::editSFXOverlap(void)
{
    editSField(XOverlapFieldMask);

    return &_sfXOverlap;
}

const SFInt32 *CSMMultiWinOptionsBase::getSFXOverlap(void) const
{
    return &_sfXOverlap;
}


SFInt32 *CSMMultiWinOptionsBase::editSFYOverlap(void)
{
    editSField(YOverlapFieldMask);

    return &_sfYOverlap;
}

const SFInt32 *CSMMultiWinOptionsBase::getSFYOverlap(void) const
{
    return &_sfYOverlap;
}


SFBool *CSMMultiWinOptionsBase::editSFManageClientViewports(void)
{
    editSField(ManageClientViewportsFieldMask);

    return &_sfManageClientViewports;
}

const SFBool *CSMMultiWinOptionsBase::getSFManageClientViewports(void) const
{
    return &_sfManageClientViewports;
}


SFBool *CSMMultiWinOptionsBase::editSFBalance(void)
{
    editSField(BalanceFieldMask);

    return &_sfBalance;
}

const SFBool *CSMMultiWinOptionsBase::getSFBalance(void) const
{
    return &_sfBalance;
}


SFBool *CSMMultiWinOptionsBase::editSFBestCut(void)
{
    editSField(BestCutFieldMask);

    return &_sfBestCut;
}

const SFBool *CSMMultiWinOptionsBase::getSFBestCut(void) const
{
    return &_sfBestCut;
}


SFBool *CSMMultiWinOptionsBase::editSFShowBalancing(void)
{
    editSField(ShowBalancingFieldMask);

    return &_sfShowBalancing;
}

const SFBool *CSMMultiWinOptionsBase::getSFShowBalancing(void) const
{
    return &_sfShowBalancing;
}






/*------------------------------ access -----------------------------------*/

UInt32 CSMMultiWinOptionsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        returnValue += _sfXOverlap.getBinSize();
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        returnValue += _sfYOverlap.getBinSize();
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        returnValue += _sfManageClientViewports.getBinSize();
    }
    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        returnValue += _sfBalance.getBinSize();
    }
    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        returnValue += _sfBestCut.getBinSize();
    }
    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        returnValue += _sfShowBalancing.getBinSize();
    }

    return returnValue;
}

void CSMMultiWinOptionsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        _sfXOverlap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        _sfYOverlap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        _sfManageClientViewports.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        _sfBalance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        _sfBestCut.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        _sfShowBalancing.copyToBin(pMem);
    }
}

void CSMMultiWinOptionsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (XOverlapFieldMask & whichField))
    {
        _sfXOverlap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (YOverlapFieldMask & whichField))
    {
        _sfYOverlap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ManageClientViewportsFieldMask & whichField))
    {
        _sfManageClientViewports.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        _sfBalance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        _sfBestCut.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        _sfShowBalancing.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMMultiWinOptionsTransitPtr CSMMultiWinOptionsBase::createLocal(BitVector bFlags)
{
    CSMMultiWinOptionsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMMultiWinOptions>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMMultiWinOptionsTransitPtr CSMMultiWinOptionsBase::create(void)
{
    return createLocal();
}

CSMMultiWinOptions *CSMMultiWinOptionsBase::createEmptyLocal(BitVector bFlags)
{
    CSMMultiWinOptions *returnValue;

    newPtr<CSMMultiWinOptions>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMMultiWinOptions *CSMMultiWinOptionsBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMMultiWinOptionsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMMultiWinOptions *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMMultiWinOptions *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMMultiWinOptionsBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMMultiWinOptionsBase::CSMMultiWinOptionsBase(void) :
    Inherited(),
    _sfXOverlap               (),
    _sfYOverlap               (),
    _sfManageClientViewports  (bool(true)),
    _sfBalance                (bool(true)),
    _sfBestCut                (bool(false)),
    _sfShowBalancing          (bool(false))
{
}

CSMMultiWinOptionsBase::CSMMultiWinOptionsBase(const CSMMultiWinOptionsBase &source) :
    Inherited(source),
    _sfXOverlap               (source._sfXOverlap               ),
    _sfYOverlap               (source._sfYOverlap               ),
    _sfManageClientViewports  (source._sfManageClientViewports  ),
    _sfBalance                (source._sfBalance                ),
    _sfBestCut                (source._sfBestCut                ),
    _sfShowBalancing          (source._sfShowBalancing          )
{
}


/*-------------------------- destructors ----------------------------------*/

CSMMultiWinOptionsBase::~CSMMultiWinOptionsBase(void)
{
}


GetFieldHandlePtr CSMMultiWinOptionsBase::getHandleXOverlap        (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfXOverlap,
             this->getType().getFieldDesc(XOverlapFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMMultiWinOptionsBase::editHandleXOverlap       (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfXOverlap,
             this->getType().getFieldDesc(XOverlapFieldId)));


    editSField(XOverlapFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMMultiWinOptionsBase::getHandleYOverlap        (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfYOverlap,
             this->getType().getFieldDesc(YOverlapFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMMultiWinOptionsBase::editHandleYOverlap       (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfYOverlap,
             this->getType().getFieldDesc(YOverlapFieldId)));


    editSField(YOverlapFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMMultiWinOptionsBase::getHandleManageClientViewports (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfManageClientViewports,
             this->getType().getFieldDesc(ManageClientViewportsFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMMultiWinOptionsBase::editHandleManageClientViewports(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfManageClientViewports,
             this->getType().getFieldDesc(ManageClientViewportsFieldId)));


    editSField(ManageClientViewportsFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMMultiWinOptionsBase::getHandleBalance         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfBalance,
             this->getType().getFieldDesc(BalanceFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMMultiWinOptionsBase::editHandleBalance        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfBalance,
             this->getType().getFieldDesc(BalanceFieldId)));


    editSField(BalanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMMultiWinOptionsBase::getHandleBestCut         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfBestCut,
             this->getType().getFieldDesc(BestCutFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMMultiWinOptionsBase::editHandleBestCut        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfBestCut,
             this->getType().getFieldDesc(BestCutFieldId)));


    editSField(BestCutFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMMultiWinOptionsBase::getHandleShowBalancing   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfShowBalancing,
             this->getType().getFieldDesc(ShowBalancingFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMMultiWinOptionsBase::editHandleShowBalancing  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfShowBalancing,
             this->getType().getFieldDesc(ShowBalancingFieldId)));


    editSField(ShowBalancingFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMMultiWinOptionsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CSMMultiWinOptionsBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMMultiWinOptionsBase::createAspectCopy(void) const
{
    CSMMultiWinOptions *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMMultiWinOptions *>(this));

    return returnValue;
}
#endif

void CSMMultiWinOptionsBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CSMMultiWinOptions *>::_type("CSMMultiWinOptionsPtr", "CSMClusterWinOptionsPtr");
#endif


OSG_END_NAMESPACE
