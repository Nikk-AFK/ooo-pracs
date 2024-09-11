#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include "Person.h"

class Instructor : public Person {
    public:
    Instructor(std::string n);
};

#endif