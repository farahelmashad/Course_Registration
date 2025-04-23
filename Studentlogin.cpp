
#include "Studentlogin.h"
#include"SignUp.h"
FileManager fm;
using namespace System;
using namespace System::Windows::Forms;

void OnAppExit(Object^ sender, EventArgs^ e) {
       fm.writeStudents("student.txt");
       fm.writeAdmins("Admin.txt");
       fm.writeCourses("Courses.txt");
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

