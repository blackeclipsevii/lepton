
#include "LlwLeptonWrapper.h"
#include "../src/lepton/jpgcoder.hh"

using namespace llw;
using namespace std;

bool lepton(StringVector &vex)
{
  std::string str = "";
  
  for(StringVector::iterator it = vex.begin(); it != vex.end(); ++ it) {
    str += *it + " ";
  }
  char * argv = new char[str.size()];
  memcpy(argv, str.c_str(), str.size());
  return 0 == theMaine((int)vex.size(), &argv);
}
