#include "vehicle.h"

Vehicle::Vehicle(int identification) : ID(identification) {
    this->timeOfEntry = std::time(nullptr);
}

Vehicle::Vehicle() : ID(0) {}

int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {
    return 0;
}