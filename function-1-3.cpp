#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    Person * dc_arr = new Person[pl.numPeople];
    PersonList dc = {dc_arr, pl.numPeople};
    for (int i = 0; i < pl.numPeople; i++) {
        dc_arr[i] = pl.people[i];
    }
    return dc;
}