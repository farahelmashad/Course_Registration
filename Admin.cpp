#pragma once
#include "Admin.h"
Admin::Admin(string username, string password):username(username),password(password)
{
}

void Admin::UploadCourseDescription()
{
}

void Admin::SetPrerequisites()
{
}

void Admin::ManageStudentGrades()
{
}

void Admin::setPassword(string password)
{
	this->password = password;
}

void Admin::setUsername(string username)
{
	this->username = username;
}

string Admin::getPassword()
{
	return password;
}

string Admin::getUsername()
{
	return username;
}

Admin::~Admin()
{
}


