#pragma once
#include"Course_registration.h"
#include"Utils.h"
#include"FileManager.h"
#include"course_pre.h"
extern string gcid;
//class Course_registration;
ref class course_pre;
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
	/// Summary for course_info
	/// </summary>
	public ref class course_info : public System::Windows::Forms::Form
	{
	public:
		course_info(System::String^ courseID)
		{
			InitializeComponent();
		    DisplayCourseInfo(courseID);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~course_info()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:













	private: System::Windows::Forms::Panel^ course_infop;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ course_i;

	private: System::Windows::Forms::Label^ coursename_out;
	private: System::Windows::Forms::Label^ courseid_out;
	private: System::Windows::Forms::Label^ syllabus;

	private: System::Windows::Forms::Label^ hours_out;
	private: System::Windows::Forms::Label^ ch;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ course_name_pre;

	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Label^ instructor_name;
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ check_pre;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label6;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(course_info::typeid));
			this->course_infop = (gcnew System::Windows::Forms::Panel());
			this->instructor_name = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->course_name_pre = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->syllabus = (gcnew System::Windows::Forms::Label());
			this->hours_out = (gcnew System::Windows::Forms::Label());
			this->ch = (gcnew System::Windows::Forms::Label());
			this->courseid_out = (gcnew System::Windows::Forms::Label());
			this->coursename_out = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->course_i = (gcnew System::Windows::Forms::Label());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->check_pre = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->course_infop->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// course_infop
			// 
			this->course_infop->Controls->Add(this->instructor_name);
			this->course_infop->Controls->Add(this->label7);
			this->course_infop->Controls->Add(this->flowLayoutPanel2);
			this->course_infop->Controls->Add(this->label6);
			this->course_infop->Controls->Add(this->syllabus);
			this->course_infop->Controls->Add(this->hours_out);
			this->course_infop->Controls->Add(this->ch);
			this->course_infop->Controls->Add(this->courseid_out);
			this->course_infop->Controls->Add(this->coursename_out);
			this->course_infop->Location = System::Drawing::Point(324, 178);
			this->course_infop->Margin = System::Windows::Forms::Padding(2);
			this->course_infop->Name = L"course_infop";
			this->course_infop->Size = System::Drawing::Size(999, 267);
			this->course_infop->TabIndex = 20;
			// 
			// instructor_name
			// 
			this->instructor_name->AutoSize = true;
			this->instructor_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->instructor_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->instructor_name->Location = System::Drawing::Point(35, 136);
			this->instructor_name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->instructor_name->Name = L"instructor_name";
			this->instructor_name->Size = System::Drawing::Size(135, 27);
			this->instructor_name->TabIndex = 14;
			this->instructor_name->Text = L"Doc mustafa";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label7->Location = System::Drawing::Point(479, 12);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(184, 33);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Prerequisites:";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->checkBox1);
			this->flowLayoutPanel2->Controls->Add(this->course_name_pre);
			this->flowLayoutPanel2->Location = System::Drawing::Point(485, 70);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel2->Size = System::Drawing::Size(170, 30);
			this->flowLayoutPanel2->TabIndex = 12;
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &course_info::flowLayoutPanel2_Paint);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 6);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Padding = System::Windows::Forms::Padding(3, 3, 0, 3);
			this->checkBox1->Size = System::Drawing::Size(18, 20);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &course_info::checkBox1_CheckedChanged);
			// 
			// course_name_pre
			// 
			this->course_name_pre->AutoSize = true;
			this->course_name_pre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_name_pre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->course_name_pre->Location = System::Drawing::Point(26, 4);
			this->course_name_pre->Margin = System::Windows::Forms::Padding(0, 0, 2, 0);
			this->course_name_pre->Name = L"course_name_pre";
			this->course_name_pre->Size = System::Drawing::Size(120, 23);
			this->course_name_pre->TabIndex = 10;
			this->course_name_pre->Text = L"course name";
			this->course_name_pre->Click += gcnew System::EventHandler(this, &course_info::course_name_pre_Click);
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(438, 23);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1, 190);
			this->label6->TabIndex = 11;
			this->label6->Click += gcnew System::EventHandler(this, &course_info::label6_Click);
			// 
			// syllabus
			// 
			this->syllabus->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->syllabus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->syllabus->Location = System::Drawing::Point(36, 189);
			this->syllabus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->syllabus->Name = L"syllabus";
			this->syllabus->Size = System::Drawing::Size(226, 113);
			this->syllabus->TabIndex = 10;
			this->syllabus->Text = L"intoduction to pragramming using c++";
			// 
			// hours_out
			// 
			this->hours_out->AutoSize = true;
			this->hours_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hours_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->hours_out->Location = System::Drawing::Point(168, 95);
			this->hours_out->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->hours_out->Name = L"hours_out";
			this->hours_out->Size = System::Drawing::Size(24, 27);
			this->hours_out->TabIndex = 9;
			this->hours_out->Text = L"3";
			this->hours_out->Click += gcnew System::EventHandler(this, &course_info::hours_out_Click);
			// 
			// ch
			// 
			this->ch->AutoSize = true;
			this->ch->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->ch->Location = System::Drawing::Point(35, 95);
			this->ch->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ch->Name = L"ch";
			this->ch->Size = System::Drawing::Size(142, 27);
			this->ch->TabIndex = 8;
			this->ch->Text = L"Credit Hours:";
			// 
			// courseid_out
			// 
			this->courseid_out->AutoSize = true;
			this->courseid_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseid_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->courseid_out->Location = System::Drawing::Point(35, 70);
			this->courseid_out->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->courseid_out->Name = L"courseid_out";
			this->courseid_out->Size = System::Drawing::Size(72, 25);
			this->courseid_out->TabIndex = 7;
			this->courseid_out->Text = L"CS202";
			// 
			// coursename_out
			// 
			this->coursename_out->AutoSize = true;
			this->coursename_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursename_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->coursename_out->Location = System::Drawing::Point(34, 10);
			this->coursename_out->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->coursename_out->Name = L"coursename_out";
			this->coursename_out->Size = System::Drawing::Size(218, 35);
			this->coursename_out->TabIndex = 6;
			this->coursename_out->Text = L"Data Structures";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1163, 10);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(55, 41);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			// 
			// course_i
			// 
			this->course_i->AutoSize = true;
			this->course_i->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_i->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->course_i->Location = System::Drawing::Point(266, 30);
			this->course_i->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->course_i->Name = L"course_i";
			this->course_i->Size = System::Drawing::Size(198, 42);
			this->course_i->TabIndex = 22;
			this->course_i->Text = L"Course Info";
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
			this->flowLayoutPanel1->Size = System::Drawing::Size(253, 580);
			this->flowLayoutPanel1->TabIndex = 23;
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
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &course_info::panel1_MouseClick);
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &course_info::panel1_MouseEnter);
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &course_info::panel1_MouseLeave);
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
			this->pictureBox1->Location = System::Drawing::Point(60, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 113);
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
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &course_info::panel2_Paint);
			this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &course_info::panel2_MouseClick_1);
			this->panel2->MouseEnter += gcnew System::EventHandler(this, &course_info::panel2_MouseEnter);
			this->panel2->MouseLeave += gcnew System::EventHandler(this, &course_info::panel2_MouseLeave);
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
			this->panel3->MouseEnter += gcnew System::EventHandler(this, &course_info::panel3_MouseEnter);
			this->panel3->MouseLeave += gcnew System::EventHandler(this, &course_info::panel3_MouseLeave);
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
			this->pictureBox3->Size = System::Drawing::Size(57, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->pictureBox7);
			this->panel4->Location = System::Drawing::Point(0, 378);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(253, 91);
			this->panel4->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(253, 91);
			this->panel6->TabIndex = 4;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &course_info::panel6_Paint);
			this->panel6->MouseEnter += gcnew System::EventHandler(this, &course_info::panel6_MouseEnter);
			this->panel6->MouseLeave += gcnew System::EventHandler(this, &course_info::panel6_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(63, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"View Report";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 26);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(57, 41);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
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
			// panel7
			// 
			this->panel7->Controls->Add(this->check_pre);
			this->panel7->Controls->Add(this->pictureBox8);
			this->panel7->Location = System::Drawing::Point(0, 469);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(253, 93);
			this->panel7->TabIndex = 18;
			this->panel7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &course_info::panel7_MouseClick);
			this->panel7->MouseEnter += gcnew System::EventHandler(this, &course_info::panel7_MouseEnter);
			this->panel7->MouseLeave += gcnew System::EventHandler(this, &course_info::panel7_MouseLeave);
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
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(3, 26);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(57, 41);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// instructor_name
			// 
			this->instructor_name->AutoSize = true;
			this->instructor_name->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->instructor_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->instructor_name->Location = System::Drawing::Point(37, 190);
			this->instructor_name->Name = L"instructor_name";
			this->instructor_name->Size = System::Drawing::Size(172, 34);
			this->instructor_name->TabIndex = 14;
			this->instructor_name->Text = L"Doc mustafa";
			// 
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &course_info::course_info_Load);
			this->course_infop->ResumeLayout(false);
			this->course_infop->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
		//	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			// course_info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(1227, 580);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->course_i);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->course_infop);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"course_info";
			this->Text = L"course_info";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &course_info::course_info_Load);
			this->course_infop->ResumeLayout(false);
			this->course_infop->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->course_infop->ResumeLayout(false);
			this->course_infop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
	//		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void DisplayCourseInfo(System::String^ courseID)
		{   
			Course course;
			string courseId = Utils::toStdString(courseID);
			gcid = courseId;
			auto it = courses.find(courseId);

			if (it != courses.end()) {
			 course = it->second;
			}
			else {
				MessageBox::Show("Course not found.");
			}

			coursename_out->Text = Utils::toSysStr(course.getCourseName());
			courseid_out->Text = Utils::toSysStr(course.getCourseID());
			hours_out->Text =Utils::toSysString(course.getCreditHours());
			syllabus->Text = Utils::toSysStr(course.getSyllabus());
			instructor_name->Text = Utils::toSysStr(course.getInstructor());

			flowLayoutPanel2->Controls->Clear();
			set<string> prereqs = course.getPrerequisites();

			set<string> passedCourses;
			for ( CourseGrades cg : currentStudent.getCompletedCourses()) {
				if (cg.getGrade() != 'F') {
					passedCourses.insert(cg.getCourseID());
				}
			}

			for each (const string & prereq in prereqs)
			{
				CheckBox^ cb = gcnew CheckBox();
				cb->AutoSize = true;
				cb->Text = gcnew System::String(prereq.c_str());
				cb->Font = gcnew System::Drawing::Font(L"Bahnschrift", 10.8F);
				cb->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);

				if (passedCourses.find(prereq) != passedCourses.end()) {
					cb->Checked = true;

				}
				cb->Enabled = false;

				flowLayoutPanel2->Controls->Add(cb);
			}

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void course_name_pre_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void course_info_Load(System::Object^ sender, System::EventArgs^ e) {
	string reason = "N/A";

	bool isAlreadyRegistered = currentStudent.isRegistered(gcid);
	bool will_retake = currentStudent.willRetake(gcid);
	bool haspre = currentStudent.hasPrerequisites(gcid, reason);

	if (isAlreadyRegistered) {
		Label^ infoLabel = gcnew Label();
		infoLabel->Text = "You are already registered";
		infoLabel->Size = System::Drawing::Size(200, 32);
		infoLabel->Location = System::Drawing::Point(700, 500);
		infoLabel->ForeColor = System::Drawing::Color::Red;
		infoLabel->Font = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
		this->Controls->Add(infoLabel);
	}
	else if (will_retake) {
		Button^ Retake = gcnew Button();
		Retake->Text = "Retake";
		Retake->Size = System::Drawing::Size(138, 32);
		Retake->Location = System::Drawing::Point(700, 500);
		Retake->Click += gcnew System::EventHandler(this, &course_info::Retake_Click);
		this->Controls->Add(Retake);
	}
	else if (haspre) {
		Button^ Register = gcnew Button();
		Register->Text = "Register";
		Register->Size = System::Drawing::Size(138, 32);
		Register->Location = System::Drawing::Point(700, 500);
		Register->Click += gcnew System::EventHandler(this, &course_info::Register_Click);
		this->Controls->Add(Register);
	}
	else {
		Label^ infoLabel = gcnew Label();
		infoLabel->Text = Utils::toSysStr("Missing prerequisites " );
		infoLabel->Size = System::Drawing::Size(250, 32);
		infoLabel->Location = System::Drawing::Point(700, 500);
		infoLabel->ForeColor = System::Drawing::Color::OrangeRed;
		infoLabel->Font = gcnew System::Drawing::Font("Arial", 9, FontStyle::Bold);
		this->Controls->Add(infoLabel);
	}
}






	   void course_info::Retake_Click(System::Object^ sender, System::EventArgs^ e)
	   {   
		   currentStudent.Retake(gcid);
		   MessageBox::Show("Course Successfully Retaken", "Success", MessageBoxButtons::OK);
	   }
	   void course_info::Register_Click(System::Object^ sender, System::EventArgs^ e)
	   {
		   currentStudent.registerCourse(gcid);
		   MessageBox::Show("Course Successfully Registered", "Success", MessageBoxButtons::OK);
	   }
private: System::Void hours_out_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_MouseClick_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Course_registration^ cg3 = gcnew Course_registration();
	cg3->ShowDialog();
	this->Hide();
	this->Close();

}

private: System::Void panel7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	course_pre^ pre1 = gcnew course_pre();
	pre1->ShowDialog();
	this->Hide();
	this->Close();

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
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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
private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

private: System::Void panel1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel1->Cursor = Cursors::Hand;

}

private: System::Void panel1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	panel1->Cursor = Cursors::Default;
}
};
}
