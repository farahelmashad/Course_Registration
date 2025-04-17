#pragma once
#include<string>
#include<set>
#include<vector>
using namespace std;

class CourseGrades
{   private: 
	int studentID;
	string courseID;
	string semester; // ex: Fall 2024 
	char grade; // A , B , wkda
	
public:
	CourseGrades(int studentID,string courseID, string semester, char grade);
	void setCourseID(string courseID);
	void setSemester(string semester);
	void setGrade( char grade);
	string getCourseID();
	string getSemester();
	char getGrade();
	~CourseGrades();





};

