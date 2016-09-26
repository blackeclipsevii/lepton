
#include "LlwLepton.h"
#include "../src/lepton/jpgcoder.hh"

using namespace llw;
using namespace std;

#ifndef for_each
#define for_each(T,begin,end) \
for(T::iterator it = begin; it != end; ++ it)
#endif

namespace
{
    std::string StringVectorToString(StringVector &v)
    {
        std::string str = "./lepton ";
        
        for_each(StringVector, v.begin(), v.end())
        {
            str += *it + " ";
        }
        
        return str.substr();
    }
}

bool Lepton::execute(StringVector &vex)
{
    std::string str = StringVectorToString(vex);
    char * argv = new char[str.size()+1];
    memcpy(argv, str.c_str(), str.size());
    argv[str.size()] = '\0';
    
    bool success = (0 == theMaine(static_cast<int>(vex.size()), &argv));
    
    delete[](argv);
    return success;
}
