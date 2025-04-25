#include "report.h"
#include "Student.h"
#include "Course.h"
#include "CourseGrades.h"
#include "Studentlogin.h"
#include <map>
#include <vector>
#include <set>
#include <string>
#include <msclr/marshal_cppstd.h>
#include"FileManager.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Printing;
using namespace CourseRegistration;
using namespace std;
//extern Student studentPtr = &currentStudent;
report::report(void) {
    InitializeComponent();
    LoadStudentReport();
}

//report::report(Student* student) : studentPtr(student) {
//    InitializeComponent();
//    LoadStudentReport();
//}

report::~report() {
   
    /*if (studentPtr != nullptr) {
        delete studentPtr;
        studentPtr = nullptr;
    }*/

}

Course getCourseById(const string& courseID) {
    return Course(courseID, "Course_" + courseID, 3, "Syllabus", "Instructor");

}

Void report::printReportDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
    // Define fonts for printing
    System::Drawing::Font^ headerFont = gcnew System::Drawing::Font("Bahnschrift", 14, FontStyle::Bold);
    System::Drawing::Font^ labelFont = gcnew System::Drawing::Font("Consolas", 12);
    System::Drawing::Font^ regularFont = gcnew System::Drawing::Font("Bahnschrift", 12);

    // Define margins and starting position
    float x = e->MarginBounds.Left;
    float y = e->MarginBounds.Top;
    float pageWidth = e->MarginBounds.Width;
    float lineHeight = regularFont->GetHeight(e->Graphics) + 5; // Space between lines

    // Print student information
    String^ studentName = StNamelbl->Text;
    String^ studentID = StIDlbl->Text;
    String^ cgpa = CGPAlbl->Text;

    e->Graphics->DrawString(studentName, regularFont, Brushes::Black, x, y);
    y += lineHeight;
    e->Graphics->DrawString(studentID, regularFont, Brushes::Black, x, y);
    y += lineHeight;
    e->Graphics->DrawString(cgpa, regularFont, Brushes::Black, x, y);
    y += lineHeight * 2; // Extra space before semester sections

    // Group courses by semester (same logic as LoadStudentReport)
    const set<CourseGrades>& completedCourses = currentStudent.getCompletedCourses();
    map<string, vector<CourseGrades>> semesterCourses;
    vector<CourseGrades> nonConstCourses(completedCourses.begin(), completedCourses.end());
    for (CourseGrades& courseGrade : nonConstCourses) {
        semesterCourses[courseGrade.getSemester()].push_back(courseGrade);
    }

    // Iterate through semesters
    for (const auto& semesterEntry : semesterCourses) {
        const string& semester = semesterEntry.first;
        vector<CourseGrades> courses(semesterEntry.second.begin(), semesterEntry.second.end());

        // Print semester header
        String^ semesterText = "Semester: " + gcnew String(semester.c_str());
        e->Graphics->DrawString(semesterText, headerFont, Brushes::Black, x, y);
        y += lineHeight * 1.5;

        // Print table header
        String^ tableHeader = String::Format("{0,-20} | {1,-30} | {2}", "Course ID", "Course Name", "Grade");
        e->Graphics->DrawString(tableHeader, labelFont, Brushes::Black, x, y);
        y += lineHeight;

        // Print courses
        for (CourseGrades& courseGrade : courses) {
            string courseID = courseGrade.getCourseID();
            Course course = getCourseById(courseID);
            String^ courseName = gcnew String(course.getCourseName().c_str());
            char gradeChar = courseGrade.getGrade();
            if (gradeChar == '\0') gradeChar = '-';
            String^ grade = gcnew String(&gradeChar, 0, 1);

            // Format course info
            String^ courseInfo = String::Format("{0,-20} | {1,-30} | {2}", gcnew String(courseID.c_str()), courseName, grade);
            e->Graphics->DrawString(courseInfo, labelFont, Brushes::Black, x, y);
            y += lineHeight;

            // Check if we need to start a new page
            if (y > e->MarginBounds.Bottom - lineHeight * 2) {
                e->HasMorePages = true; // Indicate more content to print
                return; // Exit to render the next page
            }
        }

        y += lineHeight; // Space between semesters
    }

    // No more pages to print
    e->HasMorePages = false;
}

