#pragma once
#include "Course_Registration.h"
#include"PrerequisitesPage.h"
#include <msclr\marshal_cppstd.h>
#include<string>
#include"Course.h"


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
	public ref class SetPrerequisites : public System::Windows::Forms::Form
	{
	private:
		AdminCoursesManager* setPreManager;
	public:
		SetPrerequisites(void)
		{
			InitializeComponent();
			setPreManager = new AdminCoursesManager();
			course_layout->Visible = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SetPrerequisites()
		{
			if (components)
			{
				delete components;
			}
		}


	private:



	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::FlowLayoutPanel^ courses_panel;
	private: System::Windows::Forms::Panel^ course_layout;
	private: System::Windows::Forms::Label^ credit_hours;
	private: System::Windows::Forms::Label^ credit_hoursout;
	private: System::Windows::Forms::Label^ course_id;

	private: System::Windows::Forms::PictureBox^ book_pic;
	private: System::Windows::Forms::Label^ course_name;

	private: System::Windows::Forms::Label^ search_text;
	private: System::Windows::Forms::PictureBox^ search_icon;
	private: System::Windows::Forms::TextBox^ search_id;
	private: System::Windows::Forms::Label^ manage_grades;




		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SetPrerequisites::typeid));
			   this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			   this->courses_panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->course_layout = (gcnew System::Windows::Forms::Panel());
			   this->credit_hours = (gcnew System::Windows::Forms::Label());
			   this->credit_hoursout = (gcnew System::Windows::Forms::Label());
			   this->course_id = (gcnew System::Windows::Forms::Label());
			   this->book_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->course_name = (gcnew System::Windows::Forms::Label());
			   this->search_text = (gcnew System::Windows::Forms::Label());
			   this->search_icon = (gcnew System::Windows::Forms::PictureBox());
			   this->search_id = (gcnew System::Windows::Forms::TextBox());
			   this->manage_grades = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			   this->courses_panel->SuspendLayout();
			   this->course_layout->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox6
			   // 
			   this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			   this->pictureBox6->Location = System::Drawing::Point(1029, 12);
			   this->pictureBox6->Name = L"pictureBox6";
			   this->pictureBox6->Size = System::Drawing::Size(64, 50);
			   this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox6->TabIndex = 32;
			   this->pictureBox6->TabStop = false;
			   // 
			   // courses_panel
			   // 
			   this->courses_panel->Controls->Add(this->course_layout);
			   this->courses_panel->Location = System::Drawing::Point(297, 285);
			   this->courses_panel->Name = L"courses_panel";
			   this->courses_panel->Size = System::Drawing::Size(514, 398);
			   this->courses_panel->TabIndex = 37;
			   // 
			   // course_layout
			   // 
			   this->course_layout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->course_layout->Controls->Add(this->credit_hours);
			   this->course_layout->Controls->Add(this->credit_hoursout);
			   this->course_layout->Controls->Add(this->course_id);
			   this->course_layout->Controls->Add(this->book_pic);
			   this->course_layout->Controls->Add(this->course_name);
			   this->course_layout->Location = System::Drawing::Point(3, 3);
			   this->course_layout->Name = L"course_layout";
			   this->course_layout->Size = System::Drawing::Size(225, 198);
			   this->course_layout->TabIndex = 0;
			   this->course_layout->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SetPrerequisites::course_layout_MouseClick);
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
			   // course_id
			   // 
			   this->course_id->AutoSize = true;
			   this->course_id->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->course_id->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->course_id->Location = System::Drawing::Point(12, 142);
			   this->course_id->Name = L"course_id";
			   this->course_id->Size = System::Drawing::Size(53, 22);
			   this->course_id->TabIndex = 2;
			   this->course_id->Text = L"cis50";
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
			   // course_name
			   // 
			   this->course_name->AutoSize = true;
			   this->course_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->course_name->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->course_name->Location = System::Drawing::Point(59, 109);
			   this->course_name->Name = L"course_name";
			   this->course_name->Size = System::Drawing::Size(116, 22);
			   this->course_name->TabIndex = 0;
			   this->course_name->Text = L"course name";
			   // 
			   // search_text
			   // 
			   this->search_text->AutoSize = true;
			   this->search_text->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->search_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->search_text->Location = System::Drawing::Point(297, 135);
			   this->search_text->Name = L"search_text";
			   this->search_text->Size = System::Drawing::Size(221, 34);
			   this->search_text->TabIndex = 36;
			   this->search_text->Text = L"Enter Course ID:";
			   // 
			   // search_icon
			   // 
			   this->search_icon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->search_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_icon.Image")));
			   this->search_icon->Location = System::Drawing::Point(719, 177);
			   this->search_icon->Name = L"search_icon";
			   this->search_icon->Size = System::Drawing::Size(50, 37);
			   this->search_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->search_icon->TabIndex = 35;
			   this->search_icon->TabStop = false;
			   this->search_icon->Click += gcnew System::EventHandler(this, &SetPrerequisites::search_icon_Click);
			   // 
			   // search_id
			   // 
			   this->search_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->search_id->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->search_id->Location = System::Drawing::Point(297, 177);
			   this->search_id->Multiline = true;
			   this->search_id->Name = L"search_id";
			   this->search_id->Size = System::Drawing::Size(347, 37);
			   this->search_id->TabIndex = 34;
			   // 
			   // manage_grades
			   // 
			   this->manage_grades->AutoSize = true;
			   this->manage_grades->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->manage_grades->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->manage_grades->Location = System::Drawing::Point(12, 12);
			   this->manage_grades->Name = L"manage_grades";
			   this->manage_grades->Size = System::Drawing::Size(355, 52);
			   this->manage_grades->TabIndex = 33;
			   this->manage_grades->Text = L"Set Prerequisites";
			   // 
			   // SetPrerequisites
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->ClientSize = System::Drawing::Size(1105, 740);
			   this->Controls->Add(this->courses_panel);
			   this->Controls->Add(this->search_text);
			   this->Controls->Add(this->search_icon);
			   this->Controls->Add(this->search_id);
			   this->Controls->Add(this->manage_grades);
			   this->Controls->Add(this->pictureBox6);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"SetPrerequisites";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			   this->Text = L"AdminNavBar";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			   this->courses_panel->ResumeLayout(false);
			   this->course_layout->ResumeLayout(false);
			   this->course_layout->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void course_layout_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		String^ courseID = course_id->Text;
		PrerequisitesPage^ prerequisiites = gcnew PrerequisitesPage(courseID);
		prerequisiites->ShowDialog();
		//prerequisiites->Hide();

	}
private: System::Void search_icon_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ courseID = search_id->Text->Trim();
	if (String::IsNullOrEmpty(courseID)) {
		MessageBox::Show("Please enter a course ID");
		return;
	}
	string CourseID = msclr::interop::marshal_as<std::string>(courseID);
	Course* course = setPreManager->searchCourse(CourseID);

	if (course != nullptr) {
		course_name->Text = gcnew String(course->getCourseName().c_str());
		course_id->Text = gcnew String(course->getCourseID().c_str());
		credit_hoursout->Text = course->getCreditHours().ToString();
		course_layout->Visible = true;
	}
	else {
		MessageBox::Show("Course not found!");
		course_layout->Visible = false;
	}

}
};
}
