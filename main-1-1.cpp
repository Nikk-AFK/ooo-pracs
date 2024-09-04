#include <iostream>
#include "AirCraft.h"

int main() {
    AirCraft plane(10);
    plane.set_fuel(50);
    std::cout << "fuel: " << plane.get_fuel() << std::endl;
    plane.refuel();
    std::cout << "refueled. now fuel: " << plane.get_fuel() << std::endl;
    plane.fly(10, 5);
    plane.set_numberOfFlights(5);
    std::cout << "no. of flights: " << plane.get_numberOfFlights() << std::endl;
    plane.set_weight(plane.get_weight() + 5);
    std::cout << "weight is now: " << plane.get_weight() << std::endl;
}