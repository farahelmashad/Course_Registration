#include "Login_SignUp_Helper.h"

bool Login_SignUp_Helper::validate_Student_Login(string username, string password)
{
	for (Student s : students) {
		if (s.getUserName() == username && s.getPassword() == password) {
			currentStudent = s;
			return true;
		}
		return false;
   }
}

bool Login_SignUp_Helper::Student_Sign_Up(string username, string password, int nationalID, int studentID, char gender)
{
	for (Student s : students) {
		if (s.getUserName() == username || s.getNationalID() == nationalID || s.getStudentID() == studentID) {
			return false;
		}
		set<string> courses = {};
		vector<CourseGrades> grades = {};
		Student s(username, password, nationalID, studentID, gender, 1, courses, grades);
		students.push_back(s);
		return true;
	}
}

