#pragma once
#include<iostream>
#include<string>
#include<set>
#include<map>
#include"FileManager.h"
using namespace std;
class Course
{
private:
	string courseID;
	string courseName;
	int creditHours;
	string syllabus;
	string instructor;
	set<string> prerequisites; //courseID lel prerequisite courses

 public: 
	 Course(string courseID, string courseName, int creditHours, string syllabus, string instructor, set<string>& prerequisites);
	 Course(string courseID, string courseName, int creditHours, string syllabus, string instructor);
	 void setCourseID(string courseID);
	 void setCourseName(string courseName);
	 void setCreditHours(int creditHours);
	 void setSyllabus(string syllabus);
	 void setInstructor(string instructor);
	 void setPrerequisites(set<string>& prerequisites);
	 static Course SearchCourse(string courseID);
	 string getCourseID();
	 string getCourseName();
	 int getCreditHours();
	 string getSyllabus();
	 string getInstructor();
	 set<string> getPrerequisites();
	 ~Course();
	 Course();
	// course file outline: courseID|courseName|creditHours|syllabus|instructor|prerequisite1,prerequisite2,...

};
