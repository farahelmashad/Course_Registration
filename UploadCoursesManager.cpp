#include"UploadCoursesManager.h"


bool UploadCoursesManager::addCourse(const string& courseID, const string& courseName, const int& creditHours, const string& syllabus, const string& instructor) {
	
	if (courses.find(courseID) != courses.end()) {
			return false;
	}
	if (courses.find(courseName) != courses.end()) {
		return false;
	}
	courses.insert(make_pair(courseID, Course(courseID, courseName, creditHours, syllabus, instructor)));
	return true;

}

Course* UploadCoursesManager::searchCourse(const string& courseID) {
	auto it = courses.find(courseID);
	if (it != courses.end()) {
			return &(it->second);
	}
	return nullptr;
}

bool UploadCoursesManager::courseExits(const string& courseID) {
	return courses.find(courseID) != courses.end();
}

const map<string, Course>& UploadCoursesManager::getAllCourses() const {
	return courses;
}
