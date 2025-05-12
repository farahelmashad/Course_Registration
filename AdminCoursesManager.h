


#pragma once
#include<map>
#include<string>
#include"Course.h"

class AdminCoursesManager {

private:

	map<string, string> courseNametoID;

public:

	bool addCourse(const string& courseID, const string& courseName, const int& creditHours, const string& syllabus, const string& instructor);
	Course* searchCourse(const string& courseID);
	bool courseExits(const string& courseID);
	const map<string, Course>& getAllCourses() const;
	void NameToIDMap();
	string getCourseIdByName(string& courseName);
};