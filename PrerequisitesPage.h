#pragma once
#include "Course_Registration.h"
#include "ManageGrades1.h"
#include "Course.h"
#include"AdminCoursesManager.h"
#include<map>
#include<unordered_set>
#include<set>
#include<string>
#include <msclr/marshal_cppstd.h>
#include"Utils.h"
using namespace msclr::interop;

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
	public ref class PrerequisitesPage : public System::Windows::Forms::Form
	{

	private:
		System::String^ currentCourseId;
		AdminCoursesManager* PreManager;
	private: System::Windows::Forms::FlowLayoutPanel^ nav_panel;
	private: System::Windows::Forms::Panel^ user_panel;
	private: System::Windows::Forms::Label^ user_name;
	private: System::Windows::Forms::PictureBox^ user_pic;
	private: System::Windows::Forms::Panel^ update_panel;
	private: System::Windows::Forms::Label^ upload_text;
	private: System::Windows::Forms::PictureBox^ upload_pic;
	private: System::Windows::Forms::Panel^ pre_panel;
	private: System::Windows::Forms::Label^ pre_text;
	private: System::Windows::Forms::PictureBox^ pre_pic;
	private: System::Windows::Forms::Panel^ manage_panel;
	private: System::Windows::Forms::Label^ manage_text;
	private: System::Windows::Forms::PictureBox^ manage_pic;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
		   String^ adminUsername;

	public:
		PrerequisitesPage(String^ courseID, String^ username)
		{

			adminUsername = username;
			InitializeComponent();
			currentCourseId = courseID;
			user_name->Text = adminUsername;
			PreManager = new AdminCoursesManager();
			LoadCourses();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PrerequisitesPage()
		{
			if (components)
			{
				delete components;
			}
		}


	private:



	private: System::Windows::Forms::Label^ course_i;
	private: System::Windows::Forms::Panel^ course_infop;
	private: System::Windows::Forms::Label^ coursename;



	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::Button^ submit_s;
	private: System::Windows::Forms::CheckedListBox^ PrerequisitesList;





		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PrerequisitesPage::typeid));
			   this->course_i = (gcnew System::Windows::Forms::Label());
			   this->course_infop = (gcnew System::Windows::Forms::Panel());
			   this->PrerequisitesList = (gcnew System::Windows::Forms::CheckedListBox());
			   this->submit_s = (gcnew System::Windows::Forms::Button());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->coursename = (gcnew System::Windows::Forms::Label());
			   this->nav_panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->user_panel = (gcnew System::Windows::Forms::Panel());
			   this->user_name = (gcnew System::Windows::Forms::Label());
			   this->user_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->update_panel = (gcnew System::Windows::Forms::Panel());
			   this->upload_text = (gcnew System::Windows::Forms::Label());
			   this->upload_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->pre_panel = (gcnew System::Windows::Forms::Panel());
			   this->pre_text = (gcnew System::Windows::Forms::Label());
			   this->pre_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->manage_panel = (gcnew System::Windows::Forms::Panel());
			   this->manage_text = (gcnew System::Windows::Forms::Label());
			   this->manage_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->course_infop->SuspendLayout();
			   this->nav_panel->SuspendLayout();
			   this->user_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pic))->BeginInit();
			   this->update_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upload_pic))->BeginInit();
			   this->pre_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pre_pic))->BeginInit();
			   this->manage_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manage_pic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // course_i
			   // 
			   this->course_i->AutoSize = true;
			   this->course_i->BackColor = System::Drawing::Color::AliceBlue;
			   this->course_i->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->course_i->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->course_i->Location = System::Drawing::Point(291, 12);
			   this->course_i->Name = L"course_i";
			   this->course_i->Size = System::Drawing::Size(330, 52);
			   this->course_i->TabIndex = 34;
			   this->course_i->Text = L"Set prerequisite";
			   // 
			   // course_infop
			   // 
			   this->course_infop->Controls->Add(this->PrerequisitesList);
			   this->course_infop->Controls->Add(this->submit_s);
			   this->course_infop->Controls->Add(this->label7);
			   this->course_infop->Controls->Add(this->coursename);
			   this->course_infop->Location = System::Drawing::Point(408, 122);
			   this->course_infop->Name = L"course_infop";
			   this->course_infop->Size = System::Drawing::Size(766, 513);
			   this->course_infop->TabIndex = 35;
			   this->course_infop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PrerequisitesPage::course_infop_Paint);
			   // 
			   // PrerequisitesList
			   // 
			   this->PrerequisitesList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->PrerequisitesList->FormattingEnabled = true;
			   this->PrerequisitesList->Location = System::Drawing::Point(53, 151);
			   this->PrerequisitesList->Name = L"PrerequisitesList";
			   this->PrerequisitesList->Size = System::Drawing::Size(657, 243);
			   this->PrerequisitesList->TabIndex = 30;
			   // 
			   // submit_s
			   // 
			   this->submit_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->submit_s->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->submit_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->submit_s->ForeColor = System::Drawing::SystemColors::Window;
			   this->submit_s->Location = System::Drawing::Point(333, 433);
			   this->submit_s->Name = L"submit_s";
			   this->submit_s->Size = System::Drawing::Size(181, 38);
			   this->submit_s->TabIndex = 29;
			   this->submit_s->Text = L"Submit";
			   this->submit_s->UseVisualStyleBackColor = false;
			   this->submit_s->Click += gcnew System::EventHandler(this, &PrerequisitesPage::submit_s_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->label7->Location = System::Drawing::Point(46, 96);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(223, 40);
			   this->label7->TabIndex = 16;
			   this->label7->Text = L"Prerequisites:";
			   // 
			   // coursename
			   // 
			   this->coursename->AutoSize = true;
			   this->coursename->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F));
			   this->coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->coursename->Location = System::Drawing::Point(275, 16);
			   this->coursename->Name = L"coursename";
			   this->coursename->Size = System::Drawing::Size(271, 52);
			   this->coursename->TabIndex = 6;
			   this->coursename->Text = L"course name";
			   // 
			   // nav_panel
			   // 
			   this->nav_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->nav_panel->Controls->Add(this->user_panel);
			   this->nav_panel->Controls->Add(this->update_panel);
			   this->nav_panel->Controls->Add(this->pre_panel);
			   this->nav_panel->Controls->Add(this->manage_panel);
			   this->nav_panel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->nav_panel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->nav_panel->Location = System::Drawing::Point(0, 0);
			   this->nav_panel->Margin = System::Windows::Forms::Padding(0);
			   this->nav_panel->Name = L"nav_panel";
			   this->nav_panel->Size = System::Drawing::Size(253, 673);
			   this->nav_panel->TabIndex = 36;
			   // 
			   // user_panel
			   // 
			   this->user_panel->Controls->Add(this->pictureBox1);
			   this->user_panel->Controls->Add(this->user_name);
			   this->user_panel->Controls->Add(this->user_pic);
			   this->user_panel->Location = System::Drawing::Point(0, 0);
			   this->user_panel->Margin = System::Windows::Forms::Padding(0);
			   this->user_panel->Name = L"user_panel";
			   this->user_panel->Size = System::Drawing::Size(253, 178);
			   this->user_panel->TabIndex = 26;
			   // 
			   // user_name
			   // 
			   this->user_name->AutoSize = true;
			   this->user_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->user_name->ForeColor = System::Drawing::Color::White;
			   this->user_name->Location = System::Drawing::Point(64, 122);
			   this->user_name->Margin = System::Windows::Forms::Padding(0);
			   this->user_name->Name = L"user_name";
			   this->user_name->Size = System::Drawing::Size(153, 34);
			   this->user_name->TabIndex = 1;
			   this->user_name->Text = L"User name";
			   this->user_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // user_pic
			   // 
			   this->user_pic->Location = System::Drawing::Point(58, 5);
			   this->user_pic->Margin = System::Windows::Forms::Padding(4);
			   this->user_pic->Name = L"user_pic";
			   this->user_pic->Size = System::Drawing::Size(130, 113);
			   this->user_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->user_pic->TabIndex = 0;
			   this->user_pic->TabStop = false;
			   // 
			   // update_panel
			   // 
			   this->update_panel->Controls->Add(this->pictureBox2);
			   this->update_panel->Controls->Add(this->upload_text);
			   this->update_panel->Controls->Add(this->upload_pic);
			   this->update_panel->Location = System::Drawing::Point(0, 178);
			   this->update_panel->Margin = System::Windows::Forms::Padding(0);
			   this->update_panel->Name = L"update_panel";
			   this->update_panel->Size = System::Drawing::Size(253, 100);
			   this->update_panel->TabIndex = 27;
			   // 
			   // upload_text
			   // 
			   this->upload_text->AutoSize = true;
			   this->upload_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->upload_text->ForeColor = System::Drawing::Color::White;
			   this->upload_text->Location = System::Drawing::Point(60, 40);
			   this->upload_text->Name = L"upload_text";
			   this->upload_text->Size = System::Drawing::Size(134, 23);
			   this->upload_text->TabIndex = 1;
			   this->upload_text->Text = L"Upload Course";
			   // 
			   // upload_pic
			   // 
			   this->upload_pic->BackColor = System::Drawing::Color::Transparent;
			   this->upload_pic->Location = System::Drawing::Point(3, 28);
			   this->upload_pic->Name = L"upload_pic";
			   this->upload_pic->Size = System::Drawing::Size(55, 39);
			   this->upload_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->upload_pic->TabIndex = 0;
			   this->upload_pic->TabStop = false;
			   // 
			   // pre_panel
			   // 
			   this->pre_panel->Controls->Add(this->pictureBox3);
			   this->pre_panel->Controls->Add(this->pre_text);
			   this->pre_panel->Controls->Add(this->pre_pic);
			   this->pre_panel->Location = System::Drawing::Point(0, 278);
			   this->pre_panel->Margin = System::Windows::Forms::Padding(0);
			   this->pre_panel->Name = L"pre_panel";
			   this->pre_panel->Size = System::Drawing::Size(253, 93);
			   this->pre_panel->TabIndex = 28;
			   // 
			   // pre_text
			   // 
			   this->pre_text->AutoSize = true;
			   this->pre_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->pre_text->ForeColor = System::Drawing::Color::White;
			   this->pre_text->Location = System::Drawing::Point(63, 38);
			   this->pre_text->Name = L"pre_text";
			   this->pre_text->Size = System::Drawing::Size(148, 23);
			   this->pre_text->TabIndex = 1;
			   this->pre_text->Text = L"Set Prerequisite";
			   // 
			   // pre_pic
			   // 
			   this->pre_pic->BackColor = System::Drawing::Color::Transparent;
			   this->pre_pic->Location = System::Drawing::Point(3, 26);
			   this->pre_pic->Name = L"pre_pic";
			   this->pre_pic->Size = System::Drawing::Size(57, 41);
			   this->pre_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pre_pic->TabIndex = 0;
			   this->pre_pic->TabStop = false;
			   // 
			   // manage_panel
			   // 
			   this->manage_panel->Controls->Add(this->pictureBox4);
			   this->manage_panel->Controls->Add(this->manage_text);
			   this->manage_panel->Controls->Add(this->manage_pic);
			   this->manage_panel->Location = System::Drawing::Point(0, 371);
			   this->manage_panel->Margin = System::Windows::Forms::Padding(0);
			   this->manage_panel->Name = L"manage_panel";
			   this->manage_panel->Size = System::Drawing::Size(253, 100);
			   this->manage_panel->TabIndex = 28;
			   // 
			   // manage_text
			   // 
			   this->manage_text->AutoSize = true;
			   this->manage_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->manage_text->ForeColor = System::Drawing::Color::White;
			   this->manage_text->Location = System::Drawing::Point(66, 37);
			   this->manage_text->Name = L"manage_text";
			   this->manage_text->Size = System::Drawing::Size(141, 23);
			   this->manage_text->TabIndex = 1;
			   this->manage_text->Text = L"Manage Grades";
			   // 
			   // manage_pic
			   // 
			   this->manage_pic->BackColor = System::Drawing::Color::Transparent;
			   this->manage_pic->Location = System::Drawing::Point(3, 26);
			   this->manage_pic->Name = L"manage_pic";
			   this->manage_pic->Size = System::Drawing::Size(57, 40);
			   this->manage_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->manage_pic->TabIndex = 0;
			   this->manage_pic->TabStop = false;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(58, 4);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(130, 113);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 2;
			   this->pictureBox1->TabStop = false;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(3, 28);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(55, 39);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 3;
			   this->pictureBox2->TabStop = false;
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(3, 26);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(57, 41);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 2;
			   this->pictureBox3->TabStop = false;
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			   this->pictureBox4->Location = System::Drawing::Point(3, 26);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(57, 40);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 3;
			   this->pictureBox4->TabStop = false;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(1197, 14);
			   this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(73, 50);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox5->TabIndex = 37;
			   this->pictureBox5->TabStop = false;
			   // 
			   // PrerequisitesPage
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::AliceBlue;
			   this->ClientSize = System::Drawing::Size(1282, 673);
			   this->Controls->Add(this->pictureBox5);
			   this->Controls->Add(this->nav_panel);
			   this->Controls->Add(this->course_infop);
			   this->Controls->Add(this->course_i);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"PrerequisitesPage";
			   this->Text = L"AdminNavBar";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->Load += gcnew System::EventHandler(this, &PrerequisitesPage::PrerequisitesPage_Load);
			   this->course_infop->ResumeLayout(false);
			   this->course_infop->PerformLayout();
			   this->nav_panel->ResumeLayout(false);
			   this->user_panel->ResumeLayout(false);
			   this->user_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pic))->EndInit();
			   this->update_panel->ResumeLayout(false);
			   this->update_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upload_pic))->EndInit();
			   this->pre_panel->ResumeLayout(false);
			   this->pre_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pre_pic))->EndInit();
			   this->manage_panel->ResumeLayout(false);
			   this->manage_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manage_pic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion



	private: System::Void panel6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ManageGrades1^ m = gcnew ManageGrades1(adminUsername);
		m->Show();
		this->Hide();
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void PrerequisitesPage_Load(System::Object^ sender, System::EventArgs^ e) {
		/*
		map<string, Course>::iterator it;

		for (it = UCManager->courses.begin(); it != UCManager->courses.end(); it++) {
			string s = it->second.getCourseName();
			PrevCourses->Items->Add(System::Runtime::InteropServices::
				Marshal::PtrToStringUni(IntPtr((void*)s.c_str())));
		}
		*/
	}


	private:


		void LoadCourses() {

			if (currentCourseId != nullptr) {

				std::string CourseID = Utils::toStdString(currentCourseId);
				Course* currentCourse = PreManager->searchCourse(CourseID);
				if (currentCourse == nullptr) {
					MessageBox::Show("Error: Current course not found!");
					return;
				}


				coursename->Text = gcnew String(currentCourse->getCourseName().c_str());

				auto allCourses = PreManager->getAllCourses();

				auto prerequisites = currentCourse->getPrerequisites();


				for (auto& course : allCourses) {
					if (course.first != CourseID) {

						String^ courseName = gcnew String(course.second.getCourseName().c_str());
						String^ courseID = gcnew String(course.second.getCourseID().c_str());


						int index = PrerequisitesList->Items->Add(courseName);

						if (prerequisites.find(course.first) != prerequisites.end()) {
							PrerequisitesList->SetItemChecked(index, true);
						}

					}
				}
			}

		}
	private: System::Void submit_s_Click(System::Object^ sender, System::EventArgs^ e) {
		unordered_set<string> newPrerequisites;

		for (int i = 0; i < PrerequisitesList->CheckedItems->Count; i++) {
			String^ courseName = safe_cast<String^>(PrerequisitesList->CheckedItems[i]);
			string courseNameStr = msclr::interop::marshal_as<std::string>(courseName);
			PreManager->NameToIDMap();
			string courseID = PreManager->getCourseIdByName(courseNameStr);

			if (!courseID.empty()) {
				newPrerequisites.insert(courseID);
			}
			else {
				MessageBox::Show("Error: Course name not found !");
				return;
			}


			//newPrerequisites.insert(msclr::interop::marshal_as<std::string>(courseName));
		}

		std::string CourseId = Utils::toStdString(currentCourseId);
		Course* course = PreManager->searchCourse(CourseId);
		if (course != nullptr) {
			course->setPrerequisites(newPrerequisites);
			MessageBox::Show("Prerequisites updated successfully!");
			this->Close();
		}

	}
	private: System::Void course_infop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}