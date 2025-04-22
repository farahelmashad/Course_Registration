//#include "report.h"
//#include "Student.h"	
//#include "Course.h"
//#include "Studentlogin.h"
//#include <map>
//#include <vector> 
//#include <set> 
//#include <string>   
//#include <msclr/marshal_cppstd.h>
//using namespace std;
//using namespace System;
//using namespace System::Windows::Forms;
//using namespace System::Drawing;
//using namespace System::Drawing::Printing;
//using namespace CourseRegistration;
//report::report(void)
//{
//    // Create dummy student
//    Student* dummyStudent = new Student();
//    dummyStudent->setUsername("Test Student");
//    dummyStudent->setStudentID(999999);  // Note this ID
//
//    // Create dummy grades
//    std::set<CourseGrades> dummyGrades;
//    dummyGrades.insert(CourseGrades(
//        999999,     // Must match student ID
//        "CSC101",
//        "Fall 2023",
//        'A'
//    ));
//    dummyGrades.insert(CourseGrades(999999, "PHY301", "Spring 2024", 'B'));
//    dummyGrades.insert(CourseGrades(999999, "MKT101", "Fall 2023", 'C'));
//
//    dummyStudent->setCompletedCourses(dummyGrades);
//}
//	//InitializeComponent(); // Initialize UI components
//	// LoadStudentReport();   // Load the report data
//
//report::report(Student* student) : studentPtr(student) {
//	InitializeComponent(); // Initialize UI components
//	LoadStudentReport();   // Load the report data
//}
//report::~report()
//{
//	throw gcnew System::NotImplementedException();
//}
//Course getCourseById(const string& courseID) {
//	return Course(courseID, "Course_" + courseID, 3, "Syllabus", "Instructor");
//}
//double report::CalculateCGPA(const set<CourseGrades>& coursesSet) {
//    if (courses.empty()) return 0.0;
//
//    double totalPoints = 0.0;
//    int totalCourses = 0;
//
//    // Map letter grades to grade points
//    {
//        for (CourseGrades& courseGrade : courses){
//            char grade = courseGrade.getGrade();
//        double gradePoint = 0.0;
//
//        // Assuming standard grading scale: A=4.0, B=3.0, C=2.0, D=1.0, F=0.0
//        switch (grade) {
//        case 'A': gradePoint = 4.0; break;
//        case 'B': gradePoint = 3.0; break;
//        case 'C': gradePoint = 2.0; break;
//        case 'D': gradePoint = 1.0; break;
//        case 'F': gradePoint = 0.0; break;
//        default: continue; // Skip if grade is invalid or not set
//        }
//
//        totalPoints += gradePoint;
//        totalCourses++;
//    }
//
//    // Calculate CGPA
//    return totalCourses > 0 ? totalPoints / totalCourses : 0.0;
//}
//void report::LoadStudentReport() {
//    if (!studentPtr) {
//        MessageBox::Show("No student data provided.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//        return;
//    }
//
//    // Set student name and ID labels
//    StNamelbl->Text = "Student Name: " + gcnew String(studentPtr->getUserName().c_str());
//    StIDlbl->Text = "Student ID: " + studentPtr->getStudentID().ToString();
//    const std::set<CourseGrades>& completedCourses = studentPtr->getCompletedCourses();
//    double cgpa = CalculateCGPA(completedCourses);
//    CGPAlbl->Text = "CGPA: " + cgpa.ToString("F2");
//    // Clear previous content
//    ReportflowLayoutPanel->Controls->Clear();
//
//    // Get completed courses
//    const std::set<CourseGrades>& completedCourses = studentPtr->getCompletedCourses();
//    if (completedCourses.empty()) {
//        Label^ noCoursesLabel = gcnew Label();
//        noCoursesLabel->Text = "No completed courses.";
//        noCoursesLabel->AutoSize = true;
//        noCoursesLabel->Font = gcnew Drawing::Font("Bahnschrift", 12);
//        ReportflowLayoutPanel->Controls->Add(noCoursesLabel);
//        return;
//    }
//
//    // Group courses by semester
//    std::map<std::string, std::vector<CourseGrades>> semesterCourses;
//    //   for (const CourseGrades& courseGrade : completedCourses) {
//    //       CourseGrades& nonConstGrade = const_cast<CourseGrades&>(courseGrade);
//    //       semesterCourses[nonConstGrade.getSemester()].push_back(nonConstGrade);
//    //   }
//
//    //   // Iterate through each semester
//    //   for (const auto& semesterEntry : semesterCourses) {
//    //       const std::string& semester = semesterEntry.first;
//    //       const std::vector<CourseGrades>& courses = semesterEntry.second;
//
//    //       // Add semester header
//    //      Panel^ Sempanel = gcnew Panel();
//    //       Label^ semesterLabel = gcnew Label();
//    //       semesterLabel->Text = "Semester:   " + gcnew String(semester.c_str());
//    //       semesterLabel->AutoSize = true;
//    //       semesterLabel->Font = gcnew Drawing::Font("Bahnschrift", 14, Drawing::FontStyle::Bold);
//    //       /*  semesterLabel->Margin = Padding(0, 10, 0, 5);*/
//    //       Sempanel->Controls->Add(semesterLabel);
//    //       ReportflowLayoutPanel->Controls->Add(Sempanel);
//
//    //       // Add table header
//    //       // Use a monospaced font for alignment
//    //       /*Label^ headerLabel = gcnew Label();
//    //       headerLabel->Text = "Course ID       | Course Name              | Grade";
//    //       headerLabel->AutoSize = true;
//    //       headerLabel->Font = gcnew Drawing::Font("Consolas", 12, Drawing::FontStyle::Underline);
//    //       ReportflowLayoutPanel->Controls->Add(headerLabel);*/
//
//    //       // Add courses for this semester
//    //       for (const CourseGrades& courseGrade : courses) {
//    //           CourseGrades& nonConstGrade = const_cast<CourseGrades&>(courseGrade);
//    //           std::string courseID = nonConstGrade.getCourseID();
//    //           Course course = getCourseById(courseID);
//    //           String^ courseName = gcnew String(course.getCourseName().c_str());
//    //           char gradeChar = nonConstGrade.getGrade();
//    //           if (gradeChar == '\0') gradeChar = '-';  // Handle missing grades
//    //           String^ grade = gcnew String(&gradeChar, 0, 1);  // Correct conversion
//    //           // Create formatted course info line
//       //		Panel^ coursePanel = gcnew Panel();
//    //           Label^ courseLabel = gcnew Label();
//    //           Label^ Glbl = gcnew Label();
//    //           courseLabel->Text = String::Format("{0,-15} | {1,-25} | {2}",
//    //               gcnew String(courseID.c_str()), courseName, grade);
//    //           courseLabel->AutoSize = true;
//    //           courseLabel->Font = gcnew Drawing::Font("Consolas", 12);
//    //       coursePanel->Controls->Add(courseLabel);
//    //       ReportflowLayoutPanel->Controls->Add(coursePanel);
//    //       }
//       //}	
//    std::string currentSemester = ""; // Track the current semester
//    Panel^ semPanel = nullptr; // Hold the current semester panel
//
//    for (const CourseGrades& courseGrade : completedCourses) {
//        CourseGrades& nonConstGrade = const_cast<CourseGrades&>(courseGrade);
//        std::string courseID = nonConstGrade.getCourseID();
//        Course course = getCourseById(courseID);
//        std::string semester = nonConstGrade.getSemester();
//
//        // Create a new semester panel only if the semester changes
//        if (semester != currentSemester) {
//            currentSemester = semester;
//
//            semPanel = gcnew Panel();
//            semPanel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
//            semPanel->Size = System::Drawing::Size(854, 164);
//            semPanel->Name = L"Sempanel";
//
//            // Add semester label
//            Label^ semLabel = gcnew Label();
//            semLabel->AutoSize = true;
//            semLabel->Text = "Semester: " + gcnew String(currentSemester.c_str());
//            semLabel->Location = System::Drawing::Point(29, 6);
//            semLabel->Font = gcnew System::Drawing::Font("Bahnschrift", 14, System::Drawing::FontStyle::Bold);
//            semPanel->Controls->Add(semLabel);
//
//            // Add semester panel to flow layout
//            ReportflowLayoutPanel->Controls->Add(semPanel);
//        }
//
//        // Create course panel
//        Panel^ coursePanel = gcnew Panel();
//        coursePanel->Location = System::Drawing::Point(19, 38 + (semPanel->Controls->Count - 1) * 70); // Adjust position for each course
//        coursePanel->Size = System::Drawing::Size(684, 64);
//
//        // Create and add course name label
//        Label^ cnLabel = gcnew Label();
//        cnLabel->AutoSize = true;
//        cnLabel->Text = gcnew String(course.getCourseName().c_str());
//        cnLabel->Location = System::Drawing::Point(31, 13);
//        cnLabel->Font = gcnew System::Drawing::Font("Consolas", 12);
//        coursePanel->Controls->Add(cnLabel);
//
//        // Create and add grade label
//        Label^ gradeLabel = gcnew Label();
//        char gradeChar = nonConstGrade.getGrade();
//        if (gradeChar == '\0') gradeChar = '-';
//        gradeLabel->Text = gcnew String(&gradeChar, 0, 1);
//        gradeLabel->AutoSize = true;
//        gradeLabel->Location = System::Drawing::Point(366, 13);
//        gradeLabel->Font = gcnew System::Drawing::Font("Consolas", 12);
//        coursePanel->Controls->Add(gradeLabel);
//
//        // Add course panel to the current semester panel
//        semPanel->Controls->Add(coursePanel);
//
//        // Dynamically adjust the semester panel height based on the number of courses
//        semPanel->Size = System::Drawing::Size(854, 64 + (semPanel->Controls->Count - 1) * 70);
//    }
//}
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

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Printing;
using namespace CourseRegistration;
using namespace std;

