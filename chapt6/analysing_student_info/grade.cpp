//source file for grade.h

#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "student_info.h"

using std::domain_error;	using std::vector;

double grade (double midterm, double final, double homework)
{
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw)
{
	if (hw.size() == 0)
		throw domain_error("student has done no homework");
		
		
	return grade(midterm, final, median(hw));
}

double average_grade(const Student_info& s)
{
	return grade(s.midterm, s.final, average(s.homework));
}
double optimistic_median_grade(const Student_info& s)
{
	return grade(s.midterm, s.final, optimistic_median(s.homework));
}
double grade(const Student_info& s)
{
	return grade(s.midterm, s.final, s.homework);
}

//boolean decides whether or not a student has failed
bool failed(Student_info student)
{
	return grade(student) < 40;
}