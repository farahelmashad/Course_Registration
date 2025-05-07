#pragma once
//#include"Course_registration.h"
#include"Utils.h"
#include"FileManager.h"
//#include "course_pre.h"

 ref class Course_registration;
 ref class NavBar;


namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for course_pre
	/// </summary>
	public ref class course_pre : public System::Windows::Forms::Form
	{
	public:
		course_pre(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void CreateCoursesPanel( Course course, Random^rand);
		void DisplayAllCourses(map<string, Course> courses);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~course_pre()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



















	private: System::Windows::Forms::Label^ course_i;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ search;
	private: System::Windows::Forms::TextBox^ textpre;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ course_lay;



	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ course_nameout;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ course_pre_out;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ check_pre;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
    System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(course_pre::typeid));
			this->course_i = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->search = (gcnew System::Windows::Forms::PictureBox());
			this->textpre = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->course_lay = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->course_pre_out = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->course_nameout = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search))->BeginInit();
			this->course_lay->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
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
			this->SuspendLayout();
			// 
			// course_i
			// 
			this->course_i->AutoSize = true;
			this->course_i->BackColor = System::Drawing::Color::Transparent;
			this->course_i->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_i->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->course_i->Location = System::Drawing::Point(581, 20);
			this->course_i->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->course_i->Name = L"course_i";
			this->course_i->Size = System::Drawing::Size(330, 42);
			this->course_i->TabIndex = 23;
			this->course_i->Text = L"Course prerequisite";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(915, 4);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(55, 41);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search.Image")));
			this->search->Location = System::Drawing::Point(873, 64);
			this->search->Margin = System::Windows::Forms::Padding(2);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(38, 30);
			this->search->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->search->TabIndex = 26;
			this->search->TabStop = false;
			this->search->Click += gcnew System::EventHandler(this, &course_pre::search_Click);
			// 
			// textpre
			// 
			this->textpre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textpre->Location = System::Drawing::Point(602, 64);
			this->textpre->Margin = System::Windows::Forms::Padding(2);
			this->textpre->Multiline = true;
			this->textpre->Name = L"textpre";
			this->textpre->Size = System::Drawing::Size(261, 31);
			this->textpre->TabIndex = 25;
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
			this->course_lay->BackColor = System::Drawing::Color::MidnightBlue;
			this->course_lay->Controls->Add(this->flowLayoutPanel3);
			this->course_lay->Controls->Add(this->pictureBox8);
			this->course_lay->Controls->Add(this->course_nameout);
			this->course_lay->Location = System::Drawing::Point(2, 2);
			this->course_lay->Margin = System::Windows::Forms::Padding(2);
			this->course_lay->Name = L"course_lay";
			this->course_lay->Size = System::Drawing::Size(169, 207);
			this->course_lay->TabIndex = 0;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->course_pre_out);
			this->flowLayoutPanel3->Location = System::Drawing::Point(2, 126);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(151, 46);
			this->flowLayoutPanel3->TabIndex = 13;
			// 
			// course_pre_out
			// 
			this->course_pre_out->AutoSize = true;
			this->course_pre_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_pre_out->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->course_pre_out->Location = System::Drawing::Point(2, 0);
			this->course_pre_out->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->course_pre_out->Name = L"course_pre_out";
			this->course_pre_out->Size = System::Drawing::Size(60, 17);
			this->course_pre_out->TabIndex = 10;
			this->course_pre_out->Text = L"calculus";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(24, 3);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(119, 74);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// course_nameout
			// 
			this->course_nameout->AutoSize = true;
			this->course_nameout->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_nameout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->course_nameout->Location = System::Drawing::Point(44, 89);
			this->course_nameout->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->course_nameout->Name = L"course_nameout";
			this->course_nameout->Size = System::Drawing::Size(64, 18);
			this->course_nameout->TabIndex = 0;
			this->course_nameout->Text = L"Discrete";
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
			this->flowLayoutPanel1->Size = System::Drawing::Size(253, 593);
			this->flowLayoutPanel1->TabIndex = 27;
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
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &course_pre::panel1_MouseClick);
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &course_pre::panel1_MouseEnter);
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &course_pre::panel1_MouseLeave);
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
		//	this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &course_pre::panel2_MouseClick);
			this->panel2->MouseEnter += gcnew System::EventHandler(this, &course_pre::panel2_MouseEnter);
			this->panel2->MouseLeave += gcnew System::EventHandler(this, &course_pre::panel2_MouseLeave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(52, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 18);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Course Registration";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 39);
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
			this->panel3->MouseEnter += gcnew System::EventHandler(this, &course_pre::panel3_MouseEnter);
			this->panel3->MouseLeave += gcnew System::EventHandler(this, &course_pre::panel3_MouseLeave_1);
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
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 26);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 40);
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
			this->panel6->MouseEnter += gcnew System::EventHandler(this, &course_pre::panel6_MouseEnter);
			this->panel6->MouseLeave += gcnew System::EventHandler(this, &course_pre::panel6_MouseLeave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(55, 38);
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
			this->pictureBox6->Size = System::Drawing::Size(50, 41);
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
			this->label5->Location = System::Drawing::Point(55, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"View Report";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 26);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 41);
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
			this->panel7->MouseEnter += gcnew System::EventHandler(this, &course_pre::panel7_MouseEnter);
			this->panel7->MouseLeave += gcnew System::EventHandler(this, &course_pre::panel7_MouseLeave);
			// 
			// check_pre
			// 
			this->check_pre->AutoSize = true;
			this->check_pre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check_pre->ForeColor = System::Drawing::Color::White;
			this->check_pre->Location = System::Drawing::Point(55, 38);
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
			this->pictureBox7->Size = System::Drawing::Size(50, 41);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// course_pre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(972, 593);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->search);
			this->Controls->Add(this->textpre);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->course_i);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"course_pre";
			this->Text = L"course_pre";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &course_pre::course_pre_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search))->EndInit();
			this->course_lay->ResumeLayout(false);
			this->course_lay->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void course_pre_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Panel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Panel^ panel = dynamic_cast<Panel^>(sender);
		if (panel != nullptr) {
			panel->BackColor = System::Drawing::Color::FromArgb(54, 70, 105);
			panel->Size = System::Drawing::Size(210, 220);

		}
	}
	 private: System::Void Panel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		 Panel^ panel = dynamic_cast<Panel^>(sender);
		 if (panel != nullptr) {
			 panel->BackColor = System::Drawing::Color::FromArgb(32, 42, 68);
			 panel->Size = System::Drawing::Size(210, 210);

		 }

	 }
private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
	string courseID = Utils::toStdString(textpre->Text);
	Course c = Course::SearchCourse(courseID);
	if (c.getCreditHours() == 0) {
		MessageBox::Show("Course not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		Random^ rand = gcnew Random();
		this->flowLayoutPanel2->Controls->Clear();
		CreateCoursesPanel(c, rand);

	}
}

private: System::Void panel3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void panel3_MouseLeave_1(System::Object^ sender, System::EventArgs^ e) {
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
/*private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Course_registration^ cg5 = gcnew Course_registration();
	cg5->ShowDialog();
	this->Hide();
	this->Close();


}
 private: System::Void panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    course_pre^ pr5 = gcnew course_pre();
	pr5->ShowDialog();
	this->Hide();
	this->Close();

}*/
private: System::Void panel1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel1->Cursor = Cursors::Hand;
}
private: System::Void panel1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel1->Cursor = Cursors::Default;
}
private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
};
}
