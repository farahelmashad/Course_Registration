#pragma once
#include "Student.h"
#include "Course.h"
#include"Course_registration.h"
#include"course_pre.h"
#include "CourseGrades.h"
#include"ViewGrades.h"
#include"FileManager.h"
#include <map>
#include <vector>
#include <msclr/marshal_cppstd.h> 
ref class Navbar;

namespace CourseRegistration {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for NavBar
    /// </summary>
    public ref class report : public System::Windows::Forms::Form
    {
    public:

        report(void) {
            InitializeComponent();
            LoadStudentReport();
        }
        Course getCourseById(const string& courseID);
        void printReportDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);
        double CalculateCGPA(const set<CourseGrades>& courseID);
        void report::LoadStudentReport();


    protected:
        ~report() {

            if (studentPtr != nullptr) {
                delete studentPtr;
                studentPtr = nullptr;
            }

        }


    private:
        Student* studentPtr;
        System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label1;

        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Panel^ panel3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Panel^ panel4;


           System::Windows::Forms::Label^ label5;
           System::Windows::Forms::PictureBox^ pictureBox4;
           System::Windows::Forms::PictureBox^ pictureBox5;
           System::Windows::Forms::Panel^ searchpanel;
    private: System::Windows::Forms::Label^ StNamelbl;
    private: System::Windows::Forms::Label^ StIDlbl;
           System::Windows::Forms::Button^ PrintRepbtn;
           System::Windows::Forms::FlowLayoutPanel^ ReportflowLayoutPanel;
           System::Drawing::Printing::PrintDocument^ printReportDocument;
           System::Windows::Forms::PrintPreviewDialog^ printPreviewReportDialog;
           System::Windows::Forms::Panel^ panel7;
           System::Windows::Forms::Label^ check_pre;
           System::Windows::Forms::PictureBox^ pictureBox7;
           System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Panel^ Sempanel;
    private: System::Windows::Forms::Label^ semlbl;
    private: System::Windows::Forms::Panel^ coursepanel;
    private: System::Windows::Forms::Label^ Glbl;
    private: System::Windows::Forms::Label^ CNlbl;
    private: System::Windows::Forms::Label^ CGPAlbl;
    private: System::Drawing::Printing::PrintDocument^ printDocument1;
    private: System::Windows::Forms::Panel^ headerPanel;

           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(report::typeid));
               this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
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
               this->CGPAlbl = (gcnew System::Windows::Forms::Label());
               this->StIDlbl = (gcnew System::Windows::Forms::Label());
               this->StNamelbl = (gcnew System::Windows::Forms::Label());
               this->PrintRepbtn = (gcnew System::Windows::Forms::Button());
               this->ReportflowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
               this->Sempanel = (gcnew System::Windows::Forms::Panel());
               this->semlbl = (gcnew System::Windows::Forms::Label());
               this->coursepanel = (gcnew System::Windows::Forms::Panel());
               this->Glbl = (gcnew System::Windows::Forms::Label());
               this->CNlbl = (gcnew System::Windows::Forms::Label());
               this->printReportDocument = (gcnew System::Drawing::Printing::PrintDocument());
               this->printPreviewReportDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
               this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
               this->headerPanel = (gcnew System::Windows::Forms::Panel());
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
               this->ReportflowLayoutPanel->SuspendLayout();
               this->Sempanel->SuspendLayout();
               this->coursepanel->SuspendLayout();
               this->headerPanel->SuspendLayout();
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
               this->flowLayoutPanel1->Size = System::Drawing::Size(253, 740);
               this->flowLayoutPanel1->TabIndex = 1;
               this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &report::flowLayoutPanel1_Paint);
               // 
               // panel1
               // 
               this->panel1->Controls->Add(this->label1);
               this->panel1->Controls->Add(this->pictureBox1);
               this->panel1->Location = System::Drawing::Point(0, 0);
               this->panel1->Margin = System::Windows::Forms::Padding(0);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(253, 178);
               this->panel1->TabIndex = 0;
               this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &report::panel1_Paint);
               this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &report::panel1_MouseClick);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F));
               this->label1->ForeColor = System::Drawing::Color::White;
               this->label1->Location = System::Drawing::Point(74, 117);
               this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(102, 23);
               this->label1->TabIndex = 1;
               this->label1->Text = L"User name";
               this->label1->Click += gcnew System::EventHandler(this, &report::label1_Click);
               // 
               // pictureBox1
               // 
               this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
               this->pictureBox1->Location = System::Drawing::Point(63, 0);
               this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(127, 113);
               this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
               this->pictureBox1->TabIndex = 0;
               this->pictureBox1->TabStop = false;
               // 
               // panel2
               // 
               this->panel2->Controls->Add(this->label3);
               this->panel2->Controls->Add(this->pictureBox2);
               this->panel2->Location = System::Drawing::Point(0, 178);
               this->panel2->Margin = System::Windows::Forms::Padding(0);
               this->panel2->Name = L"panel2";
               this->panel2->Size = System::Drawing::Size(253, 100);
               this->panel2->TabIndex = 1;
               this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &report::panel2_Paint);
               this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &report::panel2_MouseClick);
               this->panel2->MouseEnter += gcnew System::EventHandler(this, &report::panel2_MouseEnter);
               this->panel2->MouseLeave += gcnew System::EventHandler(this, &report::panel2_MouseLeave);
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label3->ForeColor = System::Drawing::Color::White;
               this->label3->Location = System::Drawing::Point(60, 40);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(141, 18);
               this->label3->TabIndex = 1;
               this->label3->Text = L"Course Registration";
               this->label3->Click += gcnew System::EventHandler(this, &report::label3_Click);
               // 
               // pictureBox2
               // 
               this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
               this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
               this->pictureBox2->Location = System::Drawing::Point(3, 28);
               this->pictureBox2->Name = L"pictureBox2";
               this->pictureBox2->Size = System::Drawing::Size(55, 39);
               this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
               this->pictureBox2->TabIndex = 0;
               this->pictureBox2->TabStop = false;
               // 
               // panel3
               // 
               this->panel3->Controls->Add(this->label4);
               this->panel3->Controls->Add(this->pictureBox3);
               this->panel3->Location = System::Drawing::Point(0, 278);
               this->panel3->Margin = System::Windows::Forms::Padding(0);
               this->panel3->Name = L"panel3";
               this->panel3->Size = System::Drawing::Size(253, 100);
               this->panel3->TabIndex = 2;
               this->panel3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &report::panel3_MouseClick);
               this->panel3->MouseEnter += gcnew System::EventHandler(this, &report::panel3_MouseEnter);
               this->panel3->MouseLeave += gcnew System::EventHandler(this, &report::panel3_MouseLeave);
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label4->ForeColor = System::Drawing::Color::White;
               this->label4->Location = System::Drawing::Point(60, 35);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(93, 18);
               this->label4->TabIndex = 1;
               this->label4->Text = L"View Grades";
               this->label4->Click += gcnew System::EventHandler(this, &report::label4_Click);
               // 
               // pictureBox3
               // 
               this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
               this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
               this->pictureBox3->Location = System::Drawing::Point(3, 26);
               this->pictureBox3->Name = L"pictureBox3";
               this->pictureBox3->Size = System::Drawing::Size(55, 39);
               this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
               this->pictureBox3->TabIndex = 0;
               this->pictureBox3->TabStop = false;
               // 
               // panel4
               // 
               this->panel4->Controls->Add(this->label5);
               this->panel4->Controls->Add(this->pictureBox4);
               this->panel4->Location = System::Drawing::Point(0, 378);
               this->panel4->Margin = System::Windows::Forms::Padding(0);
               this->panel4->Name = L"panel4";
               this->panel4->Size = System::Drawing::Size(253, 100);
               this->panel4->TabIndex = 3;
               this->panel4->MouseEnter += gcnew System::EventHandler(this, &report::panel4_MouseEnter);
               this->panel4->MouseLeave += gcnew System::EventHandler(this, &report::panel4_MouseLeave);
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label5->ForeColor = System::Drawing::Color::White;
               this->label5->Location = System::Drawing::Point(63, 38);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(90, 18);
               this->label5->TabIndex = 1;
               this->label5->Text = L"View Report";
               this->label5->Click += gcnew System::EventHandler(this, &report::label5_Click);
               // 
               // pictureBox4
               // 
               this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
               this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
               this->pictureBox4->Location = System::Drawing::Point(3, 27);
               this->pictureBox4->Name = L"pictureBox4";
               this->pictureBox4->Size = System::Drawing::Size(55, 39);
               this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
               this->pictureBox4->TabIndex = 0;
               this->pictureBox4->TabStop = false;
               // 
               // panel7
               // 
               this->panel7->Controls->Add(this->check_pre);
               this->panel7->Controls->Add(this->pictureBox7);
               this->panel7->Location = System::Drawing::Point(0, 478);
               this->panel7->Margin = System::Windows::Forms::Padding(0);
               this->panel7->Name = L"panel7";
               this->panel7->Size = System::Drawing::Size(253, 100);
               this->panel7->TabIndex = 18;
               this->panel7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &report::panel7_MouseClick);
               this->panel7->MouseEnter += gcnew System::EventHandler(this, &report::panel7_MouseEnter);
               this->panel7->MouseLeave += gcnew System::EventHandler(this, &report::panel7_MouseLeave);
               // 
               // check_pre
               // 
               this->check_pre->AutoSize = true;
               this->check_pre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->check_pre->ForeColor = System::Drawing::Color::White;
               this->check_pre->Location = System::Drawing::Point(63, 38);
               this->check_pre->Name = L"check_pre";
               this->check_pre->Size = System::Drawing::Size(142, 18);
               this->check_pre->TabIndex = 1;
               this->check_pre->Text = L"Check Prerequisites";
               // 
               // pictureBox7
               // 
               this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
               this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
               this->pictureBox7->Location = System::Drawing::Point(3, 27);
               this->pictureBox7->Name = L"pictureBox7";
               this->pictureBox7->Size = System::Drawing::Size(55, 39);
               this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
               this->pictureBox7->TabIndex = 0;
               this->pictureBox7->TabStop = false;
               // 
               // pictureBox5
               // 
               this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
               this->pictureBox5->Location = System::Drawing::Point(1071, 12);
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
               this->searchpanel->BackColor = System::Drawing::Color::Transparent;
               this->searchpanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                   static_cast<System::Int32>(static_cast<System::Byte>(68)));
               this->searchpanel->Location = System::Drawing::Point(295, 31);
               this->searchpanel->Name = L"searchpanel";
               this->searchpanel->Size = System::Drawing::Size(740, 52);
               this->searchpanel->TabIndex = 4;
               // 
               // CGPAlbl
               // 
               this->CGPAlbl->AutoSize = true;
               this->CGPAlbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 20.8F, System::Drawing::FontStyle::Bold));
               this->CGPAlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                   static_cast<System::Int32>(static_cast<System::Byte>(78)));
               this->CGPAlbl->Location = System::Drawing::Point(733, 21);
               this->CGPAlbl->Name = L"CGPAlbl";
               this->CGPAlbl->Size = System::Drawing::Size(89, 34);
               this->CGPAlbl->TabIndex = 0;
               this->CGPAlbl->Text = L"CGPA:";
               // 
               // StIDlbl
               // 
               this->StIDlbl->AutoSize = true;
               this->StIDlbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 20.8F, System::Drawing::FontStyle::Bold));
               this->StIDlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                   static_cast<System::Int32>(static_cast<System::Byte>(78)));
               this->StIDlbl->Location = System::Drawing::Point(428, 21);
               this->StIDlbl->Name = L"StIDlbl";
               this->StIDlbl->Size = System::Drawing::Size(151, 34);
               this->StIDlbl->TabIndex = 1;
               this->StIDlbl->Text = L"Student ID:";
               // 
               // StNamelbl
               // 
               this->StNamelbl->AutoSize = true;
               this->StNamelbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 20.8F, System::Drawing::FontStyle::Bold));
               this->StNamelbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                   static_cast<System::Int32>(static_cast<System::Byte>(78)));
               this->StNamelbl->Location = System::Drawing::Point(58, 21);
               this->StNamelbl->Name = L"StNamelbl";
               this->StNamelbl->Size = System::Drawing::Size(199, 34);
               this->StNamelbl->TabIndex = 2;
               this->StNamelbl->Text = L"Student Name:";
               // 
               // PrintRepbtn
               // 
               this->PrintRepbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                   static_cast<System::Int32>(static_cast<System::Byte>(68)));
               this->PrintRepbtn->Location = System::Drawing::Point(1041, 676);
               this->PrintRepbtn->Name = L"PrintRepbtn";
               this->PrintRepbtn->Size = System::Drawing::Size(103, 39);
               this->PrintRepbtn->TabIndex = 5;
               this->PrintRepbtn->Text = L"Print";
               this->PrintRepbtn->UseVisualStyleBackColor = false;
               this->PrintRepbtn->Click += gcnew System::EventHandler(this, &report::PrintRepbtn_Click);
               // 
               // ReportflowLayoutPanel
               // 
               this->ReportflowLayoutPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->ReportflowLayoutPanel->AutoScroll = true;
               this->ReportflowLayoutPanel->BackColor = System::Drawing::Color::AliceBlue;
               this->ReportflowLayoutPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
               this->ReportflowLayoutPanel->Controls->Add(this->Sempanel);
               this->ReportflowLayoutPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
               this->ReportflowLayoutPanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
                   static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
               this->ReportflowLayoutPanel->Location = System::Drawing::Point(295, 111);
               this->ReportflowLayoutPanel->Name = L"ReportflowLayoutPanel";
               this->ReportflowLayoutPanel->Size = System::Drawing::Size(849, 559);
               this->ReportflowLayoutPanel->TabIndex = 6;
               this->ReportflowLayoutPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &report::ReportflowLayoutPanel_Paint);
               // 
               // Sempanel
               // 
               this->Sempanel->BackColor = System::Drawing::Color::AliceBlue;
               this->Sempanel->Controls->Add(this->semlbl);
               this->Sempanel->Controls->Add(this->coursepanel);
               this->Sempanel->Location = System::Drawing::Point(3, 3);
               this->Sempanel->Name = L"Sempanel";
               this->Sempanel->Size = System::Drawing::Size(854, 164);
               this->Sempanel->TabIndex = 0;
               this->Sempanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &report::Sempanel_Paint);
               // 
               // semlbl
               // 
               this->semlbl->AutoSize = true;
               this->semlbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->semlbl->Location = System::Drawing::Point(15, 12);
               this->semlbl->Name = L"semlbl";
               this->semlbl->Size = System::Drawing::Size(101, 23);
               this->semlbl->TabIndex = 1;
               this->semlbl->Text = L"Semester :";
               // 
               // coursepanel
               // 
               this->coursepanel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
               this->coursepanel->Controls->Add(this->Glbl);
               this->coursepanel->Controls->Add(this->CNlbl);
               this->coursepanel->Location = System::Drawing::Point(19, 38);
               this->coursepanel->Name = L"coursepanel";
               this->coursepanel->Size = System::Drawing::Size(684, 64);
               this->coursepanel->TabIndex = 0;
               // 
               // Glbl
               // 
               this->Glbl->AutoSize = true;
               this->Glbl->Location = System::Drawing::Point(366, 13);
               this->Glbl->Name = L"Glbl";
               this->Glbl->Size = System::Drawing::Size(57, 19);
               this->Glbl->TabIndex = 3;
               this->Glbl->Text = L"Grade:";
               // 
               // CNlbl
               // 
               this->CNlbl->AutoSize = true;
               this->CNlbl->Location = System::Drawing::Point(32, 13);
               this->CNlbl->Name = L"CNlbl";
               this->CNlbl->Size = System::Drawing::Size(65, 19);
               this->CNlbl->TabIndex = 2;
               this->CNlbl->Text = L"Course:";
               // 
               // printReportDocument
               // 
               this->printReportDocument->DocumentName = L"Report";
               this->printReportDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &report::printReportDocument_PrintPage);
               // 
               // printPreviewReportDialog
               // 
               this->printPreviewReportDialog->AutoScrollMargin = System::Drawing::Size(0, 0);
               this->printPreviewReportDialog->AutoScrollMinSize = System::Drawing::Size(0, 0);
               this->printPreviewReportDialog->ClientSize = System::Drawing::Size(400, 300);
               this->printPreviewReportDialog->Document = this->printReportDocument;
               this->printPreviewReportDialog->Enabled = true;
               this->printPreviewReportDialog->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewReportDialog.Icon")));
               this->printPreviewReportDialog->Name = L"printPreviewReportDialog";
               this->printPreviewReportDialog->Visible = false;
               // 
               // printDocument1
               // 
               this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &report::printReportDocument_PrintPage);
               // 
               // headerPanel
               // 
               this->headerPanel->BackColor = System::Drawing::Color::AliceBlue;
               this->headerPanel->Controls->Add(this->StNamelbl);
               this->headerPanel->Controls->Add(this->StIDlbl);
               this->headerPanel->Controls->Add(this->CGPAlbl);
               this->headerPanel->Dock = System::Windows::Forms::DockStyle::Top;
               this->headerPanel->Location = System::Drawing::Point(253, 0);
               this->headerPanel->Name = L"headerPanel";
               this->headerPanel->Padding = System::Windows::Forms::Padding(20, 15, 20, 15);
               this->headerPanel->Size = System::Drawing::Size(903, 70);
               this->headerPanel->TabIndex = 4;
               this->headerPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &report::headerPanel_Paint);
               // 
               // report
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::AliceBlue;
               this->ClientSize = System::Drawing::Size(1156, 740);
               this->Controls->Add(this->headerPanel);
               this->Controls->Add(this->ReportflowLayoutPanel);
               this->Controls->Add(this->PrintRepbtn);
               this->Controls->Add(this->searchpanel);
               this->Controls->Add(this->pictureBox5);
               this->Controls->Add(this->flowLayoutPanel1);
               this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->ForeColor = System::Drawing::Color::White;
               this->Margin = System::Windows::Forms::Padding(4);
               this->Name = L"report";
               this->Text = L"report";
               this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
               this->Load += gcnew System::EventHandler(this, &report::NavBar_Load);
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
               this->ReportflowLayoutPanel->ResumeLayout(false);
               this->Sempanel->ResumeLayout(false);
               this->Sempanel->PerformLayout();
               this->coursepanel->ResumeLayout(false);
               this->coursepanel->PerformLayout();
               this->headerPanel->ResumeLayout(false);
               this->headerPanel->PerformLayout();
               this->ResumeLayout(false);

           }
