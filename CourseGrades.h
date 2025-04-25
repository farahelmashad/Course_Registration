#pragma once
#include<string>
#include<set>
#include<vector>
#include"FileManager.h"
using namespace std;

class CourseGrades
{   private: 
	int studentID;
	string courseID;
	string semester; // ex: Fall 2024 
	char grade; // A , B , wkda
	
public:
	CourseGrades(int studentID,string courseID, string semester, char grade);
	CourseGrades(string courseID);

	void setCourseID(string courseID);
	void setSemester(string semester);
	void setGrade( char grade);
	string getCourseID() const; 
	string getSemester();
	char getGrade() const;
	~CourseGrades();
bool operator<(const CourseGrades& other) const {
    return courseID < other.courseID;
}



};

