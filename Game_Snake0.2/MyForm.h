#pragma once

namespace GameSnake02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàÏğîäîëæèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìàãàçèíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem;

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
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ èíôîğìàöèÿÎÈãğåToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìàãàçèíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
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
				this->ìåíşToolStripMenuItem,
					this->èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem, this->âûõîäToolStripMenuItem2, this->èíôîğìàöèÿÎÈãğåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(550, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->ïàóçàÏğîäîëæèòüToolStripMenuItem, this->ìàãàçèíToolStripMenuItem, this->íàñòğîéêèToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			this->ìåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ìåíşToolStripMenuItem_Click);
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// ïàóçàÏğîäîëæèòüToolStripMenuItem
			// 
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Name = L"ïàóçàÏğîäîëæèòüToolStripMenuItem";
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Text = L"Ïàóçà/Ïğîäîëæèòü";
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàóçàÏğîäîëæèòüToolStripMenuItem_Click);
			// 
			// ìàãàçèíToolStripMenuItem
			// 
			this->ìàãàçèíToolStripMenuItem->Name = L"ìàãàçèíToolStripMenuItem";
			this->ìàãàçèíToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			// 
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè";
			this->íàñòğîéêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàñòğîéêèToolStripMenuItem_Click);
			// 
			// èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem
			// 
			this->èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem->Name = L"èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem";
			this->èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem->Size = System::Drawing::Size(150, 20);
			this->èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem->Text = L"Èíôîğìàöèÿ îá àâòîğå";
			this->èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem2
			// 
			this->âûõîäToolStripMenuItem2->Name = L"âûõîäToolStripMenuItem2";
			this->âûõîäToolStripMenuItem2->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem2->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem2_Click);
			// 
			// èíôîğìàöèÿÎÈãğåToolStripMenuItem
			// 
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Name = L"èíôîğìàöèÿÎÈãğåToolStripMenuItem";
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Size = System::Drawing::Size(131, 20);
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Text = L"Èíôîğìàöèÿ î èãğå";
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èíôîğìàöèÿÎÈãğåToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBoxGameData
			// 
			this->groupBoxGameData->BackColor = System::Drawing::Color::Black;
			this->groupBoxGameData->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBoxGameData.BackgroundImage")));
			this->groupBoxGameData->Controls->Add(this->labelScore);
			this->groupBoxGameData->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBoxGameData->Location = System::Drawing::Point(0, 24);
			this->groupBoxGameData->Name = L"groupBoxGameData";
			this->groupBoxGameData->Size = System::Drawing::Size(244, 44);
			this->groupBoxGameData->TabIndex = 2;
			this->groupBoxGameData->TabStop = false;
			this->groupBoxGameData->Text = L"Äàííûå èãğû";
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->BackColor = System::Drawing::Color::Transparent;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->ForeColor = System::Drawing::Color::MintCream;
			this->labelScore->Location = System::Drawing::Point(6, 16);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(49, 15);
			this->labelScore->TabIndex = 3;
			this->labelScore->Text = L"Ñ÷åò: 0";
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->buttonApplySpeed);
			this->groupBoxSettings->Controls->Add(this->numericUpDownSpeedSnake);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxSettings->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->groupBoxSettings->Location = System::Drawing::Point(142, 346);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(267, 82);
			this->groupBoxSettings->TabIndex = 3;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Íàñòğîéêè";
			this->groupBoxSettings->Visible = false;
			// 
			// buttonApplySpeed
			// 
			this->buttonApplySpeed->Location = System::Drawing::Point(93, 53);
			this->buttonApplySpeed->Name = L"buttonApplySpeed";
			this->buttonApplySpeed->Size = System::Drawing::Size(75, 23);
			this->buttonApplySpeed->TabIndex = 2;
			this->buttonApplySpeed->Text = L"Ïğèìåíèòü ";
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
			this->label2->Text = L"Ââåäèòå ñêîğîñòü çìåéêè:";
			// 
			// UpperBorder
			// 
			this->UpperBorder->BackColor = System::Drawing::SystemColors::MenuText;
			this->UpperBorder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpperBorder.BackgroundImage")));
			this->UpperBorder->Location = System::Drawing::Point(0, 61);
			this->UpperBorder->Name = L"UpperBorder";
			this->UpperBorder->Size = System::Drawing::Size(550, 10);
			this->UpperBorder->TabIndex = 3;
			this->UpperBorder->TabStop = false;
			// 
			// LowerBorder
			// 
			this->LowerBorder->BackColor = System::Drawing::SystemColors::MenuText;
			this->LowerBorder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LowerBorder.BackgroundImage")));
			this->LowerBorder->Location = System::Drawing::Point(0, 601);
			this->LowerBorder->Name = L"LowerBorder";
			this->LowerBorder->Size = System::Drawing::Size(550, 10);
			this->LowerBorder->TabIndex = 4;
			this->LowerBorder->TabStop = false;
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::SystemColors::MenuText;
			this->LeftBorder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LeftBorder.BackgroundImage")));
			this->LeftBorder->Location = System::Drawing::Point(0, 61);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(10, 550);
			this->LeftBorder->TabIndex = 5;
			this->LeftBorder->TabStop = false;
			// 
			// RightBorder
			// 
			this->RightBorder->BackColor = System::Drawing::SystemColors::MenuText;
			this->RightBorder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RightBorder.BackgroundImage")));
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
			this->labelGameOver->BackColor = System::Drawing::SystemColors::GrayText;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelGameOver->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelGameOver->Location = System::Drawing::Point(170, 122);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(203, 74);
			this->labelGameOver->TabIndex = 7;
			this->labelGameOver->Text = L"Game Over! Ïåğåçàïóñòèòå èãğó!";
			this->labelGameOver->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGameOver->Visible = false;
			// 
			// label1
			// 
			this->label1->AllowDrop = true;
			this->label1->AutoEllipsis = true;
			this->label1->Location = System::Drawing::Point(0, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(550, 40);
			this->label1->TabIndex = 9;
			this->label1->Text = L"labelFon";
			this->label1->UseWaitCursor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 611);
			this->Controls->Add(this->UpperBorder);
			this->Controls->Add(this->groupBoxGameData);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->RightBorder);
			this->Controls->Add(this->LeftBorder);
			this->Controls->Add(this->LowerBorder);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Èãğà \"Çìåéêà\"";
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
	
		//Äàííûå èãğû
	private: PictureBox^ fruit; //Ôğóêò
	private: array<PictureBox^>^ Snake; // Çìåÿ
	private: bool play; // èãğàòü
	private: bool die; // ñìåğòü
	private: bool firstLaunch; // ïåğâûé çàïóñê
	private: float updateInterval = 100;// èíòåğâàë îáíîâëåíèÿ
	private: int step = 10; //øàã
	private: int score = 0; // ñ÷åò


	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void ChackBorders();


//Îáğàáîò÷èêè íàæàòèÿ êíîïîê

private: System::Void èíôîğìàöèÿÎáÀâòîğåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ìåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ïàóçàÏğîäîëæèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void íàñòğîéêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void âûõîäToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void èíôîğìàöèÿÎÈãğåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	   //private: System::Void ìàãàçèíToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	   //}

// Îòñëåæèâàíèå êëàâèø
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

// Ñîáûòèÿ ïî îáíîâëåíèş èãğû
private: void GameForm_Update(Object^ obgect, EventArgs^ e);

};
}