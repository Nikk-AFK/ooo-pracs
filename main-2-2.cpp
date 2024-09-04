#include <iostream>
#include "Airplane.h"

int main() {
    Airplane Boeing(1000, 100);
    Boeing.refuel();
    Boeing.set_fuel(80);
    std::cout << "weight is now: " << Boeing.get_weight() << std::endl;
    std::cout << "now fuel: " << Boeing.get_fuel() << std::endl;
    Boeing.set_numberOfFlights(5);
    Boeing.fly(0, 45);
    std::cout << "no. of flights: "<< Boeing.get_numberOfFlights() << std::endl;
    std::cout << "fuel is now: " << Boeing.get_fuel() << std::endl;
}