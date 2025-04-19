#include "Login_SignUp_Helper.h"

bool Login_SignUp_Helper::validate_Student_Login(int userID, string password)
{
	auto it = students.find(userID);
	if (it != students.end() && it->second.getPassword() == password) {
		return true;
	}
	else {
		return false;
	}

}

bool Login_SignUp_Helper::Student_Sign_Up(string username, string password, int nationalID, int studentID, char gender)
{
	
		return true;
	
}

