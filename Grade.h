#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
    private:
    int student_id;
    int course_id;
    int value;

    std::string assignment;

    public:
    Grade(int s_id, int c_id, std::string assign, int value);
    Grade();
      
};

#endif