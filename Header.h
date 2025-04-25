//#include "report.h"
//#include "Student.h"
//#include "CourseGrades.h"
//#include <msclr/marshal_cppstd.h>
//#include <fstream>
//#include <sstream>
//#include <vector>
//
//using namespace System::Drawing;
//using namespace System;
//using namespace System::IO;
//using namespace System::Collections::Generic;
//using namespace msclr::interop;
//
//namespace CourseRegistration {
//
//    public ref class CompletedCourse {
//    public:
//        property String^ CourseCode;
//        property String^ Grade;
//        property String^ Semester;
//
//        CompletedCourse(String^ code, String^ semester, String^ grade) {
//            this->CourseCode = code;
//            this->Semester = semester;
//            this->Grade = grade;
//        }
//    };
//
//    // Parse student data from the specific format
//    void ParseStudentData(String^ line, [Out] String^% studentName, [Out] int% studentId,
//        [Out] List<CompletedCourse^>^% completedCourses) {
//        completedCourses = gcnew List<CompletedCourse^>();
//
//        // Split the line by commas
//        cli::array<String^>^ parts = line->Split(',');
//        if (parts->Length < 8) return; // Invalid format
//
//        // Extract basic info
//        studentName = parts[0];
//        studentId = Int32::Parse(parts[3]);
//
//        // Parse completed courses (part after #)
//        String^ allCourses = parts[7];
//        cli::array<String^>^ courseGroups = allCourses->Split(';');
//
//        for each (String ^ courseGroup in courseGroups) {
//            if (String::IsNullOrWhiteSpace(courseGroup)) continue;
//
//            cli::array<String^>^ courseInfo = courseGroup->Split('|');
//            if (courseInfo->Length == 3) {
//                completedCourses->Add(gcnew CompletedCourse(
//                    courseInfo[0]->Trim(),
//                    courseInfo[1]->Trim(),
//                    courseInfo[2]->Trim()));
//            }
//        }
//    }
//
//    // Load student report data from file
//    bool report::LoadStudentReportData(String^ targetStudentId, [Out] String^% studentName,
//        [Out] List<CompletedCourse^>^% completedCourses)
//    {
//        String^ filePath = "student.txt";
//        int studentId;
//
//        try {
//            StreamReader^ sr = File::OpenText(filePath);
//            String^ line;
//            while ((line = sr->ReadLine()) != nullptr) {
//                // Skip empty lines
//                if (String::IsNullOrWhiteSpace(line)) continue;
//
//                // Parse the line
//                String^ currentName;
//                int currentId;
//                List<CompletedCourse^>^ courses;
//                ParseStudentData(line, currentName, currentId, courses);
//
//                // Check if this is the student we're looking for
//                if (currentId.ToString() == targetStudentId) {
//                    studentName = currentName;
//                    completedCourses = courses;
//                    sr->Close();
//                    return true;
//                }
//            }
//            sr->Close();
//        }
//        catch (Exception^ e) {
//            MessageBox::Show("Error reading student data: " + e->Message);
//        }
//
//        return false;
//    }
//
//    // Display the report
//    void CourseRegistration::report::DisplayReport(System::String^ studentName, System::String^ studentId, System::Collections::Generic::List<CourseGrades^>^ completedCourses) {
//        ReportflowLayoutPanel->Controls->Clear();
//
//        // Display student info
//        studentNlbl->Text = "Student Name: " + studentName;
//        StIDlbl->Text = "ID: " + studentId;
//
//        // Add header
//        Label^ header = gcnew Label();
//        header->Text = "COMPLETED COURSES";
//        header->Font = gcnew Drawing::Font("Bahnschrift", 14, FontStyle::Bold);
//        header->ForeColor = Color::FromArgb(32, 42, 68);
//        header->AutoSize = true;
//        /* header->Margin = Padding(0, 20, 0, 20);*/
//        ReportflowLayoutPanel->Controls->Add(header);
//
//        // Add column headers
//        Panel^ headerPanel = gcnew Panel();
//        headerPanel->Size = Drawing::Size(700, 40);
//        headerPanel->BackColor = Color::FromArgb(32, 42, 68);
//
//        // Course Code header
//        Label^ codeHeader = gcnew Label();
//        codeHeader->Text = "COURSE";
//        codeHeader->Font = gcnew Drawing::Font("Bahnschrift", 11, FontStyle::Bold);
//        codeHeader->ForeColor = Color::White;
//        codeHeader->Location = Drawing::Point(20, 10);
//        headerPanel->Controls->Add(codeHeader);
//
//        // Semester header
//        Label^ semesterHeader = gcnew Label();
//        semesterHeader->Text = "SEMESTER";
//        semesterHeader->Font = gcnew Drawing::Font("Bahnschrift", 11, FontStyle::Bold);
//        semesterHeader->ForeColor = Color::White;
//        semesterHeader->Location = Drawing::Point(250, 10);
//        headerPanel->Controls->Add(semesterHeader);
//
//        // Grade header
//        Label^ gradeHeader = gcnew Label();
//        gradeHeader->Text = "GRADE";
//        gradeHeader->Font = gcnew Drawing::Font("Bahnschrift", 11, FontStyle::Bold);
//        gradeHeader->ForeColor = Color::White;
//        gradeHeader->Location = Drawing::Point(500, 10);
//        headerPanel->Controls->Add(gradeHeader);
//
//        ReportflowLayoutPanel->Controls->Add(headerPanel);
//
//        // Add completed courses
//        for each (CompletedCourse ^ course in completedCourses) {
//            Panel^ coursePanel = gcnew Panel();
//            coursePanel->Size = Drawing::Size(700, 50);
//            coursePanel->BorderStyle = BorderStyle::FixedSingle;
//            / coursePanel->Margin = Padding(0, 5, 0, 5); /
//
//                // Course code
//                Label ^ codeLabel = gcnew Label();
//            codeLabel->Text = course->CourseCode;
//            codeLabel->Font = gcnew Drawing::Font("Bahnschrift", 10);
//            codeLabel->Location = Drawing::Point(20, 15);
//            codeLabel->AutoSize = true;
//            coursePanel->Controls->Add(codeLabel);
//
//            // Semester
//            Label^ semesterLabel = gcnew Label();
//            semesterLabel->Text = course->Semester;
//            semesterLabel->Font = gcnew Drawing::Font("Bahnschrift", 10);
//            semesterLabel->Location = Drawing::Point(250, 15);
//            semesterLabel->AutoSize = true;
//            coursePanel->Controls->Add(semesterLabel);
//
//            // Grade
//            Label^ gradeLabel = gcnew Label();
//            gradeLabel->Text = course->Grade;
//            gradeLabel->Font = gcnew Drawing::Font("Bahnschrift", 10, FontStyle::Bold);
//            gradeLabel->ForeColor = GetGradeColor(gradeLabel->Text);
//            gradeLabel->Location = Drawing::Point(500, 15);
//            gradeLabel->AutoSize = true;
//            coursePanel->Controls->Add(gradeLabel);
//
//            ReportflowLayoutPanel->Controls->Add(coursePanel);
//        }
//    }
//
//    // Helper method to get color based on grade
//    Color report::GetGradeColor(String^ letterGrade) {
//        if (letterGrade == "A" || letterGrade == "A+") return Color::Green;
//        if (letterGrade == "A-") return Color::DarkGreen;
//        if (letterGrade == "B+") return Color::LimeGreen;
//        if (letterGrade == "B")  return Color::ForestGreen;
//        if (letterGrade == "B-") return Color::OliveDrab;
//        if (letterGrade == "C+") return Color::Gold;
//        if (letterGrade == "C")  return Color::Orange;
//        if (letterGrade == "C-") return Color::DarkOrange;
//        if (letterGrade == "D+") return Color::OrangeRed;
//        if (letterGrade == "D")  return Color::Red;
//        return Color::DarkRed; // F or any other case
//    }
//
//    // Form load event handler
//    System::Void report::NavBar_Load(System::Object^ sender, System::EventArgs^ e) {
//        String^ studentId = "1001"; // Should come from user input
//        String^ studentName;
//        List<CompletedCourse^>^ completedCourses;
//
//        if (LoadStudentReportData(studentId, studentName, completedCourses)) {
//            DisplayReport(studentName, studentId, completedCourses);
//        }
//        else {
//            MessageBox::Show("Student not found or data format error!");
//        }
//    }
//
//    // Print button click handler
//    System::Void report::PrintRepbtn_Click(System::Object^ sender, System::EventArgs^ e) {
//        printPreviewReportDialog->Document = printReportDocument;
//        printPreviewReportDialog->ShowDialog();
//    }
//
//    // Print document handler
//    System::Void report::printReportDocument_PrintPage(System::Object^ sender,
//        System::Drawing::Printing::PrintPageEventArgs^ e) {
//
//        System::Drawing::Font^ headerFont = gcnew System::Drawing::Font("Arial", 12, System::Drawing::FontStyle::Bold);
//        System::Drawing::Font^ titleFont = gcnew System::Drawing::Font("Arial", 18, FontStyle::Bold);
//        System::Drawing::Font^ headerFont = gcnew System::Drawing::Font("Arial", 12, FontStyle::Bold);
//        System::Drawing::Font^ contentFont = gcnew System::Drawing::Font("Arial", 10);
//        Brush^ brush = Brushes::Black;
//
//        float yPos = 100;
//        float leftMargin = e->MarginBounds.Left;
//
//        // Print title and student info
//        e->Graphics->DrawString("STUDENT ACADEMIC REPORT", titleFont, brush, leftMargin, yPos);
//        yPos += 40;
//        e->Graphics->DrawString(studentNlbl->Text, headerFont, brush, leftMargin, yPos);
//        yPos += 25;
//        e->Graphics->DrawString(StIDlbl->Text, headerFont, brush, leftMargin, yPos);
//        yPos += 40;
//
//        // Print column headers
//        e->Graphics->DrawString("Course", headerFont, brush, leftMargin + 20, yPos);
//        e->Graphics->DrawString("Semester", headerFont, brush, leftMargin + 200, yPos);
//        e->Graphics->DrawString("Grade", headerFont, brush, leftMargin + 400, yPos);
//        yPos += 25;
//
//        // Print each completed course
//        for each (Control ^ control in ReportflowLayoutPanel->Controls) {
//            if (control->GetType() == Panel::typeid) {
//                Panel^ panel = (Panel^)control;
//                if (panel->BackColor != Color::FromArgb(32, 42, 68)) {
//                    String^ courseCode = "";
//                    String^ semester = "";
//                    String^ grade = "";
//
//                    for each (Control ^ subControl in panel->Controls) {
//                        if (subControl->GetType() == Label::typeid) {
//                            Label^ label = (Label^)subControl;
//                            if (label->Location.X == 20) courseCode = label->Text;
//                            else if (label->Location.X == 250) semester = label->Text;
//                            else if (label->Location.X == 500) grade = label->Text;
//                        }
//                    }
//
//                    e->Graphics->DrawString(courseCode, contentFont, brush, leftMargin + 20, yPos);
//                    e->Graphics->DrawString(semester, contentFont, brush, leftMargin + 200, yPos);
//                    e->Graphics->DrawString(grade, contentFont, brush, leftMargin + 400, yPos);
//                    yPos += 30;
//                }
//            }
//        }
//    }
//}
// Set color based on grade
            //if (gradeChar == "A+" || "A") {
            //    gradeLabel->ForeColor = Color::FromArgb(0, 128, 0);  // Dark Green
            //}
            //else if (gradeChar == "A") {
            //    gradeLabel->ForeColor = Color::FromArgb(34, 139, 34);  // Forest Green
            //}
            //else if (gradeStr == "A-") {
            //    gradeLabel->ForeColor = Color::FromArgb(50, 205, 50);  // Lime Green
            //}
            //else if (gradeStr == "B+") {
            //    gradeLabel->ForeColor = Color::FromArgb(154, 205, 50);  // Yellow Green
            //}
            //else if (gradeStr == "B") {
            //    gradeLabel->ForeColor = Color::FromArgb(173, 255, 47);  // Green Yellow
            //}

            //else if (gradeStr == "C+") {
            //    gradeLabel->ForeColor = Color::FromArgb(255, 165, 0);  // Orange
            //}
            //else if (gradeStr == "C") {
            //    gradeLabel->ForeColor = Color::FromArgb(255, 140, 0);  // Dark Orange
            //}
            //else if (gradeStr == "C-") {
            //    gradeLabel->ForeColor = Color::FromArgb(255, 69, 0);  // Orange Red
            //}
            //else if (gradeStr == "D+") {
            //    gradeLabel->ForeColor = Color::FromArgb(255, 99, 71);  // Tomato
            //}
            //else if (gradeStr == "D") {
            //    gradeLabel->ForeColor = Color::FromArgb(220, 20, 60);  // Crimson
            //}
            //else if (gradeStr == "F") {
            //    gradeLabel->ForeColor = Color::FromArgb(178, 34, 34);  // Firebrick
            //}
            //else if (gradeStr == "W") {
            //    gradeLabel->ForeColor = Color::FromArgb(128, 128, 128);  // Gray
            //}
            //else if (gradeStr == "I") {
            //    gradeLabel->ForeColor = Color::FromArgb(169, 169, 169);  // Dark Gray
            //}
            //else {
            //    gradeLabel->ForeColor = Color::FromArgb(32, 42, 68);  // Your dark blue color
            //}
