#include "Login_SignUp_Helper.h"

bool Login_SignUp_Helper::validate_Student_Login(string username, string password)
{
	for (Student s : students) {
		if (s.getUserName() == username && s.getPassword() == password) {
			return true;
		}
		return false;
   }
}
