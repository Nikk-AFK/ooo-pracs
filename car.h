#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "vehicle.h"

class Car : public Vehicle { 
    public:
    Car(int identification);
    int getParkingDuration();
};

#endif