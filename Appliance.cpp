#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false) {}
Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

int Appliance::get_powerRating() {
    return powerRating;
}
void Appliance::set_powerRating(int pwrR) {
    powerRating = pwrR;
}
bool Appliance::get_isOn() {
    return isOn;
}
void Appliance::set_isOn(bool state) {
    isOn = state;
}
void Appliance::turnOn() {
    isOn = true;
}
void Appliance::turnOff() {
    isOn = false;
}
double Appliance::getPowerConsumption() {
    return 0;
}