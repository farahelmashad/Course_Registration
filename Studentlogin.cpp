#include"report.h"
#include "Studentlogin.h"
#include"SignUp.h"
FileManager fm;
using namespace System;
using namespace System::Windows::Forms;

void OnAppExit(Object^ sender, EventArgs^ e) {
       // fm.writeStudents("student.txt");
       // fm.writeAdmins("Admins.txt");
       // fm.writeCourses("Courses.txt");
}


[STAThread]
int main(cli::array<String^>^ args)
{   
    FileManager fm;
    fm.readAdmins("Admin.txt");
    fm.readCourses("Courses.txt");
    fm.readStudents("student.txt");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::ApplicationExit += gcnew EventHandler(OnAppExit);

    CourseRegistration::Studentlogin form;
    Application::Run(% form);

    return 0;
}
//[STAThread]
//int main(cli::array<String^>^ args) {
//    FileManager fm;
//    try {
//        fm.readAdmins("Admin.txt");
//        fm.readCourses("Courses.txt");
//        fm.readStudents("student.txt");
//    }
//    catch (const std::exception& e) {
//        MessageBox::Show("Data load error: " + gcnew String(e.what()),
//            "Error",
//            MessageBoxButtons::OK,
//            MessageBoxIcon::Error);
//        return 1;
//    }
//
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    Application::ApplicationExit += gcnew EventHandler(OnAppExit);
//
//    // Create a dummy student for testing
//    Student* testStudent = new Student();
//    testStudent->setStudentID(123456);
//    testStudent->setUsername("Test Student");
//
//    // Add dummy courses (modify to match your CourseGrades constructor)
//    std::set<CourseGrades> dummyGrades;
//    dummyGrades.insert(CourseGrades(123456, "CSC101", "Fall 2023", 'A'));
//    dummyGrades.insert(CourseGrades(123456, "MAT201", "Spring 2024", 'B'));
//    dummyGrades.insert(CourseGrades(123456, "MAT202", "Spring 2024", 'C'));
//    dummyGrades.insert(CourseGrades(123456, "MAT206", "Spring 2024", 'D'));
//    dummyGrades.insert(CourseGrades(123456, "CSC202", "Fall 2024", 'F'));
//    testStudent->setCompletedCourses(dummyGrades);
//
//    // Use the dummy student
//    Application::Run(gcnew CourseRegistration::report(testStudent));
//
//    return 0;
//}


