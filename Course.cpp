#pragma once
#include "Course.h"

Course::~Course()
{
}
Course::Course() {
	creditHours = 0;
}

Course::Course(string courseID, string courseName, int creditHours, string syllabus, string instructor, set<string>& prerequisites)
{
	this->courseID = courseID;
	this->courseName = courseName;
	this->creditHours = creditHours;
	this->syllabus = syllabus;
	this->instructor = instructor;
	this->prerequisites = prerequisites;
}

Course::Course(string courseID, string courseName, int creditHours, string syllabus, string instructor)
{
	this->courseID = courseID;
	this->courseName = courseName;
	this->creditHours = creditHours;
	this->syllabus = syllabus;
	this->instructor = instructor;

}

Course Course::SearchCourse(string courseID)
{
	auto it = courses.find(courseID);
	if (it == courses.end()) {
		return Course();
	}
	else {
		return it->second;

	}
}

string Course::getCourseID()
{
	return courseID;
}

string Course::getCourseName()
{
	return courseName;
}

int Course::getCreditHours()
{
	return creditHours;
}

string Course::getSyllabus()
{
	return syllabus;
}

string Course::getInstructor()
{
	return instructor;
}

set<string> Course::getPrerequisites()
{
	return prerequisites;
}
