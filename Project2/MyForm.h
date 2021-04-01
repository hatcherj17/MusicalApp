#include <iostream>;
#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
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
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ btnPlay;
    private: System::Windows::Forms::MenuStrip^ menuStrip;


    private: System::Windows::Forms::ToolStripMenuItem^ fIleToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

    private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ openFromFileToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ convertToMidiToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
    private: System::Windows::Forms::Label^ lblNPStatic;
    private: System::Windows::Forms::Label^ lblBPMStatic;
    private: System::Windows::Forms::CheckBox^ cbRepeat;
    private: System::Windows::Forms::TextBox^ txtBoxBPM;
    private: System::Windows::Forms::Button^ btnStop;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::PictureBox^ pbB1;

    private: System::Windows::Forms::PictureBox^ pbF1;

    private: System::Windows::Forms::PictureBox^ pbE1;

    private: System::Windows::Forms::PictureBox^ pbD1;

    private: System::Windows::Forms::PictureBox^ pbC1;
    private: System::Windows::Forms::PictureBox^ pbA1;


    private: System::Windows::Forms::PictureBox^ pbG1;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::PictureBox^ pbB3;

    private: System::Windows::Forms::PictureBox^ pbF3;

    private: System::Windows::Forms::PictureBox^ pbE3;

    private: System::Windows::Forms::PictureBox^ pbD3;

    private: System::Windows::Forms::PictureBox^ pbC3;
    private: System::Windows::Forms::PictureBox^ pbA3;


    private: System::Windows::Forms::PictureBox^ pbG3;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::PictureBox^ pbB2;


    private: System::Windows::Forms::PictureBox^ pbF2;

    private: System::Windows::Forms::PictureBox^ pbE2;

    private: System::Windows::Forms::PictureBox^ pbD2;

    private: System::Windows::Forms::PictureBox^ pbC2;
    private: System::Windows::Forms::PictureBox^ pbA2;


    private: System::Windows::Forms::PictureBox^ pbG2;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Button^ btnCSharp1;

    private: System::Windows::Forms::Button^ btnDSharp1;
    private: System::Windows::Forms::Button^ btnFSharp1;
    private: System::Windows::Forms::Button^ btnGSharp1;
    private: System::Windows::Forms::Button^ btnASharp1;
    private: System::Windows::Forms::Button^ btnCSharp2;
    private: System::Windows::Forms::Button^ btnDSharp2;
    private: System::Windows::Forms::Button^ btnFSharp2;
    private: System::Windows::Forms::Button^ btnGSharp2;
    private: System::Windows::Forms::Button^ btnBSharp2;
    private: System::Windows::Forms::Button^ btnCSharp3;
    private: System::Windows::Forms::Button^ btnDSharp3;
    private: System::Windows::Forms::Button^ btnFSharp3;
    private: System::Windows::Forms::Button^ btnGSharp3;
    private: System::Windows::Forms::Button^ btnASharp3;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Label^ lblInstrament;
    private: System::Windows::Forms::Label^ lblNotesPlayedDynamic;
