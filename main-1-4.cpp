#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    PersonList field1;
    field1.numPeople = 3;
    Person * arr = new Person[3];
    field1.people = arr;
    for (int i = 0; i < 3; i++) {
    arr[i] = {"James Doe", 2};
    }
    PersonList field2 = shallowCopyPersonList(field1);
    std::cout << field2.people[1].name << " " << field2.people[1].age << std::endl;
}

