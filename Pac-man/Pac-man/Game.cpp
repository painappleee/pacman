#include "Game.h"
#include "MainMenu.h"





Pacman::Game::Game(void)
{
	InitializeComponent();
	resetGame();
}

System::Void Pacman::Game::keyisdown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if (isGameOver == 0) {
        goup = e->KeyCode == Keys::Up;
        godown = e->KeyCode == Keys::Down;
        goleft = e->KeyCode == Keys::Left;
        goright = e->KeyCode == Keys::Right;
    }

    if (e->KeyCode == Keys::Enter) {
                resetGame();
    }

     
}




System::Void Pacman::Game::mainGameTimer(System::Object^ sender, System::EventArgs^ e)
{
  
    txtScore->Text = "Ñ÷¸ò: " + score;

    if (goleft) {
        if (open) {
            pacman->Image = imageList1->Images[4];
            open = false;
        }          
        else {
            pacman->Image = imageList1->Images[3];
            open = true;
        }

        pacman->Left -= playerSpeed;
    }
    else if (goright) {
        if (open) {
            pacman->Image = imageList1->Images[4];
            open = false;
        }
            
        else {
            pacman->Image = imageList1->Images[0];
            open = true;
        }
        
        pacman->Left += playerSpeed;
    
    }
    else if (godown) {
        if (open) {
            pacman->Image = imageList1->Images[4];
            open = false;
        }
           
        else {

            pacman->Image = imageList1->Images[1];
            open = true;
        }
        pacman->Top += playerSpeed;

    }
    else if (goup) {
        if (open) {
            pacman->Image = imageList1->Images[4];
            open = false;
        }            
        else {
            pacman->Image = imageList1->Images[2];
            open = true;
        }
            
        pacman->Top -= playerSpeed;

    }

    if (pacman->Left < -10) {
        pacman->Left = 580;
    }
    if (pacman->Left > 580) {
        pacman->Left = -10;
    }
    for each (Control ^ x in this->Controls)
    {
        if ((x->Tag == "money") && (x->Visible == true)) {
            if (pacman->Bounds.IntersectsWith(x->Bounds)) {
                score += 1;
                x->Visible = false;
            }
        }

        if (x->Tag == "wall" || x->Tag == "ghost") {
            if (pacman->Bounds.IntersectsWith(x->Bounds)) {
                isGameOver = 1;
                gameOver();

            }
        }



    }
    ghost1->Top += ghost1Speed;

    if (ghost1->Bounds.IntersectsWith(wall1->Bounds) || ghost1->Bounds.IntersectsWith(wall2->Bounds)) {
        ghost1Speed = -ghost1Speed;
    }

    ghost2->Top -= ghost2Speed;

    if (ghost2->Bounds.IntersectsWith(wall3->Bounds) || ghost2->Bounds.IntersectsWith(wall1->Bounds)) {
        ghost2Speed = -ghost2Speed;
    }
    ghost3->Left -= ghost3Speed;

    if (ghost3->Bounds.IntersectsWith(wall4->Bounds) || ghost3->Bounds.IntersectsWith(wall5->Bounds)) {
        ghost3Speed = -ghost3Speed;
    }


    if (score == 183) {

        isGameOver = 2;
        gameOver();
    }
}

System::Void Pacman::Game::resetGame()
{
    txtScore->Text = "Ñ÷¸ò: 0";
    score = 0;

    pause = false;

    goup = godown = goleft = false;
    goright = true;

    pacman->Image = imageList1->Images[0];

    playerSpeed = Settings::setplayerspeed;
    ghost1Speed = Settings::setghostsspeed;
    ghost2Speed = Settings::setghostsspeed;
    ghost3Speed = Settings::setghostsspeed;

    isGameOver = 0;

    pacman->Left = 36;
    pacman->Top = 36;

    ghost1->Left = 423;
    ghost1->Top = 37;

    ghost2->Left = 122;
    ghost2->Top = 547;

    ghost3->Left = 505;
    ghost3->Top = 618;


    for each (Control ^ x in this->Controls)
    {
        if (x->Tag == "money") {
            x->Visible = true;
        }
    }

    lose->Visible = false;
    win->Visible = false;
    gameTimer->Start();
}

System::Void Pacman::Game::íîâàÿÈãðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    resetGame();
}

System::Void Pacman::Game::ïàóçàÏðîäîëæèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (pause) {
        pause = false;
        gameTimer->Start();

    }
    else {
        pause = true;
        gameTimer->Stop();

    }
}

System::Void Pacman::Game::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    gameTimer->Stop();
    Application::OpenForms[1]->Show();
    Game::Close();
   
    
}


System::Void Pacman::Game::íàñòðîéêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (pause || isGameOver!=0) {
        Settings^ set = gcnew Settings();
        set->ShowDialog();
    }
    
}

System::Void Pacman::Game::îáÈãðåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Âåðñèÿ 1.0\nÄàòà: 15.05.23\nÈãðà ðàçðàáîòàíà ñòóäåíòêîé ãðóïïû ÈÑÒá-22-1\nÑàïîæíèêîâîé Àíàñòàñèåé Àëåêñååâíîé",
        "Îá èãðå", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


System::Void Pacman::Game::gameOver() {

        txtScore->Text = "Ñ÷¸ò: " + score;

        gameTimer->Stop();
        

        if (isGameOver == 1)
            lose->Visible = true;
        else if (isGameOver == 2)
            win->Visible = true;

        if (score > MainMenu::players[MainMenu::tec]->bestResult) {
            MainMenu::players[MainMenu::tec]->bestResult = score;
        }

     

}
