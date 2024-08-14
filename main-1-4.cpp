#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    PersonList field1;
    field1.numPeople = 3;
    Person * arr = new Person[3];
    field1.people = arr;
    for (int i = 0; i < 3; i++) {
    arr[i] = {"Jane Doe", 1};
    }

    PersonList field2 = shallowCopyPersonList(field1);
    std::cout << field2.people[0].name << " " << field2.people[0].age << std::endl;
    std::cout << field1.people[2].name << " " << field1.people[2].age << std::endl;
}

