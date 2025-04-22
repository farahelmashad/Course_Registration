#pragma once
#include "CourseGrades.h"

CourseGrades::~CourseGrades()
{
}
//CourseGrades::CourseGrades(int studentID, const std::string& courseID, const std::string& semester, char grade)
//	: studentID(studentID), courseID(courseID), semester(semester), grade(grade) {
//}
CourseGrades::CourseGrades(int studentID,string courseID, string semester, char grade)
{
	this->studentID = studentID;
	this->courseID = courseID;
	this->semester = semester;
	this->grade = grade;
}

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

string CourseGrades::getCourseID()
{
	return courseID;
}

string CourseGrades::getSemester()
{
	return semester;
}

char CourseGrades::getGrade()
{
	return grade;
}
