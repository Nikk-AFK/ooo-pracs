#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirCraft.h"
#include <string>

class Airplane : public AirCraft {
    private:
    int numPassengers;

    public:
    Airplane(int w, int p);
    void reducePassengers(int x);
    int get_numPassengers();
    void set_name(std::string n);
    void fly(int headwind, int minutes);
};

#endif