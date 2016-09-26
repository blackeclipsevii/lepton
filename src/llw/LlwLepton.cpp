
#include "LlwLepton.h"
#include "../src/lepton/jpgcoder.hh"

using namespace llw;
using namespace std;

namespace
{
    std::string StringVectorToString(StringVector &v)
    {
        std::string str = "";
        
        for(StringVector::iterator it = v.begin(); it != v.end(); ++ it)
        {
            str += *it + " ";
        }
        
        return str;
    }
}

bool Lepton::execute(StringVector &vex)
{
    std::string str = StringVectorToString(vex);
    char * argv = new char[str.size()];
    memcpy(argv, str.c_str(), str.size());
    return 0 == theMaine((int)vex.size(), &argv);
}
