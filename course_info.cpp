#include "course_info.h"
#include"report.h"
#include"ViewGrades.h"

#include"NavBar.h"
std::string gcid = "";
void CourseRegistration::course_info::panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    NavBar^ nb = gcnew NavBar();
    nb->ShowDialog();
    this->Hide();
    this->Close();


}
void CourseRegistration::course_info::panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    ViewGrades^ sb = gcnew ViewGrades();
    sb->ShowDialog();
    this->Hide();
    this->Close();


}
void CourseRegistration::course_info::panel6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    report^ mb = gcnew report();
    mb->ShowDialog();
    this->Hide();
    this->Close();

}