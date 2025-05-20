#include "report.h"
#include "Student.h"
#include "Course.h"
#include "CourseGrades.h"
#include "Studentlogin.h"
#include"NavBar.h"
#include <map>
#include <vector>
#include <set>
#include<unordered_set>
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


Course CourseRegistration::report::getCourseById(const string& courseID) {
    auto it = courses.find(courseID);
    if (it != courses.end()) {
        return it->second;
    }

    // Log the missing courseID
    System::Diagnostics::Debug::WriteLine("Warning: Course not found for ID: " + toSysStr(courseID));

    // Fallback dummy course
    return Course(courseID, "Unknown Course", 3, "Syllabus not available", "Unknown Instructor");
}

map<string, vector<CourseGrades>> CourseRegistration::report::GroupCoursesBySemester(const set<CourseGrades>& courses) {
    map<string, vector<CourseGrades>> semesterCourses;

    // Copy to non-const to allow calling non-const methods
    vector<CourseGrades> nonConstCourses(courses.begin(), courses.end());

    for (CourseGrades& courseGrade : nonConstCourses) {
        semesterCourses[courseGrade.getSemester()].push_back(courseGrade);
    }

    return semesterCourses;
}



void CourseRegistration::report::createCoursePanel(CourseGrades& courseGrade, int yPos, Panel^ semPanel) {
    Panel^ coursePanel = gcnew Panel();
    coursePanel->Location = System::Drawing::Point(19, yPos);
    coursePanel->Size = System::Drawing::Size(684, 64);

    // Get course details
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

    // Set grade color based on grade value
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

void CourseRegistration::report::printReportDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
    System::Drawing::Font^ headerFont = gcnew System::Drawing::Font("Bahnschrift", 14, FontStyle::Bold);
    System::Drawing::Font^ labelFont = gcnew System::Drawing::Font("Consolas", 12);
    System::Drawing::Font^ regularFont = gcnew System::Drawing::Font("Bahnschrift", 12);

    float x = e->MarginBounds.Left;
    float y = e->MarginBounds.Top;
    float lineHeight = regularFont->GetHeight(e->Graphics) + 5;

    e->Graphics->DrawString(StNamelbl->Text, regularFont, Brushes::Black, x, y);
    y += lineHeight;
    e->Graphics->DrawString(StIDlbl->Text, regularFont, Brushes::Black, x, y);
    y += lineHeight;
    e->Graphics->DrawString(CGPAlbl->Text, regularFont, Brushes::Black, x, y);
    y += lineHeight * 2;

    const set<CourseGrades>& completedCourses = currentStudent.getCompletedCourses();
    auto semesterCourses = GroupCoursesBySemester(completedCourses);

    for (const auto& semesterEntry : semesterCourses) {
        String^ semesterText = "Semester: " + gcnew String(semesterEntry.first.c_str());
        e->Graphics->DrawString(semesterText, headerFont, Brushes::Black, x, y);
        y += lineHeight * 1.5;

        String^ tableHeader = String::Format("{0,-20} | {1,-30} | {2}", "Course ID", "Course Name", "Grade");
        e->Graphics->DrawString(tableHeader, labelFont, Brushes::Black, x, y);
        y += lineHeight;

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
void CourseRegistration::report::LoadStudentReport() {
    StNamelbl->Text = "Student Name: " + toSysStr(currentStudent.getUserName());
    StIDlbl->Text = "Student ID: " + currentStudent.getStudentID().ToString();
    ReportflowLayoutPanel->Controls->Clear();

    const set<CourseGrades>& completedCourses = currentStudent.getCompletedCourses();
    double cgpa = CalculateCGPA(completedCourses);
    CGPAlbl->Text = "CGPA: " + cgpa.ToString("F2");

    if (completedCourses.empty()) {
        Label^ noCoursesLabel = gcnew Label();
        noCoursesLabel->Text = "No completed courses.";
        noCoursesLabel->AutoSize = true;
        noCoursesLabel->Font = gcnew Drawing::Font("Bahnschrift", 12);
        ReportflowLayoutPanel->Controls->Add(noCoursesLabel);
        return;
    }

    auto semesterCourses = GroupCoursesBySemester(completedCourses);

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
        for (const CourseGrades& courseGrade : courses) {
            createCoursePanel(const_cast<CourseGrades&>(courseGrade), yPos, semPanel);
            yPos += 70;
        }

        semPanel->Height = yPos + 10;
        ReportflowLayoutPanel->Controls->Add(semPanel);
    }
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