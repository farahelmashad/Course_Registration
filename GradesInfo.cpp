#include "GradesInfo.h"
#include "Utils.h"
#include <msclr/marshal_cppstd.h>
void CourseRegistration::GradesInfo::LoadCourseInfo() {
	std::string stdCourseCode = Utils::toStdString(courseID);
	for (auto& studentPair : students) {
		if (studentPair.first == studentID) {
			for (auto& completedCourse : studentPair.second.getCompletedCourses()) {
				if (completedCourse.getCourseID() == stdCourseCode) {
					course_id->Text = Utils::toSysStr(completedCourse.getCourseID());
					course_name->Text = Utils::toSysStr(courses[stdCourseCode].getCourseName());
					stud_grade->Text = Utils::toSysStr(completedCourse.getGrade());
					hours_out->Text = courses[stdCourseCode].getCreditHours().ToString();
					syllabus->Text = Utils::toSysStr(courses[stdCourseCode].getSyllabus());
					instructor_name->Text = Utils::toSysStr(courses[stdCourseCode].getInstructor());
					return;
				}
			}
			break;
		}
	}
	//student/course wasn't found
	course_id->Text = "N/A";
	course_name->Text = "Student not found!";
	stud_grade->Text = "N/A";
	hours_out->Text = "N/A";
	syllabus->Text = "N/A";
	instructor_name->Text = "N/A";
}
System::Void CourseRegistration::GradesInfo::submit_button_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	String^ gradeInput = new_grade->Text;
	if (String::IsNullOrWhiteSpace(gradeInput)) {
		MessageBox::Show("Grade cannot be empty or whitespace.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	std::string gradeStr = msclr::interop::marshal_as<std::string>(gradeInput);

	if (!(gradeStr == "A" || gradeStr == "B" || gradeStr == "C" || gradeStr == "D" || gradeStr == "F")) {
		MessageBox::Show("Invalid grade entered. Acceptable grades: A, B, C, D, F", "Invalid Grade", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	std::string stdCourseID = Utils::toStdString(courseID);
	char gradeChar = gradeStr.length() > 0 ? gradeStr[0] : ' ';

	for (auto& studentPair : students) {
		if (studentPair.first == studentID) {
			auto& courses = studentPair.second.getCompletedCourses();

			// Find and update the course
			for (auto it = courses.begin(); it != courses.end(); it++) {
				if (it->getCourseID() == stdCourseID) {
					// Create modified copy
					CourseGrades updated = *it;
					updated.setGrade(gradeChar);

					// Replace in set 
					courses.erase(it);
					courses.insert(updated);

					// Force map update
					studentPair.second = studentPair.second;

					MessageBox::Show("Grade updated successfully!",
						"Success",
						MessageBoxButtons::OK,
						MessageBoxIcon::None);
					return;
				}
			}
			break;
		}
	}
}