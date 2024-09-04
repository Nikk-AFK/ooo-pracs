#include "House.h"

House::House() : numAppliances(3) {
    appliances = new Appliance*[numAppliances];
    count = 0;
}
House::House(int numAppliances) : numAppliances(numAppliances) {
    appliances = new Appliance*[numAppliances];
    count = 0;
}
bool House::addAppliance(Appliance* appliance) {
    if (count < numAppliances) {
        appliances[count] = appliance;
        count++;
        return true;
    }
    return false;
}
int House::get_numAppliances() {
    return numAppliances;
}
double House::getTotalPowerConsumption() {
    double total = 0;
    for (int i = 0; i < count; i++) {
        total = total + appliances[i]->getPowerConsumption();
    }
    return total;
}

Appliance ** House::get_Appliances() {
    return appliances;
}