#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    Person * arr = new Person[3];
    PersonList list = {arr, 3};
    for (int i = 0; i < 3; i++) {
        arr[i] = {"Phrase", 5};
    }
    PersonList dc = shallowCopyPersonList(list);
    std::cout << dc.numPeople << " " << dc.people[2].name << std::endl;
    delete[] arr;
}