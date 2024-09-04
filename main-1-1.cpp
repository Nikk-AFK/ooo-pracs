#include <iostream>
#include "Appliance.h"

int main() {
    Appliance dishwasher(5);
    Appliance kettle;
    dishwasher.turnOn();
    kettle.turnOn();
    std::cout << "The dishwasher has a power rating of " << dishwasher.get_powerRating() << std::endl;
    dishwasher.set_powerRating(3);
    std::cout << "The dishwasher now has a power rating of " << dishwasher.get_powerRating() << std::endl;
    dishwasher.turnOff();
    std::cout << "The dishwasher is currently " << dishwasher.get_isOn() << std::endl;
}