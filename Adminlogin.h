#pragma once
#include "FileManager.h"
#include "Utils.h"
#include "Login_SignUp_Helper.h"
#include "AdminNavBar.h"
class SignUp;
namespace CourseRegistration {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Adminlogin : public System::Windows::Forms::Form
    {
    public:
        Adminlogin(void)
        {
            InitializeComponent();
        }

    protected:
        ~Adminlogin()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ username_a;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ password_a;
        System::Windows::Forms::Button^ submit_a;
    private: System::Windows::Forms::PictureBox^ pictureBox2;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminlogin::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->username_a = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->password_a = (gcnew System::Windows::Forms::TextBox());
            this->submit_a = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(907, 161);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(144, 58);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Login";
            // 
            // username_a
            // 
            this->username_a->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->username_a->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->username_a->Location = System::Drawing::Point(851, 304);
            this->username_a->Name = L"username_a";
            this->username_a->Size = System::Drawing::Size(293, 20);
            this->username_a->TabIndex = 2;
            this->username_a->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Adminlogin::username_KeyDown);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(848, 283);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(77, 18);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Username";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(848, 349);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(75, 18);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Password";
            // 
            // password_a
            // 
            this->password_a->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->password_a->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->password_a->Location = System::Drawing::Point(851, 370);
            this->password_a->Name = L"password_a";
            this->password_a->PasswordChar = '*';
            this->password_a->Size = System::Drawing::Size(293, 20);
            this->password_a->TabIndex = 5;
            this->password_a->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Adminlogin::password_KeyDown);
            // 
            // submit_a
            // 
            this->submit_a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->submit_a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->submit_a->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->submit_a->ForeColor = System::Drawing::SystemColors::Window;
            this->submit_a->Location = System::Drawing::Point(851, 418);
            this->submit_a->Name = L"submit_a";
            this->submit_a->Size = System::Drawing::Size(293, 39);
            this->submit_a->TabIndex = 6;
            this->submit_a->Text = L"Log in";
            this->submit_a->UseVisualStyleBackColor = false;
            this->submit_a->Click += gcnew System::EventHandler(this, &Adminlogin::submit_a_Click);
            this->submit_a->MouseEnter += gcnew System::EventHandler(this, &Adminlogin::submit_a_MouseEnter);
            this->submit_a->MouseLeave += gcnew System::EventHandler(this, &Adminlogin::submit_a_MouseLeave);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(-107, -55);
            this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(800, 800);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 10;
            this->pictureBox2->TabStop = false;
            // 
            // Adminlogin
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Honeydew;
            this->ClientSize = System::Drawing::Size(1156, 628);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->submit_a);
            this->Controls->Add(this->password_a);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->username_a);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->Margin = System::Windows::Forms::Padding(8);
            this->Name = L"Adminlogin";
            this->Text = L"Adminlogin";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &Adminlogin::Adminlogin_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void username_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
            if (e->KeyCode == Keys::Enter)
            {
                e->Handled = true;
                e->SuppressKeyPress = true;
                password_a->Focus();
            }
        }

        System::Void password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
            if (e->KeyCode == Keys::Enter)
            {
                e->Handled = true;
                e->SuppressKeyPress = true;
                submit_a->PerformClick(); // This will trigger the click event
            }
        }

        System::Void submit_a_Click(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrWhiteSpace(username_a->Text) || String::IsNullOrWhiteSpace(password_a->Text)) {
                MessageBox::Show("All the fields are required", "Please enter all the fields", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                string username = Utils::toStdString(username_a->Text);
                string password = Utils::toStdString(password_a->Text);
                bool isAdmin = Login_SignUp_Helper::validate_Admin_Login(username, password);
                if (isAdmin) {
                    MessageBox::Show("Login Successful", "Welcome", MessageBoxButtons::OK, MessageBoxIcon::None);
                    AdminNavBar^ adminNavBar = gcnew AdminNavBar(gcnew String(username.c_str()));
                    adminNavBar->ShowDialog();
                    this->Hide();
                }
                else {
                    MessageBox::Show("Invalid username or password", "Login Invalid", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
        }

        System::Void submit_a_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
            submit_a->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
            submit_a->Cursor = System::Windows::Forms::Cursors::Hand;
        }

        System::Void submit_a_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
            submit_a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            submit_a->Cursor = System::Windows::Forms::Cursors::Default;
        }

        System::Void Adminlogin_Load(System::Object^ sender, System::EventArgs^ e) {
        }
    };
}