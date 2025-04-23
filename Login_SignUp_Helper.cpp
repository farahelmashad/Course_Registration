#include "Login_SignUp_Helper.h"

bool Login_SignUp_Helper::validate_Student_Login(int userID, string password)
{
	auto it = students.find(userID);
	if (it != students.end() && it->second.getPassword() == password) {
		currentStudent = it->second;
		return true;
	}
	else {
		return false;
	}

}

bool Login_SignUp_Helper::Student_Sign_Up(string username, string password, int nationalID, int studentID, char gender)
{
	if ( students.find(nationalID) == students.end()) {
	set<string> current = {};
	set<CourseGrades> completed = {};
	Student s(username, password, nationalID, studentID, gender, 1, current, completed);
	students[studentID] = s;
	currentStudent = s;
	return true;
}
	else {
		return false;
	}
}

bool Login_SignUp_Helper::validate_Admin_Login(string username, string password)
{
	for (Admin a : admins) {
		if (a.getUsername() == username && a.getPassword() == password) {
			return true;

		}
	}
	return false;
}

