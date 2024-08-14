#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList field1 = pl;
    PersonList field2;
    field2 = field1;
    return field2;
}