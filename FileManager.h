#pragma once
#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include"Student.h"
#include"Course.h"
#include"CourseGrades.h"
#include"Admin.h"
class Course;
class Student;
using namespace std;

extern vector<Admin> admins;
extern unordered_map<int,Student> students;
extern unordered_map<string, Course> courses;
extern Student currentStudent;


class FileManager
{   public:
	void readAdmins(string filename);
	void readStudents(string filename);
	void readCourses(string filename);
	void writeStudents(string filename);
	void FileManager::writeCourses(string filename);
	void FileManager::writeAdmins(string filename);

};

