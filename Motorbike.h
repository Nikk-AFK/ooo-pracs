#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <iostream>
#include "Vehicle.h"

class Motorbike : public Vehicle { 
    public:
    Motorbike(int identification);
    int getParkingDuration();
};

#endif