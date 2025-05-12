#pragma once
#include "CourseGrades.h"

CourseGrades::~CourseGrades()
{
}


CourseGrades::CourseGrades(int studentID, string courseID, string semester, char grade)
{
	this->studentID = studentID;
	this->courseID = courseID;
	this->semester = semester;
	this->grade = grade;
}

CourseGrades::CourseGrades(string courseID)
{
	this->courseID = courseID;
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

string CourseGrades::getCourseID() const
{
	return courseID;

}

string CourseGrades::getSemester()
{
	return semester;
}

char CourseGrades::getGrade() const
{
	return grade;
}