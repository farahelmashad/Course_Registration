#pragma once
#include "GradesManager.h"
#include "Utils.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class GradesWrapper {
public:
    static bool StudentExists(String^ id) {
        return GradesManager::studentExists(Utils::toInt(id));
    }

    static List<String^>^ GetCompletedCourses(String^ id) {
        auto courses = GradesManager::getCompletedCourses(Utils::toInt(id));
        List<String^>^ courseList = gcnew List<String^>();
        for (auto& course : courses) {
            std::string fullName = GradesManager::getCourseName(course.getCourseID());
            courseList->Add("[" + Utils::toSysStr(course.getCourseID()) + "] " + Utils::toSysStr(fullName));
        }
        return courseList;
    }

    static bool UpdateGrade(String^ studentID, String^ courseID, String^ gradeChar) {
        return GradesManager::updateGrade(
            Utils::toInt(studentID),
            Utils::toStdString(courseID),
            gradeChar[0]
        );
    }
};
