#ifndef BUS_H
#define BUS_H

#include <iostream>
#include "Vehicle.h"

class Bus : public Vehicle { 
    public:
    Bus(int identification);
    int getParkingDuration();
};

#endif