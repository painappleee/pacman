#include "Spravka.h"

Pacman::Spravka::Spravka(void)
{
	InitializeComponent();

	String^ fileName = "spr.txt";

	StreamReader^ din = File::OpenText(fileName);
	String^ str;
	while ((str = din->ReadLine()) != nullptr)
	{
		textSpr->Text += str + "\n";
	}

	din->Close();
}
