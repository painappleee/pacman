#include "Rating.h"
#include "MainMenu.h"
#include "Game.h"

Pacman::Rating::Rating(void)
{
	InitializeComponent();
		
	resultsPlayers();
}

System::Void Pacman::Rating::в√лавноећеню_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::OpenForms[1]->Show();
	Rating::Close();
}

System::Void Pacman::Rating::resultsPlayers() {

	for (int i = 1; i < MainMenu::size; ++i)
	{
		for (int r = 0; r < MainMenu::size - i; r++)
		{
			if (MainMenu::players[r]->bestResult < MainMenu::players[r+1]->bestResult)
			{
				MainMenu::Player^ temp = MainMenu::players[r];
				MainMenu::players[r] = MainMenu::players[r+1];
				MainMenu::players[r+1] = temp;
			}
		}
	}
	
	for (int r = 0; r < MainMenu::size; r++) {
		if (r < 10)
		{
			if (MainMenu::players[r]->bestResult > -1) {
				textRating->Text += r + 1 + ")    " + MainMenu::players[r]->bestResult + "   " + MainMenu::players[r]->login + "\n";
			}
			else
				break;
		}
		else
			break;
		
	}

}
