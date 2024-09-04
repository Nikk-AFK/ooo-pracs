#include "AirFleet.h"

AirFleet::AirFleet() {
    int size = 10;
    AirCraft ** fleet = new AirCraft*[size];
}

AirCraft ** AirFleet::get_fleet() {
    return fleet;
}