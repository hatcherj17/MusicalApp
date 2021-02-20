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

	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ fIleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ picBoxTemp;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFromFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ convertToMidiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ lblNPStatic;
	private: System::Windows::Forms::Label^ lblBPMStatic;
	private: System::Windows::Forms::CheckBox^ cbRepeat;
	private: System::Windows::Forms::TextBox^ txtBoxBPM;
	private: System::Windows::Forms::Button^ btnStop;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fIleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFromFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToMidiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->picBoxTemp = (gcnew System::Windows::Forms::PictureBox());
			this->lblNPStatic = (gcnew System::Windows::Forms::Label());
			this->lblBPMStatic = (gcnew System::Windows::Forms::Label());
			this->cbRepeat = (gcnew System::Windows::Forms::CheckBox());
			this->txtBoxBPM = (gcnew System::Windows::Forms::TextBox());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->menuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxTemp))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(815, 579);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(103, 47);
			this->btnPlay->TabIndex = 0;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
			// 
			// picBoxTemp
			// 
			this->picBoxTemp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxTemp.Image")));
			this->picBoxTemp->Location = System::Drawing::Point(12, 27);
			this->picBoxTemp->Name = L"picBoxTemp";
			this->picBoxTemp->Size = System::Drawing::Size(1015, 346);
			this->picBoxTemp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxTemp->TabIndex = 2;
			this->picBoxTemp->TabStop = false;
			// 
			// lblNPStatic
			// 
			this->lblNPStatic->AutoSize = true;
			this->lblNPStatic->BackColor = System::Drawing::Color::Transparent;
			this->lblNPStatic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNPStatic->Location = System::Drawing::Point(72, 436);
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
			this->lblBPMStatic->Location = System::Drawing::Point(71, 466);
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
			this->cbRepeat->Location = System::Drawing::Point(76, 495);
			this->cbRepeat->Name = L"cbRepeat";
			this->cbRepeat->Size = System::Drawing::Size(93, 29);
			this->cbRepeat->TabIndex = 5;
			this->cbRepeat->Text = L"Repeat";
			this->cbRepeat->UseVisualStyleBackColor = false;
			this->cbRepeat->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbRepeat_CheckedChanged);
			// 
			// txtBoxBPM
			// 
			this->txtBoxBPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxBPM->Location = System::Drawing::Point(241, 466);
			this->txtBoxBPM->Name = L"txtBoxBPM";
			this->txtBoxBPM->Size = System::Drawing::Size(37, 30);
			this->txtBoxBPM->TabIndex = 6;
			// 
			// btnStop
			// 
			this->btnStop->Location = System::Drawing::Point(924, 579);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(103, 47);
			this->btnStop->TabIndex = 7;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 638);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->txtBoxBPM);
			this->Controls->Add(this->cbRepeat);
			this->Controls->Add(this->lblBPMStatic);
			this->Controls->Add(this->lblNPStatic);
			this->Controls->Add(this->picBoxTemp);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"Musical App";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxTemp))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void cbRepeat_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
};
}
