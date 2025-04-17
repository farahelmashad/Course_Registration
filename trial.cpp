/*#pragma once
#include "FileManager.h"
#include<string>
#include <iostream>
#include"Student.h"
using namespace std;
int main() {
    FileManager fm;
    
   /* fm.readStudents("student.txt");
    vector<CourseGrades> cgs;
    CourseGrades cg(1111, "CS1111", "Spring 2027", 'A');
    cgs.push_back(cg);
    set<string> curr = { "CS00","cs101" };

        Student s("farahh", "faroh123", 122346, 12346, 'F', 2, curr, cgs);
        students.push_back(s);
    fm.writeStudents("student.txt");
    fm.readStudents("student.txt");

    //fm.readAdmins("Admin.txt");
   /*  fm.readCourses("Courses.txt");
    cout << "Courses Loaded:\n";
    for ( auto& pair :courses) {
         Course& c = pair.second;
        cout << "Course ID: " << c.getCourseID() << endl;
        cout << "Course Name: " << c.getCourseName() << endl;
        cout << "Credit Hours: " << c.getCreditHours() << endl;
        cout << "Syllabus: " << c.getSyllabus() << endl;
        cout << "Instructor: " << c.getInstructor() << endl;

        cout << "Prerequisites: ";
        for (const string& pre : c.getPrerequisites()) {
            cout << pre << " ";
        }
        cout << "\n---------------------------\n";
    }
   fm.readStudents("student.txt");
   */
    // 2. Test: Printing and checking every piece of data from the vector
/*
    cout << "Test: Data in students vector\n";
    for (auto& student : students) {
        cout << "Username: " << student.getUserName() << endl;
        cout << "Password: " << student.getPassword() << endl;
        cout << "National ID: " << student.getNationalID() << endl;
        cout << "Student ID: " << student.getStudentID() << endl;
        cout << "Gender: " << student.getGender() << endl;
        cout << "Academic Year: " << student.getAcademicYear() << endl;

        cout << "Current Courses: ";
        for (const auto& course : student.getCurrentCourses()) {
            cout << course << " ";
        }
        cout << endl;

        cout << "Completed Courses: ";
        for (CourseGrades course : student.getCompletedCourses()) {
            cout << course.getCourseID() << "|" << course.getGrade() << "|" << course.getSemester() << " ";
        }
        cout << endl;

        cout << "-------------------------------------\n";
    }
    
   fm.readCourses("Courses.txt");
    set<string> setss = { "huy","fuig" };
    Course c("cs2937", "computerrrr", 123, "hey", "wow", setss); 
    courses["cs2937"] = c;
    fm.writeCourses("Courses.txt");
    fm.readCourses("Courses.txt");
    cout << "Courses Loaded:\n";
    for (auto& pair : courses) {
        Course& c = pair.second;
        cout << "Course ID: " << c.getCourseID() << endl;
        cout << "Course Name: " << c.getCourseName() << endl;
        cout << "Credit Hours: " << c.getCreditHours() << endl;
        cout << "Syllabus: " << c.getSyllabus() << endl;
        cout << "Instructor: " << c.getInstructor() << endl;

        cout << "Prerequisites: ";
        for (const string& pre : c.getPrerequisites()) {
            cout << pre << " ";
        }
        cout << "\n---------------------------\n";
    }
    return 0;
}
*/