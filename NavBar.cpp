#include"NavBar.h"

void CourseRegistration::NavBar::createCurrentCoursePanel(Course course)
{
    Panel^ panel = gcnew Panel();
    panel->BackColor = System::Drawing::Color::White;
    panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
    panel->ForeColor = System::Drawing::Color::FromArgb(54, 69, 79);
    panel->Location = System::Drawing::Point(57, 90);
    panel->Margin = System::Windows::Forms::Padding(53, 10, 60, 10);
    panel->Size = System::Drawing::Size(321, 79);
    panel->TabIndex = 0;

    Label^ labelCourseName = gcnew Label();
    labelCourseName->Text = Utils::toSysStr(course.getCourseName());
    labelCourseName->Font = gcnew System::Drawing::Font("Bahnschrift", 13, System::Drawing::FontStyle::Bold);
    labelCourseName->Location = System::Drawing::Point(15, 10);
    labelCourseName->AutoSize = true;

    Label^ labelCourseID = gcnew Label();
    labelCourseID->Text =  Utils::toSysStr(course.getCourseID());
    labelCourseID->Location = System::Drawing::Point(15, 30);
    labelCourseID->AutoSize = true;


    Label^ labelOngoing = gcnew Label();
    labelOngoing->Text = "Ongoing";
    labelOngoing->Font = gcnew System::Drawing::Font("Bahnschrift", 9, System::Drawing::FontStyle::Italic);
    labelOngoing->ForeColor = System::Drawing::Color::Gray;
    labelOngoing->Location = System::Drawing::Point(252, 52);
    labelOngoing->AutoSize = true;

    Label^ labelInstructor = gcnew Label();
    labelInstructor->Text =  Utils::toSysStr(course.getInstructor());
    labelInstructor->Location = System::Drawing::Point(15, 50);
    labelInstructor->AutoSize = true;

    panel->Controls->Add(labelCourseName);
    panel->Controls->Add(labelCourseID);
    panel->Controls->Add(labelOngoing);
    panel->Controls->Add(labelInstructor);


    this->flowLayoutPanel2->Controls->Add(panel);
}
void CourseRegistration::NavBar::displayAllCourses()
{
    for (string courseID : currentStudent.getCurrentCourses())
    {
        auto it = courses.find(courseID);
        if (it != courses.end())
        {
            Course course = it->second;
            createCurrentCoursePanel(course);
        }
        else
        {
        }
    }
}
