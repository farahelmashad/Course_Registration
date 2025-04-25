#include "GradesManager.h"
#include"FileManager.h"


bool GradesManager::studentExists(int studentID) {
    return students.find(studentID) != students.end();
}

const Student& GradesManager::getStudent(int studentID) {
    return students.at(studentID);
}

std::set<CourseGrades> GradesManager::getCompletedCourses(int studentID) {
    std::set<CourseGrades> completed;
    if (!studentExists(studentID)) return completed;

    for (const auto& course : students[studentID].getCompletedCourses()) {
        completed.insert(course);
    }
    return completed;
}

std::string GradesManager::getCourseName(std::string courseID) {
    if (courses.find(courseID) != courses.end())
        return courses[courseID].getCourseName();
    return "Unknown";
}

bool GradesManager::updateGrade(int studentID, const string& courseID, char newGrade) {
    if (!studentExists(studentID)) return false;

    auto& completed = students[studentID].getCompletedCourses(); // this should return a reference to the set
    auto it = completed.begin();

    while (it != completed.end()) {
        if (it->getCourseID() == courseID) {
            CourseGrades updated = *it; // Copy it out
            completed.erase(it);        // Remove from set
            updated.setGrade(newGrade); // Modify
            completed.insert(updated);  // Reinsert
            return true;
        }
        ++it;
    }
    return false;
}

