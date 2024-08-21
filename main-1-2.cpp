#include "Clinic.h"
#include <iostream>

extern Cage james;
extern Cage bob;
extern Cage mark;
extern Clinic place;

int main() {
    std::cout << place.getName() << std::endl;
    std::cout << place.getNumber_of_cages() << std::endl;
    place.addCage(james);
    std::cout << place.getNumber_of_cages() << std::endl;
    place.getCages();
}