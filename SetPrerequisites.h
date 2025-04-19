#pragma once
#include "Course_Registration.h"
#include "ManageGrades1.h"
#include"PrerequisitesPage.h"

namespace CourseRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminNavBar
	/// </summary>
	public ref class SetPrerequisites : public System::Windows::Forms::Form
	{
	public:
		SetPrerequisites(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SetPrerequisites()
		{
			if (components)
			{
				delete components;
			}
		}


	private:
		System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label1;

		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Panel^ panel2;

		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Label^ label4;

		System::Windows::Forms::Panel^ panel4;
		System::Windows::Forms::PictureBox^ pictureBox4;















		System::Windows::Forms::Panel^ panel6;
		System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ course_lay;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ course_pre_out;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ course_nameout;
	private: System::Windows::Forms::PictureBox^ search;
	private: System::Windows::Forms::TextBox^ textpre;
	private: System::Windows::Forms::Label^ course_i;
	private: System::Windows::Forms::PictureBox^ pictureBox6;




		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SetPrerequisites::typeid));
			   this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->panel4 = (gcnew System::Windows::Forms::Panel());
			   this->panel6 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->course_lay = (gcnew System::Windows::Forms::Panel());
			   this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->course_pre_out = (gcnew System::Windows::Forms::Label());
			   this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			   this->course_nameout = (gcnew System::Windows::Forms::Label());
			   this->search = (gcnew System::Windows::Forms::PictureBox());
			   this->textpre = (gcnew System::Windows::Forms::TextBox());
			   this->course_i = (gcnew System::Windows::Forms::Label());
			   this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			   this->flowLayoutPanel1->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   this->panel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->panel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->panel4->SuspendLayout();
			   this->panel6->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   this->flowLayoutPanel2->SuspendLayout();
			   this->course_lay->SuspendLayout();
			   this->flowLayoutPanel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
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
			   this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			   this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			   this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			   this->flowLayoutPanel1->Size = System::Drawing::Size(253, 740);
			   this->flowLayoutPanel1->TabIndex = 1;
			   this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SetPrerequisites::flowLayoutPanel1_Paint);
			   // 
			   // panel1
			   // 
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->pictureBox5);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Margin = System::Windows::Forms::Padding(0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(237, 178);
			   this->panel1->TabIndex = 0;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(33, 12);
			   this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(165, 91);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox5->TabIndex = 3;
			   this->pictureBox5->TabStop = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->Location = System::Drawing::Point(8, 150);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(51, 18);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Admin";
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
			   // panel2
			   // 
			   this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel2->Controls->Add(this->pictureBox1);
			   this->panel2->Controls->Add(this->label3);
			   this->panel2->Location = System::Drawing::Point(0, 178);
			   this->panel2->Margin = System::Windows::Forms::Padding(0);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(234, 100);
			   this->panel2->TabIndex = 1;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(5, 24);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(55, 39);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 3;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(75, 24);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(134, 23);
			   this->label3->TabIndex = 1;
			   this->label3->Text = L"Upload Course";
			   // 
			   // panel3
			   // 
			   this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel3->Controls->Add(this->pictureBox2);
			   this->panel3->Controls->Add(this->label4);
			   this->panel3->Location = System::Drawing::Point(0, 278);
			   this->panel3->Margin = System::Windows::Forms::Padding(0);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(234, 100);
			   this->panel3->TabIndex = 2;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(5, 26);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(57, 41);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 3;
			   this->pictureBox2->TabStop = false;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(66, 35);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(158, 23);
			   this->label4->TabIndex = 1;
			   this->label4->Text = L"Set Prerequisites";
			   // 
			   // panel4
			   // 
			   this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel4->Controls->Add(this->panel6);
			   this->panel4->Controls->Add(this->pictureBox4);
			   this->panel4->Location = System::Drawing::Point(0, 378);
			   this->panel4->Margin = System::Windows::Forms::Padding(0);
			   this->panel4->Name = L"panel4";
			   this->panel4->Size = System::Drawing::Size(234, 91);
			   this->panel4->TabIndex = 3;
			   // 
			   // panel6
			   // 
			   this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel6->Controls->Add(this->pictureBox3);
			   this->panel6->Controls->Add(this->label6);
			   this->panel6->Location = System::Drawing::Point(-1, -1);
			   this->panel6->Margin = System::Windows::Forms::Padding(0);
			   this->panel6->Name = L"panel6";
			   this->panel6->Size = System::Drawing::Size(234, 91);
			   this->panel6->TabIndex = 4;
			   this->panel6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SetPrerequisites::panel6_MouseClick);
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(5, 27);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(57, 40);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 3;
			   this->pictureBox3->TabStop = false;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->ForeColor = System::Drawing::Color::White;
			   this->label6->Location = System::Drawing::Point(68, 38);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(141, 23);
			   this->label6->TabIndex = 1;
			   this->label6->Text = L"Manage Grades";
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->pictureBox4->Location = System::Drawing::Point(3, 26);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(57, 41);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 0;
			   this->pictureBox4->TabStop = false;
			   // 
			   // flowLayoutPanel2
			   // 
			   this->flowLayoutPanel2->Controls->Add(this->course_lay);
			   this->flowLayoutPanel2->Location = System::Drawing::Point(350, 141);
			   this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			   this->flowLayoutPanel2->Size = System::Drawing::Size(432, 383);
			   this->flowLayoutPanel2->TabIndex = 31;
			   // 
			   // course_lay
			   // 
			   this->course_lay->BackColor = System::Drawing::Color::MidnightBlue;
			   this->course_lay->Controls->Add(this->flowLayoutPanel3);
			   this->course_lay->Controls->Add(this->pictureBox8);
			   this->course_lay->Controls->Add(this->course_nameout);
			   this->course_lay->Location = System::Drawing::Point(3, 3);
			   this->course_lay->Name = L"course_lay";
			   this->course_lay->Size = System::Drawing::Size(197, 255);
			   this->course_lay->TabIndex = 0;
			   this->course_lay->Click += gcnew System::EventHandler(this, &SetPrerequisites::course_lay_Click);
			   // 
			   // flowLayoutPanel3
			   // 
			   this->flowLayoutPanel3->Controls->Add(this->course_pre_out);
			   this->flowLayoutPanel3->Location = System::Drawing::Point(3, 155);
			   this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			   this->flowLayoutPanel3->Size = System::Drawing::Size(176, 57);
			   this->flowLayoutPanel3->TabIndex = 13;
			   // 
			   // course_pre_out
			   // 
			   this->course_pre_out->AutoSize = true;
			   this->course_pre_out->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->course_pre_out->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->course_pre_out->Location = System::Drawing::Point(3, 0);
			   this->course_pre_out->Name = L"course_pre_out";
			   this->course_pre_out->Size = System::Drawing::Size(72, 21);
			   this->course_pre_out->TabIndex = 10;
			   this->course_pre_out->Text = L"calculus";
			   // 
			   // pictureBox8
			   // 
			   this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			   this->pictureBox8->Location = System::Drawing::Point(28, 4);
			   this->pictureBox8->Name = L"pictureBox8";
			   this->pictureBox8->Size = System::Drawing::Size(139, 91);
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
			   this->course_nameout->Location = System::Drawing::Point(52, 109);
			   this->course_nameout->Name = L"course_nameout";
			   this->course_nameout->Size = System::Drawing::Size(79, 22);
			   this->course_nameout->TabIndex = 0;
			   this->course_nameout->Text = L"Discrete";
			   // 
			   // search
			   // 
			   this->search->BackColor = System::Drawing::Color::MidnightBlue;
			   this->search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search.Image")));
			   this->search->Location = System::Drawing::Point(662, 87);
			   this->search->Name = L"search";
			   this->search->Size = System::Drawing::Size(44, 37);
			   this->search->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->search->TabIndex = 30;
			   this->search->TabStop = false;
			   // 
			   // textpre
			   // 
			   this->textpre->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textpre->Location = System::Drawing::Point(353, 87);
			   this->textpre->Multiline = true;
			   this->textpre->Name = L"textpre";
			   this->textpre->Size = System::Drawing::Size(304, 37);
			   this->textpre->TabIndex = 29;
			   // 
			   // course_i
			   // 
			   this->course_i->AutoSize = true;
			   this->course_i->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->course_i->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->course_i->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->course_i->Location = System::Drawing::Point(342, 13);
			   this->course_i->Name = L"course_i";
			   this->course_i->Size = System::Drawing::Size(330, 52);
			   this->course_i->TabIndex = 28;
			   this->course_i->Text = L"Set prerequisite";
			   // 
			   // pictureBox6
			   // 
			   this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			   this->pictureBox6->Location = System::Drawing::Point(876, 0);
			   this->pictureBox6->Name = L"pictureBox6";
			   this->pictureBox6->Size = System::Drawing::Size(64, 50);
			   this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox6->TabIndex = 32;
			   this->pictureBox6->TabStop = false;
			   // 
			   // SetPrerequisites
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->ClientSize = System::Drawing::Size(940, 740);
			   this->Controls->Add(this->pictureBox6);
			   this->Controls->Add(this->flowLayoutPanel2);
			   this->Controls->Add(this->search);
			   this->Controls->Add(this->textpre);
			   this->Controls->Add(this->course_i);
			   this->Controls->Add(this->flowLayoutPanel1);
			   this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"SetPrerequisites";
			   this->Text = L"AdminNavBar";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->flowLayoutPanel1->ResumeLayout(false);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->panel4->ResumeLayout(false);
			   this->panel6->ResumeLayout(false);
			   this->panel6->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   this->flowLayoutPanel2->ResumeLayout(false);
			   this->course_lay->ResumeLayout(false);
			   this->course_lay->PerformLayout();
			   this->flowLayoutPanel3->ResumeLayout(false);
			   this->flowLayoutPanel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion



	private: System::Void panel6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ManageGrades1^ m = gcnew ManageGrades1();
		m->Show();
		this->Hide();
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void course_lay_Click(System::Object^ sender, System::EventArgs^ e) {

		PrerequisitesPage^ prerequisiites = gcnew PrerequisitesPage();
		prerequisiites->ShowDialog();
		//prerequisiites->Hide();

	}

};
}
