#pragma once
#include"FileManager.h"
static class Login_SignUp_Helper
{   public:
	static bool validate_Student_Login(int studentID, string password);
	static bool Student_Sign_Up(string username, string password, int nationalID, int studentID, char gender);
	static bool validate_Admin_Login(string username, string password);
};