report::report(void) {
    InitializeComponent();
    LoadStudentReport();
}

report::report(Student* student) : studentPtr(student) {
    InitializeComponent();
    LoadStudentReport();
}

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
    const set<CourseGrades>& completedCourses = studentPtr->getCompletedCourses();
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
    if (!studentPtr) {
        MessageBox::Show("No student data provided.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Set student info
    StNamelbl->Text = "Student Name: " + gcnew String(studentPtr->getUserName().c_str());
    StIDlbl->Text = "Student ID: " + studentPtr->getStudentID().ToString();

    // Clear previous content
    ReportflowLayoutPanel->Controls->Clear();

    const set<CourseGrades>& completedCourses = studentPtr->getCompletedCourses();

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
        semPanel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
        semPanel->Size = System::Drawing::Size(854, 164);
        semPanel->Name = L"Sempanel";

        // Add semester label
        Label^ semLabel = gcnew Label();
        semLabel->AutoSize = true;
        semLabel->Text = "Semester: " + gcnew String(semester.c_str());
        semLabel->Location = System::Drawing::Point(29, 6);
        semLabel->Font = gcnew Drawing::Font("Bahnschrift", 14, FontStyle::Bold);
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
            cnLabel->Font = gcnew Drawing::Font("Consolas", 12);
            coursePanel->Controls->Add(cnLabel);

            // Grade label
            Label^ gradeLabel = gcnew Label();
            char gradeChar = courseGrade.getGrade();
            if (gradeChar == '\0') gradeChar = '-';
            gradeLabel->Text = gcnew String(&gradeChar, 0, 1);
            gradeLabel->AutoSize = true;
            gradeLabel->Location = System::Drawing::Point(366, 13);
            gradeLabel->Font = gcnew Drawing::Font("Consolas", 12);
            coursePanel->Controls->Add(gradeLabel);

            semPanel->Controls->Add(coursePanel);
            yPos += 70;
        }

        semPanel->Height = yPos + 10;
        ReportflowLayoutPanel->Controls->Add(semPanel);
    }
}