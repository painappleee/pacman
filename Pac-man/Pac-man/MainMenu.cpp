#include "MainMenu.h"
#include "Game.h"
#include "Rating.h"
#include "Settings.h"
#include "Spravka.h"
#include "Splash.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;



Pacman::MainMenu::MainMenu(void)
{
	InitializeComponent();

	

	FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
	BinaryReader^ r = gcnew BinaryReader(fs);


		int i = 0;
		while (r->BaseStream->Position < r->BaseStream->Length) {

				players[i] = gcnew Player;
				players[i]->login = r->ReadString();
				players[i]->password = r->ReadString();
				players[i]->bestResult = r->ReadInt32();
				i++;
				

		}
		size = i;
	fs->Close();


}

System::Void Pacman::MainMenu::войти_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (maskedTextBox1->Text != "" && maskedTextBox2->Text != "") {
		errorlogin->Visible = false;
		errorpassword->Visible = false;
		errorreg->Visible = false;
		bool reg = false;
		for (int i = 0; i < size; i++) {
			if (players[i]->login == maskedTextBox1->Text) {
				reg = true;
				if (players[i]->password == maskedTextBox2->Text) {
					tec = i;
					Game^ game = gcnew Game();
					game->Show();
					MainMenu::Hide();
				}
				else {
					errorpassword->Visible = true;
				}
			}
		}
		if (!reg) {
			errorlogin->Visible = true;
		}
	}
	

}

System::Void Pacman::MainMenu::выход_Click(System::Object^ sender, System::EventArgs^ e)
{
	FileStream^ fs = gcnew FileStream(fileName, FileMode::Create);
	BinaryWriter^ w = gcnew BinaryWriter(fs);
	for (int i = 0; i < size; i++) {
		w->Write(players[i]->login);
		w->Write(players[i]->password);
		w->Write(players[i]->bestResult);
	}
	fs->Close();

	Application::OpenForms[0]->Close();
}

System::Void Pacman::MainMenu::регистрация_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (maskedTextBox1->Text != "" && maskedTextBox2->Text != "") {
		errorreg->Visible = false;
		bool reg = false;
		for (int i = 0; i < size; ++i) {
			if (players[i]->login == maskedTextBox1->Text) {
				reg = true;
				errorreg->Visible = true;
			}
		}

		if (!reg) {

			players[size] = gcnew Player;
			players[size]->login = maskedTextBox1->Text;
			players[size]->password = maskedTextBox2->Text;
			players[size]->bestResult = -1;
			errorreg->Visible = false;
			size += 1;
		}
	}

}
System::Void Pacman::MainMenu::рейтинг_Click(System::Object^ sender, System::EventArgs^ e)
{
	Rating^ stat = gcnew Rating();
	stat->Show();
	MainMenu::Hide();
}

System::Void Pacman::MainMenu::обИгре_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Версия 1.0\nДата: 22.05.23\nИгра разработана студенткой группы ИСТб-22-1\nСапожниковой Анастасией Алексеевной",
		"Об игре",MessageBoxButtons::OK,MessageBoxIcon::Information);
}

System::Void Pacman::MainMenu::справка_Click(System::Object^ sender, System::EventArgs^ e)
{
	Spravka^ spavka = gcnew Spravka();
	spavka->ShowDialog();

}
