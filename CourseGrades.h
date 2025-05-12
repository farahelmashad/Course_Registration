////#pragma once
////#include<string>
////#include<set>
////#include<vector>
////using namespace std;
////
////class CourseGrades
////{   private: 
////	int studentID;
////	string courseID;
////	string semester; // ex: Fall 2024 
////	char grade; // A , B , wkda
////	
////public:
////	//CourseGrades(int studentID, const string& courseID, const string& semester, char grade);
////	CourseGrades(int studentID,string courseID, string semester,char grade);
////	void setCourseID(string courseID);
////	void setSemester(string semester);
////	void setGrade( char grade);
////	string getCourseID();
////	string getSemester();
////	char getGrade ();
////	~CourseGrades();
////	bool operator<(const CourseGrades& other) const {
////		if (semester != other.semester)
////			return semester < other.semester;
////		return courseID < other.courseID;
////	}
////
////
////
////
////};
//
//#pragma once
//#include<string>
//#include<set>
//#include<vector>
//#include"FileManager.h"
//using namespace std;
//
//class CourseGrades
//{
//private:
//	int studentID;
//	string courseID;
//	string semester; // ex: Fall 2024 
//	char grade; // A , B , wkda
//
//public:
//	CourseGrades(int studentID, string courseID, string semester, char grade);
//	CourseGrades(string courseID);
//
//	void setCourseID(string courseID);
//	void setSemester(string semester);
//	void setGrade(char grade);
//	string getCourseID();
//	string getSemester();
//
//
//	char getGrade();
//	~CourseGrades();
//	bool operator<(const CourseGrades& other) const {
//		return courseID < other.courseID;
//	}
//
//
//
//};

#pragma once
#include<string>
#include<set>
#include<vector>
#include"FileManager.h"
using namespace std;

class CourseGrades
{
private:
	int studentID;
	string courseID;
	string semester; // ex: Fall 2024 
	char grade; // A , B , wkda

public:
	CourseGrades(int studentID, string courseID, string semester, char grade);
	CourseGrades(string courseID);

	void setCourseID(string courseID);
	void setSemester(string semester);
	void setGrade(char grade);
	string getCourseID() const;
	string getSemester();
	char getGrade() const;
	~CourseGrades();
	bool operator<(const CourseGrades& other) const {
		return courseID < other.courseID;
	}



};