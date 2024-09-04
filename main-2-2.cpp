#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main() {
    TV lg_tv(6, 40);
    lg_tv.turnOn();
    std::cout << "The tv has a power rating of " << lg_tv.get_powerRating() << std::endl;
    std::cout << "The fridge has a screen size of " << lg_tv.getScreenSize() << std::endl;
    lg_tv.setScreenSize(45);
    std::cout << "The tv now has a screen size of " << lg_tv.getScreenSize() << std::endl;
    std::cout << "The tv has a power consumption of " << lg_tv.getPowerConsumption() << std::endl;
}