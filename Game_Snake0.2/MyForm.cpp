#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GameSnake02::MyForm form;
	Application::Run(% form);
}

struct Vector2
{
	int X, Y;
};

Vector2 direction; // направление змейки
Vector2 positionFruit; // позиция фрукта
Vector2 gameArea; // игровая зона


GameSnake02::MyForm::MyForm(void)
{
	InitializeComponent();

	gameArea.X = 500;
	gameArea.Y = 500;

	firstLaunch = true;

	NewGame();

}

void GameSnake02::MyForm::GeneratePositionFruit()
{
	//генерация фрукта(случайно)
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(10, gameArea.X);
	positionFruit.Y = rand->Next(80, gameArea.Y);


	// проверка чтобы фрукт не создался на змейке
	for (int i = 0; i < score; i++)
	{
		if (positionFruit.X == Snake[i]->Location.X &&
			positionFruit.Y == Snake[i]->Location.Y)
		{
			GeneratePositionFruit();
		}
	}

	// преобразования значения кратного шагу
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	// присваиваем фрукту позицию
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	this->Controls->Add(fruit);
}

void GameSnake02::MyForm::Eating()
{
	if (Snake[0]->Location.X == positionFruit.X && Snake[0]->Location.Y == positionFruit.Y)
	{
		labelScore->Text = "Счет: " + ++score;

		//Добавляем новый элемент змейке

		Snake[score] = gcnew PictureBox();
		Snake[score]->Location = Point(Snake[score - 1]->Location.X + step * direction.X, Snake[score - 1]->Location.Y - step * direction.Y);
		Snake[score]->BackColor = Color::Gray;
		Snake[score]->Width = step;
		Snake[score]->Height = step;
		this->Controls->Add(Snake[score]);

		GeneratePositionFruit();
	}
}

void GameSnake02::MyForm::Movement()
{
	for (int i = score; i >= 1; i--)
	{
		Snake[i]->Location = Snake[i - 1]->Location;
	}
	Snake[0]->Location = Point(Snake[0]->Location.X + direction.X * step, Snake[0]->Location.Y + direction.Y * step);
}

void GameSnake02::MyForm::EatYourself()
{
	//Проверка на самопоедание
	for (int i = 1; i < score; i++)
	{
		if (Snake[0]->Location == Snake[i]->Location)
		{
			GameOver();
		}
	}
}

void GameSnake02::MyForm::GameOver()
{
	play = true;
	die = true;

	labelGameOver->Visible = true;
}

void GameSnake02::MyForm::NewGame()
{
	if (!firstLaunch)
	{
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++)
		{
			this->Controls->Remove(Snake[i]);
		}

		score = 0;
	}
	else firstLaunch = false;

	//инициальзация змейки

	Snake = gcnew array <PictureBox^, 1>(400);
	Snake[0] = gcnew PictureBox();
	Snake[0]->Location = Point(200, 200);
	Snake[0]->BackColor = Color::Black;
	Snake[0]->Width = step;
	Snake[0]->Height = step;

	score = 0;
	this->Controls->Add(Snake[0]);


	//Инициализация фрукта
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Red;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//Интервал + таймер
	timer->Interval = updateInterval;
	timer->Start();

	//Задаём направление на запуске
	direction.X = 0;
	direction.Y = 1;

	//Можно играть
	play = true;
	die = false;

	labelScore->Text = "Счет: 0";

	//Скрываемне нужные компоненты на фоне
	labelGameOver->Visible = false;
	groupBoxSettings->Visible = false;
}

void GameSnake02::MyForm::ChackBorders()
{
	if (Snake[0]->Location.X == RightBorder->Location.X || Snake[0]->Location.X == LeftBorder->Location.X)
	{
		GameOver();
	}
	else if (Snake[0]->Location.Y <= UpperBorder->Location.Y || Snake[0]->Location.Y >= LowerBorder->Location.Y)
	{
		GameOver();
	}
	
}

//Реализация событий

System::Void GameSnake02::MyForm::выходToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void GameSnake02::MyForm::информацияОИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Правила игры : \n1.Для управления использовать стрелки \n2.Ешьте фрукты для набора счёта и увеличения змейки\n 3. Нельзя есть себя, и врезаться в стенки", "Правила игры!");
	return System::Void();
}

System::Void GameSnake02::MyForm::информацияОбАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Об Авторе : \n1.Молодой, красивый програмист по имени Артём\n2.Живу в городе Одесса, 18 лет\n 3.Имею не очень большой опыт, но готов к любым новым задачам! ", "Об Авторе!");
	return System::Void();
}

System::Void GameSnake02::MyForm::менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void GameSnake02::MyForm::новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();
	return System::Void();
}

System::Void GameSnake02::MyForm::паузаПродолжитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play)
	{
		play = false;
	}
	else
	{
		play = true;
		timer->Start();
	}

	return System::Void();
}

System::Void GameSnake02::MyForm::настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxSettings->Visible == false)
	{
		//приостанавливаем игру
		play = false;

		buttonApplySpeed->Enabled = true;
		numericUpDownSpeedSnake->Enabled = true;
		groupBoxSettings->Visible = true;

	}
	else
	{
		//Запускаем игру 
		play = true;
		timer->Start();

		buttonApplySpeed->Enabled = false;
		numericUpDownSpeedSnake->Enabled = false;
		groupBoxSettings->Visible = false;
	}
}

System::Void GameSnake02::MyForm::buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e)
{

	updateInterval = Convert::ToSingle(numericUpDownSpeedSnake->Value);
	timer->Interval = updateInterval;

	buttonApplySpeed->Enabled = false;
	numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	// Запускаем игру
	play = true;
	timer->Start();

	return System::Void();
}

System::Void GameSnake02::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	//Читаем нажатую клавишу

	if (e->KeyCode.ToString() == "Right")
	{
		direction.X = 1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Left")
	{
		direction.X = -1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Up")
	{
		direction.X = 0;
		direction.Y = -1;
	}
	else if (e->KeyCode.ToString() == "Down")
	{
		direction.X = 0;
		direction.Y = 1;
	}

	return System::Void();
}

void GameSnake02::MyForm::GameForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play)
	{
		// задаёт движение змейки
		Movement();

		Eating();// проверка на фрукт
		EatYourself();// проверка на самосьедание
		ChackBorders();// проверка на припятствия 

	}
	else if (die && play)
	{
		timer->Stop();
		MessageBox::Show("Игра окончена!", "Внимание!");
	}
	else if (!play && !die)
	{
		timer->Stop();
		MessageBox::Show("Игра приостановлена!", "Внимание!");
	}
}

