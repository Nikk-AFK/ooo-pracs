#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
    private:
    int student_id;
    int course_id;

    std::string assignment;
    int value;

    public:
    Grade(int s_id, int c_id, std::string assign, int value);
    Grade();
      
};

#endif