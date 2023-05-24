 #include "Settings.h"
#include "Game.h"
#include "MainMenu.h"



Pacman::Settings::Settings()
{
    InitializeComponent();

 
}

System::Void Pacman::Settings::ghost1blue_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost1blue->FlatStyle=FlatStyle::Flat;
    ghost1red->FlatStyle = FlatStyle::Popup;
    ghost1green->FlatStyle = FlatStyle::Popup;
    ghost1yellow->FlatStyle = FlatStyle::Popup;
    ghost1color = 0;
}

System::Void Pacman::Settings::ghost1red_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost1red->FlatStyle = FlatStyle::Flat;
    ghost1blue->FlatStyle = FlatStyle::Popup;
    ghost1green->FlatStyle = FlatStyle::Popup;
    ghost1yellow->FlatStyle = FlatStyle::Popup;
    ghost1color = 1;
}

System::Void Pacman::Settings::ghost1green_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost1green->FlatStyle = FlatStyle::Flat;
    ghost1red->FlatStyle = FlatStyle::Popup;
    ghost1blue->FlatStyle = FlatStyle::Popup;
    ghost1yellow->FlatStyle = FlatStyle::Popup;
    ghost1color = 2;
}

System::Void Pacman::Settings::ghost1yellow_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost1yellow->FlatStyle = FlatStyle::Flat;
    ghost1red->FlatStyle = FlatStyle::Popup;
    ghost1green->FlatStyle = FlatStyle::Popup;
    ghost1blue->FlatStyle = FlatStyle::Popup;
    ghost1color = 3;
}

System::Void Pacman::Settings::ghost2blue_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost2blue->FlatStyle = FlatStyle::Flat;
    ghost2red->FlatStyle = FlatStyle::Popup;
    ghost2green->FlatStyle = FlatStyle::Popup;
    ghost2yellow->FlatStyle = FlatStyle::Popup;
    ghost2color = 0;
}

System::Void Pacman::Settings::ghost2red_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost2red->FlatStyle = FlatStyle::Flat;
    ghost2blue->FlatStyle = FlatStyle::Popup;
    ghost2green->FlatStyle = FlatStyle::Popup;
    ghost2yellow->FlatStyle = FlatStyle::Popup;
    ghost2color = 1;
}

System::Void Pacman::Settings::ghost2green_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost2green->FlatStyle = FlatStyle::Flat;
    ghost2blue->FlatStyle = FlatStyle::Popup;
    ghost2red->FlatStyle = FlatStyle::Popup;
    ghost2yellow->FlatStyle = FlatStyle::Popup;
    ghost2color = 2;
}

System::Void Pacman::Settings::ghost2yellow_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost2yellow->FlatStyle = FlatStyle::Flat;
    ghost2red->FlatStyle = FlatStyle::Popup;
    ghost2green->FlatStyle = FlatStyle::Popup;
    ghost2blue->FlatStyle = FlatStyle::Popup;
    ghost2color = 3;
}

System::Void Pacman::Settings::ghost3blue_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost3blue->FlatStyle = FlatStyle::Flat;
    ghost3yellow->FlatStyle = FlatStyle::Popup;
    ghost3green->FlatStyle = FlatStyle::Popup;
    ghost3red->FlatStyle = FlatStyle::Popup;
    ghost3color = 0;
}

System::Void Pacman::Settings::ghost3red_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost3red->FlatStyle = FlatStyle::Flat;
    ghost3yellow->FlatStyle = FlatStyle::Popup;
    ghost3green->FlatStyle = FlatStyle::Popup;
    ghost3blue->FlatStyle = FlatStyle::Popup;
    ghost3color = 1;

}

System::Void Pacman::Settings::ghost3green_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost3green->FlatStyle = FlatStyle::Flat;
    ghost3yellow->FlatStyle = FlatStyle::Popup;
    ghost3red->FlatStyle = FlatStyle::Popup;
    ghost3blue->FlatStyle = FlatStyle::Popup;
    ghost3color = 2;

}

System::Void Pacman::Settings::ghost3yellow_Click(System::Object^ sender, System::EventArgs^ e)
{
    ghost3yellow->FlatStyle = FlatStyle::Flat;
    ghost3red->FlatStyle = FlatStyle::Popup;
    ghost3green->FlatStyle = FlatStyle::Popup;
    ghost3blue->FlatStyle = FlatStyle::Popup;
    ghost3color = 3;

}

System::Void Pacman::Settings::лёгкий_Click(System::Object^ sender, System::EventArgs^ e)
{
    лёгкий->FlatStyle = FlatStyle::Flat;
    средний->FlatStyle = FlatStyle::Popup;
    сложный->FlatStyle = FlatStyle::Popup;
    setplayerspeed = 4;
    setghostsspeed = 5;
}

System::Void Pacman::Settings::средний_Click(System::Object^ sender, System::EventArgs^ e)
{

    средний->FlatStyle = FlatStyle::Flat;
    лёгкий->FlatStyle = FlatStyle::Popup;
    сложный->FlatStyle = FlatStyle::Popup;
    setplayerspeed = 5;
    setghostsspeed = 6;
}

System::Void Pacman::Settings::сложный_Click(System::Object^ sender, System::EventArgs^ e)
{

    сложный->FlatStyle = FlatStyle::Flat;
    средний->FlatStyle = FlatStyle::Popup;
    лёгкий->FlatStyle = FlatStyle::Popup;
    setplayerspeed = 6;
    setghostsspeed = 7;
}

System::Void Pacman::Settings::применить_Click(System::Object^ sender, System::EventArgs^ e)
{
    Game::playerSpeed = setplayerspeed;
    Game::ghost1Speed = setghostsspeed;
    Game::ghost2Speed = setghostsspeed;
    Game::ghost3Speed = setghostsspeed;
    if(ghost1color==0)
        Game::ghost1->Image = Game::imageList1->Images[5];
    else if (ghost1color == 1)
        Game::ghost1->Image = Game::imageList1->Images[6];
    else if (ghost1color == 2)
        Game::ghost1->Image = Game::imageList1->Images[7];
    else if (ghost1color == 3)
        Game::ghost1->Image = Game::imageList1->Images[8];

    if (ghost2color == 0)
        Game::ghost2->Image = Game::imageList1->Images[5];
    else if (ghost2color == 1)
        Game::ghost2->Image = Game::imageList1->Images[6];
    else if (ghost2color == 2)
        Game::ghost2->Image = Game::imageList1->Images[7];
    else if (ghost2color == 3)
        Game::ghost2->Image = Game::imageList1->Images[8];

    if (ghost3color == 0)
        Game::ghost3->Image = Game::imageList1->Images[5];
    else if (ghost3color == 1)
        Game::ghost3->Image = Game::imageList1->Images[6];
    else if (ghost3color == 2)
        Game::ghost3->Image = Game::imageList1->Images[7];
    else if (ghost3color == 3)
        Game::ghost3->Image = Game::imageList1->Images[8]; 
}
