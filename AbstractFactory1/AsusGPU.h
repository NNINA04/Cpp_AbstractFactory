#pragma once

#include "pch.h"

class AsusGPU : public IGPU
{
public:
    virtual void Assemble() override
    {
        cout << "Assembling Asus GRPU" << endl;
    }
};
