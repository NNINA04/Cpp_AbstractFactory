#pragma once

#include "pch.h"

class AsusManufacturer : public Company
{
public:
    virtual IGPU* CreateGPU()
    {
        return new AsusGPU();
    }

    virtual IMonitor* CreateMonitor()
    {
        return new AsusMonitor();
    }
};
