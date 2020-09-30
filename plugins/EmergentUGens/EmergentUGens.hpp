// PluginEmergentUGens.hpp
// Ethan Crawford (ethan_jc@hotmail.com)

#pragma once

#include "SC_PlugIn.hpp"

namespace EmergentUGens {

class EmergentUGens : public SCUnit {
public:
    EmergentUGens();

    // Destructor
    // ~EmergentUGens();

private:
    // Calc function
    void next(int nSamples);

    // Member variables
};

} // namespace EmergentUGens
