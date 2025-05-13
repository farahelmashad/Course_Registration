#pragma once
#include <Windows.h>
#include "FileManager.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;
vector<Admin> admins;
map<int, Student> students;
map<string, Course> courses;
Student currentStudent;


void FileManager::readAdmins(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "File not found!" << endl;
        return;
    }

    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string username, password;
        getline(ss, username, '|');
        getline(ss, password);
        admins.push_back(Admin(username, password));
    }
    file.close();
}

void FileManager::readStudents(string filename) {
    ifstream file(filename);
    string line;

    if (!file.is_open()) {
        cout << "File not found!" << endl;
        return;
    }

    while (getline(file, line)) {
        try {
            stringstream ss(line);
            string username, password, nationalIDStr, studentIDStr, genderStr, academicYearStr;
            string currentCourseStr, completedCourseStr;
            int nationalID = 0;
            int studentID = 0, academicYear = 0;
            char gender = 'M';

            getline(ss, username, ',');
            getline(ss, password, ',');
            getline(ss, nationalIDStr, ',');
            getline(ss, studentIDStr, ',');
            getline(ss, genderStr, ',');
            getline(ss, academicYearStr, ',');

            if (username.empty() || password.empty() || nationalIDStr.empty() ||
                studentIDStr.empty() || genderStr.empty() || academicYearStr.empty()) {
                continue;
            }

            nationalID = stoi(nationalIDStr);
            studentID = stoi(studentIDStr);
            academicYear = stoi(academicYearStr);
            gender = genderStr[0];

            getline(ss, currentCourseStr, '#');
            set<string> currentCourses;
            stringstream currentStream(currentCourseStr);
            string currentCourse;
            while (getline(currentStream, currentCourse, ';')) {
                if (!currentCourse.empty())
                    currentCourses.insert(currentCourse);
            }

            getline(ss, completedCourseStr);
            set<CourseGrades> completedCourses;
            stringstream completedStream(completedCourseStr);
            string courseData;
            while (getline(completedStream, courseData, ';')) {
                stringstream courseStream(courseData);
                string courseID, semester, gradeStr;
                char grade = 'F';

                getline(courseStream, courseID, '|');
                getline(courseStream, semester, '|');
                getline(courseStream, gradeStr);
                if (!gradeStr.empty()) grade = gradeStr[0];

                if (!courseID.empty() && !semester.empty()) {
                    completedCourses.insert(CourseGrades{ studentID, courseID, semester, grade });
                }
            }

            Student newStudent(username, password, nationalID, studentID, gender, academicYear, currentCourses, completedCourses);
            students[studentID] = newStudent;
        }
        catch (exception& e) {
            cout << "Exception on line: " << line << endl;
        }
    }

    file.close();
}

void FileManager::readCourses(string filename) {
     ifstream file(filename);

    if (!file.is_open()) {
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string courseID, courseName, creditHoursStr, syllabus, instructor, prereqStr;

        getline(ss, courseID, '|');
        getline(ss, courseName, '|');
        getline(ss, creditHoursStr, '|');
        getline(ss, syllabus, '|');
        getline(ss, instructor, '|');
        getline(ss, prereqStr);

        int creditHours = stoi(creditHoursStr);

        set<string> prereqs;
        stringstream prereqStream(prereqStr);
        string prereq;
        while (getline(prereqStream, prereq, ',')) {
            if (!prereq.empty())
                prereqs.insert(prereq);
        }
        Course course(courseID, courseName, creditHours, syllabus, instructor, prereqs);
        courses[courseID] = course;

    }

    file.close();

}

void FileManager::writeStudents( string filename) {
     ofstream file(filename);
     if (!file.is_open()) {
         return;
     }

     for ( auto pair : students) {
          Student s = pair.second;

         file << s.getUserName() << ','
             << s.getPassword() << ','
             << s.getNationalID() << ','
             << s.getStudentID() << ','
             << s.getGender() << ','
             << s.getAcademicYear() << ',';

         set<string> currentCourses = s.getCurrentCourses();
         for (auto it = currentCourses.begin(); it != currentCourses.end(); ++it) {
             file << *it;
             if (next(it) != currentCourses.end()) file << ';';
         }

         file << '#';

         set<CourseGrades> completedCourses = s.getCompletedCourses();
         for ( auto cg : completedCourses) {
             file << cg.getCourseID() << '|' << cg.getSemester() << '|' << cg.getGrade() << ';';
         }

        file << '\n';
    }

     file.close();
 }

void FileManager::writeCourses(string filename) {
     ofstream file(filename);
     if (!file.is_open()) {
         return;
     }
    for (auto& pair : courses) {
        Course& course = pair.second;

        file << course.getCourseID() << '|'
            << course.getCourseName() << '|'
            << course.getCreditHours() << '|'
            << course.getSyllabus() << '|'
            << course.getInstructor() << '|';

        const set<string>& prereqs = course.getPrerequisites();
        for (auto it = prereqs.begin(); it != prereqs.end(); ++it) {
            file << *it;
            if (next(it) != prereqs.end()) file << ',';
        }

        file << '\n';
    }

    file.close();
    OutputDebugStringA("Debug: writeFile was called\n");
}

void FileManager::writeAdmins(string filename) {
     ofstream file(filename);
     if (!file.is_open()) {
         return;
     }

    for (Admin& admin : admins) {
        file << admin.getUsername() << "|" << admin.getPassword() << endl;
    }

    file.close();
}


