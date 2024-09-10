#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
    private:
    int student_id;
    std::string assignment;

    public:
    Grade(int id, std::string assign);
      
};

#endif