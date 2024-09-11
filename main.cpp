#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Grade.h"
#include "Course.h"
#include "Gradebook.h"
#include "University.h"

int main() {
    University UNIA("Uni A", "Adelaide");
    UNIA.addCourse(0, "Compsci");
    Course * Courses = UNIA.getCourses();
    Student * James = new Student(0, "James");
    Courses->addPerson(James);
    Gradebook * Grades = UNIA.getGradebook();
    Grades->addGrade(0, 0, "Prac Test", 5);
}