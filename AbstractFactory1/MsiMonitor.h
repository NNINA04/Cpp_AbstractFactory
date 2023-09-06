#pragma once

#include "pch.h"

class MsiMonitor : public IMonitor
{
public:
    virtual void Assemble() override
    {
        cout << "Assembling Msi Monitor" << endl;
    }
};
