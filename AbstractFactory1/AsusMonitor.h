#pragma once

#include "pch.h"

class AsusMonitor : public IMonitor
{
public:
    virtual void Assemble() override
    {
        cout << "Assembling Asus Monitor" << endl;
    }
};
