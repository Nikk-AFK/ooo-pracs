#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"

class AirFleet {
    private:
    AirCraft **fleet;

    public:
    AirFleet();
AirCraft **get_fleet();
};


#endif