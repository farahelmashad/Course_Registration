#include "ManageGrades.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CourseRegistration::ManageGrades form;
	Application::Run(% form);
}
