#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    PersonList field = createPersonList(3);
        std::cout << field.people[1].name << " " << field.people[1].age << std::endl;
}