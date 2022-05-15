#pragma once

namespace GameSnake02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ новаяИграToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ паузаПродолжитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ магазинToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ информацияОбАвтореToolStripMenuItem;

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
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ информацияОИгреToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новаяИграToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->паузаПродолжитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->магазинToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияОбАвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияОИгреToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->менюToolStripMenuItem,
					this->информацияОбАвтореToolStripMenuItem, this->выходToolStripMenuItem2, this->информацияОИгреToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(550, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->новаяИграToolStripMenuItem,
					this->паузаПродолжитьToolStripMenuItem, this->магазинToolStripMenuItem, this->настройкиToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			this->менюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::менюToolStripMenuItem_Click);
			// 
			// новаяИграToolStripMenuItem
			// 
			this->новаяИграToolStripMenuItem->Name = L"новаяИграToolStripMenuItem";
			this->новаяИграToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->новаяИграToolStripMenuItem->Text = L"Новая игра";
			this->новаяИграToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::новаяИграToolStripMenuItem_Click);
			// 
			// паузаПродолжитьToolStripMenuItem
			// 
			this->паузаПродолжитьToolStripMenuItem->Name = L"паузаПродолжитьToolStripMenuItem";
			this->паузаПродолжитьToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->паузаПродолжитьToolStripMenuItem->Text = L"Пауза/Продолжить";
			this->паузаПродолжитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::паузаПродолжитьToolStripMenuItem_Click);
			// 
			// магазинToolStripMenuItem
			// 
			this->магазинToolStripMenuItem->Name = L"магазинToolStripMenuItem";
			this->магазинToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::настройкиToolStripMenuItem_Click);
			// 
			// информацияОбАвтореToolStripMenuItem
			// 
			this->информацияОбАвтореToolStripMenuItem->Name = L"информацияОбАвтореToolStripMenuItem";
			this->информацияОбАвтореToolStripMenuItem->Size = System::Drawing::Size(150, 20);
			this->информацияОбАвтореToolStripMenuItem->Text = L"Информация об авторе";
			this->информацияОбАвтореToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияОбАвтореToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem2
			// 
			this->выходToolStripMenuItem2->Name = L"выходToolStripMenuItem2";
			this->выходToolStripMenuItem2->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem2->Text = L"Выход";
			this->выходToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem2_Click);
			// 
			// информацияОИгреToolStripMenuItem
			// 
			this->информацияОИгреToolStripMenuItem->Name = L"информацияОИгреToolStripMenuItem";
			this->информацияОИгреToolStripMenuItem->Size = System::Drawing::Size(131, 20);
			this->информацияОИгреToolStripMenuItem->Text = L"Информация о игре";
			this->информацияОИгреToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияОИгреToolStripMenuItem_Click);
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
			this->groupBoxGameData->Text = L"Данные игры";
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
			this->labelScore->Text = L"Счет: 0";
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
			this->groupBoxSettings->Text = L"Настройки";
			this->groupBoxSettings->Visible = false;
			// 
			// buttonApplySpeed
			// 
			this->buttonApplySpeed->Location = System::Drawing::Point(93, 53);
			this->buttonApplySpeed->Name = L"buttonApplySpeed";
			this->buttonApplySpeed->Size = System::Drawing::Size(75, 23);
			this->buttonApplySpeed->TabIndex = 2;
			this->buttonApplySpeed->Text = L"Применить ";
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
			this->label2->Text = L"Введите скорость змейки:";
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
			this->labelGameOver->Text = L"Game Over! Перезапустите игру!";
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
			this->Text = L"Игра \"Змейка\"";
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
	
		//Данные игры
	private: PictureBox^ fruit; //Фрукт
	private: array<PictureBox^>^ Snake; // Змея
	private: bool play; // играть
	private: bool die; // смерть
	private: bool firstLaunch; // первый запуск
	private: float updateInterval = 100;// интервал обновления
	private: int step = 10; //шаг
	private: int score = 0; // счет


	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void ChackBorders();


//Обработчики нажатия кнопок

private: System::Void информацияОбАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void паузаПродолжитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void выходToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void информацияОИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	   //private: System::Void магазинToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	   //}

// Отслеживание клавиш
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

// События по обновлению игры
private: void GameForm_Update(Object^ obgect, EventArgs^ e);

};
}