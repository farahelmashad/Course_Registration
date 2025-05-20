#pragma once
#include "CourseGrades.h"

CourseGrades::~CourseGrades()
{
}
CourseGrades::CourseGrades(string courseID)
{
	this->courseID = courseID;
}


CourseGrades::CourseGrades(int studentID, string courseID, string semester, char grade)
{
	this->studentID = studentID;
	this->courseID = courseID;
	this->semester = semester;
	this->grade = grade;
}

string CourseGrades::getCourseID() const {
	return courseID;
}
//CourseGrades::CourseGrades(string courseID)
//{
//	this->courseID = courseID;
//}

void CourseGrades::setCourseID(string courseID)
{
	this->courseID = courseID;
}

void CourseGrades::setSemester(string semester)
{
	this->semester = semester;
}

void CourseGrades::setGrade(char grade)
{
	this->grade = grade;
}


string CourseGrades::getSemester()
{
	return semester;
}

char CourseGrades::getGrade() const
{
	return grade;
}
bool CourseGrades::operator<(const CourseGrades& other) const {
	return courseID < other.courseID;
}
