#pragma once

namespace GameSnake02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::GroupBox^ groupBoxGameData;

	private: System::Windows::Forms::Label^ labelScore;

	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::Button^ buttonApplySpeed;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSpeedSnake;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ UpperBorder;
	private: System::Windows::Forms::PictureBox^ LowerBorder;
	private: System::Windows::Forms::PictureBox^ LeftBorder;

	private: System::Windows::Forms::PictureBox^ RightBorder;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ labelGameOver;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBoxGameData = (gcnew System::Windows::Forms::GroupBox());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplySpeed = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSpeedSnake = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UpperBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LowerBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			this->RightBorder = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBoxGameData->SuspendLayout();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����ToolStripMenuItem,
					this->������������������ToolStripMenuItem, this->�����ToolStripMenuItem2, this->���������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(550, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���������ToolStripMenuItem,
					this->���������������ToolStripMenuItem, this->�������ToolStripMenuItem, this->���������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->���������ToolStripMenuItem->Text = L"����� ����";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->���������������ToolStripMenuItem->Text = L"�����/����������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(150, 20);
			this->������������������ToolStripMenuItem->Text = L"���������� �� ������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem2
			// 
			this->�����ToolStripMenuItem2->Name = L"�����ToolStripMenuItem2";
			this->�����ToolStripMenuItem2->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem2->Text = L"�����";
			this->�����ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem2_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(131, 20);
			this->���������������ToolStripMenuItem->Text = L"���������� � ����";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBoxGameData
			// 
			this->groupBoxGameData->Controls->Add(this->labelScore);
			this->groupBoxGameData->Location = System::Drawing::Point(12, 27);
			this->groupBoxGameData->Name = L"groupBoxGameData";
			this->groupBoxGameData->Size = System::Drawing::Size(244, 40);
			this->groupBoxGameData->TabIndex = 2;
			this->groupBoxGameData->TabStop = false;
			this->groupBoxGameData->Text = L"������ ����";
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->Location = System::Drawing::Point(6, 16);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(49, 15);
			this->labelScore->TabIndex = 3;
			this->labelScore->Text = L"����: 0";
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->buttonApplySpeed);
			this->groupBoxSettings->Controls->Add(this->numericUpDownSpeedSnake);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxSettings->Location = System::Drawing::Point(142, 346);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(267, 82);
			this->groupBoxSettings->TabIndex = 3;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"���������";
			this->groupBoxSettings->Visible = false;
			// 
			// buttonApplySpeed
			// 
			this->buttonApplySpeed->Location = System::Drawing::Point(93, 53);
			this->buttonApplySpeed->Name = L"buttonApplySpeed";
			this->buttonApplySpeed->Size = System::Drawing::Size(75, 23);
			this->buttonApplySpeed->TabIndex = 2;
			this->buttonApplySpeed->Text = L"��������� ";
			this->buttonApplySpeed->UseVisualStyleBackColor = true;
			this->buttonApplySpeed->Click += gcnew System::EventHandler(this, &MyForm::buttonApplySpeed_Click);
			// 
			// numericUpDownSpeedSnake
			// 
			this->numericUpDownSpeedSnake->Location = System::Drawing::Point(164, 17);
			this->numericUpDownSpeedSnake->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDownSpeedSnake->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSpeedSnake->Name = L"numericUpDownSpeedSnake";
			this->numericUpDownSpeedSnake->Size = System::Drawing::Size(94, 23);
			this->numericUpDownSpeedSnake->TabIndex = 1;
			this->numericUpDownSpeedSnake->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"������� �������� ������:";
			// 
			// UpperBorder
			// 
			this->UpperBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UpperBorder->Location = System::Drawing::Point(0, 61);
			this->UpperBorder->Name = L"UpperBorder";
			this->UpperBorder->Size = System::Drawing::Size(550, 10);
			this->UpperBorder->TabIndex = 3;
			this->UpperBorder->TabStop = false;
			// 
			// LowerBorder
			// 
			this->LowerBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LowerBorder->Location = System::Drawing::Point(0, 601);
			this->LowerBorder->Name = L"LowerBorder";
			this->LowerBorder->Size = System::Drawing::Size(550, 10);
			this->LowerBorder->TabIndex = 4;
			this->LowerBorder->TabStop = false;
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LeftBorder->Location = System::Drawing::Point(0, 61);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(10, 550);
			this->LeftBorder->TabIndex = 5;
			this->LeftBorder->TabStop = false;
			// 
			// RightBorder
			// 
			this->RightBorder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RightBorder->Location = System::Drawing::Point(540, 61);
			this->RightBorder->Name = L"RightBorder";
			this->RightBorder->Size = System::Drawing::Size(10, 550);
			this->RightBorder->TabIndex = 6;
			this->RightBorder->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::GameForm_Update);
			// 
			// labelGameOver
			// 
			this->labelGameOver->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelGameOver->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelGameOver->Location = System::Drawing::Point(170, 122);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(203, 74);
			this->labelGameOver->TabIndex = 7;
			this->labelGameOver->Text = L"Game Over! ������������� ����!";
			this->labelGameOver->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGameOver->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 611);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->RightBorder);
			this->Controls->Add(this->LeftBorder);
			this->Controls->Add(this->LowerBorder);
			this->Controls->Add(this->UpperBorder);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->groupBoxGameData);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� \"������\"";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxGameData->ResumeLayout(false);
			this->groupBoxGameData->PerformLayout();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		//������ ����
	private: PictureBox^ fruit; //�����
	private: array<PictureBox^>^ Snake; // ����
	private: bool play; // ������
	private: bool die; // ������
	private: bool firstLaunch; // ������ ������
	private: float updateInterval = 100;// �������� ����������
	private: int step = 10; //���
	private: int score = 0; // ����


	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void ChackBorders();


//����������� ������� ������

private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void �����ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	   //private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	   //}

// ������������ ������
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

// ������� �� ���������� ����
private: void GameForm_Update(Object^ obgect, EventArgs^ e);

};
}