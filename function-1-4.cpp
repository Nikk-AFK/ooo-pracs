#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList dc = {pl.people, pl.numPeople};
    return dc;
}