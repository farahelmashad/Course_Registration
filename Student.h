#pragma once
#include<string>
#include<vector>
#include<set>
#include"CourseGrades.h"
using namespace std;
class Student
{
private:
	string username; //hankhaleh howa howa el student name
	string password;
	long nationalID;
	int studentID;
	char gender;
	int academicYear; //1st year, 2nd , etc.
	set<string> currentCourses; //course IDs of the courses they're currently enrolled in 
	vector <CourseGrades> completedCourses; // elcourses ely khalasha (their ids/semester/grade onlyy)



public:
	Student();
	Student(string username, string password, long nationalID, int studentID, char gender, int academicYear, set<string>& currentCourses, vector<CourseGrades>& completedCourses);
	void setUsername(string username);
	void setPassword(string password);
	void setNationalID(long nationalID);
	void setStudentID( int studentID);
	void setGender( char gender);
	void setAcademicYear(int academicYear);
	void setCurrentCourses(set<string> currentCourses);
	void setCompletedCourses(vector<CourseGrades> completedCourses);
	string getUserName();
	string getPassword();
    long getNationalID();
	int getStudentID();
	char getGender();
	int getAcademicYear();
	set<string> getCurrentCourses();
	vector<CourseGrades> getCompletedCourses();
	~Student();
	//Student methods:
	void SearchCourses();
	void CourseRegistration();
	void ViewGrades();
	void CheckPrerequisites();
	void MakeReport();
     

    // file format for info: <username>,<password>,<nationalID>,<studentID>,<gender>,<academicYear>,<currentCourse1>;<currentCourse2>;...,#<courseID>|<semester>|<grade>;<courseID>|<semester>|<grade>;...






};

