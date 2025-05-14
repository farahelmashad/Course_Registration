
#include "ViewGrades.h"
#include "Student.h"
#include "Course.h"
#include "CourseGrades.h"
#include "Studentlogin.h"
#include"report.h"
#include"FileManager.h"
#include"course_info.h"
#include"course_pre.h"
#include"report.h"
#include"Course_registration.h"
#include <map>
#include <vector>
#include <set>
#include <string>
#include <msclr/marshal_cppstd.h>
std::string cid = "";

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace CourseRegistration;


Void CourseRegistration::ViewGrades::panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    NavBar^ nb = gcnew NavBar();
    nb->ShowDialog();
    this->Hide();
    this->Close();
}
Void CourseRegistration::ViewGrades::panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    Course_registration^ c1 = gcnew Course_registration();

    c1->ShowDialog();
    this->Hide();
    this->Close();
}
Void CourseRegistration::ViewGrades::panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    course_pre^ pre = gcnew course_pre();
    pre->ShowDialog();
    this->Hide();
    this->Close();
}



Void CourseRegistration::ViewGrades::panel4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    report^ rpt = gcnew report();
      rpt->ShowDialog();
       this->Hide();
      this->Close();
    
}
void CourseRegistration::ViewGrades::InitializeData() {


    GradesLayoutPanel->Controls->Clear();
    // Collect unique semesters from completed courses
    set<string> semesters;
    for each (CourseGrades grade in currentStudent.getCompletedCourses()) {
        semesters.insert(grade.getSemester());
    }

    // Populate SemBox
    SemBox->Items->Clear();
    for each (string semester in semesters) {
        SemBox->Items->Add(gcnew String(semester.c_str()));
    }
}

Void CourseRegistration::ViewGrades::searchbutton_Click(System::Object^ sender, System::EventArgs^ e) {
    if (SemBox->SelectedItem == nullptr) return;

    String^ selectedSemesterStr = SemBox->SelectedItem->ToString();
    string selectedSemester = msclr::interop::marshal_as<string>(selectedSemesterStr);
    set<CourseGrades> completedCourses = currentStudent.getCompletedCourses();

    GradesLayoutPanel->Controls->Clear(); // Clear existing panels

    // Set up the FlowLayoutPanel to flow horizontally
    GradesLayoutPanel->FlowDirection = FlowDirection::LeftToRight;
    GradesLayoutPanel->WrapContents = true;  // Allow wrapping to next line if needed
    GradesLayoutPanel->AutoScroll = true;    // Enable scrolling if content overflows

    for each (CourseGrades grade in completedCourses) {
        if (grade.getSemester() == selectedSemester) {
            // Create a new panel for each course
            Panel^ Coursepanel = gcnew Panel();
            Coursepanel->BackColor = Color::FromArgb(32, 42, 68);
            Coursepanel->Size = System::Drawing::Size(280, 204);
            Coursepanel->Margin = System::Windows::Forms::Padding(10);

            string courseID = grade.getCourseID();
            String^ courseDisplayName = gcnew String(courseID.c_str()); // Default to ID

            Course foundCourse = Course::SearchCourse(courseID);
            if (foundCourse.getCourseID() != "") { // Check if course was found
                courseDisplayName = gcnew String(foundCourse.getCourseName().c_str());
                cid = foundCourse.getCourseID();
            }

            // Course Name Label
            Label^ CNlbl = gcnew Label();
            CNlbl->AutoSize = true;
            CNlbl->Font = gcnew System::Drawing::Font(L"Bahnschrift", 12, FontStyle::Bold);
            CNlbl->ForeColor = Color::White;
            CNlbl->Location = Point(10, 29);
            CNlbl->Text = "Course: " + courseDisplayName;
            Coursepanel->Controls->Add(CNlbl);

            // Rest of your existing code...
            // Grade Label
            Label^ CGradelbl = gcnew Label();
            char cgrade = grade.getGrade();
            if (cgrade == '\0') cgrade = '-';
            CGradelbl->Text = "Grade: " + gcnew String(&cgrade, 0, 1);
            CGradelbl->AutoSize = true;
            CGradelbl->Font = gcnew System::Drawing::Font(L"Bahnschrift", 12, FontStyle::Bold);
            CGradelbl->ForeColor = Color::White;
            CGradelbl->Location = Point(10, 83);
            Coursepanel->Controls->Add(CGradelbl);

            // Retake Button (unchanged)
            Button^ Retakebtn = gcnew Button();
            Retakebtn->Text = "Retake";
            Retakebtn->BackColor = Color::AliceBlue;
            Retakebtn->Location = Point(117, 143);
            Retakebtn->Size = System::Drawing::Size(111, 46);
            Retakebtn->Click += gcnew EventHandler(this, &ViewGrades::Retakebtn_Click);
            string combinedID = courseID + "|" + grade.getSemester(); // Still using original ID for functionality
            Retakebtn->Tag = gcnew String(combinedID.c_str());
            Coursepanel->Controls->Add(Retakebtn);

            GradesLayoutPanel->Controls->Add(Coursepanel);
        }
    }


}

Void CourseRegistration::ViewGrades::Retakebtn_Click(System::Object^ sender, System::EventArgs^ e) {
    currentStudent.Retake(cid);
    MessageBox::Show("Course Successfully Retaken", "Success", MessageBoxButtons::OK);



}