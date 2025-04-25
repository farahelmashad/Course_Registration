#pragma once
//#include"course_info.h"
#include"Course.h"
#include"Utils.h"
#include"FileManager.h"
//#include"course_pre.h"
// ref class course_pre;
// ref class course_info;
 namespace CourseRegistration {

	 using namespace System;
	 using namespace System::ComponentModel;
	 using namespace System::Collections;
	 using namespace System::Windows::Forms;
	 using namespace System::Data;
	 using namespace System::Drawing;

	 /// <summary>
	 /// Summary for Course_registration
	 /// </summary>
	 public ref class Course_registration : public System::Windows::Forms::Form
	 {
	 public:
		 Course_registration(void)
		 {
			 InitializeComponent();
			 //
			 //TODO: Add the constructor code here
			 //
		 }
		 void CreateCoursePanel(Course course, Random^ rand);
		 void DisplayAllCourses(map<string, Course> courses);


	 protected:
		 /// <summary>
		 /// Clean up any resources being used.
		 /// </summary>
		 ~Course_registration()
		 {
			 if (components)
			 {
				 delete components;
			 }
		 }

	 protected:












	 private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	 private: System::Windows::Forms::Panel^ panel1;



	 private: System::Windows::Forms::Panel^ panel2;
	 private: System::Windows::Forms::Label^ label3;
	 private: System::Windows::Forms::PictureBox^ pictureBox2;
	 private: System::Windows::Forms::Panel^ panel3;
	 private: System::Windows::Forms::Label^ label4;
	 private: System::Windows::Forms::PictureBox^ pictureBox3;
	 private: System::Windows::Forms::Panel^ panel4;
	 private: System::Windows::Forms::Label^ label5;
	 private: System::Windows::Forms::PictureBox^ pictureBox4;
	 private: System::Windows::Forms::Label^ course_r;
	 private: System::Windows::Forms::TextBox^ searchBar;
	 private: System::Windows::Forms::Panel^ panel6;
	 private: System::Windows::Forms::Label^ label6;
	 private: System::Windows::Forms::Label^ label7;
	 private: System::Windows::Forms::Panel^ panel5;
	 private: System::Windows::Forms::Label^ label8;
	 private: System::Windows::Forms::Panel^ panel7;
	 private: System::Windows::Forms::Label^ label9;
	 private: System::Windows::Forms::Label^ label10;
	 private: System::Windows::Forms::PictureBox^ pictureBox8;
	 private: System::Windows::Forms::PictureBox^ pictureBox7;
	 private: System::Windows::Forms::PictureBox^ pictureBox1;
	 private: System::Windows::Forms::Label^ label1;


	 private: System::Windows::Forms::PictureBox^ search;
	 private: System::Void CoursePanel_Click(System::Object^ sender, System::EventArgs^ e);

	 private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	 private: System::Windows::Forms::Panel^ course_lay;
	 private: System::Windows::Forms::Label^ course_nameout;

	 private: System::Windows::Forms::PictureBox^ pictureBox6;
	 private: System::Windows::Forms::Label^ credit_hoursout;
	 private: System::Windows::Forms::Label^ course_idout;



	 private: System::Windows::Forms::Label^ credit_hours;
	 private: System::Windows::Forms::PictureBox^ pictureBox5;
	 private:System::Random^ rand;









	 private:
		 /// <summary>
		 /// Required designer variable.
		 /// </summary>
		 System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		 /// <summary>
		 /// Required method for Designer support - do not modify
		 /// the contents of this method with the code editor.
		 /// </summary>
		 void InitializeComponent(void)
		 {
			 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Course_registration::typeid));
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
			 this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			 this->label5 = (gcnew System::Windows::Forms::Label());
			 this->panel6 = (gcnew System::Windows::Forms::Panel());
			 this->label7 = (gcnew System::Windows::Forms::Label());
			 this->label6 = (gcnew System::Windows::Forms::Label());
			 this->panel5 = (gcnew System::Windows::Forms::Panel());
			 this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			 this->label8 = (gcnew System::Windows::Forms::Label());
			 this->panel7 = (gcnew System::Windows::Forms::Panel());
			 this->label9 = (gcnew System::Windows::Forms::Label());
			 this->label10 = (gcnew System::Windows::Forms::Label());
			 this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			 this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			 this->course_r = (gcnew System::Windows::Forms::Label());
			 this->searchBar = (gcnew System::Windows::Forms::TextBox());
			 this->search = (gcnew System::Windows::Forms::PictureBox());
			 this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			 this->course_lay = (gcnew System::Windows::Forms::Panel());
			 this->credit_hours = (gcnew System::Windows::Forms::Label());
			 this->credit_hoursout = (gcnew System::Windows::Forms::Label());
			 this->course_idout = (gcnew System::Windows::Forms::Label());
			 this->course_nameout = (gcnew System::Windows::Forms::Label());
			 this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			 this->flowLayoutPanel1->SuspendLayout();
			 this->panel1->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			 this->panel2->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			 this->panel3->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			 this->panel4->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			 this->panel6->SuspendLayout();
			 this->panel5->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			 this->panel7->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search))->BeginInit();
			 this->course_lay->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			 this->flowLayoutPanel1->Controls->Add(this->panel5);
			 this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			 this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			 this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			 this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			 this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			 this->flowLayoutPanel1->Size = System::Drawing::Size(253, 558);
			 this->flowLayoutPanel1->TabIndex = 1;
			 // 
			 // panel1
			 // 
			 this->panel1->Controls->Add(this->label1);
			 this->panel1->Controls->Add(this->pictureBox1);
			 this->panel1->Location = System::Drawing::Point(0, 0);
			 this->panel1->Margin = System::Windows::Forms::Padding(0);
			 this->panel1->Name = L"panel1";
			 this->panel1->Size = System::Drawing::Size(253, 176);
			 this->panel1->TabIndex = 0;
			 // 
			 // label1
			 // 
			 this->label1->AutoSize = true;
			 this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label1->ForeColor = System::Drawing::Color::White;
			 this->label1->Location = System::Drawing::Point(70, 117);
			 this->label1->Margin = System::Windows::Forms::Padding(0);
			 this->label1->Name = L"label1";
			 this->label1->Size = System::Drawing::Size(102, 23);
			 this->label1->TabIndex = 3;
			 this->label1->Text = L"User name";
			 this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			 // 
			 // pictureBox1
			 // 
			 this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			 this->pictureBox1->Location = System::Drawing::Point(0, 0);
			 this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			 this->pictureBox1->Name = L"pictureBox1";
			 this->pictureBox1->Size = System::Drawing::Size(253, 113);
			 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox1->TabIndex = 2;
			 this->pictureBox1->TabStop = false;
			 // 
			 // panel2
			 // 
			 this->panel2->Controls->Add(this->label3);
			 this->panel2->Controls->Add(this->pictureBox2);
			 this->panel2->Location = System::Drawing::Point(0, 176);
			 this->panel2->Margin = System::Windows::Forms::Padding(0);
			 this->panel2->Name = L"panel2";
			 this->panel2->Size = System::Drawing::Size(253, 100);
			 this->panel2->TabIndex = 1;
			 this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Course_registration::panel2_Paint);
			 this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Course_registration::panel2_MouseClick);
			 this->panel2->MouseEnter += gcnew System::EventHandler(this, &Course_registration::panel2_MouseEnter);
			 this->panel2->MouseLeave += gcnew System::EventHandler(this, &Course_registration::panel2_MouseLeave);
			 // 
			 // label3
			 // 
			 this->label3->AutoSize = true;
			 this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label3->ForeColor = System::Drawing::Color::White;
			 this->label3->Location = System::Drawing::Point(73, 43);
			 this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->label3->Name = L"label3";
			 this->label3->Size = System::Drawing::Size(141, 18);
			 this->label3->TabIndex = 1;
			 this->label3->Text = L"Course Registration";
			 // 
			 // pictureBox2
			 // 
			 this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			 this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			 this->pictureBox2->Location = System::Drawing::Point(18, 33);
			 this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
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
			 this->panel3->Location = System::Drawing::Point(0, 276);
			 this->panel3->Margin = System::Windows::Forms::Padding(0);
			 this->panel3->Name = L"panel3";
			 this->panel3->Size = System::Drawing::Size(253, 100);
			 this->panel3->TabIndex = 2;
			 this->panel3->MouseEnter += gcnew System::EventHandler(this, &Course_registration::panel3_MouseEnter);
			 this->panel3->MouseLeave += gcnew System::EventHandler(this, &Course_registration::panel3_MouseLeave);
			 // 
			 // label4
			 // 
			 this->label4->AutoSize = true;
			 this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label4->ForeColor = System::Drawing::Color::White;
			 this->label4->Location = System::Drawing::Point(74, 40);
			 this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->label4->Name = L"label4";
			 this->label4->Size = System::Drawing::Size(93, 18);
			 this->label4->TabIndex = 1;
			 this->label4->Text = L"View Grades";
			 // 
			 // pictureBox3
			 // 
			 this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			 this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			 this->pictureBox3->Location = System::Drawing::Point(17, 29);
			 this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			 this->pictureBox3->Name = L"pictureBox3";
			 this->pictureBox3->Size = System::Drawing::Size(55, 39);
			 this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox3->TabIndex = 0;
			 this->pictureBox3->TabStop = false;
			 // 
			 // panel4
			 // 
			 this->panel4->Controls->Add(this->pictureBox8);
			 this->panel4->Controls->Add(this->label5);
			 this->panel4->Controls->Add(this->panel6);
			 this->panel4->Location = System::Drawing::Point(0, 376);
			 this->panel4->Margin = System::Windows::Forms::Padding(0);
			 this->panel4->Name = L"panel4";
			 this->panel4->Size = System::Drawing::Size(253, 91);
			 this->panel4->TabIndex = 4;
			 this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Course_registration::panel4_Paint);
			 this->panel4->MouseEnter += gcnew System::EventHandler(this, &Course_registration::panel4_MouseEnter);
			 this->panel4->MouseLeave += gcnew System::EventHandler(this, &Course_registration::panel4_MouseLeave);
			 // 
			 // pictureBox8
			 // 
			 this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			 this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			 this->pictureBox8->Location = System::Drawing::Point(18, 28);
			 this->pictureBox8->Name = L"pictureBox8";
			 this->pictureBox8->Size = System::Drawing::Size(57, 41);
			 this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox8->TabIndex = 7;
			 this->pictureBox8->TabStop = false;
			 // 
			 // label5
			 // 
			 this->label5->AutoSize = true;
			 this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label5->ForeColor = System::Drawing::Color::White;
			 this->label5->Location = System::Drawing::Point(78, 38);
			 this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->label5->Name = L"label5";
			 this->label5->Size = System::Drawing::Size(90, 18);
			 this->label5->TabIndex = 1;
			 this->label5->Text = L"View Report";
			 // 
			 // panel6
			 // 
			 this->panel6->Controls->Add(this->label7);
			 this->panel6->Controls->Add(this->label6);
			 this->panel6->Location = System::Drawing::Point(0, 91);
			 this->panel6->Margin = System::Windows::Forms::Padding(0);
			 this->panel6->Name = L"panel6";
			 this->panel6->Size = System::Drawing::Size(253, 91);
			 this->panel6->TabIndex = 5;
			 // 
			 // label7
			 // 
			 this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			 this->label7->AutoSize = true;
			 this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label7->Location = System::Drawing::Point(0, 0);
			 this->label7->Name = L"label7";
			 this->label7->Size = System::Drawing::Size(142, 18);
			 this->label7->TabIndex = 5;
			 this->label7->Text = L"Check Prerequisites";
			 this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			 // 
			 // label6
			 // 
			 this->label6->AutoSize = true;
			 this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label6->ForeColor = System::Drawing::Color::White;
			 this->label6->Location = System::Drawing::Point(75, 31);
			 this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->label6->Name = L"label6";
			 this->label6->Size = System::Drawing::Size(90, 18);
			 this->label6->TabIndex = 1;
			 this->label6->Text = L"View Report";
			 // 
			 // panel5
			 // 
			 this->panel5->Controls->Add(this->pictureBox7);
			 this->panel5->Controls->Add(this->label8);
			 this->panel5->Controls->Add(this->panel7);
			 this->panel5->Location = System::Drawing::Point(0, 467);
			 this->panel5->Margin = System::Windows::Forms::Padding(0);
			 this->panel5->Name = L"panel5";
			 this->panel5->Size = System::Drawing::Size(253, 91);
			 this->panel5->TabIndex = 5;
			 this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Course_registration::panel5_Paint_2);
		//	 this->panel5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Course_registration::panel5_MouseClick);
			 this->panel5->MouseEnter += gcnew System::EventHandler(this, &Course_registration::panel5_MouseEnter_1);
			 this->panel5->MouseLeave += gcnew System::EventHandler(this, &Course_registration::panel5_MouseLeave_1);
			 // 
			 // pictureBox7
			 // 
			 this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			 this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			 this->pictureBox7->Location = System::Drawing::Point(14, 25);
			 this->pictureBox7->Name = L"pictureBox7";
			 this->pictureBox7->Size = System::Drawing::Size(57, 41);
			 this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox7->TabIndex = 6;
			 this->pictureBox7->TabStop = false;
			 // 
			 // label8
			 // 
			 this->label8->AutoSize = true;
			 this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label8->ForeColor = System::Drawing::Color::White;
			 this->label8->Location = System::Drawing::Point(71, 40);
			 this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->label8->Name = L"label8";
			 this->label8->Size = System::Drawing::Size(142, 18);
			 this->label8->TabIndex = 1;
			 this->label8->Text = L"Check Prerequisites";
			 // 
			 // panel7
			 // 
			 this->panel7->Controls->Add(this->label9);
			 this->panel7->Controls->Add(this->label10);
			 this->panel7->Location = System::Drawing::Point(0, 91);
			 this->panel7->Margin = System::Windows::Forms::Padding(0);
			 this->panel7->Name = L"panel7";
			 this->panel7->Size = System::Drawing::Size(253, 91);
			 this->panel7->TabIndex = 5;
			 // 
			 // label9
			 // 
			 this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			 this->label9->AutoSize = true;
			 this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->label9->Location = System::Drawing::Point(0, 0);
			 this->label9->Name = L"label9";
			 this->label9->Size = System::Drawing::Size(142, 18);
			 this->label9->TabIndex = 5;
			 this->label9->Text = L"Check Prerequisites";
			 this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			 // 
			 // label10
			 // 
			 this->label10->AutoSize = true;
			 this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->label10->ForeColor = System::Drawing::Color::White;
			 this->label10->Location = System::Drawing::Point(75, 31);
			 this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->label10->Name = L"label10";
			 this->label10->Size = System::Drawing::Size(90, 18);
			 this->label10->TabIndex = 1;
			 this->label10->Text = L"View Report";
			 // 
			 // pictureBox4
			 // 
			 this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			 this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			 this->pictureBox4->Location = System::Drawing::Point(2, 21);
			 this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			 this->pictureBox4->Name = L"pictureBox4";
			 this->pictureBox4->Size = System::Drawing::Size(55, 39);
			 this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox4->TabIndex = 0;
			 this->pictureBox4->TabStop = false;
			 // 
			 // pictureBox6
			 // 
			 this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			 this->pictureBox6->Location = System::Drawing::Point(30, 4);
			 this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			 this->pictureBox6->Name = L"pictureBox6";
			 this->pictureBox6->Size = System::Drawing::Size(119, 74);
			 this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox6->TabIndex = 1;
			 this->pictureBox6->TabStop = false;
			 // 
			 // course_r
			 // 
			 this->course_r->AutoSize = true;
			 this->course_r->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->course_r->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				 static_cast<System::Int32>(static_cast<System::Byte>(68)));
			 this->course_r->Location = System::Drawing::Point(568, 10);
			 this->course_r->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->course_r->Name = L"course_r";
			 this->course_r->Size = System::Drawing::Size(330, 42);
			 this->course_r->TabIndex = 19;
			 this->course_r->Text = L"Course Registration";
			 // 
			 // searchBar
			 // 
			 this->searchBar->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->searchBar->Location = System::Drawing::Point(585, 63);
			 this->searchBar->Margin = System::Windows::Forms::Padding(2);
			 this->searchBar->Multiline = true;
			 this->searchBar->Name = L"searchBar";
			 this->searchBar->Size = System::Drawing::Size(261, 31);
			 this->searchBar->TabIndex = 20;
			 this->searchBar->TextChanged += gcnew System::EventHandler(this, &Course_registration::textBox1_TextChanged);
			 // 
			 // search
			 // 
			 this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				 static_cast<System::Int32>(static_cast<System::Byte>(68)));
			 this->search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search.Image")));
			 this->search->Location = System::Drawing::Point(857, 63);
			 this->search->Margin = System::Windows::Forms::Padding(2);
			 this->search->Name = L"search";
			 this->search->Size = System::Drawing::Size(38, 30);
			 this->search->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->search->TabIndex = 21;
			 this->search->TabStop = false;
			 this->search->Click += gcnew System::EventHandler(this, &Course_registration::search_Click);
			 // 
			 // flowLayoutPanel2
			 // 
			 this->flowLayoutPanel2->AutoScroll = true;
			 this->flowLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			 this->flowLayoutPanel2->Location = System::Drawing::Point(320, 123);
			 this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			 this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			 this->flowLayoutPanel2->Size = System::Drawing::Size(960, 500);
			 this->flowLayoutPanel2->TabIndex = 22;
			 // 
			 // course_lay
			 // 
			 this->course_lay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				 static_cast<System::Int32>(static_cast<System::Byte>(68)));
			 this->course_lay->Controls->Add(this->credit_hours);
			 this->course_lay->Controls->Add(this->credit_hoursout);
			 this->course_lay->Controls->Add(this->course_idout);
			 this->course_lay->Controls->Add(this->pictureBox6);
			 this->course_lay->Controls->Add(this->course_nameout);
			 this->course_lay->Location = System::Drawing::Point(2, 2);
			 this->course_lay->Margin = System::Windows::Forms::Padding(2);
			 this->course_lay->Name = L"course_lay";
			 this->course_lay->Size = System::Drawing::Size(190, 172);
			 this->course_lay->TabIndex = 0;
			 this->course_lay->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Course_registration::panel5_Paint_1);
			 this->course_lay->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Course_registration::course_lay_MouseClick);
			 // 
			 // credit_hours
			 // 
			 this->credit_hours->AutoSize = true;
			 this->credit_hours->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->credit_hours->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->credit_hours->Location = System::Drawing::Point(56, 115);
			 this->credit_hours->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->credit_hours->Name = L"credit_hours";
			 this->credit_hours->Size = System::Drawing::Size(95, 18);
			 this->credit_hours->TabIndex = 4;
			 this->credit_hours->Text = L"credit hours :";
			 // 
			 // credit_hoursout
			 // 
			 this->credit_hoursout->AutoSize = true;
			 this->credit_hoursout->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->credit_hoursout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->credit_hoursout->Location = System::Drawing::Point(147, 117);
			 this->credit_hoursout->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->credit_hoursout->Name = L"credit_hoursout";
			 this->credit_hoursout->Size = System::Drawing::Size(16, 18);
			 this->credit_hoursout->TabIndex = 3;
			 this->credit_hoursout->Text = L"3";
			 // 
			 // course_idout
			 // 
			 this->course_idout->AutoSize = true;
			 this->course_idout->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->course_idout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->course_idout->Location = System::Drawing::Point(9, 115);
			 this->course_idout->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->course_idout->Name = L"course_idout";
			 this->course_idout->Size = System::Drawing::Size(43, 18);
			 this->course_idout->TabIndex = 2;
			 this->course_idout->Text = L"cis50";
			 // 
			 // course_nameout
			 // 
			 this->course_nameout->AutoSize = true;
			 this->course_nameout->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
			 this->course_nameout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->course_nameout->Location = System::Drawing::Point(40, 90);
			 this->course_nameout->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			 this->course_nameout->Name = L"course_nameout";
			 this->course_nameout->Size = System::Drawing::Size(94, 18);
			 this->course_nameout->TabIndex = 0;
			 this->course_nameout->Text = L"course name";
			 // 
			 // pictureBox5
			 // 
			 this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			 this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			 this->pictureBox5->Location = System::Drawing::Point(932, 7);
			 this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			 this->pictureBox5->Name = L"pictureBox5";
			 this->pictureBox5->Size = System::Drawing::Size(55, 41);
			 this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox5->TabIndex = 23;
			 this->pictureBox5->TabStop = false;
			 // 
			 // Course_registration
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			 this->BackColor = System::Drawing::Color::Honeydew;
			 this->ClientSize = System::Drawing::Size(987, 558);
			 this->Controls->Add(this->pictureBox5);
			 this->Controls->Add(this->flowLayoutPanel2);
			 this->Controls->Add(this->search);
			 this->Controls->Add(this->searchBar);
			 this->Controls->Add(this->course_r);
			 this->Controls->Add(this->flowLayoutPanel1);
			 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			 this->Margin = System::Windows::Forms::Padding(2);
			 this->Name = L"Course_registration";
			 this->Text = L"Course_registration";
			 this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			 this->Load += gcnew System::EventHandler(this, &Course_registration::Course_registration_Load);
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
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			 this->panel6->ResumeLayout(false);
			 this->panel6->PerformLayout();
			 this->panel5->ResumeLayout(false);
			 this->panel5->PerformLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			 this->panel7->ResumeLayout(false);
			 this->panel7->PerformLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search))->EndInit();
			 this->course_lay->ResumeLayout(false);
			 this->course_lay->PerformLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			 this->ResumeLayout(false);
			 this->PerformLayout();

		 }
