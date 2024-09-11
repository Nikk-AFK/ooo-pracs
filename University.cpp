#include <iostream>
#include "University.h"

University::University(std::string n, std::string l) : name(n), location(l) {
    count = 0;
    capacity = 10;
    Gradebook * gradebook = new Gradebook();
    Course * courses = new Course[capacity];

}
void University::addCourse(int id, std::string name) {
    if (count < capacity) {
        courses[count] = Course(name, id);
    }
}

Course * University::getCourses() {
    return courses;
}

Gradebook * University::getGradebook() {
    return gradebook;
}