#pragma once
#include"NavBar.h"
#include"SignUp.h"
#include"Adminlogin.h"
#include "FileManager.h"
#include "Login_SignUp_Helper.h"
#include "Utils.h"
namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Studentlogin
	/// </summary>
	public ref class Studentlogin : public System::Windows::Forms::Form
	{
	public:
		Studentlogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Studentlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ username_sl;

	private: System::Windows::Forms::TextBox^ username_s;
	private: System::Windows::Forms::Label^ password_sl;
	private: System::Windows::Forms::TextBox^ password_s;
	private: System::Windows::Forms::Button^ submit_s;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Studentlogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username_sl = (gcnew System::Windows::Forms::Label());
			this->username_s = (gcnew System::Windows::Forms::TextBox());
			this->password_sl = (gcnew System::Windows::Forms::Label());
			this->password_s = (gcnew System::Windows::Forms::TextBox());
			this->submit_s = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 58);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Log in";
			this->label1->Click += gcnew System::EventHandler(this, &Studentlogin::label1_Click);
			// 
			// username_sl
			// 
			this->username_sl->AutoSize = true;
			this->username_sl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_sl->Location = System::Drawing::Point(14, 153);
			this->username_sl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->username_sl->Name = L"username_sl";
			this->username_sl->Size = System::Drawing::Size(124, 29);
			this->username_sl->TabIndex = 4;
			this->username_sl->Text = L"Username";
			// 
			// username_s
			// 
			this->username_s->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_s->Location = System::Drawing::Point(135, 162);
			this->username_s->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->username_s->Name = L"username_s";
			this->username_s->Size = System::Drawing::Size(220, 20);
			this->username_s->TabIndex = 5;
			this->username_s->TextChanged += gcnew System::EventHandler(this, &Studentlogin::username_TextChanged);
			this->username_s->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Studentlogin::username_KeyDown);
			// 
			// password_sl
			// 
			this->password_sl->AutoSize = true;
			this->password_sl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_sl->Location = System::Drawing::Point(14, 196);
			this->password_sl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->password_sl->Name = L"password_sl";
			this->password_sl->Size = System::Drawing::Size(119, 29);
			this->password_sl->TabIndex = 6;
			this->password_sl->Text = L"Password";
			// 
			// password_s
			// 
			this->password_s->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_s->Location = System::Drawing::Point(135, 204);
			this->password_s->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->password_s->Name = L"password_s";
			this->password_s->PasswordChar = '*';
			this->password_s->Size = System::Drawing::Size(220, 20);
			this->password_s->TabIndex = 7;
			this->password_s->TextChanged += gcnew System::EventHandler(this, &Studentlogin::password_TextChanged);
			this->password_s->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Studentlogin::password_KeyDown);
			// 
			// submit_s
			// 
			this->submit_s->BackColor = System::Drawing::Color::MidnightBlue;
			this->submit_s->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_s->ForeColor = System::Drawing::SystemColors::Window;
			this->submit_s->Location = System::Drawing::Point(272, 359);
			this->submit_s->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->submit_s->Name = L"submit_s";
			this->submit_s->Size = System::Drawing::Size(138, 32);
			this->submit_s->TabIndex = 8;
			this->submit_s->Text = L"Submit";
			this->submit_s->UseVisualStyleBackColor = false;
			this->submit_s->Click += gcnew System::EventHandler(this, &Studentlogin::submit_s_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(553, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(268, 483);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Studentlogin::pictureBox1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::SystemColors::MenuHighlight;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::MidnightBlue;
			this->linkLabel1->Location = System::Drawing::Point(309, 238);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(45, 13);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign Up";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Studentlogin::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(204, 238);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Create an Account\?";
			this->label4->Click += gcnew System::EventHandler(this, &Studentlogin::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(204, 259);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Are You an Admin\?";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(309, 259);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(37, 13);
			this->linkLabel2->TabIndex = 13;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Log In";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Studentlogin::linkLabel2_LinkClicked);
			// 
			// Studentlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(822, 513);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->submit_s);
			this->Controls->Add(this->password_s);
			this->Controls->Add(this->password_sl);
			this->Controls->Add(this->username_s);
			this->Controls->Add(this->username_sl);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Studentlogin";
			this->Text = L"Studentlogin";
			this->Load += gcnew System::EventHandler(this, &Studentlogin::Studentlogin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	Adminlogin^ a1 = gcnew Adminlogin();
	a1->Show();
	this->Hide();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	SignUp^ s1 = gcnew SignUp();
	s1->Show();
	this->Hide();

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		e->Handled = true;
		e->SuppressKeyPress = true;
		password_s->Focus();
	}
}
private: System::Void password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		e->Handled = true;
		e->SuppressKeyPress = true;
		submit_s->Focus();
	}
}
private: System::Void submit_s_Click(System::Object^ sender, System::EventArgs^ e) {
	//NavBar^ n1 = gcnew NavBar();
	//n1->Show();
	//this->Hide();
	std::string username = Utils::toStdString(username_s->Text);
	std::string password = Utils::toStdString(password_s->Text);
	bool isStudent = Login_SignUp_Helper::validate_Student_Login(username, password);
	if (isStudent) {
		MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Invalid username or password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
 


private: System::Void Studentlogin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
};

}
