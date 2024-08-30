#include "vehicle.h"
#include "motorbike.h"

Motorbike::Motorbike(int identification) : Vehicle(identification) {
    this->timeOfEntry = std::time(nullptr);
}

int Motorbike::getParkingDuration() {
    return std::time(nullptr)-timeOfEntry;
}