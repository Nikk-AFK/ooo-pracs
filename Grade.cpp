#include "Grade.h"

Grade::Grade(int s_id, int c_id, std::string assign, int value) : student_id(s_id), course_id(c_id), assignment(assign), value(value) {}
Grade::Grade() : student_id(0), course_id(0), assignment("Default"), value(0) {}