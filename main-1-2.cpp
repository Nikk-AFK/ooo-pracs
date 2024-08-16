#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    PersonList list = createPersonList(5);
    std::cout << list.numPeople << " " << list.people[2].name << std::endl;
    delete[] list.people;
}