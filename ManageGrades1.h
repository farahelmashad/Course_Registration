#pragma once
#include "Course_registration.h"
#include "GradesInfo.h"
namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManageGrades
	/// </summary>
	public ref class ManageGrades1 : public System::Windows::Forms::Form
	{
	public:
		ManageGrades1(void)
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
		~ManageGrades1()
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

	System::Windows::Forms::PictureBox^ pre_pic;
	private: System::Windows::Forms::PictureBox^ manage_pic;

	private: System::Windows::Forms::PictureBox^ upload_pic;
	private: System::Windows::Forms::Label^ manage_grades;
	private: System::Windows::Forms::TextBox^ search_id;
	private: System::Windows::Forms::PictureBox^ search_icon;

	private: System::Windows::Forms::Label^ search_text;
	private: System::Windows::Forms::FlowLayoutPanel^ courses_panel;
	private: System::Windows::Forms::Panel^ course_layout;
	private: System::Windows::Forms::Label^ credit_hours;
	private: System::Windows::Forms::Label^ credit_hoursout;
	private: System::Windows::Forms::Label^ course_idout;
	private: System::Windows::Forms::PictureBox^ book_pic;
	private: System::Windows::Forms::Label^ course_nameout;




	System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManageGrades1::typeid));
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
			this->logo_Pic = (gcnew System::Windows::Forms::PictureBox());
			this->manage_grades = (gcnew System::Windows::Forms::Label());
			this->search_id = (gcnew System::Windows::Forms::TextBox());
			this->search_icon = (gcnew System::Windows::Forms::PictureBox());
			this->search_text = (gcnew System::Windows::Forms::Label());
			this->courses_panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->course_layout = (gcnew System::Windows::Forms::Panel());
			this->credit_hours = (gcnew System::Windows::Forms::Label());
			this->credit_hoursout = (gcnew System::Windows::Forms::Label());
			this->course_idout = (gcnew System::Windows::Forms::Label());
			this->book_pic = (gcnew System::Windows::Forms::PictureBox());
			this->course_nameout = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon))->BeginInit();
			this->courses_panel->SuspendLayout();
			this->course_layout->SuspendLayout();
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
			this->upload_pic->TabIndex = 4;
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
			this->manage_pic->TabIndex = 4;
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
			// manage_grades
			// 
			this->manage_grades->AutoSize = true;
			this->manage_grades->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manage_grades->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->manage_grades->Location = System::Drawing::Point(282, 9);
			this->manage_grades->Name = L"manage_grades";
			this->manage_grades->Size = System::Drawing::Size(321, 52);
			this->manage_grades->TabIndex = 25;
			this->manage_grades->Text = L"Manage Grades";
			// 
			// search_id
			// 
			this->search_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_id->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_id->Location = System::Drawing::Point(432, 132);
			this->search_id->Multiline = true;
			this->search_id->Name = L"search_id";
			this->search_id->Size = System::Drawing::Size(347, 37);
			this->search_id->TabIndex = 26;
			this->search_id->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ManageGrades1::search_id_KeyDown_1);
			// 
			// search_icon
			// 
			this->search_icon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->search_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_icon.Image")));
			this->search_icon->Location = System::Drawing::Point(854, 132);
			this->search_icon->Name = L"search_icon";
			this->search_icon->Size = System::Drawing::Size(50, 37);
			this->search_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->search_icon->TabIndex = 27;
			this->search_icon->TabStop = false;
			// 
			// search_text
			// 
			this->search_text->AutoSize = true;
			this->search_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->search_text->Location = System::Drawing::Point(432, 90);
			this->search_text->Name = L"search_text";
			this->search_text->Size = System::Drawing::Size(228, 34);
			this->search_text->TabIndex = 29;
			this->search_text->Text = L"Enter Student ID:";
			// 
			// courses_panel
			// 
			this->courses_panel->Controls->Add(this->course_layout);
			this->courses_panel->Location = System::Drawing::Point(432, 240);
			this->courses_panel->Name = L"courses_panel";
			this->courses_panel->Size = System::Drawing::Size(514, 398);
			this->courses_panel->TabIndex = 30;
			// 
			// course_layout
			// 
			this->course_layout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->course_layout->Controls->Add(this->credit_hours);
			this->course_layout->Controls->Add(this->credit_hoursout);
			this->course_layout->Controls->Add(this->course_idout);
			this->course_layout->Controls->Add(this->book_pic);
			this->course_layout->Controls->Add(this->course_nameout);
			this->course_layout->Location = System::Drawing::Point(3, 3);
			this->course_layout->Name = L"course_layout";
			this->course_layout->Size = System::Drawing::Size(225, 198);
			this->course_layout->TabIndex = 0;
			this->course_layout->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ManageGrades1::course_layout_MouseClick);
			// 
			// credit_hours
			// 
			this->credit_hours->AutoSize = true;
			this->credit_hours->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->credit_hours->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->credit_hours->Location = System::Drawing::Point(72, 142);
			this->credit_hours->Name = L"credit_hours";
			this->credit_hours->Size = System::Drawing::Size(119, 22);
			this->credit_hours->TabIndex = 4;
			this->credit_hours->Text = L"credit hours :";
			// 
			// credit_hoursout
			// 
			this->credit_hoursout->AutoSize = true;
			this->credit_hoursout->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->credit_hoursout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->credit_hoursout->Location = System::Drawing::Point(197, 142);
			this->credit_hoursout->Name = L"credit_hoursout";
			this->credit_hoursout->Size = System::Drawing::Size(20, 22);
			this->credit_hoursout->TabIndex = 3;
			this->credit_hoursout->Text = L"3";
			// 
			// course_idout
			// 
			this->course_idout->AutoSize = true;
			this->course_idout->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_idout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->course_idout->Location = System::Drawing::Point(12, 142);
			this->course_idout->Name = L"course_idout";
			this->course_idout->Size = System::Drawing::Size(53, 22);
			this->course_idout->TabIndex = 2;
			this->course_idout->Text = L"cis50";
			// 
			// book_pic
			// 
			this->book_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"book_pic.Image")));
			this->book_pic->Location = System::Drawing::Point(32, 4);
			this->book_pic->Name = L"book_pic";
			this->book_pic->Size = System::Drawing::Size(159, 91);
			this->book_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->book_pic->TabIndex = 1;
			this->book_pic->TabStop = false;
			// 
			// course_nameout
			// 
			this->course_nameout->AutoSize = true;
			this->course_nameout->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_nameout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->course_nameout->Location = System::Drawing::Point(59, 109);
			this->course_nameout->Name = L"course_nameout";
			this->course_nameout->Size = System::Drawing::Size(116, 22);
			this->course_nameout->TabIndex = 0;
			this->course_nameout->Text = L"course name";
			// 
			// ManageGrades1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1156, 740);
			this->Controls->Add(this->courses_panel);
			this->Controls->Add(this->search_text);
			this->Controls->Add(this->search_icon);
			this->Controls->Add(this->search_id);
			this->Controls->Add(this->manage_grades);
			this->Controls->Add(this->logo_Pic);
			this->Controls->Add(this->nav_panel);
			this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ManageGrades1";
			this->Text = L"ManageGrades";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon))->EndInit();
			this->courses_panel->ResumeLayout(false);
			this->course_layout->ResumeLayout(false);
			this->course_layout->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void course_layout_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	GradesInfo^ g = gcnew GradesInfo();
	g->ShowDialog();
}

private: System::Void search_id_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		e->Handled = true;
		e->SuppressKeyPress = true;
		search_id->Focus();
	}
}
};
}