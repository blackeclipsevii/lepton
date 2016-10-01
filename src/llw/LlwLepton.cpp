
#include "LlwLepton.h"
#include "../src/lepton/jpgcoder.hh"

using namespace llw;

bool Lepton::run(int argc, char** argv)
{
    return (0 == theMaine(argc, argv));
}

void Lepton::ini(size_t mz, size_t tmz)
{
    initializeMemory(mz, tmz);
}
