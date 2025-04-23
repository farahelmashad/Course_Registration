#pragma once
#include"NavBar.h"
#include"Adminlogin.h"
#include"SignUp.h"
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 54.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(200, 119);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 88);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Log in";
			this->label1->Click += gcnew System::EventHandler(this, &Studentlogin::label1_Click);
			// 
			// username_sl
			// 
			this->username_sl->AutoSize = true;
			this->username_sl->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_sl->ForeColor = System::Drawing::Color::MidnightBlue;
			this->username_sl->Location = System::Drawing::Point(177, 252);
			this->username_sl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->username_sl->Name = L"username_sl";
			this->username_sl->Size = System::Drawing::Size(119, 28);
			this->username_sl->TabIndex = 4;
			this->username_sl->Text = L"Student ID";
			// 
			// username_s
			// 
			this->username_s->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_s->Location = System::Drawing::Point(182, 280);
			this->username_s->Margin = System::Windows::Forms::Padding(2);
			this->username_s->Name = L"username_s";
			this->username_s->Size = System::Drawing::Size(264, 20);
			this->username_s->TabIndex = 5;
			this->username_s->TextChanged += gcnew System::EventHandler(this, &Studentlogin::username_TextChanged);
			this->username_s->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Studentlogin::username_KeyDown);
			// 
			// password_sl
			// 
			this->password_sl->AutoSize = true;
			this->password_sl->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_sl->ForeColor = System::Drawing::Color::MidnightBlue;
			this->password_sl->Location = System::Drawing::Point(177, 338);
			this->password_sl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->password_sl->Name = L"password_sl";
			this->password_sl->Size = System::Drawing::Size(114, 28);
			this->password_sl->TabIndex = 6;
			this->password_sl->Text = L"Password";
			this->password_sl->Click += gcnew System::EventHandler(this, &Studentlogin::password_sl_Click);
			// 
			// password_s
			// 
			this->password_s->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_s->Location = System::Drawing::Point(182, 368);
			this->password_s->Margin = System::Windows::Forms::Padding(2);
			this->password_s->Name = L"password_s";
			this->password_s->PasswordChar = '*';
			this->password_s->Size = System::Drawing::Size(264, 20);
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
			this->submit_s->Location = System::Drawing::Point(182, 421);
			this->submit_s->Margin = System::Windows::Forms::Padding(2);
			this->submit_s->Name = L"submit_s";
			this->submit_s->Size = System::Drawing::Size(264, 38);
			this->submit_s->TabIndex = 8;
			this->submit_s->Text = L"Submit";
			this->submit_s->UseVisualStyleBackColor = false;
			this->submit_s->Click += gcnew System::EventHandler(this, &Studentlogin::submit_s_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(516, -62);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 800);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Studentlogin::pictureBox1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::MintCream;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::Navy;
			this->linkLabel1->Location = System::Drawing::Point(330, 494);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(52, 18);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign Up";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Studentlogin::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(221, 496);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 14);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Create an Account\?";
			this->label4->Click += gcnew System::EventHandler(this, &Studentlogin::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(225, 519);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 14);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Are You an Admin\?";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->linkLabel2->LinkColor = System::Drawing::Color::Navy;
			this->linkLabel2->Location = System::Drawing::Point(333, 516);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(43, 18);
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
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(1246, 657);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Studentlogin";
			this->Text = L"Studentlogin";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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
	a1->ShowDialog();
	this->Hide();
	this->Close();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	SignUp^ s1 = gcnew SignUp();
	s1->ShowDialog();
	this->Hide();
	this->Close();
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
	if (String::IsNullOrWhiteSpace(username_s->Text) || String::IsNullOrWhiteSpace(password_s->Text)) {
		MessageBox::Show("Please enter all fields", "User name and password are required",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
	else{
	int userID = Utils::toInt(username_s->Text);
	std::string password = Utils::toStdString(password_s->Text);
	bool isStudent = Login_SignUp_Helper::validate_Student_Login(userID, password);
	if (isStudent) {
		MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		NavBar^ n1 = gcnew NavBar();
		
		n1->ShowDialog();  
		this->Hide(); 
		this->Close(); 
	}
	else {
		MessageBox::Show("Invalid username or password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}}

}
 


private: System::Void Studentlogin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void password_sl_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
