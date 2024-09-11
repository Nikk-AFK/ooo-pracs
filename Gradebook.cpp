#include "Gradebook.h"
#include "Grade.h"

Gradebook::Gradebook() {
    num = 10;
    count = 0;
    Grade * grades = new Grade[num];
}
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value) {
    if (count < num) {
        grades[count] = Grade(stud_id, course_id, assignment, value);
        count++;
    }
}