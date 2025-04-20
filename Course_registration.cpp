#include "Course_registration.h"
void CourseRegistration::Course_registration::CreateCoursePanel(Course course)
{
	Panel^ coursePanel = gcnew Panel();
	coursePanel->Tag = Utils::toSysStr(course.getCourseID());
	coursePanel->Click += gcnew System::EventHandler(this, &Course_registration::CoursePanel_Click);
	coursePanel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	coursePanel->Size = System::Drawing::Size(185, 162);
	coursePanel->Margin = System::Windows::Forms::Padding(10);

	Label^ courseName = gcnew Label();
	courseName->Text = Utils::toSysStr(course.getCourseName());
	courseName->Font = gcnew System::Drawing::Font("Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold);
	courseName->ForeColor = System::Drawing::SystemColors::ControlLightLight;
	courseName->Location = System::Drawing::Point(40, 90);

	Label^ courseID = gcnew Label();
	courseID->Text = Utils::toSysStr(course.getCourseID());
	courseID->Font = courseName->Font;
	courseID->ForeColor = courseName->ForeColor;
	courseID->Location = System::Drawing::Point(9, 115);

	Label^ creditLabel = gcnew Label();
	creditLabel->Text = "credit hours :";
	creditLabel->Font = courseName->Font;
	creditLabel->ForeColor = courseName->ForeColor;
	creditLabel->Location = System::Drawing::Point(56, 115);

	Label^ creditValue = gcnew Label();
	creditValue->Text = Utils::toSysString(course.getCreditHours());
	creditValue->Font = courseName->Font;
	creditValue->ForeColor = courseName->ForeColor;
	creditValue->Location = System::Drawing::Point(147, 117);

	PictureBox^ pic = gcnew PictureBox();
	pic->Image = this->pictureBox6->Image;
	pic->SizeMode = PictureBoxSizeMode::Zoom;
	pic->Location = System::Drawing::Point(30, 4);
	pic->Size = System::Drawing::Size(119, 74);

	coursePanel->Controls->Add(courseName);
	coursePanel->Controls->Add(courseID);
	coursePanel->Controls->Add(creditLabel);
	coursePanel->Controls->Add(creditValue);
	coursePanel->Controls->Add(pic);

	this->flowLayoutPanel2->Controls->Add(coursePanel);

}
void CourseRegistration:: Course_registration::DisplayAllCourses(map<string, Course> courses)
{
	this->flowLayoutPanel2->Controls->Clear();
	for (auto pair : courses)
	{
		Course course = pair.second;
		CreateCoursePanel(course);
	}

}
void CourseRegistration:: Course_registration::CoursePanel_Click(System::Object^ sender, System::EventArgs^ e)
{
	Panel^ clickedPanel = safe_cast<Panel^>(sender);
	if (clickedPanel->Tag != nullptr) {
		System::String^ courseId = (System::String^)clickedPanel->Tag;
		string id = Utils::toStdString(courseId);
		if (courses.find(id) != courses.end()) {
			Course course = courses[id];

		}

		course_info^ infoform = gcnew course_info(courseId);
		infoform->ShowDialog();
		this->Close();

	}
}