#pragma endregion
	 private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	 }
	 private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	 }
	 private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	 }
	 private: System::Void panel5_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	 }
	 private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
		 string courseID = Utils::toStdString(searchBar->Text);
		 Course c = Course::SearchCourse(courseID);
		 if (c.getCreditHours() == 0) {
			 MessageBox::Show("Course not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
		 else {
			 Random^ rand = gcnew Random();
			 this->flowLayoutPanel2->Controls->Clear();
			 CreateCoursePanel(c, rand);

		 }
	 }
			System::Void Course_registration::Panel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
				Panel^ panel = dynamic_cast<Panel^>(sender);
				if (panel != nullptr) {
					panel->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
					panel->Cursor = Cursors::Hand;
					panel->Size = System::Drawing::Size(210, 220);

				}
			}

			System::Void Course_registration::Panel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
				Panel^ panel = dynamic_cast<Panel^>(sender);
				if (panel != nullptr) {
					panel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
					panel->Cursor = Cursors::Default;
					panel->Size = System::Drawing::Size(210, 210);

				}
			}
	 private: System::Void course_lay_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	 }
	 private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	 }
	 private: System::Void Course_registration_Load(System::Object^ sender, System::EventArgs^ e) {
	 }
	 private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 }
	 private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	 }
	 private: System::Void panel2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		 panel2->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
		 panel2->Cursor = Cursors::Hand;

	 }

	 private: System::Void panel2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		 panel2->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
		 panel2->Cursor = Cursors::Hand;

	 }
	 private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {}
	 private: System::Void panel3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		 panel3->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
		 panel3->Cursor = Cursors::Hand;

	 }

     private: System::Void panel3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel3->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel3->Cursor = Cursors::Hand;

}
	private: System::Void panel4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		panel4->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
		panel4->Cursor = Cursors::Hand;

	}

