#pragma once

#include "pch.h"

class Company // Abstract Factory
{
public:
    virtual IGPU* CreateGPU() = 0;
    virtual IMonitor* CreateMonitor() = 0;
};
