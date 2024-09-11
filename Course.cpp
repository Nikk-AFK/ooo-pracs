#include "Course.h"

Course::Course(std::string n, int identification) : name(n), id(identification) {
    count = 0;
    capacity = 10;
    Person ** persons = new Person*[capacity];
}


Course::Course() : name("e"), id(0) {
    count = 0;
    capacity = 10;
    Person ** persons = new Person*[capacity];
}

void Course::addPerson(Person * p) {
    if (count < capacity) {
        persons[count] = p;
        count++;
    }
}
