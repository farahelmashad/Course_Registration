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


	public ref class ManageGrades1 : public System::Windows::Forms::Form
	{
	private:
		String^ username;

	public:
		ManageGrades1(String^ user)
		{
			username = user;
			InitializeComponent();
		}

	protected:
		~ManageGrades1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::PictureBox^ logo_Pic;
		System::Windows::Forms::Label^ manage_grades;
		System::Windows::Forms::TextBox^ search_id;
		System::Windows::Forms::PictureBox^ search_icon;
		System::Windows::Forms::Label^ search_text;
		System::Windows::Forms::Panel^ panelCurrent;
		System::Windows::Forms::Panel^ panelCompleted;
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->logo_Pic = (gcnew System::Windows::Forms::PictureBox());
			this->manage_grades = (gcnew System::Windows::Forms::Label());
			this->search_id = (gcnew System::Windows::Forms::TextBox());
			this->search_icon = (gcnew System::Windows::Forms::PictureBox());
			this->search_text = (gcnew System::Windows::Forms::Label());
			this->panelCurrent = (gcnew System::Windows::Forms::Panel());
			this->panelCompleted = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_Pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon))->BeginInit();
			this->SuspendLayout();
			// 
			// logo_Pic
			// 
			this->logo_Pic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
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
			this->manage_grades->Location = System::Drawing::Point(2, 24);
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
			this->search_icon->Cursor = System::Windows::Forms::Cursors::Default;
			this->search_icon->Location = System::Drawing::Point(761, 188);
			this->search_icon->Name = L"search_icon";
			this->search_icon->Size = System::Drawing::Size(50, 37);
			this->search_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->search_icon->TabIndex = 27;
			this->search_icon->TabStop = false;
			this->search_icon->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ManageGrades1::search_icon_MouseClick);
			this->search_icon->MouseEnter += gcnew System::EventHandler(this, &ManageGrades1::search_icon_MouseEnter);
			this->search_icon->MouseLeave += gcnew System::EventHandler(this, &ManageGrades1::search_icon_MouseLeave_1);
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
			// panelCurrent
			// 
			this->panelCurrent->Location = System::Drawing::Point(583, 248);
			this->panelCurrent->Name = L"panelCurrent";
			this->panelCurrent->Size = System::Drawing::Size(353, 480);
			this->panelCurrent->TabIndex = 31;
			// 
			// panelCompleted
			// 
			this->panelCompleted->Location = System::Drawing::Point(196, 248);
			this->panelCompleted->Name = L"panelCompleted";
			this->panelCompleted->Size = System::Drawing::Size(353, 480);
			this->panelCompleted->TabIndex = 33;
			// 
			// ManageGrades1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(1156, 740);
			this->Controls->Add(this->panelCompleted);
			this->Controls->Add(this->panelCurrent);
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
			this->Load += gcnew System::EventHandler(this, &ManageGrades1::ManageGrades1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_Pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void search_id_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			e->Handled = true;
			e->SuppressKeyPress = true;
			search_id->Focus();
		}
	}

	private: System::Void CompletedCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		// Cast the Tag property to retrieve studentId and courseCode
		Panel^ clickedPanel = safe_cast<Panel^>(sender);
		Tuple<int, String^>^ courseData = dynamic_cast<Tuple<int, String^>^>(clickedPanel->Tag);

		int studentId = courseData->Item1;
		String^ courseCode = courseData->Item2;

		// Open the GradesInfo form to allow admin to modify the grade for this course
		GradesInfo^ infoForm = gcnew GradesInfo(studentId, courseCode, username);
		infoForm->ShowDialog();
	}

	private: System::Void CurrentCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		// Cast the Tag property to retrieve studentId and courseCode
		Panel^ clickedPanel = safe_cast<Panel^>(sender);
		Tuple<int, String^>^ courseData = dynamic_cast<Tuple<int, String^>^>(clickedPanel->Tag);

		int studentId = courseData->Item1;
		String^ courseCode = courseData->Item2;

		// Show a message indicating that the course is ongoing
		MessageBox::Show("The course " + courseCode + " is still ongoing.", "Ongoing Course", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void search_icon_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Retrieve the student ID from the TextBox
		String^ studentIdstr = search_id->Text;

		if (String::IsNullOrWhiteSpace(studentIdstr)) {
			MessageBox::Show("Please enter a valid Student ID.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Convert to int
		int studentId = 0;
		try {
			studentId = Convert::ToInt32(studentIdstr);
		}
		catch (FormatException^) {
			MessageBox::Show("Please enter a valid numeric Student ID.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Check if the student exists in the map (using int as key)
		if (students.find(studentId) == students.end()) {
			MessageBox::Show("Student ID not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Get the student from the map
		Student student = students[studentId];

		panelCurrent->Controls->Clear();
		panelCompleted->Controls->Clear();

		// Display current courses
		int currentPanelWidth = 240;
		int currentPanelHeight = 88;
		int panelCurrentWidth = panelCurrent->Width;
		int xCurrentCentered = (panelCurrentWidth - currentPanelWidth) / 2; // Center horizontally
		int yCurrentOffset = 10;

		for (auto& courseID : student.getCurrentCourses()) {
			// Access the Course object using the course ID
			Course course = courses[courseID];

			// Create a panel for the course
			Panel^ coursePanel = gcnew Panel();
			coursePanel->Size = System::Drawing::Size(currentPanelWidth, currentPanelHeight);
			coursePanel->Location = System::Drawing::Point(xCurrentCentered, yCurrentOffset);
			coursePanel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
			coursePanel->ForeColor = System::Drawing::Color::White;
			coursePanel->Cursor = System::Windows::Forms::Cursors::Hand;

			// Mouse hover events
			coursePanel->MouseEnter += gcnew System::EventHandler(this, &ManageGrades1::CoursePanel_MouseEnter);
			coursePanel->MouseLeave += gcnew System::EventHandler(this, &ManageGrades1::CoursePanel_MouseLeave);

			// Course Name Label
			Label^ nameLabel = gcnew Label();
			nameLabel->Text = gcnew String(course.getCourseName().c_str());
			nameLabel->Font = gcnew System::Drawing::Font("Bahnschrift", 13.0F);
			nameLabel->ForeColor = System::Drawing::Color::White;
			nameLabel->AutoSize = true;
			nameLabel->Location = System::Drawing::Point((currentPanelWidth - nameLabel->PreferredWidth) / 2, 10);

			// Course ID Label
			Label^ idLabel = gcnew Label();
			idLabel->Text = gcnew String(courseID.c_str());
			idLabel->Font = gcnew System::Drawing::Font("Bahnschrift", 10.0F);
			idLabel->ForeColor = System::Drawing::Color::White;
			idLabel->AutoSize = true;
			idLabel->Location = System::Drawing::Point((currentPanelWidth - idLabel->PreferredWidth) / 2, 45);

			// Add labels to panel
			coursePanel->Controls->Add(nameLabel);
			coursePanel->Controls->Add(idLabel);

			//Click event handler
			coursePanel->Click += gcnew System::EventHandler(this, &ManageGrades1::CurrentCourse_Click);

			// Store student ID and course ID as Tag
			coursePanel->Tag = gcnew Tuple<int, String^>(studentId, gcnew String(courseID.c_str()));

			// Add panel to the panelCurrent container
			panelCurrent->Controls->Add(coursePanel);

			// Update vertical offset for next course panel
			yCurrentOffset += currentPanelHeight + 10;
		}


		// Display completed courses
		int panelWidth = 240;
		int panelHeight = 88;
		int panelCompletedWidth = panelCompleted->Width;
		int xCentered = (panelCompletedWidth - panelWidth) / 2; // Center horizontally
		int yOffset = 10;

		for (auto& completedCourse : student.getCompletedCourses()) {
			Panel^ coursePanel = gcnew Panel();
			coursePanel->Size = System::Drawing::Size(panelWidth, panelHeight);
			coursePanel->Location = System::Drawing::Point(xCentered, yOffset);
			coursePanel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
			coursePanel->ForeColor = System::Drawing::Color::White;
			coursePanel->Cursor = System::Windows::Forms::Cursors::Hand;
			// MouseEnter event
			coursePanel->MouseEnter += gcnew System::EventHandler(this, &ManageGrades1::CoursePanel_MouseEnter);

			// MouseLeave event
			coursePanel->MouseLeave += gcnew System::EventHandler(this, &ManageGrades1::CoursePanel_MouseLeave);


			// Course Name Label
			Label^ nameLabel = gcnew Label();
			nameLabel->Text = gcnew String(courses[completedCourse.getCourseID()].getCourseName().c_str());
			nameLabel->Font = gcnew System::Drawing::Font("Bahnschrift", 13.0F);
			nameLabel->ForeColor = System::Drawing::Color::White;
			nameLabel->AutoSize = true;
			nameLabel->Location = System::Drawing::Point((panelWidth - nameLabel->PreferredWidth) / 2, 10);

			// Course ID Label
			Label^ idLabel = gcnew Label();
			idLabel->Text = gcnew String(completedCourse.getCourseID().c_str());
			idLabel->Font = gcnew System::Drawing::Font("Bahnschrift", 10.0F);
			idLabel->ForeColor = System::Drawing::Color::White;
			idLabel->AutoSize = true;
			idLabel->Location = System::Drawing::Point((panelWidth - idLabel->PreferredWidth) / 2, 45);

			// Add labels to panel
			coursePanel->Controls->Add(nameLabel);
			coursePanel->Controls->Add(idLabel);

			// Assign a click event to the panel
			coursePanel->Click += gcnew System::EventHandler(this, &ManageGrades1::CompletedCourse_Click);

			// Store student ID and course code in the panel's Tag (as Tuple of int and String^)
			coursePanel->Tag = gcnew Tuple<int, String^>(studentId, gcnew String(completedCourse.getCourseID().c_str()));

			// Add panel to main container
			panelCompleted->Controls->Add(coursePanel);

			yOffset += panelHeight + 10; // spacing between panels
		}

	}

	private: System::Void CoursePanel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
			panel->Cursor = Cursors::Hand;
		}
	}

	private: System::Void CoursePanel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
			panel->Cursor = Cursors::Hand;
		}
	}

	private: System::Void search_icon_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		search_icon->Cursor = Cursors::Hand;
		search_icon->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
	}

	private: System::Void search_icon_MouseLeave_1(System::Object^ sender, System::EventArgs^ e) {
		search_icon->Cursor = Cursors::Default;
		search_icon->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	}

	private: System::Void ManageGrades1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}