private: System::Windows::Forms::TextBox^ txtBoxNotesPlayed;



    protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->btnPlay = (gcnew System::Windows::Forms::Button());
            this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
            this->fIleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openFromFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->convertToMidiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->lblNPStatic = (gcnew System::Windows::Forms::Label());
            this->lblBPMStatic = (gcnew System::Windows::Forms::Label());
            this->cbRepeat = (gcnew System::Windows::Forms::CheckBox());
            this->txtBoxBPM = (gcnew System::Windows::Forms::TextBox());
            this->btnStop = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pbB1 = (gcnew System::Windows::Forms::PictureBox());
            this->pbF1 = (gcnew System::Windows::Forms::PictureBox());
            this->pbE1 = (gcnew System::Windows::Forms::PictureBox());
            this->pbD1 = (gcnew System::Windows::Forms::PictureBox());
            this->pbC1 = (gcnew System::Windows::Forms::PictureBox());
            this->pbA1 = (gcnew System::Windows::Forms::PictureBox());
            this->pbG1 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pbB3 = (gcnew System::Windows::Forms::PictureBox());
            this->pbF3 = (gcnew System::Windows::Forms::PictureBox());
            this->pbE3 = (gcnew System::Windows::Forms::PictureBox());
            this->pbD3 = (gcnew System::Windows::Forms::PictureBox());
            this->pbC3 = (gcnew System::Windows::Forms::PictureBox());
            this->pbA3 = (gcnew System::Windows::Forms::PictureBox());
            this->pbG3 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pbB2 = (gcnew System::Windows::Forms::PictureBox());
            this->pbF2 = (gcnew System::Windows::Forms::PictureBox());
            this->pbE2 = (gcnew System::Windows::Forms::PictureBox());
            this->pbD2 = (gcnew System::Windows::Forms::PictureBox());
            this->pbC2 = (gcnew System::Windows::Forms::PictureBox());
            this->pbA2 = (gcnew System::Windows::Forms::PictureBox());
            this->pbG2 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnCSharp1 = (gcnew System::Windows::Forms::Button());
            this->btnDSharp1 = (gcnew System::Windows::Forms::Button());
            this->btnFSharp1 = (gcnew System::Windows::Forms::Button());
            this->btnGSharp1 = (gcnew System::Windows::Forms::Button());
            this->btnASharp1 = (gcnew System::Windows::Forms::Button());
            this->btnCSharp2 = (gcnew System::Windows::Forms::Button());
            this->btnDSharp2 = (gcnew System::Windows::Forms::Button());
            this->btnFSharp2 = (gcnew System::Windows::Forms::Button());
            this->btnGSharp2 = (gcnew System::Windows::Forms::Button());
            this->btnBSharp2 = (gcnew System::Windows::Forms::Button());
            this->btnCSharp3 = (gcnew System::Windows::Forms::Button());
            this->btnDSharp3 = (gcnew System::Windows::Forms::Button());
            this->btnFSharp3 = (gcnew System::Windows::Forms::Button());
            this->btnGSharp3 = (gcnew System::Windows::Forms::Button());
            this->btnASharp3 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->lblInstrament = (gcnew System::Windows::Forms::Label());
            this->lblNotesPlayedDynamic = (gcnew System::Windows::Forms::Label());
            this->txtBoxNotesPlayed = (gcnew System::Windows::Forms::TextBox());
            this->menuStrip->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG1))->BeginInit();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG3))->BeginInit();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG2))->BeginInit();
            this->tableLayoutPanel5->SuspendLayout();
            this->SuspendLayout();
            // 
            // btnPlay
            // 
            this->btnPlay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnPlay->Location = System::Drawing::Point(3, 3);
            this->btnPlay->Name = L"btnPlay";
            this->btnPlay->Size = System::Drawing::Size(149, 57);
            this->btnPlay->TabIndex = 0;
            this->btnPlay->Text = L"Play";
            this->btnPlay->UseVisualStyleBackColor = true;
            this->btnPlay->Click += gcnew System::EventHandler(this, &MyForm::btnPlay_Click);
            // 
            // menuStrip
            // 
            this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->fIleToolStripMenuItem,
                    this->settingsToolStripMenuItem, this->aboutToolStripMenuItem
            });
            this->menuStrip->Location = System::Drawing::Point(0, 0);
            this->menuStrip->Name = L"menuStrip";
            this->menuStrip->Size = System::Drawing::Size(1039, 24);
            this->menuStrip->TabIndex = 1;
            this->menuStrip->Text = L"menuStrip";
            // 
            // fIleToolStripMenuItem
            // 
            this->fIleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
            this->fIleToolStripMenuItem->Name = L"fIleToolStripMenuItem";
            this->fIleToolStripMenuItem->Size = System::Drawing::Size(37, 20);
            this->fIleToolStripMenuItem->Text = L"File";
            // 
            // exitToolStripMenuItem
            // 
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
            this->exitToolStripMenuItem->Size = System::Drawing::Size(93, 22);
            this->exitToolStripMenuItem->Text = L"Exit";
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
            // 
            // settingsToolStripMenuItem
            // 
            this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->openFromFileToolStripMenuItem,
                    this->convertToMidiToolStripMenuItem
            });
            this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
            this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
            this->settingsToolStripMenuItem->Text = L"Settings";
            // 
            // openFromFileToolStripMenuItem
            // 
            this->openFromFileToolStripMenuItem->Name = L"openFromFileToolStripMenuItem";
            this->openFromFileToolStripMenuItem->Size = System::Drawing::Size(157, 22);
            this->openFromFileToolStripMenuItem->Text = L"Open from File";
            // 
            // convertToMidiToolStripMenuItem
            // 
            this->convertToMidiToolStripMenuItem->Name = L"convertToMidiToolStripMenuItem";
            this->convertToMidiToolStripMenuItem->Size = System::Drawing::Size(157, 22);
            this->convertToMidiToolStripMenuItem->Text = L"Convert to Midi";
            // 
            // aboutToolStripMenuItem
            // 
            this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
            this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
            this->aboutToolStripMenuItem->Text = L"About";
            this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
            // 
            // lblNPStatic
            // 
            this->lblNPStatic->AutoSize = true;
            this->lblNPStatic->BackColor = System::Drawing::Color::Transparent;
            this->lblNPStatic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNPStatic->Location = System::Drawing::Point(8, 422);
            this->lblNPStatic->Name = L"lblNPStatic";
            this->lblNPStatic->Size = System::Drawing::Size(132, 25);
            this->lblNPStatic->TabIndex = 3;
            this->lblNPStatic->Text = L"Notes played:";
            // 
            // lblBPMStatic
            // 
            this->lblBPMStatic->AutoSize = true;
            this->lblBPMStatic->BackColor = System::Drawing::Color::Transparent;
            this->lblBPMStatic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblBPMStatic->Location = System::Drawing::Point(814, 462);
            this->lblBPMStatic->Name = L"lblBPMStatic";
            this->lblBPMStatic->Size = System::Drawing::Size(164, 25);
            this->lblBPMStatic->TabIndex = 4;
            this->lblBPMStatic->Text = L"Beats per minute:";
            // 
            // cbRepeat
            // 
            this->cbRepeat->AutoSize = true;
            this->cbRepeat->BackColor = System::Drawing::Color::Transparent;
            this->cbRepeat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cbRepeat->Location = System::Drawing::Point(722, 461);
            this->cbRepeat->Name = L"cbRepeat";
            this->cbRepeat->Size = System::Drawing::Size(93, 29);
            this->cbRepeat->TabIndex = 5;
            this->cbRepeat->Text = L"Repeat";
            this->cbRepeat->UseVisualStyleBackColor = false;
            // 
            // txtBoxBPM
            // 
            this->txtBoxBPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtBoxBPM->Location = System::Drawing::Point(984, 459);
            this->txtBoxBPM->Name = L"txtBoxBPM";
            this->txtBoxBPM->Size = System::Drawing::Size(36, 30);
            this->txtBoxBPM->TabIndex = 6;
            // 
            // btnStop
            // 
            this->btnStop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnStop->Location = System::Drawing::Point(158, 3);
            this->btnStop->Name = L"btnStop";
            this->btnStop->Size = System::Drawing::Size(145, 57);
            this->btnStop->TabIndex = 7;
            this->btnStop->Text = L"Stop";
            this->btnStop->UseVisualStyleBackColor = true;
            this->btnStop->Click += gcnew System::EventHandler(this, &MyForm::btnStop_Click);
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->ColumnCount = 7;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel1->Controls->Add(this->pbB1, 6, 0);
            this->tableLayoutPanel1->Controls->Add(this->pbF1, 3, 0);
            this->tableLayoutPanel1->Controls->Add(this->pbE1, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->pbD1, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->pbC1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->pbA1, 5, 0);
            this->tableLayoutPanel1->Controls->Add(this->pbG1, 4, 0);
            this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 1;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel1->Size = System::Drawing::Size(335, 373);
            this->tableLayoutPanel1->TabIndex = 29;
            // 
            // pbB1
            // 
            this->pbB1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbB1->BackColor = System::Drawing::Color::Transparent;
            this->pbB1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbB1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbB1.Image")));
            this->pbB1->Location = System::Drawing::Point(285, 3);
            this->pbB1->Name = L"pbB1";
            this->pbB1->Size = System::Drawing::Size(47, 367);
            this->pbB1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbB1->TabIndex = 35;
            this->pbB1->TabStop = false;
            this->pbB1->Click += gcnew System::EventHandler(this, &MyForm::pbB1_Click);
            // 
            // pbF1
            // 
            this->pbF1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbF1->BackColor = System::Drawing::Color::Transparent;
            this->pbF1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbF1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbF1.Image")));
            this->pbF1->Location = System::Drawing::Point(144, 3);
            this->pbF1->Name = L"pbF1";
            this->pbF1->Size = System::Drawing::Size(41, 367);
            this->pbF1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbF1->TabIndex = 32;
            this->pbF1->TabStop = false;
            this->pbF1->Click += gcnew System::EventHandler(this, &MyForm::pbF1_Click);
            // 
            // pbE1
            // 
            this->pbE1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbE1->BackColor = System::Drawing::Color::Transparent;
            this->pbE1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbE1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbE1.Image")));
            this->pbE1->Location = System::Drawing::Point(97, 3);
            this->pbE1->Name = L"pbE1";
            this->pbE1->Size = System::Drawing::Size(41, 367);
            this->pbE1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbE1->TabIndex = 31;
            this->pbE1->TabStop = false;
            this->pbE1->Click += gcnew System::EventHandler(this, &MyForm::pbE1_Click);
            // 
            // pbD1
            // 
            this->pbD1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbD1->BackColor = System::Drawing::Color::Transparent;
            this->pbD1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbD1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbD1.Image")));
            this->pbD1->Location = System::Drawing::Point(50, 3);
            this->pbD1->Name = L"pbD1";
            this->pbD1->Size = System::Drawing::Size(41, 367);
            this->pbD1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbD1->TabIndex = 30;
            this->pbD1->TabStop = false;
            this->pbD1->Click += gcnew System::EventHandler(this, &MyForm::pbD1_Click);
            // 
            // pbC1
            // 
            this->pbC1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbC1->BackColor = System::Drawing::Color::Transparent;
            this->pbC1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbC1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbC1.Image")));
            this->pbC1->Location = System::Drawing::Point(3, 3);
            this->pbC1->Name = L"pbC1";
            this->pbC1->Size = System::Drawing::Size(41, 367);
            this->pbC1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbC1->TabIndex = 30;
            this->pbC1->TabStop = false;
            this->pbC1->Click += gcnew System::EventHandler(this, &MyForm::pbC1_Click);
            // 
            // pbA1
            // 
            this->pbA1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbA1->BackColor = System::Drawing::Color::Transparent;
            this->pbA1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbA1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbA1.Image")));
            this->pbA1->Location = System::Drawing::Point(238, 3);
            this->pbA1->Name = L"pbA1";
            this->pbA1->Size = System::Drawing::Size(41, 367);
            this->pbA1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbA1->TabIndex = 34;
            this->pbA1->TabStop = false;
            this->pbA1->Click += gcnew System::EventHandler(this, &MyForm::pbA1_Click);
            // 
            // pbG1
            // 
            this->pbG1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbG1->BackColor = System::Drawing::Color::Transparent;
            this->pbG1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbG1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbG1.Image")));
            this->pbG1->Location = System::Drawing::Point(191, 3);
            this->pbG1->Name = L"pbG1";
            this->pbG1->Size = System::Drawing::Size(41, 367);
            this->pbG1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbG1->TabIndex = 33;
            this->pbG1->TabStop = false;
            this->pbG1->Click += gcnew System::EventHandler(this, &MyForm::pbG1_Click);
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel2->ColumnCount = 3;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 2, 0);
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(5, 27);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(1023, 379);
            this->tableLayoutPanel2->TabIndex = 30;
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel4->ColumnCount = 7;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel4->Controls->Add(this->pbB3, 6, 0);
            this->tableLayoutPanel4->Controls->Add(this->pbF3, 3, 0);
            this->tableLayoutPanel4->Controls->Add(this->pbE3, 2, 0);
            this->tableLayoutPanel4->Controls->Add(this->pbD3, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->pbC3, 0, 0);
            this->tableLayoutPanel4->Controls->Add(this->pbA3, 5, 0);
            this->tableLayoutPanel4->Controls->Add(this->pbG3, 4, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(685, 3);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel4->Size = System::Drawing::Size(335, 373);
            this->tableLayoutPanel4->TabIndex = 31;
            // 
            // pbB3
            // 
            this->pbB3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbB3->BackColor = System::Drawing::Color::Transparent;
            this->pbB3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbB3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbB3.Image")));
            this->pbB3->Location = System::Drawing::Point(285, 3);
            this->pbB3->Name = L"pbB3";
            this->pbB3->Size = System::Drawing::Size(47, 367);
            this->pbB3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbB3->TabIndex = 35;
            this->pbB3->TabStop = false;
            this->pbB3->Click += gcnew System::EventHandler(this, &MyForm::pbB3_Click);
            // 
            // pbF3
            // 
            this->pbF3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbF3->BackColor = System::Drawing::Color::Transparent;
            this->pbF3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbF3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbF3.Image")));
            this->pbF3->Location = System::Drawing::Point(144, 3);
            this->pbF3->Name = L"pbF3";
            this->pbF3->Size = System::Drawing::Size(41, 367);
            this->pbF3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbF3->TabIndex = 32;
            this->pbF3->TabStop = false;
            this->pbF3->Click += gcnew System::EventHandler(this, &MyForm::pbF3_Click);
            // 
            // pbE3
            // 
            this->pbE3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbE3->BackColor = System::Drawing::Color::Transparent;
            this->pbE3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbE3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbE3.Image")));
            this->pbE3->Location = System::Drawing::Point(97, 3);
            this->pbE3->Name = L"pbE3";
            this->pbE3->Size = System::Drawing::Size(41, 367);
            this->pbE3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbE3->TabIndex = 31;
            this->pbE3->TabStop = false;
            this->pbE3->Click += gcnew System::EventHandler(this, &MyForm::pbE3_Click);
            // 
            // pbD3
            // 
            this->pbD3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbD3->BackColor = System::Drawing::Color::Transparent;
            this->pbD3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbD3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbD3.Image")));
            this->pbD3->Location = System::Drawing::Point(50, 3);
            this->pbD3->Name = L"pbD3";
            this->pbD3->Size = System::Drawing::Size(41, 367);
            this->pbD3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbD3->TabIndex = 30;
            this->pbD3->TabStop = false;
            this->pbD3->Click += gcnew System::EventHandler(this, &MyForm::pbD3_Click);
            // 
            // pbC3
            // 
            this->pbC3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbC3->BackColor = System::Drawing::Color::Transparent;
            this->pbC3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbC3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbC3.Image")));
            this->pbC3->Location = System::Drawing::Point(3, 3);
            this->pbC3->Name = L"pbC3";
            this->pbC3->Size = System::Drawing::Size(41, 367);
            this->pbC3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbC3->TabIndex = 30;
            this->pbC3->TabStop = false;
            this->pbC3->Click += gcnew System::EventHandler(this, &MyForm::pbC3_Click);
            // 
            // pbA3
            // 
            this->pbA3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbA3->BackColor = System::Drawing::Color::Transparent;
            this->pbA3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbA3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbA3.Image")));
            this->pbA3->Location = System::Drawing::Point(238, 3);
            this->pbA3->Name = L"pbA3";
            this->pbA3->Size = System::Drawing::Size(41, 367);
            this->pbA3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbA3->TabIndex = 34;
            this->pbA3->TabStop = false;
            this->pbA3->Click += gcnew System::EventHandler(this, &MyForm::pbA3_Click);
            // 
            // pbG3
            // 
            this->pbG3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbG3->BackColor = System::Drawing::Color::Transparent;
            this->pbG3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbG3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbG3.Image")));
            this->pbG3->Location = System::Drawing::Point(191, 3);
            this->pbG3->Name = L"pbG3";
            this->pbG3->Size = System::Drawing::Size(41, 367);
            this->pbG3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbG3->TabIndex = 33;
            this->pbG3->TabStop = false;
            this->pbG3->Click += gcnew System::EventHandler(this, &MyForm::pbG3_Click);
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel3->ColumnCount = 7;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                14.28571F)));
            this->tableLayoutPanel3->Controls->Add(this->pbB2, 6, 0);
            this->tableLayoutPanel3->Controls->Add(this->pbF2, 3, 0);
            this->tableLayoutPanel3->Controls->Add(this->pbE2, 2, 0);
            this->tableLayoutPanel3->Controls->Add(this->pbD2, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->pbC2, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->pbA2, 5, 0);
            this->tableLayoutPanel3->Controls->Add(this->pbG2, 4, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(344, 3);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel3->Size = System::Drawing::Size(335, 373);
            this->tableLayoutPanel3->TabIndex = 30;
            // 
            // pbB2
            // 
            this->pbB2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbB2->BackColor = System::Drawing::Color::Transparent;
            this->pbB2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbB2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbB2.Image")));
            this->pbB2->Location = System::Drawing::Point(285, 3);
            this->pbB2->Name = L"pbB2";
            this->pbB2->Size = System::Drawing::Size(47, 367);
            this->pbB2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbB2->TabIndex = 35;
            this->pbB2->TabStop = false;
            this->pbB2->Click += gcnew System::EventHandler(this, &MyForm::pbB2_Click);
            // 
            // pbF2
            // 
            this->pbF2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbF2->BackColor = System::Drawing::Color::Transparent;
            this->pbF2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbF2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbF2.Image")));
            this->pbF2->Location = System::Drawing::Point(144, 3);
            this->pbF2->Name = L"pbF2";
            this->pbF2->Size = System::Drawing::Size(41, 367);
            this->pbF2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbF2->TabIndex = 32;
            this->pbF2->TabStop = false;
            this->pbF2->Click += gcnew System::EventHandler(this, &MyForm::pbF2_Click);
            // 
            // pbE2
            // 
            this->pbE2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbE2->BackColor = System::Drawing::Color::Transparent;
            this->pbE2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbE2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbE2.Image")));
            this->pbE2->Location = System::Drawing::Point(97, 3);
            this->pbE2->Name = L"pbE2";
            this->pbE2->Size = System::Drawing::Size(41, 367);
            this->pbE2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbE2->TabIndex = 31;
            this->pbE2->TabStop = false;
            this->pbE2->Click += gcnew System::EventHandler(this, &MyForm::pbE2_Click);
            // 
            // pbD2
            // 
            this->pbD2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbD2->BackColor = System::Drawing::Color::Transparent;
            this->pbD2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbD2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbD2.Image")));
            this->pbD2->Location = System::Drawing::Point(50, 3);
            this->pbD2->Name = L"pbD2";
            this->pbD2->Size = System::Drawing::Size(41, 367);
            this->pbD2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbD2->TabIndex = 30;
            this->pbD2->TabStop = false;
            this->pbD2->Click += gcnew System::EventHandler(this, &MyForm::pbD2_Click);
            // 
            // pbC2
            // 
            this->pbC2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbC2->BackColor = System::Drawing::Color::Transparent;
            this->pbC2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbC2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbC2.Image")));
            this->pbC2->Location = System::Drawing::Point(3, 3);
            this->pbC2->Name = L"pbC2";
            this->pbC2->Size = System::Drawing::Size(41, 367);
            this->pbC2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbC2->TabIndex = 30;
            this->pbC2->TabStop = false;
            this->pbC2->Click += gcnew System::EventHandler(this, &MyForm::pbC2_Click);
            // 
            // pbA2
            // 
            this->pbA2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbA2->BackColor = System::Drawing::Color::Transparent;
            this->pbA2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbA2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbA2.Image")));
            this->pbA2->Location = System::Drawing::Point(238, 3);
            this->pbA2->Name = L"pbA2";
            this->pbA2->Size = System::Drawing::Size(41, 367);
            this->pbA2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbA2->TabIndex = 34;
            this->pbA2->TabStop = false;
            this->pbA2->Click += gcnew System::EventHandler(this, &MyForm::pbA2_Click);
            // 
            // pbG2
            // 
            this->pbG2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pbG2->BackColor = System::Drawing::Color::Transparent;
            this->pbG2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pbG2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbG2.Image")));
            this->pbG2->Location = System::Drawing::Point(191, 3);
            this->pbG2->Name = L"pbG2";
            this->pbG2->Size = System::Drawing::Size(41, 367);
            this->pbG2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pbG2->TabIndex = 33;
            this->pbG2->TabStop = false;
            this->pbG2->Click += gcnew System::EventHandler(this, &MyForm::pbG2_Click);
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tableLayoutPanel5->ColumnCount = 2;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel5->Controls->Add(this->btnPlay, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->btnStop, 1, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(721, 501);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel5->Size = System::Drawing::Size(306, 63);
            this->tableLayoutPanel5->TabIndex = 31;
            // 
            // btnCSharp1
            // 
            this->btnCSharp1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnCSharp1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCSharp1.Image")));
            this->btnCSharp1->Location = System::Drawing::Point(38, 31);
            this->btnCSharp1->Name = L"btnCSharp1";
            this->btnCSharp1->Size = System::Drawing::Size(35, 208);
            this->btnCSharp1->TabIndex = 32;
            this->btnCSharp1->Text = L" ";
            this->btnCSharp1->UseVisualStyleBackColor = true;
            this->btnCSharp1->Click += gcnew System::EventHandler(this, &MyForm::btnCSharp1_Click);
            // 
            // btnDSharp1
            // 
            this->btnDSharp1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDSharp1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDSharp1.Image")));
            this->btnDSharp1->Location = System::Drawing::Point(82, 31);
            this->btnDSharp1->Name = L"btnDSharp1";
            this->btnDSharp1->Size = System::Drawing::Size(35, 208);
            this->btnDSharp1->TabIndex = 33;
            this->btnDSharp1->Text = L" ";
            this->btnDSharp1->UseVisualStyleBackColor = true;
            this->btnDSharp1->Click += gcnew System::EventHandler(this, &MyForm::btnDSharp1_Click);
            // 
            // btnFSharp1
            // 
            this->btnFSharp1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnFSharp1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFSharp1.Image")));
            this->btnFSharp1->Location = System::Drawing::Point(177, 31);
            this->btnFSharp1->Name = L"btnFSharp1";
            this->btnFSharp1->Size = System::Drawing::Size(35, 208);
            this->btnFSharp1->TabIndex = 34;
            this->btnFSharp1->Text = L" ";
            this->btnFSharp1->UseVisualStyleBackColor = true;
            this->btnFSharp1->Click += gcnew System::EventHandler(this, &MyForm::btnFSharp1_Click);
            // 
            // btnGSharp1
            // 
            this->btnGSharp1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnGSharp1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGSharp1.Image")));
            this->btnGSharp1->Location = System::Drawing::Point(225, 31);
            this->btnGSharp1->Name = L"btnGSharp1";
            this->btnGSharp1->Size = System::Drawing::Size(35, 208);
            this->btnGSharp1->TabIndex = 35;
            this->btnGSharp1->Text = L" ";
            this->btnGSharp1->UseVisualStyleBackColor = true;
            this->btnGSharp1->Click += gcnew System::EventHandler(this, &MyForm::btnGSharp1_Click);
            // 
            // btnASharp1
            // 
            this->btnASharp1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnASharp1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnASharp1.Image")));
            this->btnASharp1->Location = System::Drawing::Point(275, 31);
            this->btnASharp1->Name = L"btnASharp1";
            this->btnASharp1->Size = System::Drawing::Size(35, 208);
            this->btnASharp1->TabIndex = 36;
            this->btnASharp1->Text = L" ";
            this->btnASharp1->UseVisualStyleBackColor = true;
            this->btnASharp1->Click += gcnew System::EventHandler(this, &MyForm::btnASharp1_Click);
            // 
            // btnCSharp2
            // 
            this->btnCSharp2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnCSharp2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCSharp2.Image")));
            this->btnCSharp2->Location = System::Drawing::Point(379, 31);
            this->btnCSharp2->Name = L"btnCSharp2";
            this->btnCSharp2->Size = System::Drawing::Size(35, 208);
            this->btnCSharp2->TabIndex = 37;
            this->btnCSharp2->Text = L" ";
            this->btnCSharp2->UseVisualStyleBackColor = true;
            this->btnCSharp2->Click += gcnew System::EventHandler(this, &MyForm::btnCSharp2_Click);
            // 
            // btnDSharp2
            // 
            this->btnDSharp2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDSharp2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDSharp2.Image")));
            this->btnDSharp2->Location = System::Drawing::Point(425, 31);
            this->btnDSharp2->Name = L"btnDSharp2";
            this->btnDSharp2->Size = System::Drawing::Size(35, 208);
            this->btnDSharp2->TabIndex = 38;
            this->btnDSharp2->Text = L" ";
            this->btnDSharp2->UseVisualStyleBackColor = true;
            this->btnDSharp2->Click += gcnew System::EventHandler(this, &MyForm::btnDSharp2_Click);
            // 
            // btnFSharp2
            // 
            this->btnFSharp2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnFSharp2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFSharp2.Image")));
            this->btnFSharp2->Location = System::Drawing::Point(522, 31);
            this->btnFSharp2->Name = L"btnFSharp2";
            this->btnFSharp2->Size = System::Drawing::Size(35, 208);
            this->btnFSharp2->TabIndex = 39;
            this->btnFSharp2->Text = L" ";
            this->btnFSharp2->UseVisualStyleBackColor = true;
            this->btnFSharp2->Click += gcnew System::EventHandler(this, &MyForm::btnFSharp2_Click);
            // 
            // btnGSharp2
            // 
            this->btnGSharp2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnGSharp2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGSharp2.Image")));
            this->btnGSharp2->Location = System::Drawing::Point(566, 31);
            this->btnGSharp2->Name = L"btnGSharp2";
            this->btnGSharp2->Size = System::Drawing::Size(35, 208);
            this->btnGSharp2->TabIndex = 40;
            this->btnGSharp2->Text = L" ";
            this->btnGSharp2->UseVisualStyleBackColor = true;
            this->btnGSharp2->Click += gcnew System::EventHandler(this, &MyForm::btnGSharp2_Click);
            // 
            // btnBSharp2
            // 
            this->btnBSharp2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnBSharp2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBSharp2.Image")));
            this->btnBSharp2->Location = System::Drawing::Point(615, 31);
            this->btnBSharp2->Name = L"btnBSharp2";
            this->btnBSharp2->Size = System::Drawing::Size(35, 208);
            this->btnBSharp2->TabIndex = 41;
            this->btnBSharp2->Text = L" ";
            this->btnBSharp2->UseVisualStyleBackColor = true;
            this->btnBSharp2->Click += gcnew System::EventHandler(this, &MyForm::btnBSharp2_Click);
            // 
            // btnCSharp3
            // 
            this->btnCSharp3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnCSharp3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCSharp3.Image")));
            this->btnCSharp3->Location = System::Drawing::Point(722, 31);
            this->btnCSharp3->Name = L"btnCSharp3";
            this->btnCSharp3->Size = System::Drawing::Size(35, 208);
            this->btnCSharp3->TabIndex = 42;
            this->btnCSharp3->Text = L" ";
            this->btnCSharp3->UseVisualStyleBackColor = true;
            this->btnCSharp3->Click += gcnew System::EventHandler(this, &MyForm::btnCSharp3_Click);
            // 
            // btnDSharp3
            // 
            this->btnDSharp3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnDSharp3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDSharp3.Image")));
            this->btnDSharp3->Location = System::Drawing::Point(768, 31);
            this->btnDSharp3->Name = L"btnDSharp3";
            this->btnDSharp3->Size = System::Drawing::Size(35, 208);
            this->btnDSharp3->TabIndex = 43;
            this->btnDSharp3->Text = L" ";
            this->btnDSharp3->UseVisualStyleBackColor = true;
            this->btnDSharp3->Click += gcnew System::EventHandler(this, &MyForm::btnDSharp3_Click);
            // 
            // btnFSharp3
            // 
            this->btnFSharp3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnFSharp3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFSharp3.Image")));
            this->btnFSharp3->Location = System::Drawing::Point(860, 31);
            this->btnFSharp3->Name = L"btnFSharp3";
            this->btnFSharp3->Size = System::Drawing::Size(35, 208);
            this->btnFSharp3->TabIndex = 44;
            this->btnFSharp3->Text = L" ";
            this->btnFSharp3->UseVisualStyleBackColor = true;
            this->btnFSharp3->Click += gcnew System::EventHandler(this, &MyForm::btnFSharp3_Click);
            // 
            // btnGSharp3
            // 
            this->btnGSharp3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnGSharp3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGSharp3.Image")));
            this->btnGSharp3->Location = System::Drawing::Point(908, 31);
            this->btnGSharp3->Name = L"btnGSharp3";
            this->btnGSharp3->Size = System::Drawing::Size(35, 208);
            this->btnGSharp3->TabIndex = 45;
            this->btnGSharp3->Text = L" ";
            this->btnGSharp3->UseVisualStyleBackColor = true;
            this->btnGSharp3->Click += gcnew System::EventHandler(this, &MyForm::btnGSharp3_Click);
            // 
            // btnASharp3
            // 
            this->btnASharp3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnASharp3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnASharp3.Image")));
            this->btnASharp3->Location = System::Drawing::Point(956, 31);
            this->btnASharp3->Name = L"btnASharp3";
            this->btnASharp3->Size = System::Drawing::Size(35, 208);
            this->btnASharp3->TabIndex = 46;
            this->btnASharp3->Text = L" ";
            this->btnASharp3->UseVisualStyleBackColor = true;
            this->btnASharp3->Click += gcnew System::EventHandler(this, &MyForm::btnASharp3_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(128) {
                L"Accordion", L"Acoustic Bass", L"Acoustic Grand Piano",
                    L"Acoustic Guit Nylon", L"Acoustic Guit Steel", L"Agogo", L"Alto Sax", L"Applause", L"Bagpipe", L"Banjo", L"Baritone Sax", L"Bassoon",
                    L"Bird Tweet", L"Blown Bottle", L"Brass Section", L"Breath Noise", L"Bright Acoustic Piano", L"Celesta", L"Cello", L"Choir Aahs",
                    L"Church Organ", L"Clarinet", L"Clavi", L"Contrabass", L"Distortion Guitar", L"Drawbar Organ", L"Dulcimer", L"Electric Bass Finger",
                    L"Electric Bass Pick", L"Electric Grand Piano", L"Electric Guit Muted", L"Electric Guitar Clean", L"Electric Guitar Jazz", L"Electric Piano 1",
                    L"Electric Piano 2", L"English Horn", L"FX 1 Rain", L"FX 2 Soundtrack", L"FX 3 Crystal", L"FX 4 Atmosphere", L"FX 5 Brightness",
                    L"FX 6 Goblins", L"FX 7 Echoes", L"FX 8 Sci-Fi", L"Fiddle", L"Flute", L"French Horn", L"Fretless Bass", L"Glockenspiel", L"Guitar Fret Noise",
                    L"Guitar Harmonics", L"Gunshotn", L"Harmonica", L"Harpsichord", L"Helicopter", L"Honky-Tonk Piano", L"Kalimba", L"Koto", L"Lead 1 Square",
                    L"Lead 2 Sawtooth", L"Lead 3 Calliope", L"Lead 4 Chiff", L"Lead 5 Charang", L"Lead 6 Voice", L"Lead 7 Fifths", L"Lead 8 Bass + Lead",
                    L"Marimba", L"Melodic Tom", L"Music Box", L"Muted Trumpet", L"Oboe", L"Ocarina", L"Orchestra Hit", L"Orchestral Harp", L"Overdriven Guitar",
                    L"Pad 1 New Age", L"Pad 2 Warm", L"Pad 3 Polysynth", L"Pad 4 Choir", L"Pad 5 Bowed", L"Pad 6 Metallic", L"Pad 7 Halo", L"Pad 8 Sweep",
                    L"Pan Flute", L"Percussive Organ", L"Piccolo", L"Pizzicato Strings", L"Recorder", L"Reed Organ", L"Reverse Cymbal", L"Rock Organ",
                    L"Seashore", L"Shakuhachi", L"Shamisen", L"Shanai", L"Sitar", L"Slap Bass 1", L"Slap Bass 2", L"Soprano Sax", L"Steel Drums",
                    L"String Ensemble 1", L"String Ensemble 2", L"Synth Bass 1", L"Synth Bass 2", L"Synth Brass 1", L"Synth Brass 2", L"Synth Drum",
                    L"Synth Strings 1", L"Synth Strings 2", L"Synth Voice", L"Taiko Drum", L"Tango Accordion", L"Telephone Ring", L"Tenor Sax", L"Timpani",
                    L"Tinkle Bell", L"Tremolo Strings", L"Trombone", L"Trumpet", L"Tuba", L"Tubular Bells", L"Vibraphone", L"Viola", L"Violin", L"Voice Oohs",
                    L"Whistle", L"Woodblock", L"Xylophone"
            });
            this->comboBox1->Location = System::Drawing::Point(844, 427);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(154, 21);
            this->comboBox1->TabIndex = 47;
            this->comboBox1->Text = L"Acoustic Grand Piano";
            // 
            // lblInstrament
            // 
            this->lblInstrament->AutoSize = true;
            this->lblInstrament->BackColor = System::Drawing::Color::Transparent;
            this->lblInstrament->Location = System::Drawing::Point(740, 430);
            this->lblInstrament->Name = L"lblInstrament";
            this->lblInstrament->Size = System::Drawing::Size(98, 13);
            this->lblInstrament->TabIndex = 48;
            this->lblInstrament->Text = L"Pick an Instrument:";
            // 
            // lblNotesPlayedDynamic
            // 
            this->lblNotesPlayedDynamic->AutoSize = true;
            this->lblNotesPlayedDynamic->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNotesPlayedDynamic->Location = System::Drawing::Point(12, 542);
            this->lblNotesPlayedDynamic->Name = L"lblNotesPlayedDynamic";
            this->lblNotesPlayedDynamic->Size = System::Drawing::Size(0, 19);
            this->lblNotesPlayedDynamic->TabIndex = 49;
            // 
            // txtBoxNotesPlayed
            // 
            this->txtBoxNotesPlayed->AllowDrop = true;
            this->txtBoxNotesPlayed->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtBoxNotesPlayed->Location = System::Drawing::Point(147, 426);
            this->txtBoxNotesPlayed->Multiline = true;
            this->txtBoxNotesPlayed->Name = L"txtBoxNotesPlayed";
            this->txtBoxNotesPlayed->Size = System::Drawing::Size(537, 126);
            this->txtBoxNotesPlayed->TabIndex = 50;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->ClientSize = System::Drawing::Size(1039, 576);
            this->Controls->Add(this->txtBoxNotesPlayed);
            this->Controls->Add(this->lblNotesPlayedDynamic);
            this->Controls->Add(this->lblInstrament);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->btnASharp3);
            this->Controls->Add(this->btnGSharp3);
            this->Controls->Add(this->btnFSharp3);
            this->Controls->Add(this->btnDSharp3);
            this->Controls->Add(this->btnCSharp3);
            this->Controls->Add(this->btnBSharp2);
            this->Controls->Add(this->btnGSharp2);
            this->Controls->Add(this->btnFSharp2);
            this->Controls->Add(this->btnDSharp2);
            this->Controls->Add(this->btnCSharp2);
            this->Controls->Add(this->btnASharp1);
            this->Controls->Add(this->btnGSharp1);
            this->Controls->Add(this->btnFSharp1);
            this->Controls->Add(this->btnDSharp1);
            this->Controls->Add(this->btnCSharp1);
            this->Controls->Add(this->tableLayoutPanel5);
            this->Controls->Add(this->tableLayoutPanel2);
            this->Controls->Add(this->txtBoxBPM);
            this->Controls->Add(this->cbRepeat);
            this->Controls->Add(this->lblBPMStatic);
            this->Controls->Add(this->lblNPStatic);
            this->Controls->Add(this->menuStrip);
            this->MainMenuStrip = this->menuStrip;
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"MyForm";
            this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
            this->Text = L"Musical App";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->menuStrip->ResumeLayout(false);
            this->menuStrip->PerformLayout();
            this->tableLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG1))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG3))->EndInit();
            this->tableLayoutPanel3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG2))->EndInit();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        ListBox mList;
    private: System::Void pbC1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C1 ";
    }

    private: System::Void pbD1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D1 ";
    }

    private: System::Void pbE1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: E1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "E1 ";
    }

    private: System::Void pbF1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F1 ";
    }

    private: System::Void pbG1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G1 ";
    }

    private: System::Void pbA1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A1 ";
    }

    private: System::Void pbB1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B1 ";
    }
    private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        //Exits the application
        std::cout << "Exiting the application..." << std::endl;
        exit(0);
    }
    private: System::Void btnPlay_Click(System::Object^ sender, System::EventArgs^ e) {
        //Play Button
    }
    private: System::Void pbC2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C2 ";
    }
    private: System::Void pbD2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D2 ";
    }
    private: System::Void pbE2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: E2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "E2 ";
    }
    private: System::Void pbF2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F2 ";
    }
    private: System::Void pbG2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G2 ";
    }
    private: System::Void pbA2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A2 ";
    }
    private: System::Void pbB2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B2 ";
    }
    private: System::Void pbC3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C3 ";
    }
    private: System::Void pbD3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D3 ";
    }
    private: System::Void pbE3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: E3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "E3 ";
    }
    private: System::Void pbF3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F3 ";
    }
    private: System::Void pbG3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G3 ";
    }
    private: System::Void pbA3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A3 ";
    }
    private: System::Void pbB3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B3 ";
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnCSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C1# ";
    }
    private: System::Void btnDSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D1# ";
    }
    private: System::Void btnFSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F1# ";
    }
    private: System::Void btnGSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G1# ";
    }
    private: System::Void btnASharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A1# ";
    }
    private: System::Void btnCSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C2# ";
    }
    private: System::Void btnDSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D2# ";
    }
    private: System::Void btnFSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F2# ";
    }
    private: System::Void btnGSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G2# ";
    }
    private: System::Void btnBSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B2# ";
    }
    private: System::Void btnCSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C3# ";
    }
    private: System::Void btnDSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D3# ";
    }
    private: System::Void btnFSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F3# ";
    }
    private: System::Void btnGSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G3# ";
    }
    private: System::Void btnASharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A3# ";
    }
    private: System::Void btnStop_Click(System::Object^ sender, System::EventArgs^ e) {
        this->txtBoxNotesPlayed->Text = " ";
    }
    private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Does things with RtMidi to make sound for your ears<-Temp\n\n" + 
            "Developed by Students at East Carolina University\n\n" + 
            "Students:\n     Obi Azuogalanya\n     Rashun Baucum\n     Malcolm Flaherty\n     Jared Stanley\n     Jacob Hatcher\n     Michael Heath" +
            "\n\n ", "Musical App", MessageBoxButtons::OK, MessageBoxIcon::Question);
    }
};
}
