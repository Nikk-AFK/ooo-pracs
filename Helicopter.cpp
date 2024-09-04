#include "Helicopter.h"

    Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {};
    std::string Helicopter::get_name() {
        return name;
    }
    void Helicopter::set_name(std::string n) {
        name = n;
    }
    void Helicopter::fly(int headwind, int minutes) {
        float fuel_usage;
        float new_fuel;
        if (headwind >= 40) {
            if (get_weight() > 5670) {
                new_fuel = get_fuel() - (0.4 * minutes) - ((get_weight() - 5670)*(0.001)*minutes);
            } else {
                new_fuel = get_fuel() - (0.4 * minutes);
            }
        } else {
            if (get_weight() > 5670) {
                new_fuel = get_fuel() - (0.2 * minutes) - ((get_weight() - 5670)*(0.001)*minutes);
                std::cout << - (0.2 * minutes) - ((get_weight() - 5670)*(0.001)*minutes) << std::endl;
            } else {
                new_fuel = get_fuel() - (0.2 * minutes);
            }
        }
        if (new_fuel < 20) {
        } else {
            set_fuel(new_fuel);
            set_numberOfFlights((get_numberOfFlights()) + 1);
        }
    }