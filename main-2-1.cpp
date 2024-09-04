#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main() {
    Fridge lg_fridge(6, 80);
    lg_fridge.turnOn();
    std::cout << "The fridge has a power rating of " << lg_fridge.get_powerRating() << std::endl;
    std::cout << "The fridge has a volume of " << lg_fridge.getVolume() << std::endl;
    lg_fridge.setVolume(90);
    std::cout << "The dishwasher now has a volume of " << lg_fridge.getVolume() << std::endl;
    std::cout << "The fridge has a power consumption of " << lg_fridge.getPowerConsumption() << std::endl;
}