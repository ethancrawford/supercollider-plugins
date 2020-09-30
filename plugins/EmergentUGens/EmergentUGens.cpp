// PluginEmergentUGens.cpp
// Ethan Crawford (ethan_jc@hotmail.com)

#include "SC_PlugIn.hpp"
#include "EmergentUGens.hpp"

static InterfaceTable* ft;

namespace EmergentUGens {

EmergentUGens::EmergentUGens() {
    mCalcFunc = make_calc_function<EmergentUGens, &EmergentUGens::next>();
    next(1);
}

void EmergentUGens::next(int nSamples) {
    const float* input = in(0);
    const float* gain = in(0);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = input[i] * gain[i];
    }
}

} // namespace EmergentUGens

PluginLoad(EmergentUGensUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<EmergentUGens::EmergentUGens>(ft, "EmergentUGens");
}
