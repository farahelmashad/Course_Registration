#pragma once
#include"Course_registration.h"
#include"course_pre.h"
#include <msclr/marshal_cppstd.h>

namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for ViewGrades
	/// </summary>
	public ref class ViewGrades : public System::Windows::Forms::Form
	{
	public:
		ViewGrades(void);

	protected:
		~ViewGrades();

		// UI Controls
		System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::PictureBox^ pictureBox2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::PictureBox^ pictureBox3;
		System::Windows::Forms::Panel^ panel4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::PictureBox^ pictureBox4;
		System::Windows::Forms::PictureBox^ pictureBox5;
		System::Windows::Forms::Panel^ searchpanel;
	protected: System::Windows::Forms::Label^ Semlbl;
	protected: System::Windows::Forms::ComboBox^ SemBox;
	protected: System::Windows::Forms::FlowLayoutPanel^ GradesLayoutPanel;





	protected: System::Windows::Forms::PictureBox^ searchBtn;

			 System::Windows::Forms::Panel^ panel7;
			 System::Windows::Forms::Label^ check_pre;
			 System::Windows::Forms::PictureBox^ pictureBox7;
			 System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
			 System::Windows::Forms::Panel^ course_lay;
			 System::Windows::Forms::Label^ course_nameout;
			 System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ Coursepanel;
	protected:


	private: System::Windows::Forms::Label^ CGradelbl;

	private: System::Windows::Forms::Label^ CNlbl;
	private: System::Windows::Forms::Button^ Retakebtn;


		   System::Windows::Forms::Label^ course_idout;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewGrades::typeid));
			   this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel4 = (gcnew System::Windows::Forms::Panel());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel7 = (gcnew System::Windows::Forms::Panel());
			   this->check_pre = (gcnew System::Windows::Forms::Label());
			   this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->searchpanel = (gcnew System::Windows::Forms::Panel());
			   this->searchBtn = (gcnew System::Windows::Forms::PictureBox());
			   this->SemBox = (gcnew System::Windows::Forms::ComboBox());
			   this->Semlbl = (gcnew System::Windows::Forms::Label());
			   this->GradesLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->Coursepanel = (gcnew System::Windows::Forms::Panel());
			   this->Retakebtn = (gcnew System::Windows::Forms::Button());
			   this->CGradelbl = (gcnew System::Windows::Forms::Label());
			   this->CNlbl = (gcnew System::Windows::Forms::Label());
			   this->flowLayoutPanel1->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->panel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->panel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->panel4->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   this->panel7->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   this->searchpanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchBtn))->BeginInit();
			   this->GradesLayoutPanel->SuspendLayout();
			   this->Coursepanel->SuspendLayout();
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
			   this->flowLayoutPanel1->Controls->Add(this->panel7);
			   this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			   this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			   this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			   this->flowLayoutPanel1->Size = System::Drawing::Size(295, 755);
			   this->flowLayoutPanel1->TabIndex = 1;
			   // 
			   // panel1
			   // 
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Controls->Add(this->pictureBox1);
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Margin = System::Windows::Forms::Padding(0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(295, 178);
			   this->panel1->TabIndex = 0;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->Location = System::Drawing::Point(8, 150);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(89, 18);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"User/Admin";
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
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(58, 5);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(130, 113);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // panel2
			   // 
			   this->panel2->Controls->Add(this->label3);
			   this->panel2->Controls->Add(this->pictureBox2);
			   this->panel2->Location = System::Drawing::Point(0, 178);
			   this->panel2->Margin = System::Windows::Forms::Padding(0);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(295, 100);
			   this->panel2->TabIndex = 1;
			   this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewGrades::panel2_MouseClick);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(60, 40);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(179, 23);
			   this->label3->TabIndex = 1;
			   this->label3->Text = L"Course Registration";
			   this->label3->Click += gcnew System::EventHandler(this, &ViewGrades::label3_Click);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(5, 29);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(55, 39);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 0;
			   this->pictureBox2->TabStop = false;
			   // 
			   // panel3
			   // 
			   this->panel3->Controls->Add(this->label4);
			   this->panel3->Controls->Add(this->pictureBox3);
			   this->panel3->Location = System::Drawing::Point(0, 278);
			   this->panel3->Margin = System::Windows::Forms::Padding(0);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(301, 100);
			   this->panel3->TabIndex = 2;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(60, 35);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(116, 23);
			   this->label4->TabIndex = 1;
			   this->label4->Text = L"View Grades";
			   this->label4->Click += gcnew System::EventHandler(this, &ViewGrades::label4_Click);
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(3, 26);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(57, 40);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 0;
			   this->pictureBox3->TabStop = false;
			   // 
			   // panel4
			   // 
			   this->panel4->Controls->Add(this->label5);
			   this->panel4->Controls->Add(this->pictureBox4);
			   this->panel4->Location = System::Drawing::Point(0, 378);
			   this->panel4->Margin = System::Windows::Forms::Padding(0);
			   this->panel4->Name = L"panel4";
			   this->panel4->Size = System::Drawing::Size(295, 91);
			   this->panel4->TabIndex = 3;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->ForeColor = System::Drawing::Color::White;
			   this->label5->Location = System::Drawing::Point(63, 38);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(112, 23);
			   this->label5->TabIndex = 1;
			   this->label5->Text = L"View Report";
			   this->label5->Click += gcnew System::EventHandler(this, &ViewGrades::label5_Click);
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			   this->pictureBox4->Location = System::Drawing::Point(3, 26);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(57, 41);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 0;
			   this->pictureBox4->TabStop = false;
			   // 
			   // panel7
			   // 
			   this->panel7->Controls->Add(this->check_pre);
			   this->panel7->Controls->Add(this->pictureBox7);
			   this->panel7->Location = System::Drawing::Point(0, 469);
			   this->panel7->Margin = System::Windows::Forms::Padding(0);
			   this->panel7->Name = L"panel7";
			   this->panel7->Size = System::Drawing::Size(295, 91);
			   this->panel7->TabIndex = 18;
			   this->panel7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewGrades::panel7_MouseClick);
			   // 
			   // check_pre
			   // 
			   this->check_pre->AutoSize = true;
			   this->check_pre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->check_pre->ForeColor = System::Drawing::Color::White;
			   this->check_pre->Location = System::Drawing::Point(63, 38);
			   this->check_pre->Name = L"check_pre";
			   this->check_pre->Size = System::Drawing::Size(170, 23);
			   this->check_pre->TabIndex = 1;
			   this->check_pre->Text = L"Check prerequisite";
			   // 
			   // pictureBox7
			   // 
			   this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			   this->pictureBox7->Location = System::Drawing::Point(3, 26);
			   this->pictureBox7->Name = L"pictureBox7";
			   this->pictureBox7->Size = System::Drawing::Size(57, 41);
			   this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox7->TabIndex = 0;
			   this->pictureBox7->TabStop = false;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(1441, 12);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(73, 50);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox5->TabIndex = 2;
			   this->pictureBox5->TabStop = false;
			   // 
			   // searchpanel
			   // 
			   this->searchpanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->searchpanel->Controls->Add(this->searchBtn);
			   this->searchpanel->Controls->Add(this->SemBox);
			   this->searchpanel->Controls->Add(this->Semlbl);
			   this->searchpanel->Location = System::Drawing::Point(424, 5);
			   this->searchpanel->Name = L"searchpanel";
			   this->searchpanel->Size = System::Drawing::Size(828, 70);
			   this->searchpanel->TabIndex = 3;
			   // 
			   // searchBtn
			   // 
			   this->searchBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->searchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchBtn.Image")));
			   this->searchBtn->Location = System::Drawing::Point(552, 15);
			   this->searchBtn->Name = L"searchBtn";
			   this->searchBtn->Size = System::Drawing::Size(68, 39);
			   this->searchBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->searchBtn->TabIndex = 8;
			   this->searchBtn->TabStop = false;
			   this->searchBtn->Click += gcnew System::EventHandler(this, &ViewGrades::searchbutton_Click);
			   // 
			   // SemBox
			   // 
			   this->SemBox->FormattingEnabled = true;
			   this->SemBox->Location = System::Drawing::Point(192, 22);
			   this->SemBox->Name = L"SemBox";
			   this->SemBox->Size = System::Drawing::Size(284, 32);
			   this->SemBox->TabIndex = 7;
			   // 
			   // Semlbl
			   // 
			   this->Semlbl->AutoSize = true;
			   this->Semlbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 17.8F, System::Drawing::FontStyle::Bold));
			   this->Semlbl->Location = System::Drawing::Point(40, 18);
			   this->Semlbl->Name = L"Semlbl";
			   this->Semlbl->Size = System::Drawing::Size(146, 36);
			   this->Semlbl->TabIndex = 5;
			   this->Semlbl->Text = L"Semester";
			   this->Semlbl->Click += gcnew System::EventHandler(this, &ViewGrades::semesterlabel_Click);
			   // 
			   // GradesLayoutPanel
			   // 
			   this->GradesLayoutPanel->AutoScroll = true;
			   this->GradesLayoutPanel->Controls->Add(this->Coursepanel);
			   this->GradesLayoutPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->GradesLayoutPanel->Location = System::Drawing::Point(304, 81);
			   this->GradesLayoutPanel->Name = L"GradesLayoutPanel";
			   this->GradesLayoutPanel->Size = System::Drawing::Size(1117, 674);
			   this->GradesLayoutPanel->TabIndex = 4;
			   // 
			   // Coursepanel
			   // 
			   this->Coursepanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->Coursepanel->Controls->Add(this->Retakebtn);
			   this->Coursepanel->Controls->Add(this->CGradelbl);
			   this->Coursepanel->Controls->Add(this->CNlbl);
			   this->Coursepanel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Coursepanel->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->Coursepanel->Location = System::Drawing::Point(3, 3);
			   this->Coursepanel->Name = L"Coursepanel";
			   this->Coursepanel->Size = System::Drawing::Size(259, 204);
			   this->Coursepanel->TabIndex = 0;
			   this->Coursepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewGrades::panel5_Paint);
			   // 
			   // Retakebtn
			   // 
			   this->Retakebtn->BackColor = System::Drawing::Color::AliceBlue;
			   this->Retakebtn->Location = System::Drawing::Point(117, 143);
			   this->Retakebtn->Name = L"Retakebtn";
			   this->Retakebtn->Size = System::Drawing::Size(111, 46);
			   this->Retakebtn->TabIndex = 3;
			   this->Retakebtn->Text = L"Retake";
			   this->Retakebtn->UseVisualStyleBackColor = false;
			   this->Retakebtn->Click += gcnew System::EventHandler(this, &ViewGrades::button1_Click);
			   // 
			   // CGradelbl
			   // 
			   this->CGradelbl->AutoSize = true;
			   this->CGradelbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CGradelbl->ForeColor = System::Drawing::Color::White;
			   this->CGradelbl->Location = System::Drawing::Point(20, 83);
			   this->CGradelbl->Name = L"CGradelbl";
			   this->CGradelbl->Size = System::Drawing::Size(70, 24);
			   this->CGradelbl->TabIndex = 1;
			   this->CGradelbl->Text = L"Grade:";
			   this->CGradelbl->Click += gcnew System::EventHandler(this, &ViewGrades::CGradelbl_Click);
			   // 
			   // CNlbl
			   // 
			   this->CNlbl->AutoSize = true;
			   this->CNlbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CNlbl->ForeColor = System::Drawing::Color::White;
			   this->CNlbl->Location = System::Drawing::Point(20, 29);
			   this->CNlbl->Name = L"CNlbl";
			   this->CNlbl->Size = System::Drawing::Size(137, 24);
			   this->CNlbl->TabIndex = 0;
			   this->CNlbl->Text = L"Course Name:";
			   this->CNlbl->Click += gcnew System::EventHandler(this, &ViewGrades::label6_Click);
			   // 
			   // ViewGrades
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::Honeydew;
			   this->ClientSize = System::Drawing::Size(1526, 755);
			   this->Controls->Add(this->GradesLayoutPanel);
			   this->Controls->Add(this->searchpanel);
			   this->Controls->Add(this->pictureBox5);
			   this->Controls->Add(this->flowLayoutPanel1);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"ViewGrades";
			   this->Text = L"View grades";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->Load += gcnew System::EventHandler(this, &ViewGrades::ViewGrades_Load);
			   this->flowLayoutPanel1->ResumeLayout(false);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->panel4->ResumeLayout(false);
			   this->panel4->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   this->panel7->ResumeLayout(false);
			   this->panel7->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   this->searchpanel->ResumeLayout(false);
			   this->searchpanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchBtn))->EndInit();
			   this->GradesLayoutPanel->ResumeLayout(false);
			   this->Coursepanel->ResumeLayout(false);
			   this->Coursepanel->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   void InitializeData();


	private:
		System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void ViewGrades_Load(System::Object^ sender, System::EventArgs^ e) {}
		System::Void searchbutton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Retakebtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
		System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void semesterlabel_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void CGradelbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Course_registration^ c1 = gcnew Course_registration();

		c1->ShowDialog();
		this->Hide();
		this->Close();
	}
    private: System::Void panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	   course_pre^ pre = gcnew course_pre();
	   pre->ShowDialog();
	   this->Hide();
	   this->Close();

}
};
}
