#include <iostream>
#include "TV.h"

TV::TV() : Appliance(0), screenSize(50) {}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}
void TV::setScreenSize(double scr) {
    screenSize = scr;
}
double TV::getScreenSize() {
    return screenSize;
}
double TV::getPowerConsumption() {
    double pw_cons = get_powerRating() * (screenSize / 10);
    return pw_cons;
}