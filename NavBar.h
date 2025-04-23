#pragma once
#include"Course_registration.h"
#include"course_pre.h"
#include"Utils.h"
#include"FileManager.h"
#include"course_pre.h"
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
	public ref class NavBar : public System::Windows::Forms::Form
	{
	public:
		NavBar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void createCurrentCoursePanel(Course course);
		void displayAllCourses();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NavBar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ Profile;

	private: System::Windows::Forms::Label^ Stundent_id_p;
	private: System::Windows::Forms::Label^ national_id_p;
	private: System::Windows::Forms::Label^ academic_year_p;
	private: System::Windows::Forms::Label^ GPA_P;
	private: System::Windows::Forms::Label^ Gender_p;
	private: System::Windows::Forms::Label^ username_out;
	private: System::Windows::Forms::Label^ student_id_out;
	private: System::Windows::Forms::Label^ national_id_out;
	private: System::Windows::Forms::Label^ academic_year_out;
	private: System::Windows::Forms::Label^ GPA_out;
	private: System::Windows::Forms::Label^ gender_out;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ check_pre;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;



















	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel11;























private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;



















	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NavBar::typeid));
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
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->check_pre = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->Profile = (gcnew System::Windows::Forms::Label());
			this->Stundent_id_p = (gcnew System::Windows::Forms::Label());
			this->national_id_p = (gcnew System::Windows::Forms::Label());
			this->academic_year_p = (gcnew System::Windows::Forms::Label());
			this->GPA_P = (gcnew System::Windows::Forms::Label());
			this->Gender_p = (gcnew System::Windows::Forms::Label());
			this->username_out = (gcnew System::Windows::Forms::Label());
			this->student_id_out = (gcnew System::Windows::Forms::Label());
			this->national_id_out = (gcnew System::Windows::Forms::Label());
			this->academic_year_out = (gcnew System::Windows::Forms::Label());
			this->GPA_out = (gcnew System::Windows::Forms::Label());
			this->gender_out = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel5->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel11->SuspendLayout();
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
			this->flowLayoutPanel1->Size = System::Drawing::Size(253, 562);
			this->flowLayoutPanel1->TabIndex = 1;
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
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &NavBar::panel1_MouseEnter);
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &NavBar::panel1_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(74, 117);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &NavBar::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 5);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 113);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &NavBar::pictureBox1_Click);
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
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NavBar::panel2_Paint);
			this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &NavBar::panel2_MouseClick);
			this->panel2->MouseEnter += gcnew System::EventHandler(this, &NavBar::panel2_MouseEnter);
			this->panel2->MouseLeave += gcnew System::EventHandler(this, &NavBar::panel2_MouseLeave);
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
			this->label3->Click += gcnew System::EventHandler(this, &NavBar::label3_Click);
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
			this->panel3->MouseEnter += gcnew System::EventHandler(this, &NavBar::panel3_MouseEnter);
			this->panel3->MouseLeave += gcnew System::EventHandler(this, &NavBar::panel3_MouseLeave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(66, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"View Grades";
			this->label4->Click += gcnew System::EventHandler(this, &NavBar::label4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
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
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Location = System::Drawing::Point(0, 378);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(253, 91);
			this->panel4->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label6);
			this->panel6->Controls->Add(this->pictureBox6);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(253, 91);
			this->panel6->TabIndex = 4;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NavBar::panel6_Paint);
			this->panel6->MouseEnter += gcnew System::EventHandler(this, &NavBar::panel6_MouseEnter);
			this->panel6->MouseLeave += gcnew System::EventHandler(this, &NavBar::panel6_MouseLeave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(63, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 18);
			this->label6->TabIndex = 1;
			this->label6->Text = L"View Report";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(3, 26);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(57, 41);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
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
			this->label5->Click += gcnew System::EventHandler(this, &NavBar::label5_Click);
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
			this->panel7->Controls->Add(this->check_pre);
			this->panel7->Controls->Add(this->pictureBox7);
			this->panel7->Location = System::Drawing::Point(0, 469);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(253, 93);
			this->panel7->TabIndex = 18;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NavBar::panel7_Paint);
			this->panel7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &NavBar::panel7_MouseClick);
			this->panel7->MouseEnter += gcnew System::EventHandler(this, &NavBar::panel7_MouseEnter);
			this->panel7->MouseLeave += gcnew System::EventHandler(this, &NavBar::panel7_MouseLeave);
			// 
			// check_pre
			// 
			this->check_pre->AutoSize = true;
			this->check_pre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check_pre->ForeColor = System::Drawing::Color::White;
			this->check_pre->Location = System::Drawing::Point(63, 38);
			this->check_pre->Name = L"check_pre";
			this->check_pre->Size = System::Drawing::Size(133, 18);
			this->check_pre->TabIndex = 1;
			this->check_pre->Text = L"Check prerequisite";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
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
			this->pictureBox5->Location = System::Drawing::Point(1197, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(73, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			// 
			// Profile
			// 
			this->Profile->AutoSize = true;
			this->Profile->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Profile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Profile->Location = System::Drawing::Point(272, 80);
			this->Profile->Name = L"Profile";
			this->Profile->Size = System::Drawing::Size(281, 58);
			this->Profile->TabIndex = 3;
			this->Profile->Text = L"Profile Data";
			this->Profile->Click += gcnew System::EventHandler(this, &NavBar::Profile_Click);
			// 
			// Stundent_id_p
			// 
			this->Stundent_id_p->AutoSize = true;
			this->Stundent_id_p->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Stundent_id_p->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Stundent_id_p->Location = System::Drawing::Point(26, 170);
			this->Stundent_id_p->Name = L"Stundent_id_p";
			this->Stundent_id_p->Size = System::Drawing::Size(117, 25);
			this->Stundent_id_p->TabIndex = 6;
			this->Stundent_id_p->Text = L"Student ID ";
			// 
			// national_id_p
			// 
			this->national_id_p->AutoSize = true;
			this->national_id_p->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->national_id_p->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->national_id_p->Location = System::Drawing::Point(26, 201);
			this->national_id_p->Name = L"national_id_p";
			this->national_id_p->Size = System::Drawing::Size(122, 25);
			this->national_id_p->TabIndex = 7;
			this->national_id_p->Text = L"National ID ";
			// 
			// academic_year_p
			// 
			this->academic_year_p->AutoSize = true;
			this->academic_year_p->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->academic_year_p->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->academic_year_p->Location = System::Drawing::Point(26, 262);
			this->academic_year_p->Name = L"academic_year_p";
			this->academic_year_p->Size = System::Drawing::Size(160, 25);
			this->academic_year_p->TabIndex = 8;
			this->academic_year_p->Text = L"Academic year :";
			// 
			// GPA_P
			// 
			this->GPA_P->AutoSize = true;
			this->GPA_P->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GPA_P->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->GPA_P->Location = System::Drawing::Point(26, 289);
			this->GPA_P->Name = L"GPA_P";
			this->GPA_P->Size = System::Drawing::Size(76, 25);
			this->GPA_P->TabIndex = 9;
			this->GPA_P->Text = L"CGPA :";
			// 
			// Gender_p
			// 
			this->Gender_p->AutoSize = true;
			this->Gender_p->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gender_p->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->Gender_p->Location = System::Drawing::Point(26, 234);
			this->Gender_p->Name = L"Gender_p";
			this->Gender_p->Size = System::Drawing::Size(91, 25);
			this->Gender_p->TabIndex = 10;
			this->Gender_p->Text = L"Gender :";
			// 
			// username_out
			// 
			this->username_out->BackColor = System::Drawing::Color::Transparent;
			this->username_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->username_out->Location = System::Drawing::Point(162, 31);
			this->username_out->Name = L"username_out";
			this->username_out->Size = System::Drawing::Size(171, 38);
			this->username_out->TabIndex = 11;
			this->username_out->Text = L"Username ";
			this->username_out->Click += gcnew System::EventHandler(this, &NavBar::username_out_Click);
			// 
			// student_id_out
			// 
			this->student_id_out->BackColor = System::Drawing::Color::Transparent;
			this->student_id_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->student_id_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->student_id_out->Location = System::Drawing::Point(179, 168);
			this->student_id_out->Name = L"student_id_out";
			this->student_id_out->Size = System::Drawing::Size(115, 27);
			this->student_id_out->TabIndex = 12;
			this->student_id_out->Text = L"Username :";
			// 
			// national_id_out
			// 
			this->national_id_out->BackColor = System::Drawing::Color::Transparent;
			this->national_id_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->national_id_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->national_id_out->Location = System::Drawing::Point(179, 201);
			this->national_id_out->Name = L"national_id_out";
			this->national_id_out->Size = System::Drawing::Size(190, 23);
			this->national_id_out->TabIndex = 13;
			this->national_id_out->Text = L"Username :";
			// 
			// academic_year_out
			// 
			this->academic_year_out->BackColor = System::Drawing::Color::Transparent;
			this->academic_year_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->academic_year_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->academic_year_out->Location = System::Drawing::Point(179, 262);
			this->academic_year_out->Name = L"academic_year_out";
			this->academic_year_out->Size = System::Drawing::Size(121, 31);
			this->academic_year_out->TabIndex = 14;
			this->academic_year_out->Text = L"Username :";
			// 
			// GPA_out
			// 
			this->GPA_out->BackColor = System::Drawing::Color::Transparent;
			this->GPA_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GPA_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->GPA_out->Location = System::Drawing::Point(180, 288);
			this->GPA_out->Name = L"GPA_out";
			this->GPA_out->Size = System::Drawing::Size(43, 27);
			this->GPA_out->TabIndex = 15;
			this->GPA_out->Text = L"3.5";
			// 
			// gender_out
			// 
			this->gender_out->BackColor = System::Drawing::Color::Transparent;
			this->gender_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->gender_out->Location = System::Drawing::Point(180, 232);
			this->gender_out->Name = L"gender_out";
			this->gender_out->Size = System::Drawing::Size(120, 24);
			this->gender_out->TabIndex = 16;
			this->gender_out->Text = L"Username :";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->flowLayoutPanel2);
			this->panel5->Controls->Add(this->panel11);
			this->panel5->Location = System::Drawing::Point(256, 141);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1014, 644);
			this->panel5->TabIndex = 17;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel2->Controls->Add(this->label8);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(547, 37);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel2->Size = System::Drawing::Size(425, 604);
			this->flowLayoutPanel2->TabIndex = 21;
			this->flowLayoutPanel2->WrapContents = false;
			displayAllCourses();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label8->Location = System::Drawing::Point(24, 25);
			this->label8->Margin = System::Windows::Forms::Padding(20, 21, 20, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(230, 35);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Current Courses";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Controls->Add(this->pictureBox8);
			this->panel11->Controls->Add(this->username_out);
			this->panel11->Controls->Add(this->Stundent_id_p);
			this->panel11->Controls->Add(this->student_id_out);
			this->panel11->Controls->Add(this->national_id_p);
			this->panel11->Controls->Add(this->national_id_out);
			this->panel11->Controls->Add(this->Gender_p);
			this->panel11->Controls->Add(this->GPA_out);
			this->panel11->Controls->Add(this->gender_out);
			this->panel11->Controls->Add(this->GPA_P);
			this->panel11->Controls->Add(this->academic_year_out);
			this->panel11->Controls->Add(this->academic_year_p);
			this->panel11->Location = System::Drawing::Point(49, 37);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(404, 573);
			this->panel11->TabIndex = 20;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(14, 20);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(142, 123);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 17;
			this->pictureBox8->TabStop = false;
			// 
			// NavBar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(1282, 562);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->Profile);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"NavBar";
			this->Text = L"NavBar";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &NavBar::NavBar_Load);
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
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel5->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Profile_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_sl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NavBar_Load(System::Object^ sender, System::EventArgs^ e) {
	username_out->Text = Utils::toSysStr(currentStudent.getUserName());
	student_id_out->Text = Utils::toSysString(currentStudent.getStudentID());
	national_id_out->Text = Utils::toSysString(currentStudent.getNationalID());
	academic_year_out->Text = Utils::toSysString(currentStudent.getAcademicYear());
	GPA_out->Text = Utils::toSysString(3.5);
	gender_out->Text = Utils::toSysStr(currentStudent.getGender());
	label1->Text= Utils::toSysStr(currentStudent.getUserName());
	if (currentStudent.getGender() == 'F' || currentStudent.getGender() == 'f') {
		pictureBox1->Image = System::Drawing::Image::FromFile("C:\\Users\\Hosam\\Downloads\\programmer (1).png");
	}

}
private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Course_registration^ c1 = gcnew Course_registration();
	
	c1->ShowDialog();
	this->Hide();
	this->Close();
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void username_out_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void panel3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		   panel3->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
		   panel3->Cursor = Cursors::Hand;

	   }

private: System::Void panel3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel3->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel3->Cursor = Cursors::Hand;

}
private: System::Void panel6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel6->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
	panel6->Cursor = Cursors::Hand;

}

private: System::Void panel6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel6->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel6->Cursor = Cursors::Hand;

}
private: System::Void panel7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel7->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
	panel7->Cursor = Cursors::Hand;

}

private: System::Void panel7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel7->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
	panel7->Cursor = Cursors::Hand;

}
private: System::Void panel3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	course_pre^ pre = gcnew course_pre();
	pre->ShowDialog();
	this->Hide();
	this->Close();
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel1->Cursor = Cursors::Default;

}

private: System::Void panel1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel1->Cursor = Cursors::Default;

}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
