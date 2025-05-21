#pragma once
#include "Course_Registration.h"
#include "ManageGrades1.h"
#include"SetPrerequisites.h"
#include "UploadCourses.h"
#include"iostream"
ref class Studentlogin;
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
	public ref class AdminNavBar : public System::Windows::Forms::Form
	{
	private:
		System::String^ loggedInUsername;
	public:
		AdminNavBar(System::String^ username)
		{
			InitializeComponent();
			loggedInUsername = username;
			user_name->Text = loggedInUsername;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminNavBar()
		{
			if (components)
			{
				delete components;
			}
		}
		UploadCourses^ uploadCourses;
		ManageGrades1^ manageGrades;
		SetPrerequisites^ setPre;

	private:
		System::Windows::Forms::FlowLayoutPanel^ nav_panel;
		System::Windows::Forms::Panel^ user_panel;
	private: System::Windows::Forms::Label^ user_name;

		   System::Windows::Forms::PictureBox^ pictureBox1;
		   System::Windows::Forms::Panel^ upload_panel;
		   System::Windows::Forms::Label^ upload_text;
		   System::Windows::Forms::PictureBox^ upload_pic;
		   System::Windows::Forms::Panel^ pre_panel;
		   System::Windows::Forms::Label^ pre_text;
		   System::Windows::Forms::PictureBox^ pre_pic;
		   System::Windows::Forms::Panel^ manage_panel;
		   System::Windows::Forms::Label^ manage_text;
		   System::Windows::Forms::PictureBox^ manage_pic;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

		   System::ComponentModel::Container^ components;
    System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminNavBar::typeid));
			   this->nav_panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->user_panel = (gcnew System::Windows::Forms::Panel());
			   this->user_name = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->upload_panel = (gcnew System::Windows::Forms::Panel());
			   this->upload_text = (gcnew System::Windows::Forms::Label());
			   this->upload_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->pre_panel = (gcnew System::Windows::Forms::Panel());
			   this->pre_text = (gcnew System::Windows::Forms::Label());
			   this->pre_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->manage_panel = (gcnew System::Windows::Forms::Panel());
			   this->manage_text = (gcnew System::Windows::Forms::Label());
			   this->manage_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->nav_panel->SuspendLayout();
			   this->user_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->upload_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upload_pic))->BeginInit();
			   this->pre_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pre_pic))->BeginInit();
			   this->manage_panel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manage_pic))->BeginInit();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			   this->nav_panel->Controls->Add(this->panel1);
			   this->nav_panel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->nav_panel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->nav_panel->Location = System::Drawing::Point(0, 0);
			   this->nav_panel->Margin = System::Windows::Forms::Padding(0);
			   this->nav_panel->Name = L"nav_panel";
			   this->nav_panel->Size = System::Drawing::Size(253, 673);
			   this->nav_panel->TabIndex = 1;
			   // 
			   // user_panel
			   // 
			   this->user_panel->Controls->Add(this->user_name);
			   this->user_panel->Controls->Add(this->pictureBox1);
			   this->user_panel->Location = System::Drawing::Point(0, 0);
			   this->user_panel->Margin = System::Windows::Forms::Padding(0);
			   this->user_panel->Name = L"user_panel";
			   this->user_panel->Size = System::Drawing::Size(253, 178);
			   this->user_panel->TabIndex = 5;
			   // 
			   // user_name
			   // 
			   this->user_name->AutoSize = true;
			   this->user_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F));
			   this->user_name->ForeColor = System::Drawing::Color::White;
			   this->user_name->Location = System::Drawing::Point(89, 127);
			   this->user_name->Margin = System::Windows::Forms::Padding(0);
			   this->user_name->Name = L"user_name";
			   this->user_name->Size = System::Drawing::Size(82, 29);
			   this->user_name->TabIndex = 1;
			   this->user_name->Text = L"Admin";
			   this->user_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(62, 14);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(127, 113);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // upload_panel
			   // 
			   this->upload_panel->Controls->Add(this->upload_text);
			   this->upload_panel->Controls->Add(this->upload_pic);
			   this->upload_panel->Location = System::Drawing::Point(0, 178);
			   this->upload_panel->Margin = System::Windows::Forms::Padding(0);
			   this->upload_panel->Name = L"upload_panel";
			   this->upload_panel->Size = System::Drawing::Size(253, 100);
			   this->upload_panel->TabIndex = 6;
			   this->upload_panel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminNavBar::panel2_MouseClick);
			   this->upload_panel->MouseEnter += gcnew System::EventHandler(this, &AdminNavBar::panel2_MouseEnter);
			   this->upload_panel->MouseLeave += gcnew System::EventHandler(this, &AdminNavBar::panel2_MouseLeave);
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
			   this->upload_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"upload_pic.Image")));
			   this->upload_pic->Location = System::Drawing::Point(3, 28);
			   this->upload_pic->Name = L"upload_pic";
			   this->upload_pic->Size = System::Drawing::Size(55, 39);
			   this->upload_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->upload_pic->TabIndex = 0;
			   this->upload_pic->TabStop = false;
			   // 
			   // pre_panel
			   // 
			   this->pre_panel->Controls->Add(this->pre_text);
			   this->pre_panel->Controls->Add(this->pre_pic);
			   this->pre_panel->Location = System::Drawing::Point(0, 278);
			   this->pre_panel->Margin = System::Windows::Forms::Padding(0);
			   this->pre_panel->Name = L"pre_panel";
			   this->pre_panel->Size = System::Drawing::Size(253, 100);
			   this->pre_panel->TabIndex = 19;
			   this->pre_panel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminNavBar::panel7_MouseClick);
			   this->pre_panel->MouseEnter += gcnew System::EventHandler(this, &AdminNavBar::panel7_MouseEnter);
			   this->pre_panel->MouseLeave += gcnew System::EventHandler(this, &AdminNavBar::panel7_MouseLeave);
			   // 
			   // pre_text
			   // 
			   this->pre_text->AutoSize = true;
			   this->pre_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->pre_text->ForeColor = System::Drawing::Color::White;
			   this->pre_text->Location = System::Drawing::Point(60, 37);
			   this->pre_text->Name = L"pre_text";
			   this->pre_text->Size = System::Drawing::Size(158, 23);
			   this->pre_text->TabIndex = 1;
			   this->pre_text->Text = L"Set Prerequisites";
			   // 
			   // pre_pic
			   // 
			   this->pre_pic->BackColor = System::Drawing::Color::Transparent;
			   this->pre_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pre_pic.Image")));
			   this->pre_pic->Location = System::Drawing::Point(3, 26);
			   this->pre_pic->Name = L"pre_pic";
			   this->pre_pic->Size = System::Drawing::Size(55, 39);
			   this->pre_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pre_pic->TabIndex = 0;
			   this->pre_pic->TabStop = false;
			   // 
			   // manage_panel
			   // 
			   this->manage_panel->Controls->Add(this->manage_text);
			   this->manage_panel->Controls->Add(this->manage_pic);
			   this->manage_panel->Location = System::Drawing::Point(0, 378);
			   this->manage_panel->Margin = System::Windows::Forms::Padding(0);
			   this->manage_panel->Name = L"manage_panel";
			   this->manage_panel->Size = System::Drawing::Size(253, 100);
			   this->manage_panel->TabIndex = 20;
			   this->manage_panel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminNavBar::panel3_MouseClick);
			   this->manage_panel->MouseEnter += gcnew System::EventHandler(this, &AdminNavBar::panel3_MouseEnter);
			   this->manage_panel->MouseLeave += gcnew System::EventHandler(this, &AdminNavBar::panel3_MouseLeave);
			   // 
			   // manage_text
			   // 
			   this->manage_text->AutoSize = true;
			   this->manage_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->manage_text->ForeColor = System::Drawing::Color::White;
			   this->manage_text->Location = System::Drawing::Point(60, 38);
			   this->manage_text->Name = L"manage_text";
			   this->manage_text->Size = System::Drawing::Size(141, 23);
			   this->manage_text->TabIndex = 1;
			   this->manage_text->Text = L"Manage Grades";
			   // 
			   // manage_pic
			   // 
			   this->manage_pic->BackColor = System::Drawing::Color::Transparent;
			   this->manage_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"manage_pic.Image")));
			   this->manage_pic->Location = System::Drawing::Point(3, 26);
			   this->manage_pic->Name = L"manage_pic";
			   this->manage_pic->Size = System::Drawing::Size(55, 39);
			   this->manage_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->manage_pic->TabIndex = 0;
			   this->manage_pic->TabStop = false;
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Controls->Add(this->pictureBox2);
			   this->panel1->Location = System::Drawing::Point(0, 478);
			   this->panel1->Margin = System::Windows::Forms::Padding(0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(253, 100);
			   this->panel1->TabIndex = 21;
			   this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminNavBar::panel1_MouseClick);
			   this->panel1->MouseEnter += gcnew System::EventHandler(this, &AdminNavBar::panel1_MouseEnter);
			   this->panel1->MouseLeave += gcnew System::EventHandler(this, &AdminNavBar::panel1_MouseLeave);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(60, 38);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(75, 23);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Log Out";
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(3, 28);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(55, 39);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 0;
			   this->pictureBox2->TabStop = false;
			   // 
			   // AdminNavBar
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::AliceBlue;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->ClientSize = System::Drawing::Size(1282, 673);
			   this->Controls->Add(this->nav_panel);
			   this->DoubleBuffered = true;
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->IsMdiContainer = true;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"AdminNavBar";
			   this->Text = L"AdminNavBar";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->Load += gcnew System::EventHandler(this, &AdminNavBar::AdminNavBar_Load);
			   this->nav_panel->ResumeLayout(false);
			   this->user_panel->ResumeLayout(false);
			   this->user_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->upload_panel->ResumeLayout(false);
			   this->upload_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upload_pic))->EndInit();
			   this->pre_panel->ResumeLayout(false);
			   this->pre_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pre_pic))->EndInit();
			   this->manage_panel->ResumeLayout(false);
			   this->manage_panel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manage_pic))->EndInit();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion


	private: System::Void AdminNavBar_Load(System::Object^ sender, System::EventArgs^ e) {
		for each (Control ^ ctrl in this->Controls) {
			System::Windows::Forms::MdiClient^ client = dynamic_cast<System::Windows::Forms::MdiClient^>(ctrl);
			if (client != nullptr) {
				client->BackColor = System::Drawing::Color::AliceBlue;
			}
		}
	}

	private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (uploadCourses == nullptr)
		{
			uploadCourses = gcnew UploadCourses();
			uploadCourses->MdiParent = this;
			uploadCourses->Location = Point(250, 40);
			uploadCourses->Show();
		}
		else {
			uploadCourses->BringToFront();
		}
	}


	private: System::Void panel2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
			panel->Cursor = Cursors::Hand;
		}
	}

	private: System::Void panel2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
			panel->Cursor = Cursors::Default;
		}
	}
	private: System::Void panel7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
			panel->Cursor = Cursors::Hand;
		}
	}
	private: System::Void panel7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
			panel->Cursor = Cursors::Default;
		}
	}
	private: System::Void panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (setPre == nullptr) {
			setPre = gcnew SetPrerequisites(loggedInUsername);
			setPre->MdiParent = this;
			setPre->Location = Point(250, 40);
			setPre->Show();
		}
		else {
			setPre->BringToFront();
		}
	}
	private: System::Void panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (manageGrades == nullptr) {
			manageGrades = gcnew ManageGrades1(loggedInUsername);
			manageGrades->MdiParent = this;
			manageGrades->Location = Point(250, 40);
			manageGrades->Show();
		}
		else {
			manageGrades->BringToFront();
		}
	}
	private: System::Void panel3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
			panel->Cursor = Cursors::Hand;
		}
	}
	private: System::Void panel3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
			panel->Cursor = Cursors::Default;
		}
	}
	private: System::Void panel1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		panel1->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
		panel1->Cursor = Cursors::Hand;

	}
private: System::Void panel1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel1->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel1->Cursor = Cursors::Default;

}

};
}