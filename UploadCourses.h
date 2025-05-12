#pragma once
#include "Course_Registration.h"
#include"AdminCoursesManager.h"
#include <msclr/marshal_cppstd.h>

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
	private:
		AdminCoursesManager* UCManager;
	public:
		UploadCourses(void)
		{
			UCManager = new AdminCoursesManager();
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
			delete UCManager;
		}


	private:

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ submit_s;
	private: System::Windows::Forms::TextBox^ InstructorName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ CreditHours;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Syllabus;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ CourseName;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ course_i;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ CourseID;
	private: System::Windows::Forms::Label^ label1;




		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UploadCourses::typeid));
			   this->panel5 = (gcnew System::Windows::Forms::Panel());
			   this->CourseID = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->submit_s = (gcnew System::Windows::Forms::Button());
			   this->InstructorName = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->Syllabus = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->CreditHours = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->CourseName = (gcnew System::Windows::Forms::TextBox());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->course_i = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->panel5->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // panel5
			   // 
			   this->panel5->Controls->Add(this->CourseID);
			   this->panel5->Controls->Add(this->label1);
			   this->panel5->Controls->Add(this->submit_s);
			   this->panel5->Controls->Add(this->InstructorName);
			   this->panel5->Controls->Add(this->label8);
			   this->panel5->Controls->Add(this->Syllabus);
			   this->panel5->Controls->Add(this->label5);
			   this->panel5->Controls->Add(this->CreditHours);
			   this->panel5->Controls->Add(this->label7);
			   this->panel5->Controls->Add(this->CourseName);
			   this->panel5->Controls->Add(this->label9);
			   this->panel5->Location = System::Drawing::Point(284, 212);
			   this->panel5->Name = L"panel5";
			   this->panel5->Size = System::Drawing::Size(625, 415);
			   this->panel5->TabIndex = 20;
			   // 
			   // CourseID
			   // 
			   this->CourseID->BackColor = System::Drawing::SystemColors::Window;
			   this->CourseID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->CourseID->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CourseID->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->CourseID->Location = System::Drawing::Point(302, 22);
			   this->CourseID->Multiline = true;
			   this->CourseID->Name = L"CourseID";
			   this->CourseID->Size = System::Drawing::Size(260, 32);
			   this->CourseID->TabIndex = 30;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(95, 26);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(113, 28);
			   this->label1->TabIndex = 29;
			   this->label1->Text = L"Course ID";
			   // 
			   // submit_s
			   // 
			   this->submit_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->submit_s->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->submit_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->submit_s->ForeColor = System::Drawing::SystemColors::Window;
			   this->submit_s->Location = System::Drawing::Point(243, 364);
			   this->submit_s->Name = L"submit_s";
			   this->submit_s->Size = System::Drawing::Size(161, 39);
			   this->submit_s->TabIndex = 28;
			   this->submit_s->Text = L"Submit";
			   this->submit_s->UseVisualStyleBackColor = false;
			   this->submit_s->Click += gcnew System::EventHandler(this, &UploadCourses::submit_s_Click);
			   // 
			   // InstructorName
			   // 
			   this->InstructorName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->InstructorName->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->InstructorName->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->InstructorName->Location = System::Drawing::Point(302, 279);
			   this->InstructorName->Multiline = true;
			   this->InstructorName->Name = L"InstructorName";
			   this->InstructorName->Size = System::Drawing::Size(260, 32);
			   this->InstructorName->TabIndex = 27;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(95, 219);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(101, 28);
			   this->label8->TabIndex = 22;
			   this->label8->Text = L"Syllabus";
			   // 
			   // Syllabus
			   // 
			   this->Syllabus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->Syllabus->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Syllabus->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->Syllabus->Location = System::Drawing::Point(302, 213);
			   this->Syllabus->Multiline = true;
			   this->Syllabus->Name = L"Syllabus";
			   this->Syllabus->Size = System::Drawing::Size(260, 32);
			   this->Syllabus->TabIndex = 23;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(95, 285);
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
			   this->CreditHours->Location = System::Drawing::Point(302, 147);
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
			   this->label7->Location = System::Drawing::Point(95, 151);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(144, 28);
			   this->label7->TabIndex = 24;
			   this->label7->Text = L"Credit Hours";
			   // 
			   // CourseName
			   // 
			   this->CourseName->BackColor = System::Drawing::SystemColors::Window;
			   this->CourseName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->CourseName->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CourseName->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->CourseName->Location = System::Drawing::Point(302, 85);
			   this->CourseName->Multiline = true;
			   this->CourseName->Name = L"CourseName";
			   this->CourseName->Size = System::Drawing::Size(260, 32);
			   this->CourseName->TabIndex = 21;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(95, 89);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(152, 28);
			   this->label9->TabIndex = 20;
			   this->label9->Text = L"Course Name";
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(1080, 21);
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
			   this->label10->Location = System::Drawing::Point(12, 9);
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
			   this->ClientSize = System::Drawing::Size(1156, 740);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->course_i);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->panel5);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"UploadCourses";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			   this->Text = L"AdminNavBar";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->panel5->ResumeLayout(false);
			   this->panel5->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion


	private: System::Void submit_s_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			std::string courseID = msclr::interop::marshal_as<std::string>(CourseID->Text);
			std::string courseName = msclr::interop::marshal_as<std::string>(CourseName->Text);
			std::string syllabus = msclr::interop::marshal_as<std::string>(Syllabus->Text);
			int creditHours = System::Convert::ToInt32(CreditHours->Text);
			std::string instructor = msclr::interop::marshal_as<std::string>(InstructorName->Text);

			if (courseID.empty() || courseName.empty() || syllabus.empty() || instructor.empty()) {
				MessageBox::Show("Please fill all fields", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (UCManager->addCourse(courseID, courseName, creditHours, syllabus, instructor)) {
				MessageBox::Show("Course added successfully!", "Success",
					MessageBoxButtons::OK, MessageBoxIcon::Information);

				CourseID->Clear();
				CourseName->Clear();
				CreditHours->Clear();
				Syllabus->Clear();
				InstructorName->Clear();
			}
			else {
				MessageBox::Show("Course ID or Name already exists!", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Invalid input. Please check all fields.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}