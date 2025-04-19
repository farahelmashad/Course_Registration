#pragma once
#include "Course_Registration.h"


namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminNavBar
	/// </summary>
	public ref class UploadCourses : public System::Windows::Forms::Form
	{
	public:
		UploadCourses(void)
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
		~UploadCourses()
		{
			if (components)
			{
				delete components;
			}
		}


	private:
		System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label1;

		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Panel^ panel2;

		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Label^ label4;

		System::Windows::Forms::Panel^ panel4;
		System::Windows::Forms::PictureBox^ pictureBox4;















		System::Windows::Forms::Panel^ panel6;
		System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;













	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ submit_s;
	private: System::Windows::Forms::TextBox^ InstructorName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ CreditHours;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Syllabus;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ CourseTitle;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ course_i;
	private: System::Windows::Forms::Label^ label10;




		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UploadCourses::typeid));
			   this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->panel4 = (gcnew System::Windows::Forms::Panel());
			   this->panel6 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel5 = (gcnew System::Windows::Forms::Panel());
			   this->submit_s = (gcnew System::Windows::Forms::Button());
			   this->InstructorName = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->CreditHours = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->Syllabus = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->CourseTitle = (gcnew System::Windows::Forms::TextBox());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->course_i = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->flowLayoutPanel1->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   this->panel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			   this->panel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->panel4->SuspendLayout();
			   this->panel6->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   this->panel5->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // flowLayoutPanel1
			   // 
			   this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->flowLayoutPanel1->Controls->Add(this->panel1);
			   this->flowLayoutPanel1->Controls->Add(this->panel2);
			   this->flowLayoutPanel1->Controls->Add(this->panel3);
			   this->flowLayoutPanel1->Controls->Add(this->panel4);
			   this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			   this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			   this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			   this->flowLayoutPanel1->Size = System::Drawing::Size(253, 740);
			   this->flowLayoutPanel1->TabIndex = 1;
			   // 
			   // panel1
			   // 
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->pictureBox5);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Margin = System::Windows::Forms::Padding(0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(237, 178);
			   this->panel1->TabIndex = 0;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(33, 4);
			   this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(165, 91);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox5->TabIndex = 3;
			   this->pictureBox5->TabStop = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->Location = System::Drawing::Point(8, 150);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(51, 18);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Admin";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(64, 99);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(108, 24);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"User name";
			   // 
			   // panel2
			   // 
			   this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel2->Controls->Add(this->pictureBox7);
			   this->panel2->Controls->Add(this->label3);
			   this->panel2->Location = System::Drawing::Point(0, 178);
			   this->panel2->Margin = System::Windows::Forms::Padding(0);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(234, 100);
			   this->panel2->TabIndex = 1;
			   // 
			   // pictureBox7
			   // 
			   this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			   this->pictureBox7->Location = System::Drawing::Point(11, 24);
			   this->pictureBox7->Name = L"pictureBox7";
			   this->pictureBox7->Size = System::Drawing::Size(55, 39);
			   this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox7->TabIndex = 3;
			   this->pictureBox7->TabStop = false;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(75, 24);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(134, 23);
			   this->label3->TabIndex = 1;
			   this->label3->Text = L"Upload Course";
			   // 
			   // panel3
			   // 
			   this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel3->Controls->Add(this->pictureBox1);
			   this->panel3->Controls->Add(this->label4);
			   this->panel3->Location = System::Drawing::Point(0, 278);
			   this->panel3->Margin = System::Windows::Forms::Padding(0);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(234, 100);
			   this->panel3->TabIndex = 2;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(3, 35);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(57, 41);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 3;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(66, 35);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(158, 23);
			   this->label4->TabIndex = 1;
			   this->label4->Text = L"Set Prerequisites";
			   // 
			   // panel4
			   // 
			   this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel4->Controls->Add(this->panel6);
			   this->panel4->Controls->Add(this->pictureBox4);
			   this->panel4->Location = System::Drawing::Point(0, 378);
			   this->panel4->Margin = System::Windows::Forms::Padding(0);
			   this->panel4->Name = L"panel4";
			   this->panel4->Size = System::Drawing::Size(234, 91);
			   this->panel4->TabIndex = 3;
			   // 
			   // panel6
			   // 
			   this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel6->Controls->Add(this->pictureBox2);
			   this->panel6->Controls->Add(this->label6);
			   this->panel6->Location = System::Drawing::Point(-1, -1);
			   this->panel6->Margin = System::Windows::Forms::Padding(0);
			   this->panel6->Name = L"panel6";
			   this->panel6->Size = System::Drawing::Size(234, 91);
			   this->panel6->TabIndex = 4;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(5, 38);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(57, 40);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 3;
			   this->pictureBox2->TabStop = false;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->ForeColor = System::Drawing::Color::White;
			   this->label6->Location = System::Drawing::Point(68, 38);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(141, 23);
			   this->label6->TabIndex = 1;
			   this->label6->Text = L"Manage Grades";
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox4->Location = System::Drawing::Point(3, 26);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(57, 41);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 0;
			   this->pictureBox4->TabStop = false;
			   // 
			   // panel5
			   // 
			   this->panel5->Controls->Add(this->submit_s);
			   this->panel5->Controls->Add(this->InstructorName);
			   this->panel5->Controls->Add(this->label5);
			   this->panel5->Controls->Add(this->CreditHours);
			   this->panel5->Controls->Add(this->label7);
			   this->panel5->Controls->Add(this->Syllabus);
			   this->panel5->Controls->Add(this->label8);
			   this->panel5->Controls->Add(this->CourseTitle);
			   this->panel5->Controls->Add(this->label9);
			   this->panel5->Location = System::Drawing::Point(320, 129);
			   this->panel5->Name = L"panel5";
			   this->panel5->Size = System::Drawing::Size(625, 415);
			   this->panel5->TabIndex = 20;
			   // 
			   // submit_s
			   // 
			   this->submit_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->submit_s->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->submit_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->submit_s->ForeColor = System::Drawing::SystemColors::Window;
			   this->submit_s->Location = System::Drawing::Point(243, 259);
			   this->submit_s->Name = L"submit_s";
			   this->submit_s->Size = System::Drawing::Size(161, 39);
			   this->submit_s->TabIndex = 28;
			   this->submit_s->Text = L"Submit";
			   this->submit_s->UseVisualStyleBackColor = false;
			   // 
			   // InstructorName
			   // 
			   this->InstructorName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->InstructorName->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->InstructorName->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->InstructorName->Location = System::Drawing::Point(312, 194);
			   this->InstructorName->Multiline = true;
			   this->InstructorName->Name = L"InstructorName";
			   this->InstructorName->Size = System::Drawing::Size(260, 32);
			   this->InstructorName->TabIndex = 27;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(105, 200);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(182, 28);
			   this->label5->TabIndex = 26;
			   this->label5->Text = L"Instructor Name";
			   // 
			   // CreditHours
			   // 
			   this->CreditHours->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->CreditHours->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CreditHours->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->CreditHours->Location = System::Drawing::Point(312, 139);
			   this->CreditHours->Multiline = true;
			   this->CreditHours->Name = L"CreditHours";
			   this->CreditHours->Size = System::Drawing::Size(260, 32);
			   this->CreditHours->TabIndex = 25;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(105, 143);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(144, 28);
			   this->label7->TabIndex = 24;
			   this->label7->Text = L"Credit Hours";
			   // 
			   // Syllabus
			   // 
			   this->Syllabus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->Syllabus->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Syllabus->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->Syllabus->Location = System::Drawing::Point(312, 83);
			   this->Syllabus->Multiline = true;
			   this->Syllabus->Name = L"Syllabus";
			   this->Syllabus->PasswordChar = '*';
			   this->Syllabus->Size = System::Drawing::Size(260, 32);
			   this->Syllabus->TabIndex = 23;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(105, 89);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(101, 28);
			   this->label8->TabIndex = 22;
			   this->label8->Text = L"Syllabus";
			   // 
			   // CourseTitle
			   // 
			   this->CourseTitle->BackColor = System::Drawing::SystemColors::Window;
			   this->CourseTitle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->CourseTitle->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CourseTitle->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->CourseTitle->Location = System::Drawing::Point(312, 22);
			   this->CourseTitle->Multiline = true;
			   this->CourseTitle->Name = L"CourseTitle";
			   this->CourseTitle->Size = System::Drawing::Size(260, 32);
			   this->CourseTitle->TabIndex = 21;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(105, 26);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(136, 28);
			   this->label9->TabIndex = 20;
			   this->label9->Text = L"Course Title";
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(901, 5);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(64, 50);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 29;
			   this->pictureBox3->TabStop = false;
			   // 
			   // course_i
			   // 
			   this->course_i->AutoSize = true;
			   this->course_i->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->course_i->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->course_i->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->course_i->Location = System::Drawing::Point(320, 21);
			   this->course_i->Name = L"course_i";
			   this->course_i->Size = System::Drawing::Size(0, 52);
			   this->course_i->TabIndex = 30;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->label10->Location = System::Drawing::Point(326, 3);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(324, 52);
			   this->label10->TabIndex = 31;
			   this->label10->Text = L"Upload Courses";
			   // 
			   // UploadCourses
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->ClientSize = System::Drawing::Size(968, 740);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->course_i);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->panel5);
			   this->Controls->Add(this->flowLayoutPanel1);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"UploadCourses";
			   this->Text = L"AdminNavBar";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->flowLayoutPanel1->ResumeLayout(false);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->panel4->ResumeLayout(false);
			   this->panel6->ResumeLayout(false);
			   this->panel6->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   this->panel5->ResumeLayout(false);
			   this->panel5->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion







};
}
