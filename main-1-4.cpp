#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main() {
    PersonList field1 = createPersonList(3);
    PersonList field2 = shallowCopyPersonList(field1);
    std::cout << field2.people[1].name << " " << field2.people[1].age << std::endl;
}