private: System::Void panel4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel4->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel4->Cursor = Cursors::Hand;

}
		private: System::Void panel7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			panel7->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
			panel7->Cursor = Cursors::Hand;

		}

private: System::Void panel7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel7->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel7->Cursor = Cursors::Hand;

}
		private: System::Void panel5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			panel5->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
			panel5->Cursor = Cursors::Hand;

		}

private: System::Void panel5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel5->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel5->Cursor = Cursors::Hand;

}

private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel5_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
//private: System::Void panel5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//course_pre^ cp = gcnew course_pre();
	//cp->ShowDialog();
	//this->Hide();
	//this->Close();

//}
private: System::Void panel5_MouseEnter_1(System::Object^ sender, System::EventArgs^ e) {
	panel5->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
	panel5->Cursor = Cursors::Hand;

}
private: System::Void panel5_MouseLeave_1(System::Object^ sender, System::EventArgs^ e) {
	panel5->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel5->Cursor = Cursors::Hand;

}
};

			/*void Course_registration::CreateCoursePanel(Course course)
			{
				Panel^ coursePanel = gcnew Panel();
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
			}*/
			/*void Course_registration::DisplayAllCourses(map<string, Course> courses)
			{
				this->flowLayoutPanel2->Controls->Clear();
				for (auto pair : courses)
				{
					Course course = pair.second;
					CreateCoursePanel(course);
				}

			}
			*/
	 }
