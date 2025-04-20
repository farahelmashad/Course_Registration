

#pragma once

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
        report(void)
        {
            InitializeComponent();
        }

    protected:
        ~report()
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
        System::Windows::Forms::Label^ StIDlbl;
        System::Windows::Forms::Label^ studentNlbl;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::Label^ stid;
        System::Windows::Forms::Button^ PrintRepbtn;
        System::Windows::Forms::FlowLayoutPanel^ ReportflowLayoutPanel;
        System::Drawing::Printing::PrintDocument^ printReportDocument;
        System::Windows::Forms::PrintPreviewDialog^ printPreviewReportDialog;
        System::Windows::Forms::Panel^ panel7;
        System::Windows::Forms::Label^ check_pre;
        System::Windows::Forms::PictureBox^ pictureBox7;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(report::typeid));
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
            this->stid = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->StIDlbl = (gcnew System::Windows::Forms::Label());
            this->studentNlbl = (gcnew System::Windows::Forms::Label());
            this->PrintRepbtn = (gcnew System::Windows::Forms::Button());
            this->ReportflowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->printReportDocument = (gcnew System::Drawing::Printing::PrintDocument());
            this->printPreviewReportDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
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
            this->panel1->Size = System::Drawing::Size(237, 178);
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
            this->panel2->Size = System::Drawing::Size(237, 100);
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
            this->label3->Click += gcnew System::EventHandler(this, &report::label3_Click);
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
            this->panel3->Size = System::Drawing::Size(237, 100);
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
            this->label4->Click += gcnew System::EventHandler(this, &report::label4_Click);
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
            this->panel4->Size = System::Drawing::Size(237, 91);
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
            this->label5->Click += gcnew System::EventHandler(this, &report::label5_Click);
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
            this->panel7->Size = System::Drawing::Size(237, 91);
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
            this->searchpanel->Controls->Add(this->stid);
            this->searchpanel->Controls->Add(this->label6);
            this->searchpanel->Controls->Add(this->StIDlbl);
            this->searchpanel->Controls->Add(this->studentNlbl);
            this->searchpanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->searchpanel->Location = System::Drawing::Point(302, 53);
            this->searchpanel->Name = L"searchpanel";
            this->searchpanel->Size = System::Drawing::Size(733, 52);
            this->searchpanel->TabIndex = 4;
            // 
            // stid
            // 
            this->stid->AutoSize = true;
            this->stid->Location = System::Drawing::Point(388, 13);
            this->stid->Name = L"stid";
            this->stid->Size = System::Drawing::Size(108, 24);
            this->stid->TabIndex = 7;
            this->stid->Text = L"Student ID:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(164, 14);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(82, 24);
            this->label6->TabIndex = 6;
            this->label6->Text = L"StName";
            this->label6->Click += gcnew System::EventHandler(this, &report::label6_Click);
            // 
            // StIDlbl
            // 
            this->StIDlbl->AutoSize = true;
            this->StIDlbl->Location = System::Drawing::Point(502, 13);
            this->StIDlbl->Name = L"StIDlbl";
            this->StIDlbl->Size = System::Drawing::Size(48, 24);
            this->StIDlbl->TabIndex = 5;
            this->StIDlbl->Text = L"StID";
            this->StIDlbl->Click += gcnew System::EventHandler(this, &report::StIDlbl_Click);
            // 
            // studentNlbl
            // 
            this->studentNlbl->AutoSize = true;
            this->studentNlbl->Location = System::Drawing::Point(18, 13);
            this->studentNlbl->Name = L"studentNlbl";
            this->studentNlbl->Size = System::Drawing::Size(140, 24);
            this->studentNlbl->TabIndex = 4;
            this->studentNlbl->Text = L"Student name:";
            this->studentNlbl->Click += gcnew System::EventHandler(this, &report::studentNamelbl_Click);
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
            this->ReportflowLayoutPanel->AutoScroll = true;
            this->ReportflowLayoutPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
            this->ReportflowLayoutPanel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->ReportflowLayoutPanel->Location = System::Drawing::Point(302, 137);
            this->ReportflowLayoutPanel->Name = L"ReportflowLayoutPanel";
            this->ReportflowLayoutPanel->Size = System::Drawing::Size(733, 506);
            this->ReportflowLayoutPanel->TabIndex = 6;
            this->ReportflowLayoutPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &report::ReportflowLayoutPanel_Paint);
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
            // report
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->ClientSize = System::Drawing::Size(1156, 740);
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
            this->searchpanel->ResumeLayout(false);
            this->searchpanel->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
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

        System::Void printReportDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
            Bitmap^ bmp = gcnew Bitmap(ReportflowLayoutPanel->Width, ReportflowLayoutPanel->Height);
            ReportflowLayoutPanel->DrawToBitmap(bmp, System::Drawing::Rectangle(0, 0, bmp->Width, bmp->Height));
            e->Graphics->DrawImage(bmp, e->MarginBounds.Left, e->MarginBounds.Top);
            delete bmp;
        }

        System::Void NavBar_Load(System::Object^ sender, System::EventArgs^ e) {
            // Handle form load event
        }

        System::Void ReportflowLayoutPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
            // Handle flow layout panel paint event
        }
    };
}