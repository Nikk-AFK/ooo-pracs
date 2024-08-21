#include "Cage.h"
#include <iostream>

int main() {
    Cage first("James", 0);
    Cage second("Bob", 1);
    std::cout << "name is " << first.getName() << " ID is " << first.getIDnum();
    std::cout << " name is " << second.getName() << " ID is " << second.getIDnum();
    first.~Cage();
    second.~Cage(); 
}