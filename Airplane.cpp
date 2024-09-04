#include "Airplane.h"

    Airplane::Airplane(int w, int p) : AirCraft(w), numPassengers(p) {};
    int Airplane::get_numPassengers() {
        return numPassengers;
    }
    void Airplane::reducePassengers(int x) {
        numPassengers = numPassengers - x;
        if (numPassengers < 0) {
            numPassengers = 0;
        }
    }

    void Airplane::fly(int headwind, int minutes) {
        float fuel_usage;
        float new_fuel;
        if (headwind >= 60) {
                new_fuel = get_fuel() - (0.5 * minutes) - (numPassengers)*(0.001)*minutes;
        } else {
                new_fuel = get_fuel() - (0.3 * minutes) - (numPassengers)*(0.001)*minutes;
        }
        if (new_fuel < 20) {
        } else {
            set_fuel(new_fuel);
            set_numberOfFlights((get_numberOfFlights()) + 1);
        }
    }