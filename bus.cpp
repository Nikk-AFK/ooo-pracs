#include "Vehicle.h"
#include "Bus.h"

Bus::Bus(int identification) : Vehicle(identification) {
    this->timeOfEntry = std::time(nullptr);
}

int Bus::getParkingDuration() {
    return (std::time(nullptr)-timeOfEntry)*0.75;
}