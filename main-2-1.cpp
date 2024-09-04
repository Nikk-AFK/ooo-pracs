#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter Copter(5690, "Chopper");
    Copter.refuel();
    Copter.set_fuel(80);
    std::cout << "now fuel: " << Copter.get_fuel() << std::endl;
    std::cout << "name: " << Copter.get_name() << std::endl;
    Copter.set_numberOfFlights(5);
    Copter.fly(0, 10);
    std::cout << "no. of flights: "<< Copter.get_numberOfFlights() << std::endl;
    std::cout << "fuel is now: " << Copter.get_fuel() << std::endl;
}