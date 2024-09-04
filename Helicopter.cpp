#include "Helicopter.h"

    Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {
        set_fuel(100);
        set_numberOfFlights(0);
    };
    std::string Helicopter::get_name() {
        return name;
    }
    void Helicopter::set_name(std::string n) {
        name = n;
    }
    void Helicopter::fly(int headwind, int minutes) {
        float fuel_usage;
        if (headwind >= 40) {
            if (get_weight() > 5670) {
                fuel_usage = ((0.4 + ((get_weight() - 5670)*0.001*minutes)) * minutes);
            } else {
                fuel_usage = (0.4 * minutes);
            }
        } else {
            if (get_weight() > 5670) {
                fuel_usage = ((0.2 + ((get_weight() - 5670)*0.001*minutes)) * minutes);
            } else {
                fuel_usage = (0.2 * minutes);
            }
        }
        if ((get_fuel() - fuel_usage) < 20) {
        } else {
            set_fuel((get_fuel() - fuel_usage));
            int num = get_numberOfFlights();
            set_numberOfFlights(num++);
        }
    }