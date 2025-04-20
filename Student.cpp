#pragma once
#include "Student.h"
Student::~Student()
{
}

void Student::SearchCourses()
{
}

void Student::CourseRegistration()
{
}

void Student::ViewGrades()
{
}

void Student::CheckPrerequisites()
{
}

void Student::MakeReport()
{
}

bool Student::willRetake(string courseID)
{
	for ( CourseGrades  cg : completedCourses) {
		if (cg.getCourseID() == courseID) {
			return true;
		}
	}
	return false;

}

void Student::Retake(string courseID)
{
	currentCourses.insert(courseID);
	for (auto it = completedCourses.begin(); it != completedCourses.end(); ) {
		if (it->getCourseID() == courseID) {
			it = completedCourses.erase(it);  // erase returns the next valid iterator
			break; // remove this ift you want to delete all matches
		}
		else {
			++it;
		}
	}

}

Student::Student()
{
}

Student::Student(string username, string password, int nationalID, int studentID, char gender, int academicYear, set<string>& currentCourses, set<CourseGrades>& completedCourses)
	: username(username), password(password), nationalID(nationalID), studentID(studentID), gender(gender), academicYear(academicYear),
	currentCourses(currentCourses), completedCourses(completedCourses)
{
}

void Student::setUsername(string username)
{
	this->username = username;
}

void Student::setPassword(string password)
{
	this->password = password;
}

void Student::setNationalID(int nationalID)
{
	this->nationalID = nationalID;

}

void Student::setStudentID(int studentID)
{
	this->studentID = studentID;
}

void Student::setGender(char gender)
{
	this->gender = gender;
}

void Student::setAcademicYear(int academicYear)
{
	this->academicYear = academicYear;
}

void Student::setCurrentCourses(set<string> currentCourses)
{
	this->currentCourses = currentCourses;
}

void Student::setCompletedCourses(set<CourseGrades> completedCourses)
{
	this->completedCourses = completedCourses;
}

string Student::getUserName()
{
	return username;
}

string Student::getPassword()
{
	return password;
}

int Student::getNationalID()
{
	return nationalID;
}

int Student::getStudentID()
{
	return studentID;
}

char Student::getGender()
{
	return gender;
}

int Student::getAcademicYear()
{
	return academicYear;
}

set<string> Student::getCurrentCourses()
{
	return currentCourses;
}

set<CourseGrades> Student::getCompletedCourses()
{
	return completedCourses;
}
