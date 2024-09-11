#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Person.h"

class Course {
    private:
    std::string name;
    int id;
    Person ** persons;
    int capacity;
    int count;
    
    public:
    Course(std::string n, int identification);
    Course();
    void addPerson(Person * p);
};

#endif