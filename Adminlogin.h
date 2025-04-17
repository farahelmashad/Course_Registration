#pragma once

namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Adminlogin
	/// </summary>
	public ref class Adminlogin : public System::Windows::Forms::Form
	{
	public:
		Adminlogin(void)
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
		~Adminlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ username_a;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ password_a;
	private: System::Windows::Forms::Button^ submit_a;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminlogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->username_a = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->password_a = (gcnew System::Windows::Forms::TextBox());
			this->submit_a = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Log in";
			this->label1->Click += gcnew System::EventHandler(this, &Adminlogin::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(840, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(316, 548);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// username_a
			// 
			this->username_a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_a->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_a->Location = System::Drawing::Point(195, 235);
			this->username_a->Name = L"username_a";
			this->username_a->Size = System::Drawing::Size(293, 25);
			this->username_a->TabIndex = 2;
			this->username_a->TextChanged += gcnew System::EventHandler(this, &Adminlogin::username_TextChanged);
			this->username_a->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Adminlogin::username_KeyDown_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 36);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 36);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// password_a
			// 
			this->password_a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_a->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_a->Location = System::Drawing::Point(195, 293);
			this->password_a->Name = L"password_a";
			this->password_a->PasswordChar = '*';
			this->password_a->Size = System::Drawing::Size(293, 25);
			this->password_a->TabIndex = 5;
			this->password_a->TextChanged += gcnew System::EventHandler(this, &Adminlogin::password_TextChanged);
			this->password_a->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Adminlogin::password_KeyDown_1);
			// 
			// submit_a
			// 
			this->submit_a->BackColor = System::Drawing::Color::MidnightBlue;
			this->submit_a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit_a->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_a->ForeColor = System::Drawing::SystemColors::Window;
			this->submit_a->Location = System::Drawing::Point(393, 520);
			this->submit_a->Name = L"submit_a";
			this->submit_a->Size = System::Drawing::Size(184, 39);
			this->submit_a->TabIndex = 6;
			this->submit_a->Text = L"Submit";
			this->submit_a->UseVisualStyleBackColor = false;
			// 
			// Adminlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(21, 45);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1156, 628);
			this->Controls->Add(this->submit_a);
			this->Controls->Add(this->password_a);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->username_a);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Margin = System::Windows::Forms::Padding(8);
			this->Name = L"Adminlogin";
			this->Text = L"Adminlogin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
    
private: System::Void password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
		
private: System::Void username_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		e->Handled = true;
		e->SuppressKeyPress = true;
		password_a->Focus();
	}
}
private: System::Void password_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		e->Handled = true;
		e->SuppressKeyPress = true;
		submit_a->Focus();
	}
}
};
}
