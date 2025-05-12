
#include "Course_registration.h"
#include"course_pre.h"
#include"course_info.h"
#include"NavBar.h"
#include"ViewGrades.h"

#include<array>

void CourseRegistration::Course_registration::panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	NavBar^ nb = gcnew NavBar();
	nb->ShowDialog();
	this->Hide();
	this->Close();


}
void CourseRegistration::Course_registration::panel5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	course_pre^ cp = gcnew course_pre();
	cp->ShowDialog();
	this->Hide();
	this->Close();
}
void CourseRegistration::Course_registration::panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ViewGrades^ vg = gcnew ViewGrades(); 
	vg->ShowDialog();
	this->Hide();
	this->Close();


}
void CourseRegistration::Course_registration::CreateCoursePanel(Course course, Random^ rand)
{
	Panel^ coursePanel = gcnew Panel();
	coursePanel->Tag = Utils::toSysStr(course.getCourseID());
	coursePanel->Click += gcnew System::EventHandler(this, &Course_registration::CoursePanel_Click);
	coursePanel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	coursePanel->Size = System::Drawing::Size(210, 210);
	coursePanel->Margin = System::Windows::Forms::Padding(10);

	coursePanel->MouseEnter += gcnew System::EventHandler(this, &Course_registration::Panel_MouseEnter);
	coursePanel->MouseLeave += gcnew System::EventHandler(this, &Course_registration::Panel_MouseLeave);


	Label^ courseName = gcnew Label();
	courseName->Text = Utils::toSysStr(course.getCourseName());
	courseName->Font = gcnew System::Drawing::Font("Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold);
	courseName->ForeColor = System::Drawing::SystemColors::ControlLightLight;
	courseName->Location = System::Drawing::Point(50, 90);
	courseName->AutoSize = false;
	courseName->Width = coursePanel->Width;
	courseName->TextAlign = ContentAlignment::MiddleCenter;
	courseName->Location = System::Drawing::Point(0, 110);

	Label^ courseID = gcnew Label();
	courseID->Text = Utils::toSysStr(course.getCourseID());
	courseID->Font = gcnew System::Drawing::Font("Bahnschrift", 9.5F, System::Drawing::FontStyle::Regular);
	courseID->ForeColor = courseName->ForeColor;
	courseID->Location = System::Drawing::Point(9, 115);
	courseID->AutoSize = false;
	courseID->Width = coursePanel->Width;
	courseID->TextAlign = ContentAlignment::MiddleCenter;
	courseID->Location = System::Drawing::Point(0, 130);


	Label^ creditLabel = gcnew Label();
	creditLabel->Text = "Credit hours :";
	creditLabel->Font = courseID->Font;
	creditLabel->ForeColor = courseID->ForeColor;
	creditLabel->Location = System::Drawing::Point(50, 155);
	creditLabel->AutoSize = true;

	Label^ creditValue = gcnew Label();
	creditValue->Text = Utils::toSysString(course.getCreditHours());
	creditValue->Font = courseID->Font;
	creditValue->ForeColor = courseID->ForeColor;
	creditValue->Location = System::Drawing::Point(135, 155);
	creditValue->AutoSize = true;


	//Picturesss
	PictureBox^ pic = gcnew PictureBox();
	std::array<std::string, 5> imageNames = { "book", "pc", "computer","computer-science","database" };
	

	System::ComponentModel::ComponentResourceManager^ resources =
		gcnew System::ComponentModel::ComponentResourceManager(Course_registration::typeid);
	
	
	int index = rand->Next(imageNames.size()); 
	String^ selectedImage = Utils::toSysStr(imageNames[index]); 


	
	pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(selectedImage))); 

	pic->SizeMode = PictureBoxSizeMode::Zoom;
	pic->Location = System::Drawing::Point(37, 10);
	pic->Size = System::Drawing::Size(135, 92);

	coursePanel->Controls->Add(courseName);
	coursePanel->Controls->Add(courseID);
	coursePanel->Controls->Add(creditLabel);
	coursePanel->Controls->Add(creditValue);
	coursePanel->Controls->Add(pic);

	this->flowLayoutPanel2->Controls->Add(coursePanel);

}
void CourseRegistration::Course_registration::DisplayAllCourses(map<string, Course> courses)
{
	Random^ rand = gcnew Random();
	this->flowLayoutPanel2->Controls->Clear();
	for (auto pair : courses)
	{
		Course course = pair.second;
		CreateCoursePanel(course, rand);
	}

}
void CourseRegistration::Course_registration::CoursePanel_Click(System::Object^ sender, System::EventArgs^ e)
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


