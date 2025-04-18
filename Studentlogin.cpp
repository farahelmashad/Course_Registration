
#include "Studentlogin.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<String^>^ args)
{   
    FileManager fm;
    fm.readAdmins("Admin.txt");
    fm.readCourses("Courses.txt");
    fm.readStudents("student.txt");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    CourseRegistration::Studentlogin form;
    Application::Run(% form);

    return 0;
}


