#include "ParkingLot.h"

ParkingLot::ParkingLot(int max) : max(max), count(0), vehicles(new Vehicle*[max]) {}
ParkingLot::ParkingLot() : max(10), count(0), vehicles(new Vehicle*[10]) {}

int ParkingLot::getCount() {
    return count;
}

void ParkingLot::parkVehicle(Vehicle * obj) {
    if (count < max) {
        vehicles[count] = obj;
        count++;
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id) {
    bool result = false;
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicles[i] = vehicles[count-1];
            vehicles[count-1] = nullptr;
            count--;
            result = true;
            break;
        }
    }
    if (result == false) {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}