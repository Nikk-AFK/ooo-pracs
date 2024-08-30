#include "vehicle.h"
#include "bus.h"

Bus::Bus(int identification) : Vehicle(identification) {
    this->timeOfEntry = std::time(nullptr);
}

int Bus::getParkingDuration() {
    return std::time(nullptr)-timeOfEntry;
}