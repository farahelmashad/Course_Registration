#include"AdminCoursesManager.h"


bool AdminCoursesManager::addCourse(const string& courseID, const string& courseName, const int& creditHours, const string& syllabus, const string& instructor) {

	if (courses.find(courseID) != courses.end()) {
		return false;
	}
	if (courses.find(courseName) != courses.end()) {
		return false;
	}
	courses.insert(make_pair(courseID, Course(courseID, courseName, creditHours, syllabus, instructor)));
	return true;

}

Course* AdminCoursesManager::searchCourse(const string& courseID) {
	auto it = courses.find(courseID);
	if (it != courses.end()) {
		return &(it->second);
	}
	return nullptr;
}

bool AdminCoursesManager::courseExits(const string& courseID) {
	return courses.find(courseID) != courses.end();
}

const map<string, Course>& AdminCoursesManager::getAllCourses() const {
	return courses;
}

void AdminCoursesManager::NameToIDMap() {
	courseNametoID.clear();
	for (auto& pair : courses) {
		string courseID = pair.first;
		string courseName = pair.second.getCourseName();
		courseNametoID[courseName] = courseID;
	}
}

string AdminCoursesManager::getCourseIdByName(string& courseName) {
	auto it = courseNametoID.find(courseName);
	if (it != courseNametoID.end()) {
		return it->second;
	}
	return " ";
}
