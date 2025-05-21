#include "report.h"
#include "Student.h"
#include "Course.h"
#include "CourseGrades.h"
#include"NavBar.h"
#include <map>
#include <vector>
#include <set>
#include <string>
#include <msclr/marshal_cppstd.h>
#include"FileManager.h"
#include "Course_registration.h"
#include"course_pre.h"
#include"ViewGrades.h"



using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Printing;
using namespace CourseRegistration;
using namespace Utils;

//searches the courseID fel course map law la2eto betraga3 corse object law mala2tosh bettaal3 error to help with debugging , law fee id bass malosh data betraga3 dummy course 
Course CourseRegistration::report::getCourseById(const string& courseID) {
	//compexity O(log n) hena estakhdemt .find() 3alashan ana ba look for a spacific index fa msh 3aiza a iterate over kool elelements elfelmap 
	auto it = courses.find(courseID);
	if (it != courses.end()) {
		return it->second;
	}
	System::Diagnostics::Debug::WriteLine("Warning: Course not found for ID: " + toSysStr(courseID));
	return Course(courseID, "Unknown Course", 3, "Syllabus not available", "Unknown Instructor");
}
//betakhod a set of course grades betrepresent elstudent grade f a specific course taken in a specific semester w bet3ml group by semester in a map beykon feeha semester w list of courses 
// O(n) n-> no. of courses
map<string, vector<CourseGrades>> CourseRegistration::report::GroupCoursesBySemester(const set<CourseGrades>& courses) {
	//elmap elhayethato feeha 
	map<string, vector<CourseGrades>> semesterCourses;

	//course grades constant bass feeha functions zay getSemester w getGrade dool msh constant fa lazem a3mel a non-constant copy 3alshana 3raf astakhdemha
	// time complexity O(N) 
	vector<CourseGrades> nonConstCourses(courses.begin(), courses.end());
	// Iterate through each course grade w ba push el course grade obj fel semester eletakhed feeh time complexity O(log n )
	for (CourseGrades& courseGrade : nonConstCourses) {
		semesterCourses[courseGrade.getSemester()].push_back(courseGrade);//O(1) wahda getsemester w wahda push back 
	}
	return semesterCourses;
	//"semester: [courseGrade objs]"
}

//calculates the cgpa of the student by looping through the course grades and calculating the average
double CourseRegistration::report::CalculateCGPA(const set<CourseGrades>& courseID) {
	if (courseID.empty()) return 0.0;

	double totalPoints = 0.0;
	int totalCourses = 0;

	// Copy to vector to allow non-const access
	vector<CourseGrades> nonConstCourses(courseID.begin(), courseID.end());

	for (CourseGrades& courseGrade : nonConstCourses) {
		char grade = courseGrade.getGrade();
		double gradePoint = 0.0;

		switch (grade) {
		case 'A': gradePoint = 4.0; break;
		case 'B': gradePoint = 3.0; break;
		case 'C': gradePoint = 2.0; break;
		case 'D': gradePoint = 1.0; break;
		case 'F': gradePoint = 0.0; break;
		default: continue;
		}

		totalPoints += gradePoint;
		totalCourses++;
	}

	return totalCourses > 0 ? totalPoints / totalCourses : 0.0;
}

//creates a panel for each course in the semester
void CourseRegistration::report::createCoursePanel(CourseGrades& courseGrade, int yPos, Panel^ semPanel) {
	// Create a new panel for the course
	Panel^ coursePanel = gcnew Panel();
	coursePanel->Location = System::Drawing::Point(19, yPos);
	coursePanel->Size = System::Drawing::Size(684, 64);

	// Get course details from the courseGrade object
	string courseID = courseGrade.getCourseID();
	Course course = getCourseById(courseID);

	// Course name label
	Label^ cnLabel = gcnew Label();
	cnLabel->AutoSize = true;
	cnLabel->Text = toSysStr(course.getCourseName());
	cnLabel->Location = System::Drawing::Point(31, 13);
	cnLabel->Font = gcnew Drawing::Font("Bahnschrift", 14, FontStyle::Bold);
	coursePanel->Controls->Add(cnLabel);

	// Grade label
	Label^ gradeLabel = gcnew Label();
	char gradeChar = courseGrade.getGrade();
	if (gradeChar == '\0') gradeChar = '-';
	gradeLabel->Text = gcnew String(&gradeChar, 0, 1);
	gradeLabel->AutoSize = true;
	gradeLabel->Location = System::Drawing::Point(366, 9);
	gradeLabel->Font = gcnew Drawing::Font("Bahnschrift", 18, FontStyle::Bold);

	// Set grade color 
	if (gradeChar == 'A') {
		gradeLabel->ForeColor = Color::FromArgb(0, 128, 0);
	}
	else if (gradeChar == 'B') {
		gradeLabel->ForeColor = Color::FromArgb(154, 205, 50);
		System::Diagnostics::Debug::WriteLine("B grade detected - color set");
	}
	else if (gradeChar == 'C') {
		gradeLabel->ForeColor = Color::FromArgb(255, 140, 0);
		System::Diagnostics::Debug::WriteLine("C grade detected - color set");
	}
	else if (gradeChar == 'D') {
		gradeLabel->ForeColor = Color::FromArgb(220, 20, 60);
	}
	else if (gradeChar == 'F') {
		gradeLabel->ForeColor = Color::FromArgb(178, 34, 34);
		System::Diagnostics::Debug::WriteLine("F grade detected - color set");
	}
	else if (gradeChar == 'W') {
		gradeLabel->ForeColor = Color::FromArgb(128, 128, 128);
	}
	else {
		gradeLabel->ForeColor = Color::FromArgb(32, 42, 68);
	}

	coursePanel->Controls->Add(gradeLabel);
	semPanel->Controls->Add(coursePanel);
}
//loads the main report part 
void CourseRegistration::report::LoadStudentReport() {
	StNamelbl->Text = "Student Name: " + toSysStr(currentStudent.getUserName());
	StIDlbl->Text = "Student ID: " + currentStudent.getStudentID().ToString();
	ReportflowLayoutPanel->Controls->Clear();

	const set<CourseGrades>& completedCourses = currentStudent.getCompletedCourses();
	double cgpa = CalculateCGPA(completedCourses);
	CGPAlbl->Text = "CGPA: " + cgpa.ToString("F2");
	//checks if the student has any completed courses 
	if (completedCourses.empty()) {
		Label^ noCoursesLabel = gcnew Label();
		noCoursesLabel->Text = "No completed courses.";
		noCoursesLabel->AutoSize = true;
		noCoursesLabel->Font = gcnew Drawing::Font("Bahnschrift", 12);
		ReportflowLayoutPanel->Controls->Add(noCoursesLabel);
		return;
	}

	auto semesterCourses = GroupCoursesBySemester(completedCourses);
	//loops through the semester map and creates a panel for each semester 
	//O(n) n->no. of semesters hena 3aiza a print kool elelements fa ha use loop 3adeya

	for (const auto& semesterEntry : semesterCourses) {
		const string& semester = semesterEntry.first;
		const vector<CourseGrades>& courses = semesterEntry.second;

		Panel^ semPanel = gcnew Panel();
		semPanel->BackColor = System::Drawing::Color::AliceBlue;
		semPanel->Size = System::Drawing::Size(854, 164);

		Label^ semLabel = gcnew Label();
		semLabel->AutoSize = true;
		semLabel->Text = "Semester: " + toSysStr(semester);
		semLabel->Location = System::Drawing::Point(29, 6);
		semLabel->Font = gcnew Drawing::Font("Bahnschrift", 16, FontStyle::Bold);
		semPanel->Controls->Add(semLabel);

		int yPos = 38;
		//loops over course gardes w betnady 3ala create course panel function each time 
		for (const CourseGrades& courseGrade : courses) {
			createCoursePanel(const_cast<CourseGrades&>(courseGrade), yPos, semPanel);
			yPos += 70;
		}

		semPanel->Height = yPos + 10;
		ReportflowLayoutPanel->Controls->Add(semPanel);
	}
}

