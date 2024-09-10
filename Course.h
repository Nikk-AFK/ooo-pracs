#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Person.h"

class Course {
    private:
    std::string name;
    int id;
    Person ** persons;
    
    public:
    Course(std::string n, int identification, Person ** people);
    void addPerson(Person * p);
};

#endif