#include "course_pre.h"
#include"Course.h"
#include"NavBar.h"
#include"report.h"
#include"ViewGrades.h"
#include"Utils.h"
#include"Course_registration.h"
#include<array>
//ref class Course_registration;

void CourseRegistration::course_pre::panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    Course_registration^ cg5 = gcnew Course_registration();
    cg5->ShowDialog();
    this->Hide();
    this->Close();
}
void CourseRegistration::course_pre::panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    NavBar^ nb1 = gcnew NavBar();
    nb1->ShowDialog();
    this->Hide();
    this->Close();
}
void CourseRegistration::course_pre::CreateCoursesPanel(Course course, Random^ rand)
{
        Panel^ coursePanel = gcnew Panel();
        coursePanel->Tag = Utils::toSysStr(course.getCourseID());
        coursePanel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
        coursePanel->Size = System::Drawing::Size(210, 210);
        coursePanel->Margin = System::Windows::Forms::Padding(10);

        coursePanel->MouseEnter += gcnew System::EventHandler(this, &course_pre::Panel_MouseEnter);
        coursePanel->MouseLeave += gcnew System::EventHandler(this, &course_pre::Panel_MouseLeave);

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

        // Remove credit labels and add prerequisites labels
        Label^ prereqLabel = gcnew Label();
        prereqLabel->Text = "Prerequisites:";
        prereqLabel->Font = gcnew System::Drawing::Font("Bahnschrift", 9.5F, System::Drawing::FontStyle::Regular);
        prereqLabel->ForeColor = courseID->ForeColor;
        prereqLabel->Location = System::Drawing::Point(50, 155);
        prereqLabel->AutoSize = true;

        // Dynamically add prerequisite courses here
        // Assuming course.getPrerequisites() returns a vector of prerequisite courses (or a similar list)
        int yPosition = 170; // Start position for the first prerequisite label

        for each (string prere in course.getPrerequisites())
        {
            String^ prereq = Utils::toSysStr(prere);
            Label^ prereqCourse = gcnew Label();
            prereqCourse->Text = prereq;
            prereqCourse->Font = gcnew System::Drawing::Font("Bahnschrift", 9.5F, System::Drawing::FontStyle::Regular);
            prereqCourse->ForeColor = courseID->ForeColor;
            prereqCourse->Location = System::Drawing::Point(50, yPosition);
            prereqCourse->AutoSize = true;

            coursePanel->Controls->Add(prereqCourse);
            yPosition += 20; // Adjust space between prerequisite labels
        }
        //Pictures

        PictureBox^ pic = gcnew PictureBox();
        std::array<std::string, 5> imageNames = { "book", "pc", "computer", "computer-science", "database" };

        int index = rand->Next(imageNames.size());
        String^ selectedImage = Utils::toSysStr(imageNames[index]);

        System::ComponentModel::ComponentResourceManager^ resources =
            gcnew System::ComponentModel::ComponentResourceManager(course_pre::typeid);
        pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(selectedImage)));

        pic->SizeMode = PictureBoxSizeMode::Zoom;
        pic->Location = System::Drawing::Point(37, 10);
        pic->Size = System::Drawing::Size(135, 92);

        coursePanel->Controls->Add(courseName);
        coursePanel->Controls->Add(courseID);
        coursePanel->Controls->Add(prereqLabel);  
        coursePanel->Controls->Add(pic);

        this->flowLayoutPanel2->Controls->Add(coursePanel);
    }
void CourseRegistration::course_pre::DisplayAllCourses(unordered_map<string, Course> courses)
{
    Random^ rand = gcnew Random();
    this->flowLayoutPanel2->Controls->Clear();
    for (auto pair : courses)
    {
        Course course = pair.second;
        CreateCoursesPanel(course, rand);
    }

}
void CourseRegistration::course_pre::panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    ViewGrades^ gr = gcnew ViewGrades();
    gr->ShowDialog();
    this->Hide();
    this->Close();
}
void CourseRegistration::course_pre::panel6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    report^ r = gcnew report();
    r->ShowDialog();
    this->Hide();
    this->Close();
}