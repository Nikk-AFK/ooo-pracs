#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"


class Student : public Person {
    private:
    int id;

    public:
    Student(int identification);
};

#endif