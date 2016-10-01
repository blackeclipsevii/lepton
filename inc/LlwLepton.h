
#ifndef _LeptonWrapper_h_
#define _LeptonWrapper_h_

#ifndef _STRING_
#include <string>
#endif

namespace llw
{
    class Lepton {
    public:
        static bool run( int argc, char** argv);
	static void ini(size_t memSz = 0, size_t threadMemSz = 0);
    private:
        Lepton(){}
    }; // Lepton
} // llw

#endif //_LeptonWrapper_h_
