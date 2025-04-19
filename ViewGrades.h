

#pragma once

#include <msclr/marshal_cppstd.h>

namespace CourseRegistration {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;

    /// <summary>
    /// Summary for ViewGrades
    /// </summary>
    public ref class ViewGrades : public System::Windows::Forms::Form
    {
        //public:
        //    ViewGrades(void)
        //    {
        //        InitializeComponent();
        //        InitializeData();
        //        PopulateComboBoxes();
        //    }

        //protected:
        //    ~ViewGrades()
        //    {
        //        if (components)
        //        {
        //            delete components;
        //        }
        //    }

        //private:
        //    // Nested class for course grades
        //    ref class CourseGrade {
        //    public:
        //        property String^ CourseName;
        //        property String^ Semester;
        //        property String^ Year;
        //        property String^ Grade;

        //        CourseGrade(String^ name, String^ sem, String^ year, String^ grade) {
        //            CourseName = name;
        //            Semester = sem;
        //            Year = year;
        //            Grade = grade;
        //        }
        //    };

        //    List<CourseGrade^>^ studentGrades;
        //    System::ComponentModel::Container^ components;

            // UI Controls
        System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Panel^ panel3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::PictureBox^ pictureBox3;
        System::Windows::Forms::Panel^ panel4;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::PictureBox^ pictureBox4;
        System::Windows::Forms::PictureBox^ pictureBox5;
        System::Windows::Forms::Panel^ searchpanel;
        System::Windows::Forms::Label^ yearlabel;
        System::Windows::Forms::Label^ semesterlabel;
        System::Windows::Forms::ComboBox^ semestercomboBox;
        System::Windows::Forms::ComboBox^ yearcomboBox;
        System::Windows::Forms::FlowLayoutPanel^ gradesflowLayoutPanel;
        System::Windows::Forms::PictureBox^ searchpictureBox;
        System::Windows::Forms::Panel^ panel7;
        System::Windows::Forms::Label^ check_pre;
        System::Windows::Forms::PictureBox^ pictureBox7;
        System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
        System::Windows::Forms::Panel^ course_lay;
        System::Windows::Forms::Label^ course_nameout;
        System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ button1;
           System::Windows::Forms::Label^ course_idout;

        //void InitializeData() {
        //    studentGrades = gcnew List<CourseGrade^>();
        //    // Sample data - replace with your actual data loading
        //    studentGrades->Add(gcnew CourseGrade("Data Structures", "Fall", "2023", "A"));
        //    studentGrades->Add(gcnew CourseGrade("Algorithms", "Spring", "2024", "B+"));
        //    studentGrades->Add(gcnew CourseGrade("Database Systems", "Fall", "2023", "A-"));
        //}

       /* void PopulateComboBoxes() {
            yearcomboBox->Items->Add("All Years");
            yearcomboBox->Items->Add("2023");
            yearcomboBox->Items->Add("2024");
            yearcomboBox->SelectedIndex = 0;

            semestercomboBox->Items->Add("All Semesters");
            semestercomboBox->Items->Add("Fall");
            semestercomboBox->Items->Add("Spring");
            semestercomboBox->SelectedIndex = 0;
        }*/

        /*  void addgradebox(string^ coursename, string^ semester, string^ year, string^ grade) {
              panel^ gradepanel = gcnew panel();
              gradepanel->size = drawing::size(850, 60);
              gradepanel->backcolor = color::white;
              gradepanel->borderstyle = borderstyle::fixedsingle;
              gradepanel->margin = padding(10, 10, 10, 10);

              label^ lblcourse = gcnew label();
              lblcourse->text = coursename;
              lblcourse->font = gcnew system::drawing::font("bahnschrift", 12, fontstyle::bold);
              lblcourse->location = point(20, 15);
              lblcourse->autosize = true;

              label^ lblsemyear = gcnew label();
              lblsemyear->text = semester + " " + year;
              lblsemyear->location = point(350, 15);
              lblsemyear->autosize = true;

              Label^ lblGrade = gcnew Label();
              lblGrade->Text = grade;
              lblGrade->Font = gcnew System::Drawing::Font("Bahnschrift", 12, FontStyle::Bold);
              lblGrade->ForeColor = Color::FromArgb(32, 42, 68);
              lblGrade->Location = Point(700, 15);
              lblGrade->AutoSize = true;

              gradePanel->Controls->Add(lblCourse);
              gradePanel->Controls->Add(lblSemYear);
              gradePanel->Controls->Add(lblGrade);

              gradesflowLayoutPanel->Controls->Add(gradePanel);
          }*/

#pragma region Windows Form Designer generated code
          /// <summary>
          /// Required method for Designer support - do not modify
          /// the contents of this method with the code editor.
          /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewGrades::typeid));
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->check_pre = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->searchpanel = (gcnew System::Windows::Forms::Panel());
            this->searchpictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->semestercomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->yearcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->semesterlabel = (gcnew System::Windows::Forms::Label());
            this->yearlabel = (gcnew System::Windows::Forms::Label());
            this->gradesflowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel1->SuspendLayout();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->searchpanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchpictureBox))->BeginInit();
            this->gradesflowLayoutPanel->SuspendLayout();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->SuspendLayout();
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->flowLayoutPanel1->Controls->Add(this->panel1);
            this->flowLayoutPanel1->Controls->Add(this->panel2);
            this->flowLayoutPanel1->Controls->Add(this->panel3);
            this->flowLayoutPanel1->Controls->Add(this->panel4);
            this->flowLayoutPanel1->Controls->Add(this->panel7);
            this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
            this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
            this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(253, 755);
            this->flowLayoutPanel1->TabIndex = 1;
            // 
            // panel1
            // 
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->pictureBox1);
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Margin = System::Windows::Forms::Padding(0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(253, 178);
            this->panel1->TabIndex = 0;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(8, 150);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(89, 18);
            this->label2->TabIndex = 2;
            this->label2->Text = L"User/Admin";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(64, 99);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(108, 24);
            this->label1->TabIndex = 1;
            this->label1->Text = L"User name";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(27, 4);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(165, 91);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Location = System::Drawing::Point(0, 178);
            this->panel2->Margin = System::Windows::Forms::Padding(0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(253, 100);
            this->panel2->TabIndex = 1;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(60, 40);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(179, 23);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Course Registration";
            this->label3->Click += gcnew System::EventHandler(this, &ViewGrades::label3_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(5, 29);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(55, 39);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            // 
            // panel3
            // 
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->label4);
            this->panel3->Controls->Add(this->pictureBox3);
            this->panel3->Location = System::Drawing::Point(0, 278);
            this->panel3->Margin = System::Windows::Forms::Padding(0);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(253, 100);
            this->panel3->TabIndex = 2;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(60, 35);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(116, 23);
            this->label4->TabIndex = 1;
            this->label4->Text = L"View Grades";
            this->label4->Click += gcnew System::EventHandler(this, &ViewGrades::label4_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(3, 26);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(57, 40);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 0;
            this->pictureBox3->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->label5);
            this->panel4->Controls->Add(this->pictureBox4);
            this->panel4->Location = System::Drawing::Point(0, 378);
            this->panel4->Margin = System::Windows::Forms::Padding(0);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(253, 91);
            this->panel4->TabIndex = 3;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(63, 38);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(112, 23);
            this->label5->TabIndex = 1;
            this->label5->Text = L"View Report";
            this->label5->Click += gcnew System::EventHandler(this, &ViewGrades::label5_Click);
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(3, 26);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(57, 41);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 0;
            this->pictureBox4->TabStop = false;
            // 
            // panel7
            // 
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Controls->Add(this->check_pre);
            this->panel7->Controls->Add(this->pictureBox7);
            this->panel7->Location = System::Drawing::Point(0, 469);
            this->panel7->Margin = System::Windows::Forms::Padding(0);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(253, 91);
            this->panel7->TabIndex = 18;
            // 
            // check_pre
            // 
            this->check_pre->AutoSize = true;
            this->check_pre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->check_pre->ForeColor = System::Drawing::Color::White;
            this->check_pre->Location = System::Drawing::Point(63, 38);
            this->check_pre->Name = L"check_pre";
            this->check_pre->Size = System::Drawing::Size(170, 23);
            this->check_pre->TabIndex = 1;
            this->check_pre->Text = L"Check prerequisite";
            // 
            // pictureBox7
            // 
            this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(3, 26);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(57, 41);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 0;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(1441, 12);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(73, 50);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 2;
            this->pictureBox5->TabStop = false;
            // 
            // searchpanel
            // 
            this->searchpanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->searchpanel->Controls->Add(this->searchpictureBox);
            this->searchpanel->Controls->Add(this->semestercomboBox);
            this->searchpanel->Controls->Add(this->yearcomboBox);
            this->searchpanel->Controls->Add(this->semesterlabel);
            this->searchpanel->Controls->Add(this->yearlabel);
            this->searchpanel->Location = System::Drawing::Point(432, 28);
            this->searchpanel->Name = L"searchpanel";
            this->searchpanel->Size = System::Drawing::Size(817, 67);
            this->searchpanel->TabIndex = 3;
            // 
            // searchpictureBox
            // 
            this->searchpictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchpictureBox.Image")));
            this->searchpictureBox->Location = System::Drawing::Point(700, 15);
            this->searchpictureBox->Name = L"searchpictureBox";
            this->searchpictureBox->Size = System::Drawing::Size(68, 39);
            this->searchpictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->searchpictureBox->TabIndex = 8;
            this->searchpictureBox->TabStop = false;
            this->searchpictureBox->Click += gcnew System::EventHandler(this, &ViewGrades::searchbutton_Click);
            // 
            // semestercomboBox
            // 
            this->semestercomboBox->FormattingEnabled = true;
            this->semestercomboBox->Location = System::Drawing::Point(472, 18);
            this->semestercomboBox->Name = L"semestercomboBox";
            this->semestercomboBox->Size = System::Drawing::Size(169, 32);
            this->semestercomboBox->TabIndex = 7;
            // 
            // yearcomboBox
            // 
            this->yearcomboBox->FormattingEnabled = true;
            this->yearcomboBox->Location = System::Drawing::Point(178, 15);
            this->yearcomboBox->Name = L"yearcomboBox";
            this->yearcomboBox->Size = System::Drawing::Size(169, 32);
            this->yearcomboBox->TabIndex = 6;
            // 
            // semesterlabel
            // 
            this->semesterlabel->AutoSize = true;
            this->semesterlabel->Location = System::Drawing::Point(368, 18);
            this->semesterlabel->Name = L"semesterlabel";
            this->semesterlabel->Size = System::Drawing::Size(98, 24);
            this->semesterlabel->TabIndex = 5;
            this->semesterlabel->Text = L"Semester";
            // 
            // yearlabel
            // 
            this->yearlabel->AutoSize = true;
            this->yearlabel->Location = System::Drawing::Point(112, 21);
            this->yearlabel->Name = L"yearlabel";
            this->yearlabel->Size = System::Drawing::Size(50, 24);
            this->yearlabel->TabIndex = 4;
            this->yearlabel->Text = L"Year";
            // 
            // gradesflowLayoutPanel
            // 
            this->gradesflowLayoutPanel->AutoScroll = true;
            this->gradesflowLayoutPanel->Controls->Add(this->panel5);
            this->gradesflowLayoutPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
            this->gradesflowLayoutPanel->Location = System::Drawing::Point(432, 132);
            this->gradesflowLayoutPanel->Name = L"gradesflowLayoutPanel";
            this->gradesflowLayoutPanel->Size = System::Drawing::Size(903, 550);
            this->gradesflowLayoutPanel->TabIndex = 4;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->panel5->Controls->Add(this->button1);
            this->panel5->Controls->Add(this->pictureBox8);
            this->panel5->Controls->Add(this->label7);
            this->panel5->Controls->Add(this->label6);
            this->panel5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel5->ForeColor = System::Drawing::SystemColors::ControlText;
            this->panel5->Location = System::Drawing::Point(3, 3);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(276, 256);
            this->panel5->TabIndex = 0;
            this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewGrades::panel5_Paint);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::AliceBlue;
            this->button1->Location = System::Drawing::Point(175, 215);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(83, 28);
            this->button1->TabIndex = 3;
            this->button1->Text = L"retake";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &ViewGrades::button1_Click);
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(85, 32);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(111, 91);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox8->TabIndex = 2;
            this->pictureBox8->TabStop = false;
            this->pictureBox8->Click += gcnew System::EventHandler(this, &ViewGrades::pictureBox8_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(12, 186);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(65, 24);
            this->label7->TabIndex = 1;
            this->label7->Text = L"Grade";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(12, 143);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(124, 24);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Coursename";
            this->label6->Click += gcnew System::EventHandler(this, &ViewGrades::label6_Click);
            // 
            // ViewGrades
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->ClientSize = System::Drawing::Size(1526, 755);
            this->Controls->Add(this->gradesflowLayoutPanel);
            this->Controls->Add(this->searchpanel);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->flowLayoutPanel1);
            this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"ViewGrades";
            this->Text = L"View grades";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &ViewGrades::ViewGrades_Load);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->searchpanel->ResumeLayout(false);
            this->searchpanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchpictureBox))->EndInit();
            this->gradesflowLayoutPanel->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle course registration click
        }

        System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle view grades click
        }

        System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle view report click
        }

        System::Void ViewGrades_Load(System::Object^ sender, System::EventArgs^ e) {
            // Form load event
        }

        System::Void searchbutton_Click(System::Object^ sender, System::EventArgs^ e) {
            gradesflowLayoutPanel->Controls->Clear();

            String^ selectedYear = yearcomboBox->SelectedItem->ToString();
            String^ selectedSemester = semestercomboBox->SelectedItem->ToString();

            /* for each (CourseGrade ^ grade in studentGrades) {
                 bool yearMatch = (selectedYear == "All Years") || (grade->Year == selectedYear);
                 bool semesterMatch = (selectedSemester == "All Semesters") || (grade->Semester == selectedSemester);

                 if (yearMatch && semesterMatch) {
                     AddGradeBox(grade->CourseName, grade->Semester, grade->Year, grade->Grade);
                 }
             }*/
        }
        
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


}



private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}


};
}

