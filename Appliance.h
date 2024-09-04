#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {
    private:
    bool isOn;
    int powerRating;

    public:
    Appliance();
    Appliance(int powerRating);
    int get_powerRating();
    void set_powerRating(int pwrR);
    bool get_isOn();
    void set_isOn(bool state);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};

#endif