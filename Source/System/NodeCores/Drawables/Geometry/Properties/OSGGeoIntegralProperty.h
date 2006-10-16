/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

#ifndef _OSGGEOINTEGRALPROPERTY_H_
#define _OSGGEOINTEGRALPROPERTY_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGGeoIntegralPropertyBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief GeoIntegralProperty class. See \ref 
           PageWindowGLUTGeoIntegralProperty for a description.
*/

class OSG_DRAWABLE_DLLMAPPING GeoIntegralProperty : 
            public GeoIntegralPropertyBase
{
  private:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef GeoIntegralPropertyBase                             Inherited;

    /*---------------------------------------------------------------------*/
    /*! \name        Arbitrary Type Interface Methods                      */
    /*! \{                                                                 */

    typedef UInt64 MaxTypeT;
    
    // MSVC 7.0 is a little weird about template member methods, that's why
    // the code has to be here...

    template <class ExternalType>
    ExternalType getValue (const UInt32 index) const
    {
        MaxTypeT ival;
        getValue(ival, index);
        return ival;
    }
    
    template <class ExternalType>
    void getValue (ExternalType &eval, const UInt32 index) const
    {
        MaxTypeT val;
        getValue(val, index);
        eval = val;
    }
    
    template <class ExternalType>
    void setValue (const ExternalType &val, const UInt32 index)
    {
        MaxTypeT ival = val;
        setValue(ival, index);
    }
    
    template <class ExternalType>
    void addValue (const ExternalType &val)
    {
        push_back(val);
    }
    
    template <class ExternalType>
    void push_back(const ExternalType &val)
    {
        resize(size() + 1);
        setValue(val, size() - 1);
    }

    virtual void clear(void) = 0;
    virtual void resize(size_t newsize) = 0;

    virtual UInt32 size(void) const = 0;

    /*---------------------------------------------------------------------*/

    // A little fallback to simplify porting of old code
    inline UInt32 getValue(const UInt32 index) const;  
    
    // This is the fallback, it has to be implemented by the concrete Props!
    virtual void getValue(      MaxTypeT &val, const UInt32 index ) const = 0;
    virtual void setValue(const MaxTypeT &val, const UInt32 index )       = 0;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField, 
                         UInt32            origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Chunk Class Access                           */
    /*! \{                                                                 */

    virtual const StateChunkClass * getClass         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name              Static Chunk Class Access                       */
    /*! \{                                                                 */

    inline static        UInt32            getStaticClassId (void);
    inline static  const StateChunkClass * getStaticClass   (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    State Commands                            */
    /*! \{                                                                 */

    virtual void activate      (DrawEnv    *pEnv, 
                                UInt32      index = 0);

    virtual void changeFrom    (DrawEnv    *pEnv, 
                                StateChunk *old,
                                UInt32      index = 0);

    virtual void deactivate    (DrawEnv    *pEnv, 
                                UInt32      index = 0);

    virtual bool isInVBO       (DrawEnv    *pEnv);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in GeoIntegralPropertyBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    GeoIntegralProperty(void);
    GeoIntegralProperty(const GeoIntegralProperty &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeoIntegralProperty(void); 

    /*! \}                                                                 */

    virtual GLenum getBufferType(void); // buffer type for VBOs
    static void initMethod(InitPhase ePhase);
    
    /*==========================  PRIVATE  ================================*/

  private:

    friend class GeoIntegralPropertyBase;

    template<class ContainerFactoryT>
    friend struct CPtrConstructionFunctions;

    template<class ContainerFactoryT>
    friend struct PtrConstructionFunctions;

    static StateChunkClass _class;

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const GeoIntegralProperty &source);
};

typedef GeoIntegralProperty *GeoIntegralPropertyP;

OSG_END_NAMESPACE

#include "OSGGeoIntegralPropertyBase.inl"
#include "OSGGeoIntegralProperty.inl"

#define OSGGEOINTEGRALPROPERTY_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGGEOINTEGRALPROPERTY_H_ */