//prints a formatted report of the student grades
void CourseRegistration::report::printReportDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	// Set up fonts for the report
	System::Drawing::Font^ headerFont = gcnew System::Drawing::Font("Bahnschrift", 14, FontStyle::Bold);
	System::Drawing::Font^ labelFont = gcnew System::Drawing::Font("Consolas", 12);
	System::Drawing::Font^ regularFont = gcnew System::Drawing::Font("Bahnschrift", 12);

	float x = e->MarginBounds.Left;
	float y = e->MarginBounds.Top;
	float lineHeight = regularFont->GetHeight(e->Graphics) + 5;
	// adds student name, id, and cgpa to the top of the report 
	e->Graphics->DrawString(StNamelbl->Text, regularFont, Brushes::Black, x, y);
	y += lineHeight;
	e->Graphics->DrawString(StIDlbl->Text, regularFont, Brushes::Black, x, y);
	y += lineHeight;
	e->Graphics->DrawString(CGPAlbl->Text, regularFont, Brushes::Black, x, y);
	y += lineHeight * 2;
	//get the completed courses of the student w hotohom f a set of course grades obj
	const set<CourseGrades>& completedCourses = currentStudent.getCompletedCourses();
	//group the courses by semester
	auto semesterCourses = GroupCoursesBySemester(completedCourses);

	for (const auto& semesterEntry : semesterCourses) {
		//prints the semester name w  betzabat el foramat
		String^ semesterText = "Semester: " + gcnew String(semesterEntry.first.c_str());
		e->Graphics->DrawString(semesterText, headerFont, Brushes::Black, x, y);
		y += lineHeight * 1.5;

		String^ tableHeader = String::Format("{0,-20} | {1,-30} | {2}", "Course ID", "Course Name", "Grade");
		e->Graphics->DrawString(tableHeader, labelFont, Brushes::Black, x, y);
		y += lineHeight;
		//betloop 3al courses w bet print course info 
		for (const CourseGrades& courseGrade : semesterEntry.second) {
			string courseID = courseGrade.getCourseID();
			Course course = getCourseById(courseID);

			String^ courseName = toSysStr(course.getCourseName());
			char gradeChar = courseGrade.getGrade();
			if (gradeChar == '\0') gradeChar = '-';
			String^ grade = gcnew String(&gradeChar, 0, 1);

			String^ courseInfo = String::Format("{0,-20} | {1,-30} | {2}", toSysStr(courseID), courseName, grade);
			e->Graphics->DrawString(courseInfo, labelFont, Brushes::Black, x, y);
			y += lineHeight;

			if (y > e->MarginBounds.Bottom - lineHeight * 2) {
				e->HasMorePages = true;
				return;
			}
		}

		y += lineHeight;
	}

	e->HasMorePages = false;
}

void CourseRegistration::report::panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	NavBar^ nb = gcnew NavBar();
	nb->ShowDialog();
	this->Hide();
	this->Close();
}

void CourseRegistration::report::panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Course_registration^ c1 = gcnew Course_registration();
	c1->ShowDialog();
	this->Hide();
	this->Close();
}

void CourseRegistration::report::panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	ViewGrades^ vg = gcnew ViewGrades();
	vg->ShowDialog();
	this->Hide();
	this->Close();
}

void CourseRegistration::report::panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	course_pre^ pre = gcnew course_pre();
	pre->ShowDialog();
	this->Hide();
	this->Close();
}