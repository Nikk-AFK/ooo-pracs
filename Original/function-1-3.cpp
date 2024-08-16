#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList field1 = pl;
    PersonList field2;
    *field2.people = *field1.people;
    field2.numPeople = field2.numPeople;
    return field2;
}