#pragma endregion

    private:
        //  double CalculateCGPA(const set<CourseGrades>& coursesSet);
         // void LoadStudentReport();
        System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle label3 click event
        }

        System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle label4 click event
        }

        System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle label5 click event
        }

        System::Void studentNamelbl_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle student name label click event
        }

        System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle label6 click event
        }

        System::Void StIDlbl_Click(System::Object^ sender, System::EventArgs^ e) {
            // Handle student ID label click event
        }

        System::Void PrintRepbtn_Click(System::Object^ sender, System::EventArgs^ e) {
            printPreviewReportDialog->Document = printReportDocument;
            printPreviewReportDialog->ShowDialog();
        }

        // System::Void printReportDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);

        System::Void NavBar_Load(System::Object^ sender, System::EventArgs^ e) {
            label1->Text = gcnew String(currentStudent.getUserName().c_str());
            // Handle form load event
        }

        System::Void ReportflowLayoutPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
            // Handle flow layout panel paint event
        }

        System::Void headerPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
            // Draw subtle bottom border
            Panel^ panel = safe_cast<Panel^>(sender);
            e->Graphics->DrawLine(gcnew Pen(Color::FromArgb(220, 220, 220)),
                0, panel->Height - 1, panel->Width, panel->Height - 1);
        }


    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);






    private: System::Void panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);




    private: System::Void panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);


    private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void panel2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
        panel2->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
        panel2->Cursor = Cursors::Hand;

    }
    private: System::Void panel2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
        panel2->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
        panel2->Cursor = Cursors::Hand;
    }
    private: System::Void panel3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
        panel3->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
        panel3->Cursor = Cursors::Hand;
    }
    private: System::Void panel3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
        panel3->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
        panel3->Cursor = Cursors::Hand;
    }
    private: System::Void panel7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
        panel7->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
        panel7->Cursor = Cursors::Hand;
    }


    private: System::Void panel7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
        panel7->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
        panel7->Cursor = Cursors::Hand;
    }
  private: System::Void panel4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
      panel4->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
      panel4->Cursor = Cursors::Hand;
  }
private: System::Void panel4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    panel4->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
    panel4->Cursor = Cursors::Hand;

}
private: System::Void Sempanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
