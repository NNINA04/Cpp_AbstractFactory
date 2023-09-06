#pragma once

#include "pch.h"

class MsiGPU : public IGPU
{
public:
    virtual void Assemble() override
    {
        cout << "Assembling Msi GRPU" << endl;
    }
};
