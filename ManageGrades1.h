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












	System::Windows::Forms::PictureBox^ logo_Pic;





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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_Pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon))->BeginInit();
			this->courses_panel->SuspendLayout();
			this->course_layout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->BeginInit();
			this->SuspendLayout();
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
			this->manage_grades->Location = System::Drawing::Point(2, 9);
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
			this->search_id->Location = System::Drawing::Point(339, 188);
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
			this->search_icon->Location = System::Drawing::Point(761, 188);
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
			this->search_text->Location = System::Drawing::Point(339, 146);
			this->search_text->Name = L"search_text";
			this->search_text->Size = System::Drawing::Size(228, 34);
			this->search_text->TabIndex = 29;
			this->search_text->Text = L"Enter Student ID:";
			// 
			// courses_panel
			// 
			this->courses_panel->Controls->Add(this->course_layout);
			this->courses_panel->Location = System::Drawing::Point(339, 296);
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
			this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ManageGrades1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"ManageGrades";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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