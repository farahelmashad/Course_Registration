#pragma once
#include"FileManager.h"
#include "Utils.h"
#include "Login_SignUp_Helper.h"
#include"NavBar.h"
namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
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
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Username;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Password;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ National_ID;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Student_ID;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ Gender;

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Button^ Submit;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUp::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->National_ID = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Student_ID = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->Gender = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->Submit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Honeydew;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(886, -41);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1141, 1068);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SignUp::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 55.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(339, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 110);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign Up";
			this->label1->Click += gcnew System::EventHandler(this, &SignUp::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label2->Location = System::Drawing::Point(198, 233);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username";
			// 
			// Username
			// 
			this->Username->BackColor = System::Drawing::SystemColors::Window;
			this->Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Username->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Username->Location = System::Drawing::Point(204, 270);
			this->Username->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Username->Multiline = true;
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(377, 24);
			this->Username->TabIndex = 4;
			this->Username->TextChanged += gcnew System::EventHandler(this, &SignUp::Username_TextChanged);
			this->Username->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignUp::Username_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label3->Location = System::Drawing::Point(198, 318);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 34);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// Password
			// 
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Password->Location = System::Drawing::Point(204, 355);
			this->Password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Password->Multiline = true;
			this->Password->Name = L"Password";
			this->Password->PasswordChar = '*';
			this->Password->Size = System::Drawing::Size(377, 25);
			this->Password->TabIndex = 6;
			this->Password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignUp::Password_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label4->Location = System::Drawing::Point(198, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 34);
			this->label4->TabIndex = 7;
			this->label4->Text = L"National ID";
			this->label4->Click += gcnew System::EventHandler(this, &SignUp::label4_Click);
			// 
			// National_ID
			// 
			this->National_ID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->National_ID->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->National_ID->ForeColor = System::Drawing::SystemColors::InfoText;
			this->National_ID->Location = System::Drawing::Point(204, 444);
			this->National_ID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->National_ID->MaxLength = 10;
			this->National_ID->Multiline = true;
			this->National_ID->Name = L"National_ID";
			this->National_ID->Size = System::Drawing::Size(377, 26);
			this->National_ID->TabIndex = 8;
			this->National_ID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignUp::National_ID_KeyDown);
			this->National_ID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SignUp::National_ID_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label5->Location = System::Drawing::Point(198, 492);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 34);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Student ID";
			// 
			// Student_ID
			// 
			this->Student_ID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Student_ID->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Student_ID->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Student_ID->Location = System::Drawing::Point(204, 529);
			this->Student_ID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Student_ID->MaxLength = 8;
			this->Student_ID->Multiline = true;
			this->Student_ID->Name = L"Student_ID";
			this->Student_ID->Size = System::Drawing::Size(377, 26);
			this->Student_ID->TabIndex = 10;
			this->Student_ID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignUp::Student_ID_KeyDown);
			this->Student_ID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SignUp::Student_ID_KeyPress);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->radioButton2->Location = System::Drawing::Point(204, 630);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(129, 38);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// Gender
			// 
			this->Gender->AutoSize = true;
			this->Gender->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gender->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Gender->Location = System::Drawing::Point(198, 579);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(106, 34);
			this->Gender->TabIndex = 13;
			this->Gender->Text = L"Gender";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->radioButton3->Location = System::Drawing::Point(403, 630);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(96, 38);
			this->radioButton3->TabIndex = 14;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Male";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &SignUp::radioButton3_CheckedChanged);
			// 
			// Submit
			// 
			this->Submit->BackColor = System::Drawing::Color::MidnightBlue;
			this->Submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Submit->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Submit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->Submit->Location = System::Drawing::Point(204, 703);
			this->Submit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(377, 39);
			this->Submit->TabIndex = 15;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = false;
			this->Submit->Click += gcnew System::EventHandler(this, &SignUp::Submit_Click);
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(1560, 927);
			this->Controls->Add(this->Submit);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->Gender);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->Student_ID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->National_ID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SignUp";
			this->Text = L"SignUp";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &SignUp::SignUp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SignUp_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Username_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			e->Handled = true;
			e->SuppressKeyPress = true;
			Password->Focus();
		}
	}
	private: System::Void Password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			e->Handled = true;
			e->SuppressKeyPress = true;
			National_ID->Focus();
		}
	}
	private: System::Void National_ID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			e->Handled = true;
			e->SuppressKeyPress = true;
			Student_ID->Focus();
		}
	}
	private: System::Void Student_ID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter) {
			e->Handled = true;
			e->SuppressKeyPress = true;
			Submit->Focus();
		}

	}
// al id digits bs
    private:   System::Void National_ID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			   if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
				   e->Handled = true;
			   }
		   }

		   
	private:	   System::Void Student_ID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
			e->Handled = true; 
		}
	}
	private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(Username->Text) || String::IsNullOrEmpty(Password->Text) || String::IsNullOrEmpty(National_ID->Text) || String::IsNullOrEmpty(Student_ID->Text) || (!radioButton2->Checked && !radioButton3->Checked)) {
			MessageBox::Show("All the fields are required", "Please enter all fields", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			std::string username = Utils::toStdString(Username->Text);
			std::string password = Utils::toStdString(Password->Text);
			int nationalID = Utils::toInt(National_ID->Text);
			int studentID = Utils::toInt(Student_ID->Text);
			char gender = radioButton2->Checked ? 'F' : 'M';
			bool isValid = Login_SignUp_Helper::Student_Sign_Up(username, password, nationalID, studentID, gender);
			if (isValid) {
				MessageBox::Show ("Welcome!","Sign Up Successful!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				NavBar^ n2 = gcnew NavBar();
				n2->ShowDialog();
				this->Hide();
				this->Close();
			}
			else {
				MessageBox::Show( "User already exists! Try logging in","Sign Up Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void Username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}