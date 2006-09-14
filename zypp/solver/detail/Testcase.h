/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file       zypp/solver/detail/TestCase.h
 *
*/

#ifndef ZYPP_SOLVER_DETAIL_TESTCASE_H
#define ZYPP_SOLVER_DETAIL_TESTCASE_H

#include <iosfwd>
#include <string>
#include "zypp/solver/detail/Resolver.h"

/////////////////////////////////////////////////////////////////////////
namespace zypp
{ ///////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////
  namespace solver
  { /////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////
    namespace detail
    { ///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//	CLASS NAME : Testcase
/**
 * Generating a testcase of the current pool and solver state
 **/
class Testcase {

  private:
    std::string dumpPath; // Path of the generated testcase
    

  public:
    Testcase(const std::string & path);
    Testcase();    
    ~Testcase();

    bool createTestcase(Resolver & resolver);

};

///////////////////////////////////////////////////////////////////
    };// namespace detail
    /////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////
  };// namespace solver
  ///////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////
};// namespace zypp
/////////////////////////////////////////////////////////////////////////

#endif // ZYPP_SOLVER_DETAIL_TESTCASE_H
