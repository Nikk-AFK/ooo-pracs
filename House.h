#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

class House {
    private:
    int count;
    int numAppliances;
    Appliance ** appliances;

    public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance* appliance);
    int get_numAppliances();
    Appliance ** get_Appliances();
    double getTotalPowerConsumption();
};

#endif