double report::CalculateCGPA(const set<CourseGrades>& courseID) {
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

void report::LoadStudentReport() {
   /* if (!studentPtr) {
        MessageBox::Show("No student data provided.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }*/

    // Set student info
    StNamelbl->Text = "Student Name: " + gcnew String(currentStudent.getUserName().c_str());
    StIDlbl->Text = "Student ID: " + currentStudent.getStudentID().ToString();

    // Clear previous content
    ReportflowLayoutPanel->Controls->Clear();

    const set<CourseGrades>& completedCourses = currentStudent.getCompletedCourses();

    // Calculate and display CGPA
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

    // Copy to vector to allow non-const access
   vector<CourseGrades> nonConstCourses(completedCourses.begin(), completedCourses.end());
        map<string, vector<CourseGrades>> semesterCourses;
    for (CourseGrades& courseGrade : nonConstCourses) {
        semesterCourses[courseGrade.getSemester()].push_back(courseGrade);
    }

    for (const auto& semesterEntry : semesterCourses) {
        const string& semester = semesterEntry.first;
        // Copy courses to allow non-const access
        vector<CourseGrades> courses(semesterEntry.second.begin(), semesterEntry.second.end());

        // Create semester panel
        Panel^ semPanel = gcnew Panel();
        semPanel->BackColor = System::Drawing::Color::Honeydew;
        semPanel->Size = System::Drawing::Size(854, 164);
        semPanel->Name = L"Sempanel";

        // Add semester label
        Label^ semLabel = gcnew Label();
        semLabel->AutoSize = true;
        semLabel->Text = "Semester: " + gcnew String(semester.c_str());
        semLabel->Location = System::Drawing::Point(29, 6);
        semLabel->Font = gcnew Drawing::Font("Bahnschrift", 16, FontStyle::Bold);
        semPanel->Controls->Add(semLabel);
           // Add course panels
           int yPos = 38;
        for (CourseGrades& courseGrade : courses) { 
           // Non-const reference
            Panel^ coursePanel = gcnew Panel();
            coursePanel->Location = System::Drawing::Point(19, yPos);
            coursePanel->Size = System::Drawing::Size(684, 64);

            // Course name label
            Label^ cnLabel = gcnew Label();
            cnLabel->AutoSize = true;
            cnLabel->Text = gcnew String(getCourseById(courseGrade.getCourseID()).getCourseName().c_str());
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
            
            if ( gradeChar == 'A') {
                gradeLabel->ForeColor = Color::FromArgb(0, 128, 0);
            }
            //else if (gradeChar == 'A-') {
            //    gradeLabel->ForeColor = Color::FromArgb(50, 205, 50);
            //     System::Diagnostics::Debug::WriteLine("C grade detected - color set"); // Debug
            //}
            else if ( gradeChar =='B') {
                gradeLabel->ForeColor = Color::FromArgb(154, 205, 50);
                System::Diagnostics::Debug::WriteLine("B grade detected - color set"); // Debug
            }
            /*else if (gradeChar == 'B-') {
                gradeLabel->ForeColor = Color::FromArgb(255, 215, 0);  
            }*/
            else if (gradeChar == 'C') {
                
                gradeLabel->ForeColor = Color::FromArgb(255, 140, 0);
                System::Diagnostics::Debug::WriteLine("C grade detected - color set"); // Debug
            }
            //else if (gradeChar == 'C-') {
            //   gradeLabel->ForeColor = Color::FromArgb(255, 69, 0);  
            //   System::Diagnostics::Debug::WriteLine("C grade detected - color set"); // Debug
            //}
            else if (gradeChar == 'D') {
                gradeLabel->ForeColor = Color::FromArgb(220, 20, 60);  // Crimson
            }
            else if (gradeChar == 'F' ) {
                gradeLabel->ForeColor = Color::FromArgb(178, 34, 34);
                System::Diagnostics::Debug::WriteLine("F grade detected - color set"); // Debug
            }
            else if (gradeChar == 'W') {
                    gradeLabel->ForeColor = Color::FromArgb(128, 128, 128);  
            }
            else {
                gradeLabel->ForeColor = Color::FromArgb(32, 42, 68); // Your dark blue color
            }

            coursePanel->Controls->Add(gradeLabel);

            semPanel->Controls->Add(coursePanel);
            yPos += 70;
        }

        semPanel->Height = yPos + 10;
        ReportflowLayoutPanel->Controls->Add(semPanel);
    }
}