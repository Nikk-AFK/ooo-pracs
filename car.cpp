#include "vehicle.h"
#include "car.h"

Car::Car(int identification) : Vehicle(identification) {
    this->timeOfEntry = std::time(nullptr);
}

int Car::getParkingDuration() {
    return std::time(nullptr)-timeOfEntry;
}