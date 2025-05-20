#pragma once
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include"CourseGrades.h"
#include"FileManager.h"
class CourseGrades;
using namespace std;
class Student
{
private:
	string username; //hankhaleh howa howa el student name
	string password;
	int nationalID;
	int studentID;
	char gender;
	int academicYear; //1st year, 2nd , etc.
	unordered_set<string> currentCourses; //course IDs of the courses they're currently enrolled in 
	set <CourseGrades> completedCourses; // elcourses ely khalasha (their ids/semester/grade onlyy)



public:
	Student();
	Student(string username, string password, int nationalID, int studentID, char gender, int academicYear, unordered_set<string>& currentCourses, set<CourseGrades>& completedCourses);
	void setUsername(string username);
	void setPassword(string password);
	void setNationalID(int nationalID);
	void setStudentID(int studentID);
	void setGender(char gender);
	void setAcademicYear(int academicYear);
	void setCurrentCourses(unordered_set<string> currentCourses);
	void setCompletedCourses(set<CourseGrades> completedCourses);
	string getUserName();
	string getPassword();
	int getNationalID();
	int getStudentID();
	char getGender();
	int getAcademicYear();
	unordered_set<string> getCurrentCourses();
	set<CourseGrades>& getCompletedCourses();
	~Student();
	//Student methods:
	void SearchCourses();
	void CourseRegistration();
	void ViewGrades();
	void CheckPrerequisites();
	void MakeReport();
	bool willRetake(string courseID);
	void Retake(string courseID);
	void deleteCompletedCourse(string courseID);
	bool hasPrerequisites(string courseID, string& reason);
	void registerCourse(string courseID);
	bool isRegistered(string courseID);
	// file format for info: <username>,<password>,<nationalID>,<studentID>,<gender>,<academicYear>,<currentCourse1>;<currentCourse2>;...,#<courseID>|<semester>|<grade>;<courseID>|<semester>|<grade>;...






};