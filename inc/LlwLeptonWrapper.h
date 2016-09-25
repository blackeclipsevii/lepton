
#ifndef _LeptonWrapper_h_
#define _LeptonWrapper_h_

#ifndef _VECTOR_
#include <vector>
#endif

#ifndef _STRING_
#include <string>
#endif

namespace llw
{
  // ease of use vector for strings
  typedef std::vector < std::string > StringVector;

  // Function for interacting with lepton
  // This function is essentially directly calling
  //
  // \param[in] argv a string vector of arguments
  // \return `true` on success, `false` otherwise
  bool lepton(StringVector &args);
} // llw

#endif //_LeptonWrapper_h_
