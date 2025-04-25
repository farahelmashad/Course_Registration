

#include "Login_SignUp_Helper.h"

bool Login_SignUp_Helper::validate_Student_Login(int userID, string password)
{
	if (userID <= 0 || password.empty()) {
		cout << "Invalid user ID or  password.\n";
		return false;
	}

	auto it = students.find(userID);
	if (it != students.end() && it->second.getPassword() == password) {
		currentStudent = it->second;
		return true;
	}
	else {
		cout << "Login failed: Incorrect ID or password.\n";
		return false;
	}
}

bool Login_SignUp_Helper::Student_Sign_Up(string username, string password, int nationalID, int studentID, char gender)
{
	if (username.empty() || password.empty()) {
		cout << "Username and password cannot be empty.\n";
		return false;
	}


	if (nationalID <= 0 || studentID <= 0) {
		cout << "Invalid National ID or Student ID.\n";
		return false;
	}


	if (students.find(studentID) != students.end()) {
		cout << "Student ID already exists.\n";
		return false;
	}

	set<string> current = {};
	set<CourseGrades> completed = {};
	Student s(username, password, nationalID, studentID, gender, 1, current, completed);
	students[studentID] = s;
	currentStudent = s;
	return true;
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