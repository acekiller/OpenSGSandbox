/*---------------------------------------------------------------------------*\
*                                OpenSG                                     *
*                                                                           *
*                                                                           *
*             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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


#ifndef _OSGGRAPHOP_H_
#define _OSGGRAPHOP_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGUtilDef.h"
#include "OSGAction.h"
#include "OSGBaseTypes.h"
#include "OSGMemoryObject.h"

#include <map>
#include <string>

OSG_BEGIN_NAMESPACE

//! \ingroup GrpSystemRenderingBackend
//! GraphOp class

class OSG_SYSTEM_DLLMAPPING GraphOp : public MemoryObject
{
    /*==========================  PUBLIC  =================================*/
public:

    typedef MemoryObject Inherited;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static const char *getClassname(void) { return "GraphOp"; };

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */
    
    GraphOp(const char* name = "");

    virtual GraphOp *create(void) = 0;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Parameters                                */
    /*! \{                                                                 */

    virtual void setParams(const std::string params) = 0;
    virtual std::string usage(void) = 0;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Main methods                               */
    /*! \{                                                                 */

    virtual bool traverse(NodePtr root);

    const std::string &getName(void);
    void              setName(const char *name);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Exclusion                                 */
    /*! \{                                                                 */    
    
    void addToExcludeList       (const NodePtr      node );
    void addToExcludeList       (const std::string &name );
    void removeFromExcludeList  (const NodePtr      node );
    void removeFromExcludeList  (const std::string &name );
    void clearExcludeList       (      void              );
    bool isInExcludeListNodes   (const NodePtr      node );
    bool isInExcludeListNames   (const std::string &name );
    bool isInExcludeList        (const NodePtr      node );        

    /*! \}                                                                 */

    /*=========================  PROTECTED  ===============================*/
protected:

    /*---------------------------------------------------------------------*/
    /*! \name                Parameter Helpers                             */
    /*! \{                                                                 */

    class OSG_SYSTEM_DLLMAPPING ParamSet
    {
      public:
        
        ParamSet(const std::string &params);
    
        // Set given value to parameter value, return true if set,
        // false if not
        bool operator()(const char *name, std::string &val); 
        bool operator()(const char *name, Real32 &val); 
        bool operator()(const char *name, UInt16 &val); 
        bool operator()(const char *name, UInt32 &val); 
        bool operator()(const char *name, bool &val); 

        void markUsed(const char *name);
        
        std::string getUnusedParams(void);
        
      private:
      
        typedef std::map<std::string, std::string> valuesT;
        typedef std::map<std::string, bool>        usedT;
        
        valuesT _values;
        usedT _used;    
    };

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GraphOp(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/

    virtual Action::ResultE traverseEnter(const NodePtr         node) = 0;
    virtual Action::ResultE traverseLeave(const NodePtr         node, 
                                                Action::ResultE res ) = 0;

    std::list<ConstNodePtr> _excludeListNodes;
    std::list<std::string >  _excludeListNames;

    /*==========================  PRIVATE  ================================*/
private:
    std::string            _name;
};

typedef GraphOp *GraphOpP;
OSG_END_NAMESPACE

#endif /* _OSGGRAPHOP_H_ */
