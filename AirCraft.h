#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>

class AirCraft {
    private:
    int weight;
    float fuel;
    int numberOfFlights;

    public:
    AirCraft();
    AirCraft(int w);
    void refuel();
    virtual void fly(int headwind, int minutes);
    void set_numberOfFlights(int n);
    void set_fuel(float f);
    void set_weight(int wght);
    int get_numberOfFlights();
    float get_fuel();
    int get_weight();

};

#endif