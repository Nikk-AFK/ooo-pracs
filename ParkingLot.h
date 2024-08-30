#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

class ParkingLot {
    private:
    int max;
    int count;

    public: 
    Vehicle ** vehicles;
    ParkingLot(int max);
    ParkingLot();
    int getCount();
    void parkVehicle(Vehicle * obj);
    void unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif