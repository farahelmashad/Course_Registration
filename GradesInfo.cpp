#include "GradesInfo.h"
#include "Utils.h"
#include <msclr/marshal_cppstd.h>
void CourseRegistration::GradesInfo::LoadCourseInfo() {
	std::string stdCourseCode = Utils::toStdString(courseID);
	for (auto& studentPair : students) {
		if (studentPair.first == studentID) {
			const auto& completedCourses = studentPair.second.getCompletedCourses();
			CourseGrades target(stdCourseCode);
			auto it = completedCourses.find(target);
			if (it != completedCourses.end()) {
				course_id->Text = Utils::toSysStr(it->getCourseID());
				course_name->Text = Utils::toSysStr(courses[stdCourseCode].getCourseName());
				stud_grade->Text = Utils::toSysStr(it->getGrade());
				hours_out->Text = courses[stdCourseCode].getCreditHours().ToString();
				syllabus->Text = Utils::toSysStr(courses[stdCourseCode].getSyllabus());
				instructor_name->Text = Utils::toSysStr(courses[stdCourseCode].getInstructor());
				return;
			}
			break;
		}
	}
	// Fallback if student or course not found
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
			CourseGrades target(stdCourseID);
			auto it = courses.find(target);

			if (it != courses.end()) {
				// Update grade
				CourseGrades updated = *it;
				updated.setGrade(gradeChar);

				courses.erase(it);
				courses.insert(updated);

				MessageBox::Show("Grade updated successfully!",
					"Success",
					MessageBoxButtons::OK,
					MessageBoxIcon::None);
				this->Close();
				return;
			}
			break;
		}
	}
}