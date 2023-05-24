#include "Splash.h"
#include "MainMenu.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Pacman::Splash form;
	Application::Run(% form);
}

Pacman::Splash::Splash(void)
{
	InitializeComponent();

	timerSplash->Start();
}

int i=0;

System::Void Pacman::Splash::timerSplash_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (i == 10) {
		timerSplash->Stop();
		MainMenu^ mMenu= gcnew MainMenu();
		mMenu->Show();
		Splash::Hide();
	}
	else {
		progressBar->Value += 10;
		i++;
		loading->Text = "загрузка " + i * 10 + " %";
	}
}

