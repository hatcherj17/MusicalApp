#include <iostream>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <sstream>
#include <vector>
#include <map>

#pragma once

namespace Project2 {

    using namespace System;
    using namespace System::Threading;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }


    public: void initialize();
    public: void setInstrument(int);
    public: void setVolume(int);
    public: void noteOn(int);
    public: void noteOff(int);
    private: System::Windows::Forms::Button^ btnSetNoteTime;
    private: System::Windows::Forms::ToolStripMenuItem^ saveNotesPlayedToolStripMenuItem;
    private: System::Windows::Forms::Button^ btnReset;
    public:
    public: int noteTime = 500;

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

    protected:
    private: System::Windows::Forms::ToolStripMenuItem^ fIleToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ openFromFileToolStripMenuItem;

    private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
    private: System::Windows::Forms::Label^ lblNPStatic;




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
    private: System::Windows::Forms::Label^ lblNoteLength;
    private: System::Windows::Forms::TextBox^ txtBoxNoteLength;

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
            this->saveNotesPlayedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->lblNPStatic = (gcnew System::Windows::Forms::Label());
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
            this->btnReset = (gcnew System::Windows::Forms::Button());
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
            this->lblNoteLength = (gcnew System::Windows::Forms::Label());
            this->txtBoxNoteLength = (gcnew System::Windows::Forms::TextBox());
            this->btnSetNoteTime = (gcnew System::Windows::Forms::Button());
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
                    this->saveNotesPlayedToolStripMenuItem
            });
            this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
            this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
            this->settingsToolStripMenuItem->Text = L"Settings";
            // 
            // openFromFileToolStripMenuItem
            // 
            this->openFromFileToolStripMenuItem->Name = L"openFromFileToolStripMenuItem";
            this->openFromFileToolStripMenuItem->Size = System::Drawing::Size(170, 22);
            this->openFromFileToolStripMenuItem->Text = L"Open from File";
            this->openFromFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFromFileToolStripMenuItem_Click);
            // 
            // saveNotesPlayedToolStripMenuItem
            // 
            this->saveNotesPlayedToolStripMenuItem->Name = L"saveNotesPlayedToolStripMenuItem";
            this->saveNotesPlayedToolStripMenuItem->Size = System::Drawing::Size(170, 22);
            this->saveNotesPlayedToolStripMenuItem->Text = L"Save Notes Played";
            this->saveNotesPlayedToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveNotesPlayedToolStripMenuItem_Click);
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
            this->tableLayoutPanel1->Size = System::Drawing::Size(335, 379);
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
            this->pbB1->Size = System::Drawing::Size(47, 375);
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
            this->pbF1->Size = System::Drawing::Size(41, 375);
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
            this->pbE1->Size = System::Drawing::Size(41, 375);
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
            this->pbD1->Size = System::Drawing::Size(41, 375);
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
            this->pbC1->Size = System::Drawing::Size(41, 375);
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
            this->pbA1->Size = System::Drawing::Size(41, 375);
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
            this->pbG1->Size = System::Drawing::Size(41, 375);
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
            this->tableLayoutPanel2->Size = System::Drawing::Size(1023, 385);
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
            this->tableLayoutPanel4->Size = System::Drawing::Size(335, 379);
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
            this->pbB3->Size = System::Drawing::Size(47, 375);
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
            this->pbF3->Size = System::Drawing::Size(41, 375);
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
            this->pbE3->Size = System::Drawing::Size(41, 375);
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
            this->pbD3->Size = System::Drawing::Size(41, 375);
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
            this->pbC3->Size = System::Drawing::Size(41, 375);
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
            this->pbA3->Size = System::Drawing::Size(41, 375);
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
            this->pbG3->Size = System::Drawing::Size(41, 375);
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
            this->tableLayoutPanel3->Size = System::Drawing::Size(335, 379);
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
            this->pbB2->Size = System::Drawing::Size(47, 375);
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
            this->pbF2->Size = System::Drawing::Size(41, 375);
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
            this->pbE2->Size = System::Drawing::Size(41, 375);
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
            this->pbD2->Size = System::Drawing::Size(41, 375);
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
            this->pbC2->Size = System::Drawing::Size(41, 375);
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
            this->pbA2->Size = System::Drawing::Size(41, 375);
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
            this->pbG2->Size = System::Drawing::Size(41, 375);
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
            this->tableLayoutPanel5->Controls->Add(this->btnReset, 1, 0);
            this->tableLayoutPanel5->Controls->Add(this->btnPlay, 0, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(721, 505);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel5->Size = System::Drawing::Size(304, 63);
            this->tableLayoutPanel5->TabIndex = 31;
            // 
            // btnReset
            // 
            this->btnReset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnReset->Location = System::Drawing::Point(158, 3);
            this->btnReset->Name = L"btnReset";
            this->btnReset->Size = System::Drawing::Size(147, 57);
            this->btnReset->TabIndex = 54;
            this->btnReset->Text = L"Reset";
            this->btnReset->UseVisualStyleBackColor = true;
            this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
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
                L"0:Acoustic Grand Piano  ", L"1:Bright Acoustic Piano ",
                    L"2:Electric Grand Piano  ", L"3:Honky-Tonk Piano ", L"4:Electric Piano 1      ", L"5:Electric Piano 2      ", L"6:Harpsichord           ",
                    L"7:Clavi ", L"8:Celesta               ", L"9:Glockenspiel          ", L"10:Music Box            ", L"11:Vibraphone ", L"12:Marimba              ",
                    L"13:Xylophone            ", L"14:Tubular Bells        ", L"15:Dulcimer ", L"16:Drawbar Organ        ", L"17:Percussive Organ     ",
                    L"18:Rock Organ           ", L"19:Church Organ ", L"20:Reed Organ           ", L"21:Accordion            ", L"22:Harmonica            ",
                    L"23:Tango Accordion ", L"24:Acoustic Guit Nylon  ", L"25:Acoustic Guit Steel  ", L"26:Electric Guitar Jazz ", L"27:Electric Guitar Clean ",
                    L"28:Electric Guit Muted  ", L"29:Overdriven Guitar    ", L"30:Distortion Guitar    ", L"31:Guitar Harmonics ", L"32:Acoustic Bass        ",
                    L"33:Electric Bass Finger ", L"34:Electric Bass Pick   ", L"35:Fretless Bass ", L"36:Slap Bass 1          ", L"37:Slap Bass 2          ",
                    L"38:Synth Bass 1         ", L"39:Synth Bass 2 ", L"40:Violin               ", L"41:Viola                ", L"42:Cello                ",
                    L"43:Contrabass ", L"44:Tremolo Strings      ", L"45:Pizzicato Strings    ", L"46:Orchestral Harp     ", L"47:Timpani ", L"48:String Ensemble 1    ",
                    L"49:String Ensemble 2    ", L"50:Synth Strings 1      ", L"51:Synth Strings 2 ", L"52:Choir Aahs           ", L"53:Voice Oohs           ",
                    L"54:Synth Voice          ", L"55:Orchestra Hit", L"56:Trumpet              ", L"57:Trombone             ", L"58:Tuba                 ",
                    L"59:Muted Trumpet", L"60:French Horn          ", L"61:Brass Section        ", L"62:Synth Brass 1        ", L"63:Synth Brass 2",
                    L"64:Soprano Sax          ", L"65:Alto Sax             ", L"66:Tenor Sax            ", L"67:Baritone Sax", L"68:Oboe                 ",
                    L"69:English Horn         ", L"70:Bassoon              ", L"71:Clarinet", L"72:Piccolo              ", L"73:Flute                ",
                    L"74:Recorder             ", L"75:Pan Flute", L"76:Blown Bottle         ", L"77:Shakuhachi           ", L"78:Whistle             ",
                    L"79:Ocarina", L"80:Lead 1 Square        ", L"81:Lead 2 Sawtooth      ", L"82:Lead 3 Calliope      ", L"83:Lead 4 Chiff", L"84:Lead 5 Charang       ",
                    L"85:Lead 6 Voice         ", L"86:Lead 7 Fifths        ", L"87:Lead 8 Bass + Lead", L"88:Pad 1 New Age        ", L"89:Pad 2 Warm           ",
                    L"90:Pad 3 Polysynth      ", L"91:Pad 4 Choir ", L"92:Pad 5 Bowed          ", L"93:Pad 6 Metallic       ", L"94:Pad 7 Halo           ",
                    L"95:Pad 8 Sweep ", L"96:FX 1 Rain            ", L"97:FX 2 Soundtrack      ", L"98:FX 3 Crystal         ", L"99:FX 4 Atmosphere ",
                    L"100:FX 5 Brightness     ", L"101:FX 6 Goblins        ", L"102:FX 7 Echoes         ", L"103:FX 8 Sci-Fi ", L"104:Sitar               ",
                    L"105:Banjo               ", L"106:Shamisen            ", L"107:Koto ", L"108:Kalimba             ", L"109:Bagpipe             ",
                    L"110:Fiddle              ", L"111:Shanai ", L"112:Tinkle Bell         ", L"113:Agogo               ", L"114:Steel Drums        ",
                    L"115:Woodblock ", L"116:Taiko Drum          ", L"117:Melodic Tom         ", L"118:Synth Drum         ", L"119:Reverse Cymbal ",
                    L"120:Guitar Fret Noise   ", L"121:Breath Noise        ", L"122:Seashore            ", L"123:Bird Tweet ", L"124:Telephone Ring      ",
                    L"125:Helicopter          ", L"126:Applause            ", L"127:Gunshot"
            });
            this->comboBox1->Location = System::Drawing::Point(844, 427);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(178, 21);
            this->comboBox1->TabIndex = 47;
            this->comboBox1->Text = L"0:Acoustic Grand Piano  ";
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
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
            this->txtBoxNotesPlayed->Location = System::Drawing::Point(144, 418);
            this->txtBoxNotesPlayed->MaxLength = 150;
            this->txtBoxNotesPlayed->Multiline = true;
            this->txtBoxNotesPlayed->Name = L"txtBoxNotesPlayed";
            this->txtBoxNotesPlayed->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->txtBoxNotesPlayed->Size = System::Drawing::Size(568, 152);
            this->txtBoxNotesPlayed->TabIndex = 50;
            // 
            // lblNoteLength
            // 
            this->lblNoteLength->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->lblNoteLength->AutoSize = true;
            this->lblNoteLength->Location = System::Drawing::Point(734, 455);
            this->lblNoteLength->Name = L"lblNoteLength";
            this->lblNoteLength->Size = System::Drawing::Size(235, 13);
            this->lblNoteLength->TabIndex = 51;
            this->lblNoteLength->Text = L"How long should each note play in milliseconds\?";
            // 
            // txtBoxNoteLength
            // 
            this->txtBoxNoteLength->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->txtBoxNoteLength->Location = System::Drawing::Point(993, 452);
            this->txtBoxNoteLength->Name = L"txtBoxNoteLength";
            this->txtBoxNoteLength->Size = System::Drawing::Size(29, 20);
            this->txtBoxNoteLength->TabIndex = 52;
            this->txtBoxNoteLength->Text = L"500";
            // 
            // btnSetNoteTime
            // 
            this->btnSetNoteTime->Location = System::Drawing::Point(812, 476);
            this->btnSetNoteTime->Name = L"btnSetNoteTime";
            this->btnSetNoteTime->Size = System::Drawing::Size(122, 23);
            this->btnSetNoteTime->TabIndex = 53;
            this->btnSetNoteTime->Text = L"Set Note Length";
            this->btnSetNoteTime->UseVisualStyleBackColor = true;
            this->btnSetNoteTime->Click += gcnew System::EventHandler(this, &MyForm::btnSetNoteTime_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->ClientSize = System::Drawing::Size(1039, 582);
            this->Controls->Add(this->btnSetNoteTime);
            this->Controls->Add(this->txtBoxNoteLength);
            this->Controls->Add(this->lblNoteLength);
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
            this->Controls->Add(this->lblNPStatic);
            this->Controls->Add(this->menuStrip);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
        noteOn(48);
        Sleep(noteTime);
        noteOff(48);
    }

    private: System::Void pbD1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D1 ";
        noteOn(50);
        Sleep(noteTime);
        noteOff(50);
    }

    private: System::Void pbE1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: E1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "E1 ";
        noteOn(52);
        Sleep(noteTime);
        noteOff(52);
    }

    private: System::Void pbF1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F1 ";
        noteOn(53);
        Sleep(noteTime);
        noteOff(53);
    }

    private: System::Void pbG1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G1 ";
        noteOn(55);
        Sleep(noteTime);
        noteOff(55);
    }

    private: System::Void pbA1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A1 ";
        noteOn(57);
        Sleep(noteTime);
        noteOff(57);
    }

    private: System::Void pbB1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B1" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B1 ";
        noteOn(59);
        Sleep(noteTime);
        noteOff(59);
    }
    private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        //Exits the application
        std::cout << "Exiting the application..." << std::endl;
        exit(0);
    }
    
    private: std::vector<std::string> splitString(std::string text) {
        std::istringstream iss(text);
        std::vector<std::string> result;
        for (std::string s; iss >> s;)
            result.push_back(s);
        return result;
    }

    private: int whichNote(std::string note) {
        std::map<std::string, int> noteMap = {
            {"C1" , 48},
            {"C1#", 49},
            {"D1" , 50},
            {"D1#", 51},
            {"E1" , 52},
        	{"F1" , 53},
        	{"F1#", 54},
        	{"G1" , 55},
        	{"G1#", 56},
        	{"A1" , 57},
        	{"A1#", 58},
        	{"B1" , 59},
        	{"C2" , 60},
        	{"C2#", 61},
        	{"D2" , 62},
        	{"D2#", 63},
        	{"E2" , 64},
        	{"F2" , 65},
        	{"F2#", 66},
        	{"G2" , 67},
        	{"G2#", 68},
        	{"A2" , 69},
        	{"B2#", 70},
        	{"B2" , 71},
        	{"C3" , 72},
        	{"C3#", 73},
        	{"D3" , 74},
        	{"D3#", 75},
        	{"E3" , 76},
        	{"F3" , 77},
        	{"F3#", 78},
        	{"G3" , 79},
        	{"G3#", 80},
        	{"A3" , 81},
        	{"A3#", 82},
        	{"B3" , 83}
        };
        return noteMap[note];
    }
    
    private: void playNotes() {
        String^ text = txtBoxNotesPlayed->Text;
        std::string unText = msclr::interop::marshal_as<std::string>(text);
        std::vector<std::string> split = splitString(unText);
        int length = split.size();
        for (int i = 0; i < length; i++) {
            int theNote = whichNote(split[i]);
            noteOn(theNote);
            Sleep(noteTime);
            noteOff(theNote);
        }
    }

    private: System::Void btnPlay_Click(System::Object^ sender, System::EventArgs^ e) {
        //Play Button
        noteTime = System::Int32::Parse(this->txtBoxNoteLength->Text);
        Thread^ backgroundThread = gcnew Thread(gcnew ThreadStart(this, &MyForm::playNotes));
        backgroundThread->Start();
    }
    private: System::Void pbC2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C2 ";
        noteOn(60);
        Sleep(noteTime);
        noteOff(60);
    }
    private: System::Void pbD2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D2 ";
        noteOn(62);
        Sleep(noteTime);
        noteOff(62);
    }
    private: System::Void pbE2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: E2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "E2 ";
        noteOn(64);
        Sleep(noteTime);
        noteOff(64);
    }
    private: System::Void pbF2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F2 ";
        noteOn(65);
        Sleep(noteTime);
        noteOff(65);
    }
    private: System::Void pbG2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G2 ";
        noteOn(67);
        Sleep(noteTime);
        noteOff(67);
    }
    private: System::Void pbA2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A2 ";
        noteOn(69);
        Sleep(noteTime);
        noteOff(69);
    }
    private: System::Void pbB2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B2" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B2 ";
        noteOn(71);
        Sleep(noteTime);
        noteOff(71);
    }
    private: System::Void pbC3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C3 ";
        noteOn(72);
        Sleep(noteTime);
        noteOff(72);
    }
    private: System::Void pbD3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D3 ";
        noteOn(74);
        Sleep(noteTime);
        noteOff(74);
    }
    private: System::Void pbE3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: E3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "E3 ";
        noteOn(76);
        Sleep(noteTime);
        noteOff(76);
    }
    private: System::Void pbF3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F3 ";
        noteOn(77);
        Sleep(noteTime);
        noteOff(77);
    }
    private: System::Void pbG3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G3 ";
        noteOn(79);
        Sleep(noteTime);
        noteOff(79);
    }
    private: System::Void pbA3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A3 ";
        noteOn(81);
        Sleep(noteTime);
        noteOff(81);
    }
    private: System::Void pbB3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B3" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B3 ";
        noteOn(83);
        Sleep(noteTime);
        noteOff(83);
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnCSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C1# ";
        noteOn(49);
        Sleep(noteTime);
        noteOff(49);
    }
    private: System::Void btnDSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D1# ";
        noteOn(51);
        Sleep(noteTime);
        noteOff(51);
    }
    private: System::Void btnFSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F1# ";
        noteOn(54);
        Sleep(noteTime);
        noteOff(54);
    }
    private: System::Void btnGSharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G1# ";
        noteOn(56);
        Sleep(noteTime);
        noteOff(56);
    }
    private: System::Void btnASharp1_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A1Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A1# ";
        noteOn(58);
        Sleep(noteTime);
        noteOff(58);
    }
    private: System::Void btnCSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C2# ";
        noteOn(61);
        Sleep(noteTime);
        noteOff(61);
    }
    private: System::Void btnDSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D2# ";
        noteOn(63);
        Sleep(noteTime);
        noteOff(63);
    }
    private: System::Void btnFSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F2# ";
        noteOn(66);
        Sleep(noteTime);
        noteOff(66);
    }
    private: System::Void btnGSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G2# ";
        noteOn(68);
        Sleep(noteTime);
        noteOff(68);
    }
    private: System::Void btnBSharp2_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: B2Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "B2# ";
        noteOn(70);
        Sleep(noteTime);
        noteOff(70);
    }
    private: System::Void btnCSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: C3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "C3# ";
        noteOn(73);
        Sleep(noteTime);
        noteOff(73);
    }
    private: System::Void btnDSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: D3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "D3# ";
        noteOn(75);
        Sleep(noteTime);
        noteOff(75);
    }
    private: System::Void btnFSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: F3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "F3# ";
        noteOn(78);
        Sleep(noteTime);
        noteOff(78);
    }
    private: System::Void btnGSharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: G3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "G3# ";
        noteOn(80);
        Sleep(noteTime);
        noteOff(80);
    }
    private: System::Void btnASharp3_Click(System::Object^ sender, System::EventArgs^ e) {
        //Shows that when the image is clicked the code is ran
        std::cout << "Clicked: A3Sharp" << std::endl;
        this->txtBoxNotesPlayed->Text = this->txtBoxNotesPlayed->Text + "A3# ";
        noteOn(82);
        Sleep(noteTime);
        noteOff(82);
    }
    private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Does things with RtMidi to make sound for your ears<-Temp\n\n" +
            "Developed by Students at East Carolina University\n\n" +
            "Students:\n     Obi Azuogalanya\n     Rashun Baucum\n     Malcolm Flaherty\n     Jared Stanley\n     Jacob Hatcher\n     Michael Heath" +
            "\n\n ", "Musical App", MessageBoxButtons::OK, MessageBoxIcon::Question);
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        int index = comboBox1->SelectedIndex;
        setInstrument(index);
    }

    private: System::Void btnSetNoteTime_Click(System::Object^ sender, System::EventArgs^ e) {
         noteTime = System::Int32::Parse(this->txtBoxNoteLength->Text);
    }
    private: System::Void saveNotesPlayedToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
        saveFileDialog->Filter = "Text file (*.txt)|*.txt";
        saveFileDialog->Title = "Save a text file";
        saveFileDialog->ShowDialog();
        
        try {
            String^ fileName = saveFileDialog->FileName;
            if (fileName == "")
            {
                MessageBox::Show("Error Opening File: NO FILE NAME\nPlease enter a save name", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                StreamWriter^ pwriter = gcnew StreamWriter(fileName);
                pwriter->WriteLine(this->txtBoxNoteLength->Text);
                pwriter->WriteLine(this->txtBoxNotesPlayed->Text);
                pwriter->WriteLine(this->comboBox1->SelectedIndex);
                pwriter->Close();
            }
        }
        catch (int e) {
            MessageBox::Show("Error Opening File: " + e.ToString(), "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void openFromFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
        openFileDialog->Filter = "Text file (*.txt)|*.txt";
        openFileDialog->Multiselect = "Open a text file";
        openFileDialog->ShowDialog();
        try {
            String^ readerFile = openFileDialog->FileName;
            StreamReader^ pReader = gcnew StreamReader(readerFile);
            this->txtBoxNoteLength->Text = pReader->ReadLine();
            this->txtBoxNotesPlayed->Text = pReader->ReadLine();
            comboBox1->SelectedIndex = System::Int32::Parse(pReader->ReadLine());
            pReader->Close();
        }
        catch (int e)
        {
            MessageBox::Show("Error Opening File: " + e.ToString(), "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
        this->txtBoxNotesPlayed->Text = " ";
        this->comboBox1->SelectedIndex = 0;
        this->txtBoxNoteLength->Text = "500";
        noteTime = System::Int32::Parse(this->txtBoxNoteLength->Text);
    }
};
}
