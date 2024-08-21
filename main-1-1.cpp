#include "Cage.h"
#include <iostream>

extern Cage first;
extern Cage second;

int main() {
    std::cout << "name is " << first.getName() << " ID is " << first.getIDnum();
    std::cout << " name is " << second.getName() << " ID is " << second.getIDnum();
    first.~Cage();
    second.~Cage(); 
}