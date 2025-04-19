#pragma once
#include "Course_Registration.h"

namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GradesInfo : public System::Windows::Forms::Form
	{
	public:
		GradesInfo(void)
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
		~GradesInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::FlowLayoutPanel^ nav_panel;
		System::Windows::Forms::Panel^ user_panel;
		System::Windows::Forms::Label^ user_text;
		System::Windows::Forms::PictureBox^ user_pic;
		System::Windows::Forms::Label^ admin_text;
		System::Windows::Forms::Panel^ upload_panel;
		System::Windows::Forms::Label^ upload_text;
		System::Windows::Forms::Panel^ pre_panel;
		System::Windows::Forms::Label^ pre_text;
		System::Windows::Forms::Panel^ manage_panel;
		System::Windows::Forms::Label^ manage_text;
		System::Windows::Forms::PictureBox^ logo_Pic;
		System::Windows::Forms::PictureBox^ upload_pic;
		System::Windows::Forms::PictureBox^ pre_pic;
		System::Windows::Forms::PictureBox^ manage_pic;

		System::Windows::Forms::Label^ grades_info;

		System::Windows::Forms::Panel^ gradeinfo_panel;
		System::Windows::Forms::Label^ instructor_name;
		System::Windows::Forms::Label^ std_grade_text;
		System::Windows::Forms::Label^ separate_line;
		System::Windows::Forms::Label^ syllabus;
		System::Windows::Forms::Label^ hours_out;
		System::Windows::Forms::Label^ ch;
		System::Windows::Forms::Label^ courseid_out;
		System::Windows::Forms::Label^ coursename_out;
		System::Windows::Forms::PictureBox^ book_pic;
		System::Windows::Forms::Label^ newgrade_text;

		System::Windows::Forms::Button^ submit_button;
		System::Windows::Forms::TextBox^ new_grade;
	private: System::Windows::Forms::Label^ stud_grade;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GradesInfo::typeid));
			   this->nav_panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->user_panel = (gcnew System::Windows::Forms::Panel());
			   this->admin_text = (gcnew System::Windows::Forms::Label());
			   this->user_text = (gcnew System::Windows::Forms::Label());
			   this->user_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->upload_panel = (gcnew System::Windows::Forms::Panel());
			   this->upload_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->upload_text = (gcnew System::Windows::Forms::Label());
			   this->pre_panel = (gcnew System::Windows::Forms::Panel());
			   this->pre_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->pre_text = (gcnew System::Windows::Forms::Label());
			   this->manage_panel = (gcnew System::Windows::Forms::Panel());
			   this->manage_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->manage_text = (gcnew System::Windows::Forms::Label());
			   this->grades_info = (gcnew System::Windows::Forms::Label());
			   this->logo_Pic = (gcnew System::Windows::Forms::PictureBox());
			   this->gradeinfo_panel = (gcnew System::Windows::Forms::Panel());
			   this->stud_grade = (gcnew System::Windows::Forms::Label());
			   this->new_grade = (gcnew System::Windows::Forms::TextBox());
			   this->submit_button = (gcnew System::Windows::Forms::Button());
			   this->newgrade_text = (gcnew System::Windows::Forms::Label());
			   this->instructor_name = (gcnew System::Windows::Forms::Label());
			   this->std_grade_text = (gcnew System::Windows::Forms::Label());
			   this->separate_line = (gcnew System::Windows::Forms::Label());
			   this->syllabus = (gcnew System::Windows::Forms::Label());
			   this->hours_out = (gcnew System::Windows::Forms::Label());
			   this->ch = (gcnew System::Windows::Forms::Label());
			   this->courseid_out = (gcnew System::Windows::Forms::Label());
			   this->coursename_out = (gcnew System::Windows::Forms::Label());
			   this->book_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->nav_panel->SuspendLayout();
			   this->user_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pic))->BeginInit();
			   this->upload_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upload_pic))->BeginInit();
			   this->pre_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pre_pic))->BeginInit();
			   this->manage_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manage_pic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_Pic))->BeginInit();
			   this->gradeinfo_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // nav_panel
			   // 
			   this->nav_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->nav_panel->Controls->Add(this->user_panel);
			   this->nav_panel->Controls->Add(this->upload_panel);
			   this->nav_panel->Controls->Add(this->pre_panel);
			   this->nav_panel->Controls->Add(this->manage_panel);
			   this->nav_panel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->nav_panel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->nav_panel->Location = System::Drawing::Point(0, 0);
			   this->nav_panel->Margin = System::Windows::Forms::Padding(0);
			   this->nav_panel->Name = L"nav_panel";
			   this->nav_panel->Size = System::Drawing::Size(253, 740);
			   this->nav_panel->TabIndex = 1;
			   // 
			   // user_panel
			   // 
			   this->user_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->user_panel->Controls->Add(this->admin_text);
			   this->user_panel->Controls->Add(this->user_text);
			   this->user_panel->Controls->Add(this->user_pic);
			   this->user_panel->Location = System::Drawing::Point(0, 0);
			   this->user_panel->Margin = System::Windows::Forms::Padding(0);
			   this->user_panel->Name = L"user_panel";
			   this->user_panel->Size = System::Drawing::Size(237, 178);
			   this->user_panel->TabIndex = 0;
			   // 
			   // admin_text
			   // 
			   this->admin_text->AutoSize = true;
			   this->admin_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->admin_text->ForeColor = System::Drawing::Color::White;
			   this->admin_text->Location = System::Drawing::Point(8, 150);
			   this->admin_text->Name = L"admin_text";
			   this->admin_text->Size = System::Drawing::Size(51, 18);
			   this->admin_text->TabIndex = 2;
			   this->admin_text->Text = L"Admin";
			   // 
			   // user_text
			   // 
			   this->user_text->AutoSize = true;
			   this->user_text->ForeColor = System::Drawing::Color::White;
			   this->user_text->Location = System::Drawing::Point(66, 99);
			   this->user_text->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->user_text->Name = L"user_text";
			   this->user_text->Size = System::Drawing::Size(108, 24);
			   this->user_text->TabIndex = 1;
			   this->user_text->Text = L"User name";
			   // 
			   // user_pic
			   // 
			   this->user_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"user_pic.Image")));
			   this->user_pic->Location = System::Drawing::Point(33, 4);
			   this->user_pic->Margin = System::Windows::Forms::Padding(4);
			   this->user_pic->Name = L"user_pic";
			   this->user_pic->Size = System::Drawing::Size(165, 91);
			   this->user_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->user_pic->TabIndex = 0;
			   this->user_pic->TabStop = false;
			   // 
			   // upload_panel
			   // 
			   this->upload_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->upload_panel->Controls->Add(this->upload_pic);
			   this->upload_panel->Controls->Add(this->upload_text);
			   this->upload_panel->Location = System::Drawing::Point(0, 178);
			   this->upload_panel->Margin = System::Windows::Forms::Padding(0);
			   this->upload_panel->Name = L"upload_panel";
			   this->upload_panel->Size = System::Drawing::Size(237, 100);
			   this->upload_panel->TabIndex = 1;
			   // 
			   // upload_pic
			   // 
			   this->upload_pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->upload_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"upload_pic.Image")));
			   this->upload_pic->Location = System::Drawing::Point(7, 24);
			   this->upload_pic->Name = L"upload_pic";
			   this->upload_pic->Size = System::Drawing::Size(55, 39);
			   this->upload_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->upload_pic->TabIndex = 3;
			   this->upload_pic->TabStop = false;
			   // 
			   // upload_text
			   // 
			   this->upload_text->AutoSize = true;
			   this->upload_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->upload_text->ForeColor = System::Drawing::Color::White;
			   this->upload_text->Location = System::Drawing::Point(75, 40);
			   this->upload_text->Name = L"upload_text";
			   this->upload_text->Size = System::Drawing::Size(134, 23);
			   this->upload_text->TabIndex = 1;
			   this->upload_text->Text = L"Upload Course";
			   // 
			   // pre_panel
			   // 
			   this->pre_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pre_panel->Controls->Add(this->pre_pic);
			   this->pre_panel->Controls->Add(this->pre_text);
			   this->pre_panel->Location = System::Drawing::Point(0, 278);
			   this->pre_panel->Margin = System::Windows::Forms::Padding(0);
			   this->pre_panel->Name = L"pre_panel";
			   this->pre_panel->Size = System::Drawing::Size(237, 100);
			   this->pre_panel->TabIndex = 2;
			   // 
			   // pre_pic
			   // 
			   this->pre_pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pre_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pre_pic.Image")));
			   this->pre_pic->Location = System::Drawing::Point(7, 26);
			   this->pre_pic->Name = L"pre_pic";
			   this->pre_pic->Size = System::Drawing::Size(57, 41);
			   this->pre_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pre_pic->TabIndex = 3;
			   this->pre_pic->TabStop = false;
			   // 
			   // pre_text
			   // 
			   this->pre_text->AutoSize = true;
			   this->pre_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->pre_text->ForeColor = System::Drawing::Color::White;
			   this->pre_text->Location = System::Drawing::Point(66, 35);
			   this->pre_text->Name = L"pre_text";
			   this->pre_text->Size = System::Drawing::Size(158, 23);
			   this->pre_text->TabIndex = 1;
			   this->pre_text->Text = L"Set Prerequisites";
			   // 
			   // manage_panel
			   // 
			   this->manage_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->manage_panel->Controls->Add(this->manage_pic);
			   this->manage_panel->Controls->Add(this->manage_text);
			   this->manage_panel->Location = System::Drawing::Point(0, 378);
			   this->manage_panel->Margin = System::Windows::Forms::Padding(0);
			   this->manage_panel->Name = L"manage_panel";
			   this->manage_panel->Size = System::Drawing::Size(237, 90);
			   this->manage_panel->TabIndex = 4;
			   // 
			   // manage_pic
			   // 
			   this->manage_pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->manage_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"manage_pic.Image")));
			   this->manage_pic->Location = System::Drawing::Point(5, 26);
			   this->manage_pic->Name = L"manage_pic";
			   this->manage_pic->Size = System::Drawing::Size(57, 40);
			   this->manage_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->manage_pic->TabIndex = 3;
			   this->manage_pic->TabStop = false;
			   // 
			   // manage_text
			   // 
			   this->manage_text->AutoSize = true;
			   this->manage_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->manage_text->ForeColor = System::Drawing::Color::White;
			   this->manage_text->Location = System::Drawing::Point(68, 38);
			   this->manage_text->Name = L"manage_text";
			   this->manage_text->Size = System::Drawing::Size(141, 23);
			   this->manage_text->TabIndex = 1;
			   this->manage_text->Text = L"Manage Grades";
			   // 
			   // grades_info
			   // 
			   this->grades_info->AutoSize = true;
			   this->grades_info->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->grades_info->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->grades_info->Location = System::Drawing::Point(291, 12);
			   this->grades_info->Name = L"grades_info";
			   this->grades_info->Size = System::Drawing::Size(393, 52);
			   this->grades_info->TabIndex = 23;
			   this->grades_info->Text = L"Grades Information";
			   // 
			   // logo_Pic
			   // 
			   this->logo_Pic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->logo_Pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo_Pic.Image")));
			   this->logo_Pic->Location = System::Drawing::Point(1071, 12);
			   this->logo_Pic->Name = L"logo_Pic";
			   this->logo_Pic->Size = System::Drawing::Size(73, 50);
			   this->logo_Pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->logo_Pic->TabIndex = 24;
			   this->logo_Pic->TabStop = false;
			   // 
			   // gradeinfo_panel
			   // 
			   this->gradeinfo_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->gradeinfo_panel->Controls->Add(this->stud_grade);
			   this->gradeinfo_panel->Controls->Add(this->new_grade);
			   this->gradeinfo_panel->Controls->Add(this->submit_button);
			   this->gradeinfo_panel->Controls->Add(this->newgrade_text);
			   this->gradeinfo_panel->Controls->Add(this->instructor_name);
			   this->gradeinfo_panel->Controls->Add(this->std_grade_text);
			   this->gradeinfo_panel->Controls->Add(this->separate_line);
			   this->gradeinfo_panel->Controls->Add(this->syllabus);
			   this->gradeinfo_panel->Controls->Add(this->hours_out);
			   this->gradeinfo_panel->Controls->Add(this->ch);
			   this->gradeinfo_panel->Controls->Add(this->courseid_out);
			   this->gradeinfo_panel->Controls->Add(this->coursename_out);
			   this->gradeinfo_panel->Controls->Add(this->book_pic);
			   this->gradeinfo_panel->Location = System::Drawing::Point(367, 141);
			   this->gradeinfo_panel->Name = L"gradeinfo_panel";
			   this->gradeinfo_panel->Size = System::Drawing::Size(707, 476);
			   this->gradeinfo_panel->TabIndex = 25;
			   // 
			   // stud_grade
			   // 
			   this->stud_grade->AutoSize = true;
			   this->stud_grade->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->stud_grade->Location = System::Drawing::Point(275, 258);
			   this->stud_grade->Name = L"stud_grade";
			   this->stud_grade->Size = System::Drawing::Size(215, 34);
			   this->stud_grade->TabIndex = 26;
			   this->stud_grade->Text = L"\"Student Grade\"";
			   // 
			   // new_grade
			   // 
			   this->new_grade->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->new_grade->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->new_grade->Location = System::Drawing::Point(281, 329);
			   this->new_grade->Multiline = true;
			   this->new_grade->Name = L"new_grade";
			   this->new_grade->Size = System::Drawing::Size(100, 32);
			   this->new_grade->TabIndex = 25;
			   this->new_grade->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GradesInfo::new_grade_KeyDown);
			   // 
			   // submit_button
			   // 
			   this->submit_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->submit_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->submit_button->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->submit_button->ForeColor = System::Drawing::SystemColors::Window;
			   this->submit_button->Location = System::Drawing::Point(244, 410);
			   this->submit_button->Name = L"submit_button";
			   this->submit_button->Size = System::Drawing::Size(184, 39);
			   this->submit_button->TabIndex = 24;
			   this->submit_button->Text = L"Submit";
			   this->submit_button->UseVisualStyleBackColor = false;
			   // 
			   // newgrade_text
			   // 
			   this->newgrade_text->AutoSize = true;
			   this->newgrade_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->newgrade_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->newgrade_text->Location = System::Drawing::Point(22, 321);
			   this->newgrade_text->Name = L"newgrade_text";
			   this->newgrade_text->Size = System::Drawing::Size(242, 40);
			   this->newgrade_text->TabIndex = 16;
			   this->newgrade_text->Text = L"Modified grade:";
			   // 
			   // instructor_name
			   // 
			   this->instructor_name->AutoSize = true;
			   this->instructor_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->instructor_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->instructor_name->Location = System::Drawing::Point(37, 190);
			   this->instructor_name->Name = L"instructor_name";
			   this->instructor_name->Size = System::Drawing::Size(172, 34);
			   this->instructor_name->TabIndex = 14;
			   this->instructor_name->Text = L"Doc mustafa";
			   // 
			   // std_grade_text
			   // 
			   this->std_grade_text->AutoSize = true;
			   this->std_grade_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->std_grade_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->std_grade_text->Location = System::Drawing::Point(22, 252);
			   this->std_grade_text->Name = L"std_grade_text";
			   this->std_grade_text->Size = System::Drawing::Size(263, 40);
			   this->std_grade_text->TabIndex = 13;
			   this->std_grade_text->Text = L"Student\'s grade: ";
			   // 
			   // separate_line
			   // 
			   this->separate_line->AutoSize = true;
			   this->separate_line->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->separate_line->Location = System::Drawing::Point(195, 221);
			   this->separate_line->Name = L"separate_line";
			   this->separate_line->Size = System::Drawing::Size(280, 21);
			   this->separate_line->TabIndex = 11;
			   this->separate_line->Text = L"______________________________________________________";
			   // 
			   // syllabus
			   // 
			   this->syllabus->AutoSize = true;
			   this->syllabus->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->syllabus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->syllabus->Location = System::Drawing::Point(37, 156);
			   this->syllabus->Name = L"syllabus";
			   this->syllabus->Size = System::Drawing::Size(493, 34);
			   this->syllabus->TabIndex = 10;
			   this->syllabus->Text = L"intoduction to pragramming using c++";
			   // 
			   // hours_out
			   // 
			   this->hours_out->AutoSize = true;
			   this->hours_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->hours_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->hours_out->Location = System::Drawing::Point(224, 115);
			   this->hours_out->Name = L"hours_out";
			   this->hours_out->Size = System::Drawing::Size(30, 34);
			   this->hours_out->TabIndex = 9;
			   this->hours_out->Text = L"3";
			   // 
			   // ch
			   // 
			   this->ch->AutoSize = true;
			   this->ch->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->ch->Location = System::Drawing::Point(37, 115);
			   this->ch->Name = L"ch";
			   this->ch->Size = System::Drawing::Size(181, 34);
			   this->ch->TabIndex = 8;
			   this->ch->Text = L"Credit Hours:";
			   // 
			   // courseid_out
			   // 
			   this->courseid_out->AutoSize = true;
			   this->courseid_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->courseid_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->courseid_out->Location = System::Drawing::Point(37, 66);
			   this->courseid_out->Name = L"courseid_out";
			   this->courseid_out->Size = System::Drawing::Size(87, 34);
			   this->courseid_out->TabIndex = 7;
			   this->courseid_out->Text = L"CIS50";
			   // 
			   // coursename_out
			   // 
			   this->coursename_out->AutoSize = true;
			   this->coursename_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->coursename_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->coursename_out->Location = System::Drawing::Point(206, 13);
			   this->coursename_out->Name = L"coursename_out";
			   this->coursename_out->Size = System::Drawing::Size(209, 40);
			   this->coursename_out->TabIndex = 6;
			   this->coursename_out->Text = L"course name";
			   // 
			   // book_pic
			   // 
			   this->book_pic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->book_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"book_pic.Image")));
			   this->book_pic->Location = System::Drawing::Point(563, 20);
			   this->book_pic->Name = L"book_pic";
			   this->book_pic->Size = System::Drawing::Size(128, 101);
			   this->book_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->book_pic->TabIndex = 0;
			   this->book_pic->TabStop = false;
			   // 
			   // GradesInfo
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->ClientSize = System::Drawing::Size(1156, 740);
			   this->Controls->Add(this->gradeinfo_panel);
			   this->Controls->Add(this->logo_Pic);
			   this->Controls->Add(this->grades_info);
			   this->Controls->Add(this->nav_panel);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"GradesInfo";
			   this->Text = L"GradesInfo";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->nav_panel->ResumeLayout(false);
			   this->user_panel->ResumeLayout(false);
			   this->user_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pic))->EndInit();
			   this->upload_panel->ResumeLayout(false);
			   this->upload_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upload_pic))->EndInit();
			   this->pre_panel->ResumeLayout(false);
			   this->pre_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pre_pic))->EndInit();
			   this->manage_panel->ResumeLayout(false);
			   this->manage_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manage_pic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_Pic))->EndInit();
			   this->gradeinfo_panel->ResumeLayout(false);
			   this->gradeinfo_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void new_grade_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			e->Handled = true;
			e->SuppressKeyPress = true;
			new_grade->Focus();
		}
	}
	
	};
}

