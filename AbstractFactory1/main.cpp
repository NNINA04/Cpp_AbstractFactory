#include "pch.h"

/*
    This example is from "Geekific" YT Channel
    LINK: https://www.youtube.com/watch?v=QNpwWkdFvgQ&ab_channel=Geekific

    Abstract Factory is like a Factory method, but it makes more than one abstract method.
    It can be useful for dividing for many different categories.
*/
int main()
{
    Company* msi = new MSIManufacturer();
    IGPU* MsiGPU = msi->CreateGPU();
    IMonitor* MsiMonitor = msi->CreateMonitor();
    MsiGPU->Assemble();
    MsiMonitor->Assemble();

    Company* asus = new AsusManufacturer();
    IGPU* AsusGPU = asus->CreateGPU();
    IMonitor* AsusMonitor = asus->CreateMonitor();
    AsusGPU->Assemble();
    AsusMonitor->Assemble();
}