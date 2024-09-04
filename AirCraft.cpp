#include "AirCraft.h"

AirCraft::AirCraft() {};
AirCraft::AirCraft(int w) : weight(w) {
    fuel = 100;
    numberOfFlights = 0;
};
void AirCraft::refuel() {
    fuel = 100;
}
void AirCraft::set_numberOfFlights(int n) {
    numberOfFlights = n;
}
void AirCraft::set_fuel(float f) {
    fuel = f;
}
void AirCraft::set_weight(int wght) {
    weight = wght;
}
int AirCraft::get_numberOfFlights() {
    return numberOfFlights;
}
float AirCraft::get_fuel() {
    return fuel;
}
int AirCraft::get_weight() {
    return weight;
}

void AirCraft::fly(int headwind, int minutes) {
    numberOfFlights++;
}