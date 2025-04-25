#include "course_info.h"
#include"NavBar.h"
std::string gcid = "";
void CourseRegistration::course_info::panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    NavBar^ nb = gcnew NavBar();
    nb->ShowDialog();
    this->Hide();
    this->Close();


}
