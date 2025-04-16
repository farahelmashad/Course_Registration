#include<iostream>
#include<map>
#include<vector>
#include<set>
#include"Student.h"
#include"Course.h"
#include"CourseGrades.h"
#include"Admin.h"
using namespace std;
class FileManager
{
	void readAdmins(string filename);
	void readStudents(string filename);
	void readCourses(string filename);
};

