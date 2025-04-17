#pragma once
#include<iostream>
#include<string>
using namespace std;
class Admin
{   private:
	string username;
	string password;

    public: 
	Admin(string username, string password);
	void UploadCourseDescription();
	void SetPrerequisites();
	void ManageStudentGrades();
	void setPassword(string password);
	void setUsername(string username);
	string getPassword();
	string getUsername();
	~Admin();
};

