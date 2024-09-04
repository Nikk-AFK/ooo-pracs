#include <iostream>
#include "Fridge.h"

Fridge::Fridge() : Appliance(0), volume(100) {}
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}
void Fridge::setVolume(double vol) {
    volume = vol;
}
double Fridge::getVolume() {
    return volume;
}
double Fridge::getPowerConsumption() {
    double pw_cons = get_powerRating() * 24 * (volume / 100);
    return pw_cons;
}