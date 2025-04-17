

#include "Studentlogin.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    CourseRegistration::Studentlogin form;
    Application::Run(% form);

    return 0;
}


