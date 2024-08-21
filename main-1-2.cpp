#include "Clinic.h"
#include <iostream>

extern Cage first;
extern Cage second;
extern Cage third;
extern Clinic place;

int main() {
    std::cout << place.getName() << std::endl;
    std::cout << place.getNumber_of_cages() << std::endl;
    place.addCage(first);
    std::cout << place.getNumber_of_cages() << std::endl;
    place.getCages();
}