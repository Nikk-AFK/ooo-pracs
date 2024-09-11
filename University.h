#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include "Course.h"
#include "Gradebook.h"

class University {
    private:
    std::string name;
    std::string location;
    Course * courses;
    Gradebook * gradebook;
    int count;
    int capacity;

    public:
    University(std::string n, std::string l);
    void addCourse(int id, std::string name);
    Course * getCourses();
    Gradebook * getGradebook();

};

#endif