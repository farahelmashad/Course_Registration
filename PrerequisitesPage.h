#pragma once
#include "Course_Registration.h"
#include "ManageGrades1.h"
#include "Course.h"
#include"AdminCoursesManager.h"
#include<map>
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


	public:
		PrerequisitesPage(String^ courseID)
		{

			InitializeComponent();
			currentCourseId = courseID;
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


	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ course_i;
	private: System::Windows::Forms::Panel^ course_infop;
	private: System::Windows::Forms::Label^ coursename;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
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
			   this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			   this->course_i = (gcnew System::Windows::Forms::Label());
			   this->course_infop = (gcnew System::Windows::Forms::Panel());
			   this->PrerequisitesList = (gcnew System::Windows::Forms::CheckedListBox());
			   this->submit_s = (gcnew System::Windows::Forms::Button());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->coursename = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			   this->course_infop->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox6
			   // 
			   this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			   this->pictureBox6->Location = System::Drawing::Point(1046, 5);
			   this->pictureBox6->Name = L"pictureBox6";
			   this->pictureBox6->Size = System::Drawing::Size(64, 50);
			   this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox6->TabIndex = 33;
			   this->pictureBox6->TabStop = false;
			   // 
			   // course_i
			   // 
			   this->course_i->AutoSize = true;
			   this->course_i->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->course_i->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->course_i->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->course_i->Location = System::Drawing::Point(12, 9);
			   this->course_i->Name = L"course_i";
			   this->course_i->Size = System::Drawing::Size(330, 52);
			   this->course_i->TabIndex = 34;
			   this->course_i->Text = L"Set prerequisite";
			   // 
			   // course_infop
			   // 
			   this->course_infop->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->course_infop->Controls->Add(this->PrerequisitesList);
			   this->course_infop->Controls->Add(this->submit_s);
			   this->course_infop->Controls->Add(this->label7);
			   this->course_infop->Controls->Add(this->coursename);
			   this->course_infop->Controls->Add(this->pictureBox3);
			   this->course_infop->Location = System::Drawing::Point(273, 165);
			   this->course_infop->Name = L"course_infop";
			   this->course_infop->Size = System::Drawing::Size(619, 427);
			   this->course_infop->TabIndex = 35;
			   // 
			   // PrerequisitesList
			   // 
			   this->PrerequisitesList->FormattingEnabled = true;
			   this->PrerequisitesList->Location = System::Drawing::Point(53, 151);
			   this->PrerequisitesList->Name = L"PrerequisitesList";
			   this->PrerequisitesList->Size = System::Drawing::Size(336, 193);
			   this->PrerequisitesList->TabIndex = 30;
			   // 
			   // submit_s
			   // 
			   this->submit_s->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->submit_s->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->submit_s->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->submit_s->ForeColor = System::Drawing::SystemColors::Window;
			   this->submit_s->Location = System::Drawing::Point(262, 352);
			   this->submit_s->Name = L"submit_s";
			   this->submit_s->Size = System::Drawing::Size(161, 39);
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
			   this->label7->Location = System::Drawing::Point(31, 87);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(223, 40);
			   this->label7->TabIndex = 16;
			   this->label7->Text = L"Prerequisites:";
			   // 
			   // coursename
			   // 
			   this->coursename->AutoSize = true;
			   this->coursename->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->coursename->Location = System::Drawing::Point(180, 13);
			   this->coursename->Name = L"coursename";
			   this->coursename->Size = System::Drawing::Size(209, 40);
			   this->coursename->TabIndex = 6;
			   this->coursename->Text = L"course name";
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::MidnightBlue;
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(493, 20);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(112, 101);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 0;
			   this->pictureBox3->TabStop = false;
			   // 
			   // PrerequisitesPage
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->ClientSize = System::Drawing::Size(1113, 740);
			   this->Controls->Add(this->course_infop);
			   this->Controls->Add(this->course_i);
			   this->Controls->Add(this->pictureBox6);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"PrerequisitesPage";
			   this->Text = L"AdminNavBar";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->Load += gcnew System::EventHandler(this, &PrerequisitesPage::PrerequisitesPage_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			   this->course_infop->ResumeLayout(false);
			   this->course_infop->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion



	private: System::Void panel6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ManageGrades1^ m = gcnew ManageGrades1();
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
		set<string> newPrerequisites;

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
	};
}