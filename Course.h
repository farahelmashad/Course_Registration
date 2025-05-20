#pragma once
#include<iostream>
#include<string>
#include<unordered_set>
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
	unordered_set<string> prerequisites; //courseID lel prerequisite courses

public:
	string getCourseID() const;
	Course(string courseID, string courseName, int creditHours, string syllabus, string instructor, unordered_set<string>& prerequisites);
	Course(string courseID, string courseName, int creditHours, string syllabus, string instructor);
	void setCourseID(string courseID);
	void setCourseName(string courseName);
	void setCreditHours(int creditHours);
	void setSyllabus(string syllabus);
	void setInstructor(string instructor);
	void setPrerequisites(unordered_set<string>& prereqs);
	static Course SearchCourse(string courseID);
	string getCourseID();
	string getCourseName();
	int getCreditHours();
	string getSyllabus();
	string getInstructor();
	unordered_set<string> getPrerequisites();
	~Course();
	Course();
	bool operator==(const Course& other) const {
		return courseID == other.courseID;
	}
	// course file outline: courseID|courseName|creditHours|syllabus|instructor|prerequisite1,prerequisite2,...

};
