#include "AdminNavBar.h"
#include"Studentlogin.h"
void CourseRegistration::AdminNavBar::panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to log out?", "Logout", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);

    if (result == System::Windows::Forms::DialogResult::Yes)
    {
        Studentlogin^ loginForm = gcnew Studentlogin();
        loginForm->ShowDialog();
        this->Hide();
        this->Close();

    }

}
