#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"

int main() {
    AirFleet group;
    for (int i = 0; i < 5; i++) {
        group.get_fleet()[i] = new Airplane(10, 1000);
    }
    for (int i = 6; i < 10; i++) {
        group.get_fleet()[i] = new Helicopter(100, "E");
    }
    std::cout << "weight: " << group.get_fleet()[4]->get_weight() << std::endl;
}