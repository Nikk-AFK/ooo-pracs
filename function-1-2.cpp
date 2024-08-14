#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    PersonList field;
    field.numPeople = n;
    Person * arr = new Person[n];
    field.people = arr;
    for (int i = 0; i < n; i++) {
    arr[i] = {"Jane Doe", 1};
    }
    return field;
}