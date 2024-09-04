#include <iostream>
#include "Appliance.h"
#include "TV.h"
#include "House.h"

int main() {
    House Home(3);
    Fridge * lg_fridge = new Fridge(6, 80);
    Home.addAppliance(lg_fridge);
    Appliance ** Arr = Home.get_Appliances();
    std::cout << "The fridge has a power rating of " << Arr[0]->get_powerRating() << std::endl;
    TV * lg_tv = new TV(6, 40);
    lg_tv->turnOn();
    Home.addAppliance(lg_tv);
    std::cout << "The tv has a power rating of " << Arr[1]->get_powerRating() << std::endl;
    lg_tv->setScreenSize(45);
    std::cout << "The tv has a power consumption of " << Arr[1]->getPowerConsumption() << std::endl;
    std::cout << "The total power consumption is: " << Home.getTotalPowerConsumption() << std::endl;
}