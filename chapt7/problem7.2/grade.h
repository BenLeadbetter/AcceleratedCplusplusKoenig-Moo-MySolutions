#ifndef GUARD_grade_h
#define GUARD_grade_h

//grade.h
#include <vector>
#include "student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);
bool failed(Student_info);
char letter_grade(Student_info);

#endif
