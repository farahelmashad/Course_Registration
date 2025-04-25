#pragma once
#include "Student.h"
#include "Course.h"
#include "CourseGrades.h"
#include <map>
#include <string>
#include <set>

class GradesManager {
public:
    static bool studentExists(int studentID);
    static const Student& getStudent(int studentID);
    static std::set<CourseGrades> getCompletedCourses(int studentID);
    static std::string getCourseName(std::string courseID);
    static bool updateGrade(int studentID, const::string& courseID, char newGrade);
};
