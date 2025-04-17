#pragma once
#include<iostream>
#include<map>
#include<vector>
#include<set>
#include"Student.h"
#include"Course.h"
#include"CourseGrades.h"
#include"Admin.h"
using namespace std;

extern vector<Admin> admins;
extern vector<Student> students;
extern map<string, Course> courses;


class FileManager
{   public:
	void readAdmins(string filename);
	void readStudents(string filename);
	void readCourses(string filename);
	void writeStudents(string filename);
	void FileManager::writeCourses(string filename);
	void FileManager::writeAdmins(string filename);

};

