#pragma once
#include "MainMenu.h"
#include "Game.h"
#include "Settings.h"
namespace Pacman {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;



    /// <summary>
    /// Ñâîäêà äëÿ Game
    /// </summary>
    public ref class Game : public System::Windows::Forms::Form
    {
          
    private: System::Windows::Forms::PictureBox^ pictureBox53;
    private: System::Windows::Forms::PictureBox^ pictureBox54;
    private: System::Windows::Forms::PictureBox^ pictureBox55;
    private: System::Windows::Forms::PictureBox^ pictureBox56;
    private: System::Windows::Forms::PictureBox^ pictureBox57;
    private: System::Windows::Forms::PictureBox^ pictureBox58;
    private: System::Windows::Forms::PictureBox^ pictureBox59;
    private: System::Windows::Forms::PictureBox^ pictureBox60;    
    private: System::Windows::Forms::PictureBox^ pictureBox61;
    private: System::Windows::Forms::PictureBox^ pictureBox62;
    private: System::Windows::Forms::PictureBox^ pictureBox63;
    private: System::Windows::Forms::PictureBox^ pictureBox64;
    private: System::Windows::Forms::PictureBox^ pictureBox65;
    private: System::Windows::Forms::PictureBox^ pictureBox66;
    private: System::Windows::Forms::PictureBox^ pictureBox67;
    private: System::Windows::Forms::PictureBox^ pictureBox68;
    private: System::Windows::Forms::PictureBox^ pictureBox69;
    private: System::Windows::Forms::PictureBox^ pictureBox70;
    private: System::Windows::Forms::PictureBox^ pictureBox71;
    private: System::Windows::Forms::PictureBox^ pictureBox72;
    private: System::Windows::Forms::PictureBox^ pictureBox73;
    private: System::Windows::Forms::PictureBox^ pictureBox74;
    private: System::Windows::Forms::PictureBox^ pictureBox75;
    private: System::Windows::Forms::PictureBox^ pictureBox76;
    private: System::Windows::Forms::PictureBox^ pictureBox77;
    private: System::Windows::Forms::PictureBox^ pictureBox78;
    private: System::Windows::Forms::PictureBox^ pictureBox79;
    private: System::Windows::Forms::PictureBox^ pictureBox80;
    private: System::Windows::Forms::PictureBox^ pictureBox81;
    private: System::Windows::Forms::PictureBox^ pictureBox82;
    private: System::Windows::Forms::PictureBox^ pictureBox83;
    private: System::Windows::Forms::PictureBox^ pictureBox84;
    private: System::Windows::Forms::PictureBox^ pictureBox85;
    private: System::Windows::Forms::PictureBox^ pictureBox86;
    private: System::Windows::Forms::PictureBox^ pictureBox87;
    private: System::Windows::Forms::PictureBox^ pictureBox88;
    private: System::Windows::Forms::PictureBox^ pictureBox89;
    private: System::Windows::Forms::PictureBox^ pictureBox90;
    private: System::Windows::Forms::PictureBox^ pictureBox91;
    private: System::Windows::Forms::PictureBox^ pictureBox92;
    private: System::Windows::Forms::PictureBox^ pictureBox93;
    private: System::Windows::Forms::PictureBox^ pictureBox94;
    private: System::Windows::Forms::PictureBox^ pictureBox95;
    private: System::Windows::Forms::PictureBox^ pictureBox96;
    private: System::Windows::Forms::PictureBox^ pictureBox97;
    private: System::Windows::Forms::PictureBox^ pictureBox98;
    private: System::Windows::Forms::PictureBox^ pictureBox99;
    private: System::Windows::Forms::PictureBox^ pictureBox100;
    private: System::Windows::Forms::PictureBox^ pictureBox101;
    private: System::Windows::Forms::PictureBox^ pictureBox102;
    private: System::Windows::Forms::PictureBox^ pictureBox103;
    private: System::Windows::Forms::PictureBox^ pictureBox104;
    private: System::Windows::Forms::PictureBox^ pictureBox105;
    private: System::Windows::Forms::PictureBox^ pictureBox106;
    private: System::Windows::Forms::PictureBox^ pictureBox107;
    private: System::Windows::Forms::PictureBox^ pictureBox108;
    private: System::Windows::Forms::PictureBox^ pictureBox109;
    private: System::Windows::Forms::PictureBox^ pictureBox110;
    private: System::Windows::Forms::PictureBox^ pictureBox111;
    private: System::Windows::Forms::PictureBox^ pictureBox112;
    private: System::Windows::Forms::PictureBox^ pictureBox113;
    private: System::Windows::Forms::PictureBox^ pictureBox114;
    private: System::Windows::Forms::PictureBox^ pictureBox115;
    private: System::Windows::Forms::PictureBox^ pictureBox116;
    private: System::Windows::Forms::PictureBox^ pictureBox117;
    private: System::Windows::Forms::PictureBox^ pictureBox118;
    private: System::Windows::Forms::PictureBox^ pictureBox119;
    private: System::Windows::Forms::PictureBox^ pictureBox120;
    private: System::Windows::Forms::PictureBox^ pictureBox121;
    private: System::Windows::Forms::PictureBox^ pictureBox122;
    private: System::Windows::Forms::PictureBox^ pictureBox123;
    private: System::Windows::Forms::PictureBox^ pictureBox124;
    private: System::Windows::Forms::PictureBox^ pictureBox125;
    private: System::Windows::Forms::PictureBox^ pictureBox126;
    private: System::Windows::Forms::PictureBox^ pictureBox127;
    private: System::Windows::Forms::PictureBox^ pictureBox128;
    private: System::Windows::Forms::PictureBox^ pictureBox129;
    private: System::Windows::Forms::PictureBox^ pictureBox130;
    private: System::Windows::Forms::PictureBox^ pictureBox131;
    private: System::Windows::Forms::PictureBox^ pictureBox132;
    private: System::Windows::Forms::PictureBox^ pictureBox133;
    private: System::Windows::Forms::PictureBox^ pictureBox134;
    private: System::Windows::Forms::PictureBox^ pictureBox135;
    private: System::Windows::Forms::PictureBox^ pictureBox136;
    private: System::Windows::Forms::PictureBox^ pictureBox137;
    private: System::Windows::Forms::PictureBox^ pictureBox138;
    private: System::Windows::Forms::PictureBox^ pictureBox139;
    private: System::Windows::Forms::PictureBox^ pictureBox140;
    private: System::Windows::Forms::PictureBox^ pictureBox141;
    private: System::Windows::Forms::PictureBox^ pictureBox142;
    private: System::Windows::Forms::PictureBox^ pictureBox143;
    private: System::Windows::Forms::PictureBox^ pictureBox144;
    private: System::Windows::Forms::PictureBox^ pictureBox145;
    private: System::Windows::Forms::PictureBox^ pictureBox146;
    private: System::Windows::Forms::PictureBox^ pictureBox147;
    private: System::Windows::Forms::PictureBox^ pictureBox148;
    private: System::Windows::Forms::PictureBox^ pictureBox149;
    private: System::Windows::Forms::PictureBox^ pictureBox150;
    private: System::Windows::Forms::PictureBox^ pictureBox151;
    private: System::Windows::Forms::PictureBox^ pictureBox152;
    private: System::Windows::Forms::PictureBox^ pictureBox153;
    private: System::Windows::Forms::PictureBox^ pictureBox154;
    private: System::Windows::Forms::PictureBox^ pictureBox155;
    private: System::Windows::Forms::PictureBox^ pictureBox156;
    private: System::Windows::Forms::PictureBox^ pictureBox157;
    private: System::Windows::Forms::PictureBox^ pictureBox158;
    private: System::Windows::Forms::PictureBox^ pictureBox159;
    private: System::Windows::Forms::PictureBox^ pictureBox160;
    private: System::Windows::Forms::PictureBox^ pictureBox161;
    private: System::Windows::Forms::PictureBox^ pictureBox162;
    private: System::Windows::Forms::PictureBox^ pictureBox163;
    private: System::Windows::Forms::PictureBox^ pictureBox164;
    private: System::Windows::Forms::PictureBox^ pictureBox165;
    private: System::Windows::Forms::PictureBox^ pictureBox166;
    private: System::Windows::Forms::PictureBox^ pictureBox167;
    private: System::Windows::Forms::PictureBox^ pictureBox168;
    private: System::Windows::Forms::PictureBox^ pictureBox169;
    private: System::Windows::Forms::PictureBox^ pictureBox170;
    private: System::Windows::Forms::PictureBox^ pictureBox171;
    private: System::Windows::Forms::PictureBox^ pictureBox172;
    private: System::Windows::Forms::PictureBox^ pictureBox173;
    private: System::Windows::Forms::PictureBox^ pictureBox174;
    private: System::Windows::Forms::PictureBox^ pictureBox175;
    private: System::Windows::Forms::PictureBox^ pictureBox176;
    private: System::Windows::Forms::PictureBox^ pictureBox179;
    private: System::Windows::Forms::PictureBox^ pictureBox177;
    private: System::Windows::Forms::PictureBox^ pictureBox178;
    private: System::Windows::Forms::PictureBox^ pictureBox180;
    private: System::Windows::Forms::PictureBox^ pictureBox181;
    private: System::Windows::Forms::PictureBox^ pictureBox182;
    private: System::Windows::Forms::PictureBox^ pictureBox183;
    private: System::Windows::Forms::PictureBox^ pictureBox184;
    private: System::Windows::Forms::PictureBox^ pictureBox185;
    private: System::Windows::Forms::PictureBox^ pictureBox186;
    private: System::Windows::Forms::PictureBox^ pictureBox187;
    private: System::Windows::Forms::PictureBox^ pictureBox188;
    private: System::Windows::Forms::PictureBox^ pictureBox189;
    private: System::Windows::Forms::PictureBox^ pictureBox190;
    private: System::Windows::Forms::PictureBox^ pictureBox192;
    private: System::Windows::Forms::PictureBox^ pictureBox193;
    private: System::Windows::Forms::PictureBox^ pictureBox194;
    private: System::Windows::Forms::PictureBox^ pictureBox195;
    private: System::Windows::Forms::PictureBox^ pictureBox196;
    private: System::Windows::Forms::PictureBox^ pictureBox197;
    private: System::Windows::Forms::PictureBox^ pictureBox198;
    private: System::Windows::Forms::PictureBox^ pictureBox191;
    private: System::Windows::Forms::PictureBox^ pictureBox199;
    private: System::Windows::Forms::PictureBox^ pictureBox200;
    private: System::Windows::Forms::PictureBox^ pictureBox201;
    private: System::Windows::Forms::PictureBox^ pictureBox202;
    private: System::Windows::Forms::PictureBox^ pictureBox203;
    private: System::Windows::Forms::PictureBox^ pictureBox204;
    private: System::Windows::Forms::PictureBox^ pictureBox205;
    private: System::Windows::Forms::PictureBox^ pictureBox206;
    private: System::Windows::Forms::PictureBox^ pictureBox207;
    private: System::Windows::Forms::PictureBox^ pictureBox208;
    private: System::Windows::Forms::PictureBox^ pictureBox213;
    private: System::Windows::Forms::PictureBox^ pictureBox214;
    private: System::Windows::Forms::PictureBox^ pictureBox215;
    private: System::Windows::Forms::PictureBox^ pictureBox216;
    private: System::Windows::Forms::PictureBox^ pictureBox217;
    private: System::Windows::Forms::PictureBox^ pictureBox218;
    private: System::Windows::Forms::PictureBox^ pictureBox219;
    private: System::Windows::Forms::PictureBox^ pictureBox220;
    private: System::Windows::Forms::PictureBox^ pictureBox221;
    private: System::Windows::Forms::PictureBox^ pictureBox222;
    private: System::Windows::Forms::PictureBox^ pictureBox223;
    private: System::Windows::Forms::PictureBox^ pictureBox224;
    private: System::Windows::Forms::PictureBox^ pictureBox225;
    private: System::Windows::Forms::PictureBox^ pictureBox226;
    private: System::Windows::Forms::PictureBox^ pictureBox227;
    private: System::Windows::Forms::PictureBox^ pictureBox228;
    private: System::Windows::Forms::PictureBox^ pictureBox229;
    private: System::Windows::Forms::PictureBox^ pictureBox230;
    private: System::Windows::Forms::PictureBox^ pictureBox231;
    private: System::Windows::Forms::PictureBox^ pictureBox232;
    private: System::Windows::Forms::PictureBox^ pictureBox233;
    private: System::Windows::Forms::PictureBox^ pictureBox234;
    private: System::Windows::Forms::PictureBox^ pictureBox235;
    private: System::Windows::Forms::Label^ win;
    private: System::Windows::Forms::Label^ lose;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ ìåíþToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãðàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàÏðîäîëæèòüToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ íàñòðîéêèToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ îáÈãðåToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
    private: System::Windows::Forms::Label^ txtScore;

    public:

        Game(void);
       

    protected:
       
        ~Game()
        {
            if (components)
            {
                delete components;
            }
        }
private: System::Windows::Forms::PictureBox^ wall1;
protected:

    protected:
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::PictureBox^ pictureBox11;
    private: System::Windows::Forms::PictureBox^ pictureBox12;
    private: System::Windows::Forms::PictureBox^ pictureBox13;
    private: System::Windows::Forms::PictureBox^ pictureBox14;
    private: System::Windows::Forms::PictureBox^ pictureBox15;
    private: System::Windows::Forms::PictureBox^ pictureBox16;
    private: System::Windows::Forms::PictureBox^ pictureBox17;
    private: System::Windows::Forms::PictureBox^ pictureBox18;
    private: System::Windows::Forms::PictureBox^ pictureBox19;
    private: System::Windows::Forms::PictureBox^ pictureBox20;
    private: System::Windows::Forms::PictureBox^ pictureBox21;
    private: System::Windows::Forms::PictureBox^ pictureBox22;
    private: System::Windows::Forms::PictureBox^ pictureBox23;
    private: System::Windows::Forms::PictureBox^ pictureBox24;
    private: System::Windows::Forms::PictureBox^ pictureBox25;
    private: System::Windows::Forms::PictureBox^ pictureBox26;
    private: System::Windows::Forms::PictureBox^ pictureBox27;
    private: System::Windows::Forms::PictureBox^ pictureBox28;
    private: System::Windows::Forms::PictureBox^ pictureBox29;
    private: System::Windows::Forms::PictureBox^ pictureBox30;
    private: System::Windows::Forms::PictureBox^ pictureBox31;
    private: System::Windows::Forms::PictureBox^ pictureBox32;
    private: System::Windows::Forms::PictureBox^ pictureBox33;
private: System::Windows::Forms::PictureBox^ wall5;
private: System::Windows::Forms::PictureBox^ wall4;
    private: System::Windows::Forms::PictureBox^ pictureBox36;
    private: System::Windows::Forms::PictureBox^ pictureBox37;
    private: System::Windows::Forms::PictureBox^ pictureBox38;
    private: System::Windows::Forms::PictureBox^ pictureBox39;
private: System::Windows::Forms::PictureBox^ wall3;
private: System::Windows::Forms::PictureBox^ wall2;
    private: System::Windows::Forms::PictureBox^ pictureBox42;
    private: System::Windows::Forms::PictureBox^ pictureBox43;
    private: System::Windows::Forms::PictureBox^ pictureBox44;
    private: System::Windows::Forms::PictureBox^ pictureBox45;
    private: System::Windows::Forms::PictureBox^ pictureBox46;
    private: System::Windows::Forms::PictureBox^ pictureBox47;
    private: System::Windows::Forms::PictureBox^ pictureBox48;
    private: System::Windows::Forms::PictureBox^ pictureBox49;
    private: System::Windows::Forms::PictureBox^ pictureBox50;
    private: System::Windows::Forms::PictureBox^ pictureBox51;
    private: System::Windows::Forms::PictureBox^ pictureBox52;
    private: System::Windows::Forms::PictureBox^ pacman;
public: System::Windows::Forms::Timer^ gameTimer;
private:
     private: System::ComponentModel::IContainer^ components;

    private:
        /// <summary>
        /// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
        /// </summary>


#pragma region Windows Form Designer generated code
        /// <summary>
        /// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
        /// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
            this->wall1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
            this->wall5 = (gcnew System::Windows::Forms::PictureBox());
            this->wall4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
            this->wall3 = (gcnew System::Windows::Forms::PictureBox());
            this->wall2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
            this->pacman = (gcnew System::Windows::Forms::PictureBox());
            this->gameTimer = (gcnew System::Windows::Forms::Timer(this->components));
            this->txtScore = (gcnew System::Windows::Forms::Label());
            this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
            this->lose = (gcnew System::Windows::Forms::Label());
            this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox102 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox103 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox104 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox105 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox106 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox107 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox108 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox109 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox110 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox111 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox112 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox113 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox114 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox115 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox116 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox117 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox118 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox119 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox120 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox121 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox122 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox123 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox124 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox125 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox126 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox127 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox128 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox129 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox130 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox131 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox132 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox133 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox134 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox135 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox136 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox137 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox138 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox139 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox140 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox141 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox142 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox143 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox144 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox145 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox146 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox147 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox148 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox149 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox150 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox151 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox152 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox153 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox154 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox155 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox156 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox157 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox158 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox159 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox160 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox161 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox162 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox163 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox164 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox165 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox166 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox167 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox168 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox169 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox170 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox171 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox172 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox173 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox174 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox175 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox176 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox179 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox177 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox178 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox180 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox181 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox182 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox183 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox184 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox185 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox186 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox187 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox188 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox189 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox190 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox192 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox193 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox194 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox195 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox196 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox197 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox198 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox191 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox199 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox200 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox201 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox202 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox203 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox204 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox205 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox206 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox207 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox208 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox213 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox214 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox215 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox216 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox217 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox218 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox219 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox220 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox221 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox222 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox223 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox224 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox225 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox226 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox227 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox228 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox229 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox230 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox231 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox232 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox233 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox234 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox235 = (gcnew System::Windows::Forms::PictureBox());
            this->win = (gcnew System::Windows::Forms::Label());
            this->ghost2 = (gcnew System::Windows::Forms::PictureBox());
            this->ghost1 = (gcnew System::Windows::Forms::PictureBox());
            this->ghost3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
            this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->ìåíþToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->íîâàÿÈãðàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ïàóçàÏðîäîëæèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->íàñòðîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->îáÈãðåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pacman))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox126))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox127))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox133))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox141))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox142))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox146))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox147))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox148))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox156))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox157))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox158))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox160))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox161))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox162))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox163))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox164))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox170))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox171))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox172))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox173))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox174))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox175))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox176))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox179))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox177))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox178))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox180))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox181))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox182))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox183))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox184))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox185))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox186))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox187))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox188))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox189))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox190))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox192))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox193))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox194))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox195))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox196))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox197))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox198))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox191))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox199))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox200))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox201))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox202))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox203))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox204))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox205))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox206))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox207))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox208))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox213))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox214))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox215))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox216))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox217))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox218))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox219))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox220))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox221))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox222))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox223))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox224))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox225))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox226))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox227))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox228))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox229))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox230))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox231))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox232))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox233))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox234))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox235))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ghost2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ghost1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ghost3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // wall1
            // 
            this->wall1->BackColor = System::Drawing::Color::Blue;
            this->wall1->Location = System::Drawing::Point(0, 0);
            this->wall1->Name = L"wall1";
            this->wall1->Size = System::Drawing::Size(760, 40);
            this->wall1->TabIndex = 0;
            this->wall1->TabStop = false;
            this->wall1->Tag = L"wall";
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Blue;
            this->pictureBox2->Location = System::Drawing::Point(80, 80);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(80, 40);
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Tag = L"wall";
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Blue;
            this->pictureBox3->Location = System::Drawing::Point(0, 798);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(760, 40);
            this->pictureBox3->TabIndex = 2;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Tag = L"wall";
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Blue;
            this->pictureBox4->Location = System::Drawing::Point(120, 278);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(40, 40);
            this->pictureBox4->TabIndex = 3;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Tag = L"wall";
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::Blue;
            this->pictureBox5->Location = System::Drawing::Point(440, 80);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(120, 40);
            this->pictureBox5->TabIndex = 4;
            this->pictureBox5->TabStop = false;
            this->pictureBox5->Tag = L"wall";
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackColor = System::Drawing::Color::Blue;
            this->pictureBox6->Location = System::Drawing::Point(0, 40);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(40, 200);
            this->pictureBox6->TabIndex = 5;
            this->pictureBox6->TabStop = false;
            this->pictureBox6->Tag = L"wall";
            // 
            // pictureBox7
            // 
            this->pictureBox7->BackColor = System::Drawing::Color::Blue;
            this->pictureBox7->Location = System::Drawing::Point(720, 40);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(40, 200);
            this->pictureBox7->TabIndex = 6;
            this->pictureBox7->TabStop = false;
            this->pictureBox7->Tag = L"wall";
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackColor = System::Drawing::Color::Blue;
            this->pictureBox8->Location = System::Drawing::Point(80, 160);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(80, 40);
            this->pictureBox8->TabIndex = 7;
            this->pictureBox8->TabStop = false;
            this->pictureBox8->Tag = L"wall";
            // 
            // pictureBox9
            // 
            this->pictureBox9->BackColor = System::Drawing::Color::Blue;
            this->pictureBox9->Location = System::Drawing::Point(600, 160);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(80, 37);
            this->pictureBox9->TabIndex = 9;
            this->pictureBox9->TabStop = false;
            this->pictureBox9->Tag = L"wall";
            // 
            // pictureBox10
            // 
            this->pictureBox10->BackColor = System::Drawing::Color::Blue;
            this->pictureBox10->Location = System::Drawing::Point(600, 80);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(80, 40);
            this->pictureBox10->TabIndex = 8;
            this->pictureBox10->TabStop = false;
            this->pictureBox10->Tag = L"wall";
            // 
            // pictureBox11
            // 
            this->pictureBox11->BackColor = System::Drawing::Color::Blue;
            this->pictureBox11->Location = System::Drawing::Point(200, 80);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(120, 40);
            this->pictureBox11->TabIndex = 10;
            this->pictureBox11->TabStop = false;
            this->pictureBox11->Tag = L"wall";
            // 
            // pictureBox12
            // 
            this->pictureBox12->BackColor = System::Drawing::Color::Blue;
            this->pictureBox12->Location = System::Drawing::Point(0, 239);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(160, 40);
            this->pictureBox12->TabIndex = 11;
            this->pictureBox12->TabStop = false;
            this->pictureBox12->Tag = L"wall";
            // 
            // pictureBox13
            // 
            this->pictureBox13->BackColor = System::Drawing::Color::Blue;
            this->pictureBox13->Location = System::Drawing::Point(600, 239);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(160, 40);
            this->pictureBox13->TabIndex = 12;
            this->pictureBox13->TabStop = false;
            this->pictureBox13->Tag = L"wall";
            // 
            // pictureBox14
            // 
            this->pictureBox14->BackColor = System::Drawing::Color::Blue;
            this->pictureBox14->Location = System::Drawing::Point(0, 318);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(160, 40);
            this->pictureBox14->TabIndex = 13;
            this->pictureBox14->TabStop = false;
            this->pictureBox14->Tag = L"wall";
            // 
            // pictureBox15
            // 
            this->pictureBox15->BackColor = System::Drawing::Color::Blue;
            this->pictureBox15->Location = System::Drawing::Point(600, 318);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(160, 40);
            this->pictureBox15->TabIndex = 14;
            this->pictureBox15->TabStop = false;
            this->pictureBox15->Tag = L"wall";
            // 
            // pictureBox16
            // 
            this->pictureBox16->BackColor = System::Drawing::Color::Blue;
            this->pictureBox16->Location = System::Drawing::Point(600, 278);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(40, 40);
            this->pictureBox16->TabIndex = 15;
            this->pictureBox16->TabStop = false;
            this->pictureBox16->Tag = L"wall";
            // 
            // pictureBox17
            // 
            this->pictureBox17->BackColor = System::Drawing::Color::Blue;
            this->pictureBox17->Location = System::Drawing::Point(360, 40);
            this->pictureBox17->Name = L"pictureBox17";
            this->pictureBox17->Size = System::Drawing::Size(40, 240);
            this->pictureBox17->TabIndex = 16;
            this->pictureBox17->TabStop = false;
            this->pictureBox17->Tag = L"wall";
            // 
            // pictureBox18
            // 
            this->pictureBox18->BackColor = System::Drawing::Color::Blue;
            this->pictureBox18->Location = System::Drawing::Point(200, 160);
            this->pictureBox18->Name = L"pictureBox18";
            this->pictureBox18->Size = System::Drawing::Size(40, 200);
            this->pictureBox18->TabIndex = 17;
            this->pictureBox18->TabStop = false;
            this->pictureBox18->Tag = L"wall";
            // 
            // pictureBox19
            // 
            this->pictureBox19->BackColor = System::Drawing::Color::Blue;
            this->pictureBox19->Location = System::Drawing::Point(520, 160);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(40, 200);
            this->pictureBox19->TabIndex = 18;
            this->pictureBox19->TabStop = false;
            this->pictureBox19->Tag = L"wall";
            // 
            // pictureBox20
            // 
            this->pictureBox20->BackColor = System::Drawing::Color::Blue;
            this->pictureBox20->Location = System::Drawing::Point(120, 438);
            this->pictureBox20->Name = L"pictureBox20";
            this->pictureBox20->Size = System::Drawing::Size(40, 40);
            this->pictureBox20->TabIndex = 19;
            this->pictureBox20->TabStop = false;
            this->pictureBox20->Tag = L"wall";
            // 
            // pictureBox21
            // 
            this->pictureBox21->BackColor = System::Drawing::Color::Blue;
            this->pictureBox21->Location = System::Drawing::Point(240, 240);
            this->pictureBox21->Name = L"pictureBox21";
            this->pictureBox21->Size = System::Drawing::Size(80, 40);
            this->pictureBox21->TabIndex = 20;
            this->pictureBox21->TabStop = false;
            this->pictureBox21->Tag = L"wall";
            // 
            // pictureBox22
            // 
            this->pictureBox22->BackColor = System::Drawing::Color::Blue;
            this->pictureBox22->Location = System::Drawing::Point(440, 240);
            this->pictureBox22->Name = L"pictureBox22";
            this->pictureBox22->Size = System::Drawing::Size(80, 40);
            this->pictureBox22->TabIndex = 21;
            this->pictureBox22->TabStop = false;
            this->pictureBox22->Tag = L"wall";
            // 
            // pictureBox23
            // 
            this->pictureBox23->BackColor = System::Drawing::Color::Blue;
            this->pictureBox23->Location = System::Drawing::Point(200, 400);
            this->pictureBox23->Name = L"pictureBox23";
            this->pictureBox23->Size = System::Drawing::Size(40, 120);
            this->pictureBox23->TabIndex = 22;
            this->pictureBox23->TabStop = false;
            this->pictureBox23->Tag = L"wall";
            // 
            // pictureBox24
            // 
            this->pictureBox24->BackColor = System::Drawing::Color::Blue;
            this->pictureBox24->Location = System::Drawing::Point(520, 400);
            this->pictureBox24->Name = L"pictureBox24";
            this->pictureBox24->Size = System::Drawing::Size(40, 120);
            this->pictureBox24->TabIndex = 23;
            this->pictureBox24->TabStop = false;
            this->pictureBox24->Tag = L"wall";
            // 
            // pictureBox25
            // 
            this->pictureBox25->BackColor = System::Drawing::Color::Blue;
            this->pictureBox25->Location = System::Drawing::Point(200, 560);
            this->pictureBox25->Name = L"pictureBox25";
            this->pictureBox25->Size = System::Drawing::Size(120, 40);
            this->pictureBox25->TabIndex = 24;
            this->pictureBox25->TabStop = false;
            this->pictureBox25->Tag = L"wall";
            // 
            // pictureBox26
            // 
            this->pictureBox26->BackColor = System::Drawing::Color::Blue;
            this->pictureBox26->Location = System::Drawing::Point(440, 560);
            this->pictureBox26->Name = L"pictureBox26";
            this->pictureBox26->Size = System::Drawing::Size(120, 40);
            this->pictureBox26->TabIndex = 25;
            this->pictureBox26->TabStop = false;
            this->pictureBox26->Tag = L"wall";
            // 
            // pictureBox27
            // 
            this->pictureBox27->BackColor = System::Drawing::Color::Blue;
            this->pictureBox27->Location = System::Drawing::Point(280, 480);
            this->pictureBox27->Name = L"pictureBox27";
            this->pictureBox27->Size = System::Drawing::Size(200, 40);
            this->pictureBox27->TabIndex = 26;
            this->pictureBox27->TabStop = false;
            this->pictureBox27->Tag = L"wall";
            // 
            // pictureBox28
            // 
            this->pictureBox28->BackColor = System::Drawing::Color::Blue;
            this->pictureBox28->Location = System::Drawing::Point(360, 520);
            this->pictureBox28->Name = L"pictureBox28";
            this->pictureBox28->Size = System::Drawing::Size(40, 80);
            this->pictureBox28->TabIndex = 27;
            this->pictureBox28->TabStop = false;
            this->pictureBox28->Tag = L"wall";
            // 
            // pictureBox29
            // 
            this->pictureBox29->BackColor = System::Drawing::Color::Blue;
            this->pictureBox29->Location = System::Drawing::Point(0, 400);
            this->pictureBox29->Name = L"pictureBox29";
            this->pictureBox29->Size = System::Drawing::Size(160, 40);
            this->pictureBox29->TabIndex = 28;
            this->pictureBox29->TabStop = false;
            this->pictureBox29->Tag = L"wall";
            // 
            // pictureBox30
            // 
            this->pictureBox30->BackColor = System::Drawing::Color::Blue;
            this->pictureBox30->Location = System::Drawing::Point(600, 400);
            this->pictureBox30->Name = L"pictureBox30";
            this->pictureBox30->Size = System::Drawing::Size(160, 40);
            this->pictureBox30->TabIndex = 29;
            this->pictureBox30->TabStop = false;
            this->pictureBox30->Tag = L"wall";
            // 
            // pictureBox31
            // 
            this->pictureBox31->BackColor = System::Drawing::Color::Blue;
            this->pictureBox31->Location = System::Drawing::Point(0, 478);
            this->pictureBox31->Name = L"pictureBox31";
            this->pictureBox31->Size = System::Drawing::Size(160, 40);
            this->pictureBox31->TabIndex = 30;
            this->pictureBox31->TabStop = false;
            this->pictureBox31->Tag = L"wall";
            // 
            // pictureBox32
            // 
            this->pictureBox32->BackColor = System::Drawing::Color::Blue;
            this->pictureBox32->Location = System::Drawing::Point(600, 479);
            this->pictureBox32->Name = L"pictureBox32";
            this->pictureBox32->Size = System::Drawing::Size(160, 40);
            this->pictureBox32->TabIndex = 31;
            this->pictureBox32->TabStop = false;
            this->pictureBox32->Tag = L"wall";
            // 
            // pictureBox33
            // 
            this->pictureBox33->BackColor = System::Drawing::Color::Blue;
            this->pictureBox33->Location = System::Drawing::Point(600, 439);
            this->pictureBox33->Name = L"pictureBox33";
            this->pictureBox33->Size = System::Drawing::Size(40, 40);
            this->pictureBox33->TabIndex = 32;
            this->pictureBox33->TabStop = false;
            this->pictureBox33->Tag = L"wall";
            // 
            // wall5
            // 
            this->wall5->BackColor = System::Drawing::Color::Blue;
            this->wall5->Location = System::Drawing::Point(0, 517);
            this->wall5->Name = L"wall5";
            this->wall5->Size = System::Drawing::Size(40, 280);
            this->wall5->TabIndex = 33;
            this->wall5->TabStop = false;
            this->wall5->Tag = L"wall";
            // 
            // wall4
            // 
            this->wall4->BackColor = System::Drawing::Color::Blue;
            this->wall4->Location = System::Drawing::Point(720, 518);
            this->wall4->Name = L"wall4";
            this->wall4->Size = System::Drawing::Size(40, 280);
            this->wall4->TabIndex = 34;
            this->wall4->TabStop = false;
            this->wall4->Tag = L"wall";
            // 
            // pictureBox36
            // 
            this->pictureBox36->BackColor = System::Drawing::Color::Blue;
            this->pictureBox36->Location = System::Drawing::Point(360, 680);
            this->pictureBox36->Name = L"pictureBox36";
            this->pictureBox36->Size = System::Drawing::Size(40, 80);
            this->pictureBox36->TabIndex = 36;
            this->pictureBox36->TabStop = false;
            this->pictureBox36->Tag = L"wall";
            // 
            // pictureBox37
            // 
            this->pictureBox37->BackColor = System::Drawing::Color::Blue;
            this->pictureBox37->Location = System::Drawing::Point(280, 640);
            this->pictureBox37->Name = L"pictureBox37";
            this->pictureBox37->Size = System::Drawing::Size(200, 40);
            this->pictureBox37->TabIndex = 35;
            this->pictureBox37->TabStop = false;
            this->pictureBox37->Tag = L"wall";
            // 
            // pictureBox38
            // 
            this->pictureBox38->BackColor = System::Drawing::Color::Blue;
            this->pictureBox38->Location = System::Drawing::Point(40, 640);
            this->pictureBox38->Name = L"pictureBox38";
            this->pictureBox38->Size = System::Drawing::Size(40, 40);
            this->pictureBox38->TabIndex = 37;
            this->pictureBox38->TabStop = false;
            this->pictureBox38->Tag = L"wall";
            // 
            // pictureBox39
            // 
            this->pictureBox39->BackColor = System::Drawing::Color::Blue;
            this->pictureBox39->Location = System::Drawing::Point(680, 640);
            this->pictureBox39->Name = L"pictureBox39";
            this->pictureBox39->Size = System::Drawing::Size(40, 40);
            this->pictureBox39->TabIndex = 38;
            this->pictureBox39->TabStop = false;
            this->pictureBox39->Tag = L"wall";
            // 
            // wall3
            // 
            this->wall3->BackColor = System::Drawing::Color::Blue;
            this->wall3->Location = System::Drawing::Point(80, 720);
            this->wall3->Name = L"wall3";
            this->wall3->Size = System::Drawing::Size(240, 40);
            this->wall3->TabIndex = 39;
            this->wall3->TabStop = false;
            this->wall3->Tag = L"wall";
            // 
            // wall2
            // 
            this->wall2->BackColor = System::Drawing::Color::Blue;
            this->wall2->Location = System::Drawing::Point(440, 720);
            this->wall2->Name = L"wall2";
            this->wall2->Size = System::Drawing::Size(240, 40);
            this->wall2->TabIndex = 40;
            this->wall2->TabStop = false;
            this->wall2->Tag = L"wall";
            // 
            // pictureBox42
            // 
            this->pictureBox42->BackColor = System::Drawing::Color::Blue;
            this->pictureBox42->Location = System::Drawing::Point(200, 640);
            this->pictureBox42->Name = L"pictureBox42";
            this->pictureBox42->Size = System::Drawing::Size(40, 80);
            this->pictureBox42->TabIndex = 41;
            this->pictureBox42->TabStop = false;
            this->pictureBox42->Tag = L"wall";
            // 
            // pictureBox43
            // 
            this->pictureBox43->BackColor = System::Drawing::Color::Blue;
            this->pictureBox43->Location = System::Drawing::Point(520, 640);
            this->pictureBox43->Name = L"pictureBox43";
            this->pictureBox43->Size = System::Drawing::Size(40, 80);
            this->pictureBox43->TabIndex = 42;
            this->pictureBox43->TabStop = false;
            this->pictureBox43->Tag = L"wall";
            // 
            // pictureBox44
            // 
            this->pictureBox44->BackColor = System::Drawing::Color::Blue;
            this->pictureBox44->Location = System::Drawing::Point(120, 560);
            this->pictureBox44->Name = L"pictureBox44";
            this->pictureBox44->Size = System::Drawing::Size(40, 120);
            this->pictureBox44->TabIndex = 43;
            this->pictureBox44->TabStop = false;
            this->pictureBox44->Tag = L"wall";
            // 
            // pictureBox45
            // 
            this->pictureBox45->BackColor = System::Drawing::Color::Blue;
            this->pictureBox45->Location = System::Drawing::Point(80, 560);
            this->pictureBox45->Name = L"pictureBox45";
            this->pictureBox45->Size = System::Drawing::Size(40, 40);
            this->pictureBox45->TabIndex = 44;
            this->pictureBox45->TabStop = false;
            this->pictureBox45->Tag = L"wall";
            // 
            // pictureBox46
            // 
            this->pictureBox46->BackColor = System::Drawing::Color::Blue;
            this->pictureBox46->Location = System::Drawing::Point(600, 560);
            this->pictureBox46->Name = L"pictureBox46";
            this->pictureBox46->Size = System::Drawing::Size(40, 120);
            this->pictureBox46->TabIndex = 45;
            this->pictureBox46->TabStop = false;
            this->pictureBox46->Tag = L"wall";
            // 
            // pictureBox47
            // 
            this->pictureBox47->BackColor = System::Drawing::Color::Blue;
            this->pictureBox47->Location = System::Drawing::Point(640, 560);
            this->pictureBox47->Name = L"pictureBox47";
            this->pictureBox47->Size = System::Drawing::Size(40, 40);
            this->pictureBox47->TabIndex = 46;
            this->pictureBox47->TabStop = false;
            this->pictureBox47->Tag = L"wall";
            // 
            // pictureBox48
            // 
            this->pictureBox48->BackColor = System::Drawing::Color::Blue;
            this->pictureBox48->Location = System::Drawing::Point(280, 399);
            this->pictureBox48->Name = L"pictureBox48";
            this->pictureBox48->Size = System::Drawing::Size(200, 40);
            this->pictureBox48->TabIndex = 47;
            this->pictureBox48->TabStop = false;
            this->pictureBox48->Tag = L"wall";
            // 
            // pictureBox49
            // 
            this->pictureBox49->BackColor = System::Drawing::Color::Blue;
            this->pictureBox49->Location = System::Drawing::Point(280, 320);
            this->pictureBox49->Name = L"pictureBox49";
            this->pictureBox49->Size = System::Drawing::Size(80, 40);
            this->pictureBox49->TabIndex = 48;
            this->pictureBox49->TabStop = false;
            this->pictureBox49->Tag = L"wall";
            // 
            // pictureBox50
            // 
            this->pictureBox50->BackColor = System::Drawing::Color::Blue;
            this->pictureBox50->Location = System::Drawing::Point(400, 320);
            this->pictureBox50->Name = L"pictureBox50";
            this->pictureBox50->Size = System::Drawing::Size(80, 40);
            this->pictureBox50->TabIndex = 49;
            this->pictureBox50->TabStop = false;
            this->pictureBox50->Tag = L"wall";
            // 
            // pictureBox51
            // 
            this->pictureBox51->BackColor = System::Drawing::Color::Blue;
            this->pictureBox51->Location = System::Drawing::Point(280, 360);
            this->pictureBox51->Name = L"pictureBox51";
            this->pictureBox51->Size = System::Drawing::Size(40, 40);
            this->pictureBox51->TabIndex = 50;
            this->pictureBox51->TabStop = false;
            this->pictureBox51->Tag = L"wall";
            // 
            // pictureBox52
            // 
            this->pictureBox52->BackColor = System::Drawing::Color::Blue;
            this->pictureBox52->Location = System::Drawing::Point(440, 360);
            this->pictureBox52->Name = L"pictureBox52";
            this->pictureBox52->Size = System::Drawing::Size(40, 40);
            this->pictureBox52->TabIndex = 51;
            this->pictureBox52->TabStop = false;
            this->pictureBox52->Tag = L"wall";
            // 
            // pacman
            // 
            this->pacman->Cursor = System::Windows::Forms::Cursors::Default;
            this->pacman->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pacman.Image")));
            this->pacman->ImageLocation = L"";
            this->pacman->Location = System::Drawing::Point(46, 46);
            this->pacman->Margin = System::Windows::Forms::Padding(0);
            this->pacman->Name = L"pacman";
            this->pacman->Size = System::Drawing::Size(31, 31);
            this->pacman->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pacman->TabIndex = 52;
            this->pacman->TabStop = false;
            // 
            // gameTimer
            // 
            this->gameTimer->Interval = 52;
            this->gameTimer->Tick += gcnew System::EventHandler(this, &Game::mainGameTimer);
            // 
            // txtScore
            // 
            this->txtScore->AutoSize = true;
            this->txtScore->BackColor = System::Drawing::SystemColors::Control;
            this->txtScore->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtScore->ForeColor = System::Drawing::SystemColors::Desktop;
            this->txtScore->Location = System::Drawing::Point(644, 0);
            this->txtScore->Name = L"txtScore";
            this->txtScore->Size = System::Drawing::Size(84, 27);
            this->txtScore->TabIndex = 53;
            this->txtScore->Text = L"C÷¸ò: 0";
            // 
            // pictureBox53
            // 
            this->pictureBox53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
            this->pictureBox53->Location = System::Drawing::Point(80, 46);
            this->pictureBox53->Name = L"pictureBox53";
            this->pictureBox53->Size = System::Drawing::Size(31, 31);
            this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox53->TabIndex = 54;
            this->pictureBox53->TabStop = false;
            this->pictureBox53->Tag = L"money";
            // 
            // pictureBox54
            // 
            this->pictureBox54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
            this->pictureBox54->Location = System::Drawing::Point(120, 46);
            this->pictureBox54->Name = L"pictureBox54";
            this->pictureBox54->Size = System::Drawing::Size(31, 31);
            this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox54->TabIndex = 55;
            this->pictureBox54->TabStop = false;
            this->pictureBox54->Tag = L"money";
            // 
            // pictureBox55
            // 
            this->pictureBox55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
            this->pictureBox55->Location = System::Drawing::Point(166, 46);
            this->pictureBox55->Name = L"pictureBox55";
            this->pictureBox55->Size = System::Drawing::Size(31, 31);
            this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox55->TabIndex = 56;
            this->pictureBox55->TabStop = false;
            this->pictureBox55->Tag = L"money";
            // 
            // pictureBox56
            // 
            this->pictureBox56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
            this->pictureBox56->Location = System::Drawing::Point(240, 46);
            this->pictureBox56->Name = L"pictureBox56";
            this->pictureBox56->Size = System::Drawing::Size(31, 31);
            this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox56->TabIndex = 57;
            this->pictureBox56->TabStop = false;
            this->pictureBox56->Tag = L"money";
            // 
            // pictureBox57
            // 
            this->pictureBox57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
            this->pictureBox57->Location = System::Drawing::Point(200, 46);
            this->pictureBox57->Name = L"pictureBox57";
            this->pictureBox57->Size = System::Drawing::Size(31, 31);
            this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox57->TabIndex = 61;
            this->pictureBox57->TabStop = false;
            this->pictureBox57->Tag = L"money";
            // 
            // pictureBox58
            // 
            this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
            this->pictureBox58->Location = System::Drawing::Point(323, 83);
            this->pictureBox58->Name = L"pictureBox58";
            this->pictureBox58->Size = System::Drawing::Size(31, 31);
            this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox58->TabIndex = 60;
            this->pictureBox58->TabStop = false;
            this->pictureBox58->Tag = L"money";
            // 
            // pictureBox59
            // 
            this->pictureBox59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
            this->pictureBox59->Location = System::Drawing::Point(323, 46);
            this->pictureBox59->Name = L"pictureBox59";
            this->pictureBox59->Size = System::Drawing::Size(31, 31);
            this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox59->TabIndex = 59;
            this->pictureBox59->TabStop = false;
            this->pictureBox59->Tag = L"money";
            // 
            // pictureBox60
            // 
            this->pictureBox60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
            this->pictureBox60->Location = System::Drawing::Point(280, 46);
            this->pictureBox60->Name = L"pictureBox60";
            this->pictureBox60->Size = System::Drawing::Size(31, 31);
            this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox60->TabIndex = 58;
            this->pictureBox60->TabStop = false;
            this->pictureBox60->Tag = L"money";
            // 
            // lose
            // 
            this->lose->AutoSize = true;
            this->lose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lose->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->lose->Location = System::Drawing::Point(190, 306);
            this->lose->Name = L"lose";
            this->lose->Size = System::Drawing::Size(377, 91);
            this->lose->TabIndex = 62;
            this->lose->Text = L"You lose!";
            this->lose->Visible = false;
            // 
            // pictureBox61
            // 
            this->pictureBox61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
            this->pictureBox61->Location = System::Drawing::Point(200, 126);
            this->pictureBox61->Name = L"pictureBox61";
            this->pictureBox61->Size = System::Drawing::Size(31, 31);
            this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox61->TabIndex = 69;
            this->pictureBox61->TabStop = false;
            this->pictureBox61->Tag = L"money";
            // 
            // pictureBox62
            // 
            this->pictureBox62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
            this->pictureBox62->Location = System::Drawing::Point(323, 126);
            this->pictureBox62->Name = L"pictureBox62";
            this->pictureBox62->Size = System::Drawing::Size(31, 31);
            this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox62->TabIndex = 68;
            this->pictureBox62->TabStop = false;
            this->pictureBox62->Tag = L"money";
            // 
            // pictureBox63
            // 
            this->pictureBox63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
            this->pictureBox63->Location = System::Drawing::Point(280, 126);
            this->pictureBox63->Name = L"pictureBox63";
            this->pictureBox63->Size = System::Drawing::Size(31, 31);
            this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox63->TabIndex = 67;
            this->pictureBox63->TabStop = false;
            this->pictureBox63->Tag = L"money";
            // 
            // pictureBox64
            // 
            this->pictureBox64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
            this->pictureBox64->Location = System::Drawing::Point(240, 126);
            this->pictureBox64->Name = L"pictureBox64";
            this->pictureBox64->Size = System::Drawing::Size(31, 31);
            this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox64->TabIndex = 66;
            this->pictureBox64->TabStop = false;
            this->pictureBox64->Tag = L"money";
            // 
            // pictureBox65
            // 
            this->pictureBox65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
            this->pictureBox65->Location = System::Drawing::Point(163, 126);
            this->pictureBox65->Name = L"pictureBox65";
            this->pictureBox65->Size = System::Drawing::Size(31, 31);
            this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox65->TabIndex = 65;
            this->pictureBox65->TabStop = false;
            this->pictureBox65->Tag = L"money";
            // 
            // pictureBox66
            // 
            this->pictureBox66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
            this->pictureBox66->Location = System::Drawing::Point(126, 126);
            this->pictureBox66->Name = L"pictureBox66";
            this->pictureBox66->Size = System::Drawing::Size(31, 31);
            this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox66->TabIndex = 64;
            this->pictureBox66->TabStop = false;
            this->pictureBox66->Tag = L"money";
            // 
            // pictureBox67
            // 
            this->pictureBox67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
            this->pictureBox67->Location = System::Drawing::Point(83, 126);
            this->pictureBox67->Name = L"pictureBox67";
            this->pictureBox67->Size = System::Drawing::Size(31, 31);
            this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox67->TabIndex = 63;
            this->pictureBox67->TabStop = false;
            this->pictureBox67->Tag = L"money";
            // 
            // pictureBox68
            // 
            this->pictureBox68->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
            this->pictureBox68->Location = System::Drawing::Point(163, 83);
            this->pictureBox68->Name = L"pictureBox68";
            this->pictureBox68->Size = System::Drawing::Size(31, 31);
            this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox68->TabIndex = 70;
            this->pictureBox68->TabStop = false;
            this->pictureBox68->Tag = L"money";
            // 
            // pictureBox69
            // 
            this->pictureBox69->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
            this->pictureBox69->Location = System::Drawing::Point(46, 83);
            this->pictureBox69->Name = L"pictureBox69";
            this->pictureBox69->Size = System::Drawing::Size(31, 31);
            this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox69->TabIndex = 71;
            this->pictureBox69->TabStop = false;
            this->pictureBox69->Tag = L"money";
            // 
            // pictureBox70
            // 
            this->pictureBox70->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
            this->pictureBox70->Location = System::Drawing::Point(46, 126);
            this->pictureBox70->Name = L"pictureBox70";
            this->pictureBox70->Size = System::Drawing::Size(31, 31);
            this->pictureBox70->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox70->TabIndex = 72;
            this->pictureBox70->TabStop = false;
            this->pictureBox70->Tag = L"money";
            // 
            // pictureBox71
            // 
            this->pictureBox71->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
            this->pictureBox71->Location = System::Drawing::Point(46, 163);
            this->pictureBox71->Name = L"pictureBox71";
            this->pictureBox71->Size = System::Drawing::Size(31, 31);
            this->pictureBox71->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox71->TabIndex = 73;
            this->pictureBox71->TabStop = false;
            this->pictureBox71->Tag = L"money";
            // 
            // pictureBox72
            // 
            this->pictureBox72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
            this->pictureBox72->Location = System::Drawing::Point(46, 200);
            this->pictureBox72->Name = L"pictureBox72";
            this->pictureBox72->Size = System::Drawing::Size(31, 31);
            this->pictureBox72->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox72->TabIndex = 74;
            this->pictureBox72->TabStop = false;
            this->pictureBox72->Tag = L"money";
            // 
            // pictureBox73
            // 
            this->pictureBox73->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
            this->pictureBox73->Location = System::Drawing::Point(163, 203);
            this->pictureBox73->Name = L"pictureBox73";
            this->pictureBox73->Size = System::Drawing::Size(31, 31);
            this->pictureBox73->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox73->TabIndex = 77;
            this->pictureBox73->TabStop = false;
            this->pictureBox73->Tag = L"money";
            // 
            // pictureBox74
            // 
            this->pictureBox74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
            this->pictureBox74->Location = System::Drawing::Point(123, 202);
            this->pictureBox74->Name = L"pictureBox74";
            this->pictureBox74->Size = System::Drawing::Size(31, 31);
            this->pictureBox74->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox74->TabIndex = 76;
            this->pictureBox74->TabStop = false;
            this->pictureBox74->Tag = L"money";
            // 
            // pictureBox75
            // 
            this->pictureBox75->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
            this->pictureBox75->Location = System::Drawing::Point(86, 202);
            this->pictureBox75->Name = L"pictureBox75";
            this->pictureBox75->Size = System::Drawing::Size(31, 31);
            this->pictureBox75->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox75->TabIndex = 75;
            this->pictureBox75->TabStop = false;
            this->pictureBox75->Tag = L"money";
            // 
            // pictureBox76
            // 
            this->pictureBox76->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
            this->pictureBox76->Location = System::Drawing::Point(323, 169);
            this->pictureBox76->Name = L"pictureBox76";
            this->pictureBox76->Size = System::Drawing::Size(31, 31);
            this->pictureBox76->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox76->TabIndex = 80;
            this->pictureBox76->TabStop = false;
            this->pictureBox76->Tag = L"money";
            // 
            // pictureBox77
            // 
            this->pictureBox77->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
            this->pictureBox77->Location = System::Drawing::Point(280, 169);
            this->pictureBox77->Name = L"pictureBox77";
            this->pictureBox77->Size = System::Drawing::Size(31, 31);
            this->pictureBox77->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox77->TabIndex = 79;
            this->pictureBox77->TabStop = false;
            this->pictureBox77->Tag = L"money";
            // 
            // pictureBox78
            // 
            this->pictureBox78->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
            this->pictureBox78->Location = System::Drawing::Point(243, 169);
            this->pictureBox78->Name = L"pictureBox78";
            this->pictureBox78->Size = System::Drawing::Size(31, 31);
            this->pictureBox78->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox78->TabIndex = 78;
            this->pictureBox78->TabStop = false;
            this->pictureBox78->Tag = L"money";
            // 
            // pictureBox79
            // 
            this->pictureBox79->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
            this->pictureBox79->Location = System::Drawing::Point(163, 163);
            this->pictureBox79->Name = L"pictureBox79";
            this->pictureBox79->Size = System::Drawing::Size(31, 31);
            this->pictureBox79->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox79->TabIndex = 81;
            this->pictureBox79->TabStop = false;
            this->pictureBox79->Tag = L"money";
            // 
            // pictureBox80
            // 
            this->pictureBox80->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
            this->pictureBox80->Location = System::Drawing::Point(323, 206);
            this->pictureBox80->Name = L"pictureBox80";
            this->pictureBox80->Size = System::Drawing::Size(31, 31);
            this->pictureBox80->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox80->TabIndex = 84;
            this->pictureBox80->TabStop = false;
            this->pictureBox80->Tag = L"money";
            // 
            // pictureBox81
            // 
            this->pictureBox81->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.Image")));
            this->pictureBox81->Location = System::Drawing::Point(280, 206);
            this->pictureBox81->Name = L"pictureBox81";
            this->pictureBox81->Size = System::Drawing::Size(31, 31);
            this->pictureBox81->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox81->TabIndex = 83;
            this->pictureBox81->TabStop = false;
            this->pictureBox81->Tag = L"money";
            // 
            // pictureBox82
            // 
            this->pictureBox82->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.Image")));
            this->pictureBox82->Location = System::Drawing::Point(243, 206);
            this->pictureBox82->Name = L"pictureBox82";
            this->pictureBox82->Size = System::Drawing::Size(31, 31);
            this->pictureBox82->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox82->TabIndex = 82;
            this->pictureBox82->TabStop = false;
            this->pictureBox82->Tag = L"money";
            // 
            // pictureBox83
            // 
            this->pictureBox83->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox83->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.Image")));
            this->pictureBox83->Location = System::Drawing::Point(163, 280);
            this->pictureBox83->Name = L"pictureBox83";
            this->pictureBox83->Size = System::Drawing::Size(31, 31);
            this->pictureBox83->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox83->TabIndex = 87;
            this->pictureBox83->TabStop = false;
            this->pictureBox83->Tag = L"money";
            // 
            // pictureBox84
            // 
            this->pictureBox84->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.Image")));
            this->pictureBox84->Location = System::Drawing::Point(163, 320);
            this->pictureBox84->Name = L"pictureBox84";
            this->pictureBox84->Size = System::Drawing::Size(31, 31);
            this->pictureBox84->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox84->TabIndex = 86;
            this->pictureBox84->TabStop = false;
            this->pictureBox84->Tag = L"money";
            // 
            // pictureBox85
            // 
            this->pictureBox85->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.Image")));
            this->pictureBox85->Location = System::Drawing::Point(163, 243);
            this->pictureBox85->Name = L"pictureBox85";
            this->pictureBox85->Size = System::Drawing::Size(31, 31);
            this->pictureBox85->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox85->TabIndex = 85;
            this->pictureBox85->TabStop = false;
            this->pictureBox85->Tag = L"money";
            // 
            // pictureBox86
            // 
            this->pictureBox86->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.Image")));
            this->pictureBox86->Location = System::Drawing::Point(163, 603);
            this->pictureBox86->Name = L"pictureBox86";
            this->pictureBox86->Size = System::Drawing::Size(31, 31);
            this->pictureBox86->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox86->TabIndex = 95;
            this->pictureBox86->TabStop = false;
            this->pictureBox86->Tag = L"money";
            // 
            // pictureBox87
            // 
            this->pictureBox87->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox87->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox87.Image")));
            this->pictureBox87->Location = System::Drawing::Point(163, 640);
            this->pictureBox87->Name = L"pictureBox87";
            this->pictureBox87->Size = System::Drawing::Size(31, 31);
            this->pictureBox87->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox87->TabIndex = 94;
            this->pictureBox87->TabStop = false;
            this->pictureBox87->Tag = L"money";
            // 
            // pictureBox88
            // 
            this->pictureBox88->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox88->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox88.Image")));
            this->pictureBox88->Location = System::Drawing::Point(163, 560);
            this->pictureBox88->Name = L"pictureBox88";
            this->pictureBox88->Size = System::Drawing::Size(31, 31);
            this->pictureBox88->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox88->TabIndex = 93;
            this->pictureBox88->TabStop = false;
            this->pictureBox88->Tag = L"money";
            // 
            // pictureBox89
            // 
            this->pictureBox89->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox89->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox89.Image")));
            this->pictureBox89->Location = System::Drawing::Point(163, 480);
            this->pictureBox89->Name = L"pictureBox89";
            this->pictureBox89->Size = System::Drawing::Size(31, 31);
            this->pictureBox89->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox89->TabIndex = 92;
            this->pictureBox89->TabStop = false;
            this->pictureBox89->Tag = L"money";
            // 
            // pictureBox90
            // 
            this->pictureBox90->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox90->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox90.Image")));
            this->pictureBox90->Location = System::Drawing::Point(163, 524);
            this->pictureBox90->Name = L"pictureBox90";
            this->pictureBox90->Size = System::Drawing::Size(31, 31);
            this->pictureBox90->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox90->TabIndex = 91;
            this->pictureBox90->TabStop = false;
            this->pictureBox90->Tag = L"money";
            // 
            // pictureBox91
            // 
            this->pictureBox91->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox91->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox91.Image")));
            this->pictureBox91->Location = System::Drawing::Point(163, 400);
            this->pictureBox91->Name = L"pictureBox91";
            this->pictureBox91->Size = System::Drawing::Size(31, 31);
            this->pictureBox91->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox91->TabIndex = 90;
            this->pictureBox91->TabStop = false;
            this->pictureBox91->Tag = L"money";
            // 
            // pictureBox92
            // 
            this->pictureBox92->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox92.Image")));
            this->pictureBox92->Location = System::Drawing::Point(163, 439);
            this->pictureBox92->Name = L"pictureBox92";
            this->pictureBox92->Size = System::Drawing::Size(31, 31);
            this->pictureBox92->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox92->TabIndex = 89;
            this->pictureBox92->TabStop = false;
            this->pictureBox92->Tag = L"money";
            // 
            // pictureBox93
            // 
            this->pictureBox93->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.Image")));
            this->pictureBox93->Location = System::Drawing::Point(163, 363);
            this->pictureBox93->Name = L"pictureBox93";
            this->pictureBox93->Size = System::Drawing::Size(31, 31);
            this->pictureBox93->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox93->TabIndex = 88;
            this->pictureBox93->TabStop = false;
            this->pictureBox93->Tag = L"money";
            // 
            // pictureBox94
            // 
            this->pictureBox94->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox94.Image")));
            this->pictureBox94->Location = System::Drawing::Point(163, 680);
            this->pictureBox94->Name = L"pictureBox94";
            this->pictureBox94->Size = System::Drawing::Size(31, 31);
            this->pictureBox94->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox94->TabIndex = 96;
            this->pictureBox94->TabStop = false;
            this->pictureBox94->Tag = L"money";
            // 
            // pictureBox95
            // 
            this->pictureBox95->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox95->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox95.Image")));
            this->pictureBox95->Location = System::Drawing::Point(123, 524);
            this->pictureBox95->Name = L"pictureBox95";
            this->pictureBox95->Size = System::Drawing::Size(31, 31);
            this->pictureBox95->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox95->TabIndex = 99;
            this->pictureBox95->TabStop = false;
            this->pictureBox95->Tag = L"money";
            // 
            // pictureBox96
            // 
            this->pictureBox96->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox96->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox96.Image")));
            this->pictureBox96->Location = System::Drawing::Point(86, 524);
            this->pictureBox96->Name = L"pictureBox96";
            this->pictureBox96->Size = System::Drawing::Size(31, 31);
            this->pictureBox96->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox96->TabIndex = 98;
            this->pictureBox96->TabStop = false;
            this->pictureBox96->Tag = L"money";
            // 
            // pictureBox97
            // 
            this->pictureBox97->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox97->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox97.Image")));
            this->pictureBox97->Location = System::Drawing::Point(46, 526);
            this->pictureBox97->Name = L"pictureBox97";
            this->pictureBox97->Size = System::Drawing::Size(31, 31);
            this->pictureBox97->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox97->TabIndex = 97;
            this->pictureBox97->TabStop = false;
            this->pictureBox97->Tag = L"money";
            // 
            // pictureBox98
            // 
            this->pictureBox98->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox98->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox98.Image")));
            this->pictureBox98->Location = System::Drawing::Point(83, 603);
            this->pictureBox98->Name = L"pictureBox98";
            this->pictureBox98->Size = System::Drawing::Size(31, 31);
            this->pictureBox98->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox98->TabIndex = 102;
            this->pictureBox98->TabStop = false;
            this->pictureBox98->Tag = L"money";
            // 
            // pictureBox99
            // 
            this->pictureBox99->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox99->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox99.Image")));
            this->pictureBox99->Location = System::Drawing::Point(46, 603);
            this->pictureBox99->Name = L"pictureBox99";
            this->pictureBox99->Size = System::Drawing::Size(31, 31);
            this->pictureBox99->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox99->TabIndex = 101;
            this->pictureBox99->TabStop = false;
            this->pictureBox99->Tag = L"money";
            // 
            // pictureBox100
            // 
            this->pictureBox100->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox100.Image")));
            this->pictureBox100->Location = System::Drawing::Point(46, 563);
            this->pictureBox100->Name = L"pictureBox100";
            this->pictureBox100->Size = System::Drawing::Size(31, 31);
            this->pictureBox100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox100->TabIndex = 100;
            this->pictureBox100->TabStop = false;
            this->pictureBox100->Tag = L"money";
            // 
            // pictureBox101
            // 
            this->pictureBox101->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox101.Image")));
            this->pictureBox101->Location = System::Drawing::Point(86, 640);
            this->pictureBox101->Name = L"pictureBox101";
            this->pictureBox101->Size = System::Drawing::Size(31, 31);
            this->pictureBox101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox101->TabIndex = 103;
            this->pictureBox101->TabStop = false;
            this->pictureBox101->Tag = L"money";
            // 
            // pictureBox102
            // 
            this->pictureBox102->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox102->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox102.Image")));
            this->pictureBox102->Location = System::Drawing::Point(123, 683);
            this->pictureBox102->Name = L"pictureBox102";
            this->pictureBox102->Size = System::Drawing::Size(31, 31);
            this->pictureBox102->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox102->TabIndex = 106;
            this->pictureBox102->TabStop = false;
            this->pictureBox102->Tag = L"money";
            // 
            // pictureBox103
            // 
            this->pictureBox103->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox103->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox103.Image")));
            this->pictureBox103->Location = System::Drawing::Point(83, 683);
            this->pictureBox103->Name = L"pictureBox103";
            this->pictureBox103->Size = System::Drawing::Size(31, 31);
            this->pictureBox103->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox103->TabIndex = 105;
            this->pictureBox103->TabStop = false;
            this->pictureBox103->Tag = L"money";
            // 
            // pictureBox104
            // 
            this->pictureBox104->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox104->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox104.Image")));
            this->pictureBox104->Location = System::Drawing::Point(46, 683);
            this->pictureBox104->Name = L"pictureBox104";
            this->pictureBox104->Size = System::Drawing::Size(31, 31);
            this->pictureBox104->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox104->TabIndex = 104;
            this->pictureBox104->TabStop = false;
            this->pictureBox104->Tag = L"money";
            // 
            // pictureBox105
            // 
            this->pictureBox105->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox105->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox105.Image")));
            this->pictureBox105->Location = System::Drawing::Point(46, 761);
            this->pictureBox105->Name = L"pictureBox105";
            this->pictureBox105->Size = System::Drawing::Size(31, 31);
            this->pictureBox105->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox105->TabIndex = 108;
            this->pictureBox105->TabStop = false;
            this->pictureBox105->Tag = L"money";
            // 
            // pictureBox106
            // 
            this->pictureBox106->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox106->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox106.Image")));
            this->pictureBox106->Location = System::Drawing::Point(46, 724);
            this->pictureBox106->Name = L"pictureBox106";
            this->pictureBox106->Size = System::Drawing::Size(31, 31);
            this->pictureBox106->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox106->TabIndex = 107;
            this->pictureBox106->TabStop = false;
            this->pictureBox106->Tag = L"money";
            // 
            // pictureBox107
            // 
            this->pictureBox107->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox107->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox107.Image")));
            this->pictureBox107->Location = System::Drawing::Point(86, 761);
            this->pictureBox107->Name = L"pictureBox107";
            this->pictureBox107->Size = System::Drawing::Size(31, 31);
            this->pictureBox107->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox107->TabIndex = 116;
            this->pictureBox107->TabStop = false;
            this->pictureBox107->Tag = L"money";
            // 
            // pictureBox108
            // 
            this->pictureBox108->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox108->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox108.Image")));
            this->pictureBox108->Location = System::Drawing::Point(243, 761);
            this->pictureBox108->Name = L"pictureBox108";
            this->pictureBox108->Size = System::Drawing::Size(31, 31);
            this->pictureBox108->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox108->TabIndex = 115;
            this->pictureBox108->TabStop = false;
            this->pictureBox108->Tag = L"money";
            // 
            // pictureBox109
            // 
            this->pictureBox109->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox109->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox109.Image")));
            this->pictureBox109->Location = System::Drawing::Point(363, 761);
            this->pictureBox109->Name = L"pictureBox109";
            this->pictureBox109->Size = System::Drawing::Size(31, 31);
            this->pictureBox109->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox109->TabIndex = 114;
            this->pictureBox109->TabStop = false;
            this->pictureBox109->Tag = L"money";
            // 
            // pictureBox110
            // 
            this->pictureBox110->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox110.Image")));
            this->pictureBox110->Location = System::Drawing::Point(323, 761);
            this->pictureBox110->Name = L"pictureBox110";
            this->pictureBox110->Size = System::Drawing::Size(31, 31);
            this->pictureBox110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox110->TabIndex = 113;
            this->pictureBox110->TabStop = false;
            this->pictureBox110->Tag = L"money";
            // 
            // pictureBox111
            // 
            this->pictureBox111->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox111.Image")));
            this->pictureBox111->Location = System::Drawing::Point(286, 761);
            this->pictureBox111->Name = L"pictureBox111";
            this->pictureBox111->Size = System::Drawing::Size(31, 31);
            this->pictureBox111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox111->TabIndex = 112;
            this->pictureBox111->TabStop = false;
            this->pictureBox111->Tag = L"money";
            // 
            // pictureBox112
            // 
            this->pictureBox112->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox112->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox112.Image")));
            this->pictureBox112->Location = System::Drawing::Point(206, 761);
            this->pictureBox112->Name = L"pictureBox112";
            this->pictureBox112->Size = System::Drawing::Size(31, 31);
            this->pictureBox112->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox112->TabIndex = 111;
            this->pictureBox112->TabStop = false;
            this->pictureBox112->Tag = L"money";
            // 
            // pictureBox113
            // 
            this->pictureBox113->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox113->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox113.Image")));
            this->pictureBox113->Location = System::Drawing::Point(163, 761);
            this->pictureBox113->Name = L"pictureBox113";
            this->pictureBox113->Size = System::Drawing::Size(31, 31);
            this->pictureBox113->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox113->TabIndex = 110;
            this->pictureBox113->TabStop = false;
            this->pictureBox113->Tag = L"money";
            // 
            // pictureBox114
            // 
            this->pictureBox114->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox114->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox114.Image")));
            this->pictureBox114->Location = System::Drawing::Point(123, 761);
            this->pictureBox114->Name = L"pictureBox114";
            this->pictureBox114->Size = System::Drawing::Size(31, 31);
            this->pictureBox114->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox114->TabIndex = 109;
            this->pictureBox114->TabStop = false;
            this->pictureBox114->Tag = L"money";
            // 
            // pictureBox115
            // 
            this->pictureBox115->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox115->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox115.Image")));
            this->pictureBox115->Location = System::Drawing::Point(406, 760);
            this->pictureBox115->Name = L"pictureBox115";
            this->pictureBox115->Size = System::Drawing::Size(31, 31);
            this->pictureBox115->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox115->TabIndex = 125;
            this->pictureBox115->TabStop = false;
            this->pictureBox115->Tag = L"money";
            // 
            // pictureBox116
            // 
            this->pictureBox116->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox116->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox116.Image")));
            this->pictureBox116->Location = System::Drawing::Point(566, 761);
            this->pictureBox116->Name = L"pictureBox116";
            this->pictureBox116->Size = System::Drawing::Size(31, 31);
            this->pictureBox116->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox116->TabIndex = 124;
            this->pictureBox116->TabStop = false;
            this->pictureBox116->Tag = L"money";
            // 
            // pictureBox117
            // 
            this->pictureBox117->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox117->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox117.Image")));
            this->pictureBox117->Location = System::Drawing::Point(683, 761);
            this->pictureBox117->Name = L"pictureBox117";
            this->pictureBox117->Size = System::Drawing::Size(31, 31);
            this->pictureBox117->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox117->TabIndex = 123;
            this->pictureBox117->TabStop = false;
            this->pictureBox117->Tag = L"money";
            // 
            // pictureBox118
            // 
            this->pictureBox118->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox118->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox118.Image")));
            this->pictureBox118->Location = System::Drawing::Point(646, 761);
            this->pictureBox118->Name = L"pictureBox118";
            this->pictureBox118->Size = System::Drawing::Size(31, 31);
            this->pictureBox118->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox118->TabIndex = 122;
            this->pictureBox118->TabStop = false;
            this->pictureBox118->Tag = L"money";
            // 
            // pictureBox119
            // 
            this->pictureBox119->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox119->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox119.Image")));
            this->pictureBox119->Location = System::Drawing::Point(606, 761);
            this->pictureBox119->Name = L"pictureBox119";
            this->pictureBox119->Size = System::Drawing::Size(31, 31);
            this->pictureBox119->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox119->TabIndex = 121;
            this->pictureBox119->TabStop = false;
            this->pictureBox119->Tag = L"money";
            // 
            // pictureBox120
            // 
            this->pictureBox120->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox120->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox120.Image")));
            this->pictureBox120->Location = System::Drawing::Point(526, 760);
            this->pictureBox120->Name = L"pictureBox120";
            this->pictureBox120->Size = System::Drawing::Size(31, 31);
            this->pictureBox120->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox120->TabIndex = 120;
            this->pictureBox120->TabStop = false;
            this->pictureBox120->Tag = L"money";
            // 
            // pictureBox121
            // 
            this->pictureBox121->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox121->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox121.Image")));
            this->pictureBox121->Location = System::Drawing::Point(489, 760);
            this->pictureBox121->Name = L"pictureBox121";
            this->pictureBox121->Size = System::Drawing::Size(31, 31);
            this->pictureBox121->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox121->TabIndex = 119;
            this->pictureBox121->TabStop = false;
            this->pictureBox121->Tag = L"money";
            // 
            // pictureBox122
            // 
            this->pictureBox122->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox122->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox122.Image")));
            this->pictureBox122->Location = System::Drawing::Point(446, 761);
            this->pictureBox122->Name = L"pictureBox122";
            this->pictureBox122->Size = System::Drawing::Size(31, 31);
            this->pictureBox122->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox122->TabIndex = 118;
            this->pictureBox122->TabStop = false;
            this->pictureBox122->Tag = L"money";
            // 
            // pictureBox123
            // 
            this->pictureBox123->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox123->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox123.Image")));
            this->pictureBox123->Location = System::Drawing::Point(326, 724);
            this->pictureBox123->Name = L"pictureBox123";
            this->pictureBox123->Size = System::Drawing::Size(31, 31);
            this->pictureBox123->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox123->TabIndex = 127;
            this->pictureBox123->TabStop = false;
            this->pictureBox123->Tag = L"money";
            // 
            // pictureBox124
            // 
            this->pictureBox124->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox124->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox124.Image")));
            this->pictureBox124->Location = System::Drawing::Point(326, 683);
            this->pictureBox124->Name = L"pictureBox124";
            this->pictureBox124->Size = System::Drawing::Size(31, 31);
            this->pictureBox124->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox124->TabIndex = 126;
            this->pictureBox124->TabStop = false;
            this->pictureBox124->Tag = L"money";
            // 
            // pictureBox125
            // 
            this->pictureBox125->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox125->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox125.Image")));
            this->pictureBox125->Location = System::Drawing::Point(243, 683);
            this->pictureBox125->Name = L"pictureBox125";
            this->pictureBox125->Size = System::Drawing::Size(31, 31);
            this->pictureBox125->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox125->TabIndex = 129;
            this->pictureBox125->TabStop = false;
            this->pictureBox125->Tag = L"money";
            // 
            // pictureBox126
            // 
            this->pictureBox126->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox126->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox126.Image")));
            this->pictureBox126->Location = System::Drawing::Point(286, 683);
            this->pictureBox126->Name = L"pictureBox126";
            this->pictureBox126->Size = System::Drawing::Size(31, 31);
            this->pictureBox126->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox126->TabIndex = 128;
            this->pictureBox126->TabStop = false;
            this->pictureBox126->Tag = L"money";
            // 
            // pictureBox127
            // 
            this->pictureBox127->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox127->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox127.Image")));
            this->pictureBox127->Location = System::Drawing::Point(246, 606);
            this->pictureBox127->Name = L"pictureBox127";
            this->pictureBox127->Size = System::Drawing::Size(31, 31);
            this->pictureBox127->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox127->TabIndex = 131;
            this->pictureBox127->TabStop = false;
            this->pictureBox127->Tag = L"money";
            // 
            // pictureBox128
            // 
            this->pictureBox128->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox128->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox128.Image")));
            this->pictureBox128->Location = System::Drawing::Point(246, 643);
            this->pictureBox128->Name = L"pictureBox128";
            this->pictureBox128->Size = System::Drawing::Size(31, 31);
            this->pictureBox128->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox128->TabIndex = 130;
            this->pictureBox128->TabStop = false;
            this->pictureBox128->Tag = L"money";
            // 
            // pictureBox129
            // 
            this->pictureBox129->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox129->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox129.Image")));
            this->pictureBox129->Location = System::Drawing::Point(206, 603);
            this->pictureBox129->Name = L"pictureBox129";
            this->pictureBox129->Size = System::Drawing::Size(31, 31);
            this->pictureBox129->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox129->TabIndex = 132;
            this->pictureBox129->TabStop = false;
            this->pictureBox129->Tag = L"money";
            // 
            // pictureBox130
            // 
            this->pictureBox130->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox130->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox130.Image")));
            this->pictureBox130->Location = System::Drawing::Point(206, 366);
            this->pictureBox130->Name = L"pictureBox130";
            this->pictureBox130->Size = System::Drawing::Size(31, 31);
            this->pictureBox130->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox130->TabIndex = 133;
            this->pictureBox130->TabStop = false;
            this->pictureBox130->Tag = L"money";
            // 
            // pictureBox131
            // 
            this->pictureBox131->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox131->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox131.Image")));
            this->pictureBox131->Location = System::Drawing::Point(206, 526);
            this->pictureBox131->Name = L"pictureBox131";
            this->pictureBox131->Size = System::Drawing::Size(31, 31);
            this->pictureBox131->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox131->TabIndex = 134;
            this->pictureBox131->TabStop = false;
            this->pictureBox131->Tag = L"money";
            // 
            // pictureBox132
            // 
            this->pictureBox132->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox132->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox132.Image")));
            this->pictureBox132->Location = System::Drawing::Point(246, 486);
            this->pictureBox132->Name = L"pictureBox132";
            this->pictureBox132->Size = System::Drawing::Size(31, 31);
            this->pictureBox132->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox132->TabIndex = 141;
            this->pictureBox132->TabStop = false;
            this->pictureBox132->Tag = L"money";
            // 
            // pictureBox133
            // 
            this->pictureBox133->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox133->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox133.Image")));
            this->pictureBox133->Location = System::Drawing::Point(246, 526);
            this->pictureBox133->Name = L"pictureBox133";
            this->pictureBox133->Size = System::Drawing::Size(31, 31);
            this->pictureBox133->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox133->TabIndex = 140;
            this->pictureBox133->TabStop = false;
            this->pictureBox133->Tag = L"money";
            // 
            // pictureBox134
            // 
            this->pictureBox134->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox134->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox134.Image")));
            this->pictureBox134->Location = System::Drawing::Point(246, 406);
            this->pictureBox134->Name = L"pictureBox134";
            this->pictureBox134->Size = System::Drawing::Size(31, 31);
            this->pictureBox134->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox134->TabIndex = 139;
            this->pictureBox134->TabStop = false;
            this->pictureBox134->Tag = L"money";
            // 
            // pictureBox135
            // 
            this->pictureBox135->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox135->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox135.Image")));
            this->pictureBox135->Location = System::Drawing::Point(246, 445);
            this->pictureBox135->Name = L"pictureBox135";
            this->pictureBox135->Size = System::Drawing::Size(31, 31);
            this->pictureBox135->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox135->TabIndex = 138;
            this->pictureBox135->TabStop = false;
            this->pictureBox135->Tag = L"money";
            // 
            // pictureBox136
            // 
            this->pictureBox136->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox136->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox136.Image")));
            this->pictureBox136->Location = System::Drawing::Point(246, 369);
            this->pictureBox136->Name = L"pictureBox136";
            this->pictureBox136->Size = System::Drawing::Size(31, 31);
            this->pictureBox136->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox136->TabIndex = 137;
            this->pictureBox136->TabStop = false;
            this->pictureBox136->Tag = L"money";
            // 
            // pictureBox137
            // 
            this->pictureBox137->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox137->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox137.Image")));
            this->pictureBox137->Location = System::Drawing::Point(246, 286);
            this->pictureBox137->Name = L"pictureBox137";
            this->pictureBox137->Size = System::Drawing::Size(31, 31);
            this->pictureBox137->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox137->TabIndex = 136;
            this->pictureBox137->TabStop = false;
            this->pictureBox137->Tag = L"money";
            // 
            // pictureBox138
            // 
            this->pictureBox138->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox138->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox138.Image")));
            this->pictureBox138->Location = System::Drawing::Point(246, 326);
            this->pictureBox138->Name = L"pictureBox138";
            this->pictureBox138->Size = System::Drawing::Size(31, 31);
            this->pictureBox138->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox138->TabIndex = 135;
            this->pictureBox138->TabStop = false;
            this->pictureBox138->Tag = L"money";
            // 
            // pictureBox139
            // 
            this->pictureBox139->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox139->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox139.Image")));
            this->pictureBox139->Location = System::Drawing::Point(683, 724);
            this->pictureBox139->Name = L"pictureBox139";
            this->pictureBox139->Size = System::Drawing::Size(31, 31);
            this->pictureBox139->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox139->TabIndex = 142;
            this->pictureBox139->TabStop = false;
            this->pictureBox139->Tag = L"money";
            // 
            // pictureBox140
            // 
            this->pictureBox140->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox140->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox140.Image")));
            this->pictureBox140->Location = System::Drawing::Point(646, 686);
            this->pictureBox140->Name = L"pictureBox140";
            this->pictureBox140->Size = System::Drawing::Size(31, 31);
            this->pictureBox140->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox140->TabIndex = 146;
            this->pictureBox140->TabStop = false;
            this->pictureBox140->Tag = L"money";
            // 
            // pictureBox141
            // 
            this->pictureBox141->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox141->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox141.Image")));
            this->pictureBox141->Location = System::Drawing::Point(606, 686);
            this->pictureBox141->Name = L"pictureBox141";
            this->pictureBox141->Size = System::Drawing::Size(31, 31);
            this->pictureBox141->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox141->TabIndex = 145;
            this->pictureBox141->TabStop = false;
            this->pictureBox141->Tag = L"money";
            // 
            // pictureBox142
            // 
            this->pictureBox142->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox142->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox142.Image")));
            this->pictureBox142->Location = System::Drawing::Point(563, 686);
            this->pictureBox142->Name = L"pictureBox142";
            this->pictureBox142->Size = System::Drawing::Size(31, 31);
            this->pictureBox142->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox142->TabIndex = 144;
            this->pictureBox142->TabStop = false;
            this->pictureBox142->Tag = L"money";
            // 
            // pictureBox143
            // 
            this->pictureBox143->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox143->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox143.Image")));
            this->pictureBox143->Location = System::Drawing::Point(683, 689);
            this->pictureBox143->Name = L"pictureBox143";
            this->pictureBox143->Size = System::Drawing::Size(31, 31);
            this->pictureBox143->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox143->TabIndex = 143;
            this->pictureBox143->TabStop = false;
            this->pictureBox143->Tag = L"money";
            // 
            // pictureBox144
            // 
            this->pictureBox144->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox144->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox144.Image")));
            this->pictureBox144->Location = System::Drawing::Point(406, 724);
            this->pictureBox144->Name = L"pictureBox144";
            this->pictureBox144->Size = System::Drawing::Size(31, 31);
            this->pictureBox144->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox144->TabIndex = 147;
            this->pictureBox144->TabStop = false;
            this->pictureBox144->Tag = L"money";
            // 
            // pictureBox145
            // 
            this->pictureBox145->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox145->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox145.Image")));
            this->pictureBox145->Location = System::Drawing::Point(489, 686);
            this->pictureBox145->Name = L"pictureBox145";
            this->pictureBox145->Size = System::Drawing::Size(31, 31);
            this->pictureBox145->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox145->TabIndex = 150;
            this->pictureBox145->TabStop = false;
            this->pictureBox145->Tag = L"money";
            // 
            // pictureBox146
            // 
            this->pictureBox146->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox146->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox146.Image")));
            this->pictureBox146->Location = System::Drawing::Point(449, 686);
            this->pictureBox146->Name = L"pictureBox146";
            this->pictureBox146->Size = System::Drawing::Size(31, 31);
            this->pictureBox146->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox146->TabIndex = 149;
            this->pictureBox146->TabStop = false;
            this->pictureBox146->Tag = L"money";
            // 
            // pictureBox147
            // 
            this->pictureBox147->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox147->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox147.Image")));
            this->pictureBox147->Location = System::Drawing::Point(406, 686);
            this->pictureBox147->Name = L"pictureBox147";
            this->pictureBox147->Size = System::Drawing::Size(31, 31);
            this->pictureBox147->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox147->TabIndex = 148;
            this->pictureBox147->TabStop = false;
            this->pictureBox147->Tag = L"money";
            // 
            // pictureBox148
            // 
            this->pictureBox148->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox148->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox148.Image")));
            this->pictureBox148->Location = System::Drawing::Point(486, 643);
            this->pictureBox148->Name = L"pictureBox148";
            this->pictureBox148->Size = System::Drawing::Size(31, 31);
            this->pictureBox148->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox148->TabIndex = 151;
            this->pictureBox148->TabStop = false;
            this->pictureBox148->Tag = L"money";
            // 
            // pictureBox149
            // 
            this->pictureBox149->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox149->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox149.Image")));
            this->pictureBox149->Location = System::Drawing::Point(406, 602);
            this->pictureBox149->Name = L"pictureBox149";
            this->pictureBox149->Size = System::Drawing::Size(31, 31);
            this->pictureBox149->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox149->TabIndex = 156;
            this->pictureBox149->TabStop = false;
            this->pictureBox149->Tag = L"money";
            // 
            // pictureBox150
            // 
            this->pictureBox150->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox150->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox150.Image")));
            this->pictureBox150->Location = System::Drawing::Point(446, 603);
            this->pictureBox150->Name = L"pictureBox150";
            this->pictureBox150->Size = System::Drawing::Size(31, 31);
            this->pictureBox150->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox150->TabIndex = 155;
            this->pictureBox150->TabStop = false;
            this->pictureBox150->Tag = L"money";
            // 
            // pictureBox151
            // 
            this->pictureBox151->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox151->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox151.Image")));
            this->pictureBox151->Location = System::Drawing::Point(363, 603);
            this->pictureBox151->Name = L"pictureBox151";
            this->pictureBox151->Size = System::Drawing::Size(31, 31);
            this->pictureBox151->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox151->TabIndex = 154;
            this->pictureBox151->TabStop = false;
            this->pictureBox151->Tag = L"money";
            // 
            // pictureBox152
            // 
            this->pictureBox152->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox152->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox152.Image")));
            this->pictureBox152->Location = System::Drawing::Point(323, 603);
            this->pictureBox152->Name = L"pictureBox152";
            this->pictureBox152->Size = System::Drawing::Size(31, 31);
            this->pictureBox152->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox152->TabIndex = 153;
            this->pictureBox152->TabStop = false;
            this->pictureBox152->Tag = L"money";
            // 
            // pictureBox153
            // 
            this->pictureBox153->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox153->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox153.Image")));
            this->pictureBox153->Location = System::Drawing::Point(286, 603);
            this->pictureBox153->Name = L"pictureBox153";
            this->pictureBox153->Size = System::Drawing::Size(31, 31);
            this->pictureBox153->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox153->TabIndex = 152;
            this->pictureBox153->TabStop = false;
            this->pictureBox153->Tag = L"money";
            // 
            // pictureBox154
            // 
            this->pictureBox154->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox154->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox154.Image")));
            this->pictureBox154->Location = System::Drawing::Point(526, 602);
            this->pictureBox154->Name = L"pictureBox154";
            this->pictureBox154->Size = System::Drawing::Size(31, 31);
            this->pictureBox154->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox154->TabIndex = 159;
            this->pictureBox154->TabStop = false;
            this->pictureBox154->Tag = L"money";
            // 
            // pictureBox155
            // 
            this->pictureBox155->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox155->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox155.Image")));
            this->pictureBox155->Location = System::Drawing::Point(563, 602);
            this->pictureBox155->Name = L"pictureBox155";
            this->pictureBox155->Size = System::Drawing::Size(31, 31);
            this->pictureBox155->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox155->TabIndex = 158;
            this->pictureBox155->TabStop = false;
            this->pictureBox155->Tag = L"money";
            // 
            // pictureBox156
            // 
            this->pictureBox156->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox156->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox156.Image")));
            this->pictureBox156->Location = System::Drawing::Point(483, 602);
            this->pictureBox156->Name = L"pictureBox156";
            this->pictureBox156->Size = System::Drawing::Size(31, 31);
            this->pictureBox156->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox156->TabIndex = 157;
            this->pictureBox156->TabStop = false;
            this->pictureBox156->Tag = L"money";
            // 
            // pictureBox157
            // 
            this->pictureBox157->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox157->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox157.Image")));
            this->pictureBox157->Location = System::Drawing::Point(563, 643);
            this->pictureBox157->Name = L"pictureBox157";
            this->pictureBox157->Size = System::Drawing::Size(31, 31);
            this->pictureBox157->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox157->TabIndex = 160;
            this->pictureBox157->TabStop = false;
            this->pictureBox157->Tag = L"money";
            // 
            // pictureBox158
            // 
            this->pictureBox158->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox158->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox158.Image")));
            this->pictureBox158->Location = System::Drawing::Point(649, 643);
            this->pictureBox158->Name = L"pictureBox158";
            this->pictureBox158->Size = System::Drawing::Size(31, 31);
            this->pictureBox158->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox158->TabIndex = 161;
            this->pictureBox158->TabStop = false;
            this->pictureBox158->Tag = L"money";
            // 
            // pictureBox159
            // 
            this->pictureBox159->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox159->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox159.Image")));
            this->pictureBox159->Location = System::Drawing::Point(646, 603);
            this->pictureBox159->Name = L"pictureBox159";
            this->pictureBox159->Size = System::Drawing::Size(31, 31);
            this->pictureBox159->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox159->TabIndex = 163;
            this->pictureBox159->TabStop = false;
            this->pictureBox159->Tag = L"money";
            // 
            // pictureBox160
            // 
            this->pictureBox160->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox160->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox160.Image")));
            this->pictureBox160->Location = System::Drawing::Point(683, 603);
            this->pictureBox160->Name = L"pictureBox160";
            this->pictureBox160->Size = System::Drawing::Size(31, 31);
            this->pictureBox160->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox160->TabIndex = 162;
            this->pictureBox160->TabStop = false;
            this->pictureBox160->Tag = L"money";
            // 
            // pictureBox161
            // 
            this->pictureBox161->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox161->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox161.Image")));
            this->pictureBox161->Location = System::Drawing::Point(409, 526);
            this->pictureBox161->Name = L"pictureBox161";
            this->pictureBox161->Size = System::Drawing::Size(31, 31);
            this->pictureBox161->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox161->TabIndex = 165;
            this->pictureBox161->TabStop = false;
            this->pictureBox161->Tag = L"money";
            // 
            // pictureBox162
            // 
            this->pictureBox162->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox162->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox162.Image")));
            this->pictureBox162->Location = System::Drawing::Point(449, 526);
            this->pictureBox162->Name = L"pictureBox162";
            this->pictureBox162->Size = System::Drawing::Size(31, 31);
            this->pictureBox162->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox162->TabIndex = 164;
            this->pictureBox162->TabStop = false;
            this->pictureBox162->Tag = L"money";
            // 
            // pictureBox163
            // 
            this->pictureBox163->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox163->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox163.Image")));
            this->pictureBox163->Location = System::Drawing::Point(326, 526);
            this->pictureBox163->Name = L"pictureBox163";
            this->pictureBox163->Size = System::Drawing::Size(31, 31);
            this->pictureBox163->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox163->TabIndex = 167;
            this->pictureBox163->TabStop = false;
            this->pictureBox163->Tag = L"money";
            // 
            // pictureBox164
            // 
            this->pictureBox164->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox164->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox164.Image")));
            this->pictureBox164->Location = System::Drawing::Point(286, 526);
            this->pictureBox164->Name = L"pictureBox164";
            this->pictureBox164->Size = System::Drawing::Size(31, 31);
            this->pictureBox164->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox164->TabIndex = 166;
            this->pictureBox164->TabStop = false;
            this->pictureBox164->Tag = L"money";
            // 
            // pictureBox165
            // 
            this->pictureBox165->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox165->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox165.Image")));
            this->pictureBox165->Location = System::Drawing::Point(326, 563);
            this->pictureBox165->Name = L"pictureBox165";
            this->pictureBox165->Size = System::Drawing::Size(31, 31);
            this->pictureBox165->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox165->TabIndex = 168;
            this->pictureBox165->TabStop = false;
            this->pictureBox165->Tag = L"money";
            // 
            // pictureBox166
            // 
            this->pictureBox166->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox166->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox166.Image")));
            this->pictureBox166->Location = System::Drawing::Point(406, 563);
            this->pictureBox166->Name = L"pictureBox166";
            this->pictureBox166->Size = System::Drawing::Size(31, 31);
            this->pictureBox166->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox166->TabIndex = 169;
            this->pictureBox166->TabStop = false;
            this->pictureBox166->Tag = L"money";
            // 
            // pictureBox167
            // 
            this->pictureBox167->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox167->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox167.Image")));
            this->pictureBox167->Location = System::Drawing::Point(406, 442);
            this->pictureBox167->Name = L"pictureBox167";
            this->pictureBox167->Size = System::Drawing::Size(31, 31);
            this->pictureBox167->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox167->TabIndex = 174;
            this->pictureBox167->TabStop = false;
            this->pictureBox167->Tag = L"money";
            // 
            // pictureBox168
            // 
            this->pictureBox168->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox168->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox168.Image")));
            this->pictureBox168->Location = System::Drawing::Point(446, 443);
            this->pictureBox168->Name = L"pictureBox168";
            this->pictureBox168->Size = System::Drawing::Size(31, 31);
            this->pictureBox168->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox168->TabIndex = 173;
            this->pictureBox168->TabStop = false;
            this->pictureBox168->Tag = L"money";
            // 
            // pictureBox169
            // 
            this->pictureBox169->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox169->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox169.Image")));
            this->pictureBox169->Location = System::Drawing::Point(363, 443);
            this->pictureBox169->Name = L"pictureBox169";
            this->pictureBox169->Size = System::Drawing::Size(31, 31);
            this->pictureBox169->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox169->TabIndex = 172;
            this->pictureBox169->TabStop = false;
            this->pictureBox169->Tag = L"money";
            // 
            // pictureBox170
            // 
            this->pictureBox170->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox170->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox170.Image")));
            this->pictureBox170->Location = System::Drawing::Point(323, 443);
            this->pictureBox170->Name = L"pictureBox170";
            this->pictureBox170->Size = System::Drawing::Size(31, 31);
            this->pictureBox170->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox170->TabIndex = 171;
            this->pictureBox170->TabStop = false;
            this->pictureBox170->Tag = L"money";
            // 
            // pictureBox171
            // 
            this->pictureBox171->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox171->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox171.Image")));
            this->pictureBox171->Location = System::Drawing::Point(286, 443);
            this->pictureBox171->Name = L"pictureBox171";
            this->pictureBox171->Size = System::Drawing::Size(31, 31);
            this->pictureBox171->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox171->TabIndex = 170;
            this->pictureBox171->TabStop = false;
            this->pictureBox171->Tag = L"money";
            // 
            // pictureBox172
            // 
            this->pictureBox172->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox172->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox172.Image")));
            this->pictureBox172->Location = System::Drawing::Point(683, 526);
            this->pictureBox172->Name = L"pictureBox172";
            this->pictureBox172->Size = System::Drawing::Size(31, 31);
            this->pictureBox172->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox172->TabIndex = 182;
            this->pictureBox172->TabStop = false;
            this->pictureBox172->Tag = L"money";
            // 
            // pictureBox173
            // 
            this->pictureBox173->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox173->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox173.Image")));
            this->pictureBox173->Location = System::Drawing::Point(643, 526);
            this->pictureBox173->Name = L"pictureBox173";
            this->pictureBox173->Size = System::Drawing::Size(31, 31);
            this->pictureBox173->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox173->TabIndex = 181;
            this->pictureBox173->TabStop = false;
            this->pictureBox173->Tag = L"money";
            // 
            // pictureBox174
            // 
            this->pictureBox174->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox174->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox174.Image")));
            this->pictureBox174->Location = System::Drawing::Point(603, 526);
            this->pictureBox174->Name = L"pictureBox174";
            this->pictureBox174->Size = System::Drawing::Size(31, 31);
            this->pictureBox174->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox174->TabIndex = 180;
            this->pictureBox174->TabStop = false;
            this->pictureBox174->Tag = L"money";
            // 
            // pictureBox175
            // 
            this->pictureBox175->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox175->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox175.Image")));
            this->pictureBox175->Location = System::Drawing::Point(566, 524);
            this->pictureBox175->Name = L"pictureBox175";
            this->pictureBox175->Size = System::Drawing::Size(31, 31);
            this->pictureBox175->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox175->TabIndex = 179;
            this->pictureBox175->TabStop = false;
            this->pictureBox175->Tag = L"money";
            // 
            // pictureBox176
            // 
            this->pictureBox176->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox176->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox176.Image")));
            this->pictureBox176->Location = System::Drawing::Point(489, 526);
            this->pictureBox176->Name = L"pictureBox176";
            this->pictureBox176->Size = System::Drawing::Size(31, 31);
            this->pictureBox176->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox176->TabIndex = 178;
            this->pictureBox176->TabStop = false;
            this->pictureBox176->Tag = L"money";
            // 
            // pictureBox179
            // 
            this->pictureBox179->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox179->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox179.Image")));
            this->pictureBox179->Location = System::Drawing::Point(526, 526);
            this->pictureBox179->Name = L"pictureBox179";
            this->pictureBox179->Size = System::Drawing::Size(31, 31);
            this->pictureBox179->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox179->TabIndex = 175;
            this->pictureBox179->TabStop = false;
            this->pictureBox179->Tag = L"money";
            // 
            // pictureBox177
            // 
            this->pictureBox177->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox177->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox177.Image")));
            this->pictureBox177->Location = System::Drawing::Point(566, 563);
            this->pictureBox177->Name = L"pictureBox177";
            this->pictureBox177->Size = System::Drawing::Size(31, 31);
            this->pictureBox177->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox177->TabIndex = 183;
            this->pictureBox177->TabStop = false;
            this->pictureBox177->Tag = L"money";
            // 
            // pictureBox178
            // 
            this->pictureBox178->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox178->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox178.Image")));
            this->pictureBox178->Location = System::Drawing::Point(526, 46);
            this->pictureBox178->Name = L"pictureBox178";
            this->pictureBox178->Size = System::Drawing::Size(31, 31);
            this->pictureBox178->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox178->TabIndex = 190;
            this->pictureBox178->TabStop = false;
            this->pictureBox178->Tag = L"money";
            // 
            // pictureBox180
            // 
            this->pictureBox180->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox180->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox180.Image")));
            this->pictureBox180->Location = System::Drawing::Point(649, 46);
            this->pictureBox180->Name = L"pictureBox180";
            this->pictureBox180->Size = System::Drawing::Size(31, 31);
            this->pictureBox180->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox180->TabIndex = 189;
            this->pictureBox180->TabStop = false;
            this->pictureBox180->Tag = L"money";
            // 
            // pictureBox181
            // 
            this->pictureBox181->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox181->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox181.Image")));
            this->pictureBox181->Location = System::Drawing::Point(606, 46);
            this->pictureBox181->Name = L"pictureBox181";
            this->pictureBox181->Size = System::Drawing::Size(31, 31);
            this->pictureBox181->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox181->TabIndex = 188;
            this->pictureBox181->TabStop = false;
            this->pictureBox181->Tag = L"money";
            // 
            // pictureBox182
            // 
            this->pictureBox182->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox182->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox182.Image")));
            this->pictureBox182->Location = System::Drawing::Point(566, 46);
            this->pictureBox182->Name = L"pictureBox182";
            this->pictureBox182->Size = System::Drawing::Size(31, 31);
            this->pictureBox182->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox182->TabIndex = 187;
            this->pictureBox182->TabStop = false;
            this->pictureBox182->Tag = L"money";
            // 
            // pictureBox183
            // 
            this->pictureBox183->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox183->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox183.Image")));
            this->pictureBox183->Location = System::Drawing::Point(489, 46);
            this->pictureBox183->Name = L"pictureBox183";
            this->pictureBox183->Size = System::Drawing::Size(31, 31);
            this->pictureBox183->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox183->TabIndex = 186;
            this->pictureBox183->TabStop = false;
            this->pictureBox183->Tag = L"money";
            // 
            // pictureBox184
            // 
            this->pictureBox184->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox184->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox184.Image")));
            this->pictureBox184->Location = System::Drawing::Point(446, 46);
            this->pictureBox184->Name = L"pictureBox184";
            this->pictureBox184->Size = System::Drawing::Size(31, 31);
            this->pictureBox184->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox184->TabIndex = 185;
            this->pictureBox184->TabStop = false;
            this->pictureBox184->Tag = L"money";
            // 
            // pictureBox185
            // 
            this->pictureBox185->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox185->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox185.Image")));
            this->pictureBox185->Location = System::Drawing::Point(406, 46);
            this->pictureBox185->Name = L"pictureBox185";
            this->pictureBox185->Size = System::Drawing::Size(31, 31);
            this->pictureBox185->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox185->TabIndex = 184;
            this->pictureBox185->TabStop = false;
            this->pictureBox185->Tag = L"money";
            // 
            // pictureBox186
            // 
            this->pictureBox186->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox186->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox186.Image")));
            this->pictureBox186->Location = System::Drawing::Point(683, 200);
            this->pictureBox186->Name = L"pictureBox186";
            this->pictureBox186->Size = System::Drawing::Size(31, 31);
            this->pictureBox186->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox186->TabIndex = 195;
            this->pictureBox186->TabStop = false;
            this->pictureBox186->Tag = L"money";
            // 
            // pictureBox187
            // 
            this->pictureBox187->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox187->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox187.Image")));
            this->pictureBox187->Location = System::Drawing::Point(686, 163);
            this->pictureBox187->Name = L"pictureBox187";
            this->pictureBox187->Size = System::Drawing::Size(31, 31);
            this->pictureBox187->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox187->TabIndex = 194;
            this->pictureBox187->TabStop = false;
            this->pictureBox187->Tag = L"money";
            // 
            // pictureBox188
            // 
            this->pictureBox188->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox188->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox188.Image")));
            this->pictureBox188->Location = System::Drawing::Point(686, 126);
            this->pictureBox188->Name = L"pictureBox188";
            this->pictureBox188->Size = System::Drawing::Size(31, 31);
            this->pictureBox188->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox188->TabIndex = 193;
            this->pictureBox188->TabStop = false;
            this->pictureBox188->Tag = L"money";
            // 
            // pictureBox189
            // 
            this->pictureBox189->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox189.Image")));
            this->pictureBox189->Location = System::Drawing::Point(686, 83);
            this->pictureBox189->Name = L"pictureBox189";
            this->pictureBox189->Size = System::Drawing::Size(31, 31);
            this->pictureBox189->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox189->TabIndex = 192;
            this->pictureBox189->TabStop = false;
            this->pictureBox189->Tag = L"money";
            // 
            // pictureBox190
            // 
            this->pictureBox190->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox190->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox190.Image")));
            this->pictureBox190->Location = System::Drawing::Point(686, 46);
            this->pictureBox190->Name = L"pictureBox190";
            this->pictureBox190->Size = System::Drawing::Size(31, 31);
            this->pictureBox190->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox190->TabIndex = 191;
            this->pictureBox190->TabStop = false;
            this->pictureBox190->Tag = L"money";
            // 
            // pictureBox192
            // 
            this->pictureBox192->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox192->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox192.Image")));
            this->pictureBox192->Location = System::Drawing::Point(526, 126);
            this->pictureBox192->Name = L"pictureBox192";
            this->pictureBox192->Size = System::Drawing::Size(31, 31);
            this->pictureBox192->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox192->TabIndex = 202;
            this->pictureBox192->TabStop = false;
            this->pictureBox192->Tag = L"money";
            // 
            // pictureBox193
            // 
            this->pictureBox193->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox193->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox193.Image")));
            this->pictureBox193->Location = System::Drawing::Point(649, 126);
            this->pictureBox193->Name = L"pictureBox193";
            this->pictureBox193->Size = System::Drawing::Size(31, 31);
            this->pictureBox193->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox193->TabIndex = 201;
            this->pictureBox193->TabStop = false;
            this->pictureBox193->Tag = L"money";
            // 
            // pictureBox194
            // 
            this->pictureBox194->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox194->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox194.Image")));
            this->pictureBox194->Location = System::Drawing::Point(606, 126);
            this->pictureBox194->Name = L"pictureBox194";
            this->pictureBox194->Size = System::Drawing::Size(31, 31);
            this->pictureBox194->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox194->TabIndex = 200;
            this->pictureBox194->TabStop = false;
            this->pictureBox194->Tag = L"money";
            // 
            // pictureBox195
            // 
            this->pictureBox195->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox195->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox195.Image")));
            this->pictureBox195->Location = System::Drawing::Point(566, 126);
            this->pictureBox195->Name = L"pictureBox195";
            this->pictureBox195->Size = System::Drawing::Size(31, 31);
            this->pictureBox195->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox195->TabIndex = 199;
            this->pictureBox195->TabStop = false;
            this->pictureBox195->Tag = L"money";
            // 
            // pictureBox196
            // 
            this->pictureBox196->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox196->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox196.Image")));
            this->pictureBox196->Location = System::Drawing::Point(483, 126);
            this->pictureBox196->Name = L"pictureBox196";
            this->pictureBox196->Size = System::Drawing::Size(31, 31);
            this->pictureBox196->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox196->TabIndex = 198;
            this->pictureBox196->TabStop = false;
            this->pictureBox196->Tag = L"money";
            // 
            // pictureBox197
            // 
            this->pictureBox197->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox197->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox197.Image")));
            this->pictureBox197->Location = System::Drawing::Point(443, 126);
            this->pictureBox197->Name = L"pictureBox197";
            this->pictureBox197->Size = System::Drawing::Size(31, 31);
            this->pictureBox197->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox197->TabIndex = 197;
            this->pictureBox197->TabStop = false;
            this->pictureBox197->Tag = L"money";
            // 
            // pictureBox198
            // 
            this->pictureBox198->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox198->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox198.Image")));
            this->pictureBox198->Location = System::Drawing::Point(406, 126);
            this->pictureBox198->Name = L"pictureBox198";
            this->pictureBox198->Size = System::Drawing::Size(31, 31);
            this->pictureBox198->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox198->TabIndex = 196;
            this->pictureBox198->TabStop = false;
            this->pictureBox198->Tag = L"money";
            // 
            // pictureBox191
            // 
            this->pictureBox191->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox191->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox191.Image")));
            this->pictureBox191->Location = System::Drawing::Point(406, 89);
            this->pictureBox191->Name = L"pictureBox191";
            this->pictureBox191->Size = System::Drawing::Size(31, 31);
            this->pictureBox191->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox191->TabIndex = 203;
            this->pictureBox191->TabStop = false;
            this->pictureBox191->Tag = L"money";
            // 
            // pictureBox199
            // 
            this->pictureBox199->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox199->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox199.Image")));
            this->pictureBox199->Location = System::Drawing::Point(566, 83);
            this->pictureBox199->Name = L"pictureBox199";
            this->pictureBox199->Size = System::Drawing::Size(31, 31);
            this->pictureBox199->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox199->TabIndex = 204;
            this->pictureBox199->TabStop = false;
            this->pictureBox199->Tag = L"money";
            // 
            // pictureBox200
            // 
            this->pictureBox200->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox200->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox200.Image")));
            this->pictureBox200->Location = System::Drawing::Point(566, 200);
            this->pictureBox200->Name = L"pictureBox200";
            this->pictureBox200->Size = System::Drawing::Size(31, 31);
            this->pictureBox200->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox200->TabIndex = 209;
            this->pictureBox200->TabStop = false;
            this->pictureBox200->Tag = L"money";
            // 
            // pictureBox201
            // 
            this->pictureBox201->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox201->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox201.Image")));
            this->pictureBox201->Location = System::Drawing::Point(566, 161);
            this->pictureBox201->Name = L"pictureBox201";
            this->pictureBox201->Size = System::Drawing::Size(31, 31);
            this->pictureBox201->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox201->TabIndex = 208;
            this->pictureBox201->TabStop = false;
            this->pictureBox201->Tag = L"money";
            // 
            // pictureBox202
            // 
            this->pictureBox202->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox202->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox202.Image")));
            this->pictureBox202->Location = System::Drawing::Point(563, 280);
            this->pictureBox202->Name = L"pictureBox202";
            this->pictureBox202->Size = System::Drawing::Size(31, 31);
            this->pictureBox202->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox202->TabIndex = 207;
            this->pictureBox202->TabStop = false;
            this->pictureBox202->Tag = L"money";
            // 
            // pictureBox203
            // 
            this->pictureBox203->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox203->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox203.Image")));
            this->pictureBox203->Location = System::Drawing::Point(563, 239);
            this->pictureBox203->Name = L"pictureBox203";
            this->pictureBox203->Size = System::Drawing::Size(31, 31);
            this->pictureBox203->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox203->TabIndex = 206;
            this->pictureBox203->TabStop = false;
            this->pictureBox203->Tag = L"money";
            // 
            // pictureBox204
            // 
            this->pictureBox204->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox204->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox204.Image")));
            this->pictureBox204->Location = System::Drawing::Point(566, 326);
            this->pictureBox204->Name = L"pictureBox204";
            this->pictureBox204->Size = System::Drawing::Size(31, 31);
            this->pictureBox204->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox204->TabIndex = 205;
            this->pictureBox204->TabStop = false;
            this->pictureBox204->Tag = L"money";
            // 
            // pictureBox205
            // 
            this->pictureBox205->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox205->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox205.Image")));
            this->pictureBox205->Location = System::Drawing::Point(566, 399);
            this->pictureBox205->Name = L"pictureBox205";
            this->pictureBox205->Size = System::Drawing::Size(31, 31);
            this->pictureBox205->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox205->TabIndex = 214;
            this->pictureBox205->TabStop = false;
            this->pictureBox205->Tag = L"money";
            // 
            // pictureBox206
            // 
            this->pictureBox206->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox206->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox206.Image")));
            this->pictureBox206->Location = System::Drawing::Point(566, 363);
            this->pictureBox206->Name = L"pictureBox206";
            this->pictureBox206->Size = System::Drawing::Size(31, 31);
            this->pictureBox206->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox206->TabIndex = 213;
            this->pictureBox206->TabStop = false;
            this->pictureBox206->Tag = L"money";
            // 
            // pictureBox207
            // 
            this->pictureBox207->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox207->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox207.Image")));
            this->pictureBox207->Location = System::Drawing::Point(566, 480);
            this->pictureBox207->Name = L"pictureBox207";
            this->pictureBox207->Size = System::Drawing::Size(31, 31);
            this->pictureBox207->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox207->TabIndex = 212;
            this->pictureBox207->TabStop = false;
            this->pictureBox207->Tag = L"money";
            // 
            // pictureBox208
            // 
            this->pictureBox208->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox208->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox208.Image")));
            this->pictureBox208->Location = System::Drawing::Point(566, 439);
            this->pictureBox208->Name = L"pictureBox208";
            this->pictureBox208->Size = System::Drawing::Size(31, 31);
            this->pictureBox208->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox208->TabIndex = 211;
            this->pictureBox208->TabStop = false;
            this->pictureBox208->Tag = L"money";
            // 
            // pictureBox213
            // 
            this->pictureBox213->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox213->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox213.Image")));
            this->pictureBox213->Location = System::Drawing::Point(486, 443);
            this->pictureBox213->Name = L"pictureBox213";
            this->pictureBox213->Size = System::Drawing::Size(31, 31);
            this->pictureBox213->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox213->TabIndex = 223;
            this->pictureBox213->TabStop = false;
            this->pictureBox213->Tag = L"money";
            // 
            // pictureBox214
            // 
            this->pictureBox214->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox214->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox214.Image")));
            this->pictureBox214->Location = System::Drawing::Point(486, 489);
            this->pictureBox214->Name = L"pictureBox214";
            this->pictureBox214->Size = System::Drawing::Size(31, 31);
            this->pictureBox214->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox214->TabIndex = 222;
            this->pictureBox214->TabStop = false;
            this->pictureBox214->Tag = L"money";
            // 
            // pictureBox215
            // 
            this->pictureBox215->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox215->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox215.Image")));
            this->pictureBox215->Location = System::Drawing::Point(486, 369);
            this->pictureBox215->Name = L"pictureBox215";
            this->pictureBox215->Size = System::Drawing::Size(31, 31);
            this->pictureBox215->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox215->TabIndex = 221;
            this->pictureBox215->TabStop = false;
            this->pictureBox215->Tag = L"money";
            // 
            // pictureBox216
            // 
            this->pictureBox216->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox216->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox216.Image")));
            this->pictureBox216->Location = System::Drawing::Point(486, 408);
            this->pictureBox216->Name = L"pictureBox216";
            this->pictureBox216->Size = System::Drawing::Size(31, 31);
            this->pictureBox216->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox216->TabIndex = 220;
            this->pictureBox216->TabStop = false;
            this->pictureBox216->Tag = L"money";
            // 
            // pictureBox217
            // 
            this->pictureBox217->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox217->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox217.Image")));
            this->pictureBox217->Location = System::Drawing::Point(486, 332);
            this->pictureBox217->Name = L"pictureBox217";
            this->pictureBox217->Size = System::Drawing::Size(31, 31);
            this->pictureBox217->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox217->TabIndex = 219;
            this->pictureBox217->TabStop = false;
            this->pictureBox217->Tag = L"money";
            // 
            // pictureBox218
            // 
            this->pictureBox218->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox218->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox218.Image")));
            this->pictureBox218->Location = System::Drawing::Point(523, 363);
            this->pictureBox218->Name = L"pictureBox218";
            this->pictureBox218->Size = System::Drawing::Size(31, 31);
            this->pictureBox218->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox218->TabIndex = 224;
            this->pictureBox218->TabStop = false;
            this->pictureBox218->Tag = L"money";
            // 
            // pictureBox219
            // 
            this->pictureBox219->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox219->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox219.Image")));
            this->pictureBox219->Location = System::Drawing::Point(323, 243);
            this->pictureBox219->Name = L"pictureBox219";
            this->pictureBox219->Size = System::Drawing::Size(31, 31);
            this->pictureBox219->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox219->TabIndex = 225;
            this->pictureBox219->TabStop = false;
            this->pictureBox219->Tag = L"money";
            // 
            // pictureBox220
            // 
            this->pictureBox220->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox220->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox220.Image")));
            this->pictureBox220->Location = System::Drawing::Point(403, 243);
            this->pictureBox220->Name = L"pictureBox220";
            this->pictureBox220->Size = System::Drawing::Size(31, 31);
            this->pictureBox220->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox220->TabIndex = 226;
            this->pictureBox220->TabStop = false;
            this->pictureBox220->Tag = L"money";
            // 
            // pictureBox221
            // 
            this->pictureBox221->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox221->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox221.Image")));
            this->pictureBox221->Location = System::Drawing::Point(486, 203);
            this->pictureBox221->Name = L"pictureBox221";
            this->pictureBox221->Size = System::Drawing::Size(31, 31);
            this->pictureBox221->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox221->TabIndex = 232;
            this->pictureBox221->TabStop = false;
            this->pictureBox221->Tag = L"money";
            // 
            // pictureBox222
            // 
            this->pictureBox222->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox222->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox222.Image")));
            this->pictureBox222->Location = System::Drawing::Point(443, 203);
            this->pictureBox222->Name = L"pictureBox222";
            this->pictureBox222->Size = System::Drawing::Size(31, 31);
            this->pictureBox222->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox222->TabIndex = 231;
            this->pictureBox222->TabStop = false;
            this->pictureBox222->Tag = L"money";
            // 
            // pictureBox223
            // 
            this->pictureBox223->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox223->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox223.Image")));
            this->pictureBox223->Location = System::Drawing::Point(406, 203);
            this->pictureBox223->Name = L"pictureBox223";
            this->pictureBox223->Size = System::Drawing::Size(31, 31);
            this->pictureBox223->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox223->TabIndex = 230;
            this->pictureBox223->TabStop = false;
            this->pictureBox223->Tag = L"money";
            // 
            // pictureBox224
            // 
            this->pictureBox224->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox224->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox224.Image")));
            this->pictureBox224->Location = System::Drawing::Point(486, 166);
            this->pictureBox224->Name = L"pictureBox224";
            this->pictureBox224->Size = System::Drawing::Size(31, 31);
            this->pictureBox224->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox224->TabIndex = 229;
            this->pictureBox224->TabStop = false;
            this->pictureBox224->Tag = L"money";
            // 
            // pictureBox225
            // 
            this->pictureBox225->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox225->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox225.Image")));
            this->pictureBox225->Location = System::Drawing::Point(443, 166);
            this->pictureBox225->Name = L"pictureBox225";
            this->pictureBox225->Size = System::Drawing::Size(31, 31);
            this->pictureBox225->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox225->TabIndex = 228;
            this->pictureBox225->TabStop = false;
            this->pictureBox225->Tag = L"money";
            // 
            // pictureBox226
            // 
            this->pictureBox226->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox226->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox226.Image")));
            this->pictureBox226->Location = System::Drawing::Point(406, 166);
            this->pictureBox226->Name = L"pictureBox226";
            this->pictureBox226->Size = System::Drawing::Size(31, 31);
            this->pictureBox226->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox226->TabIndex = 227;
            this->pictureBox226->TabStop = false;
            this->pictureBox226->Tag = L"money";
            // 
            // pictureBox227
            // 
            this->pictureBox227->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox227->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox227.Image")));
            this->pictureBox227->Location = System::Drawing::Point(406, 286);
            this->pictureBox227->Name = L"pictureBox227";
            this->pictureBox227->Size = System::Drawing::Size(31, 31);
            this->pictureBox227->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox227->TabIndex = 237;
            this->pictureBox227->TabStop = false;
            this->pictureBox227->Tag = L"money";
            // 
            // pictureBox228
            // 
            this->pictureBox228->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox228->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox228.Image")));
            this->pictureBox228->Location = System::Drawing::Point(446, 287);
            this->pictureBox228->Name = L"pictureBox228";
            this->pictureBox228->Size = System::Drawing::Size(31, 31);
            this->pictureBox228->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox228->TabIndex = 236;
            this->pictureBox228->TabStop = false;
            this->pictureBox228->Tag = L"money";
            // 
            // pictureBox229
            // 
            this->pictureBox229->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox229->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox229.Image")));
            this->pictureBox229->Location = System::Drawing::Point(363, 287);
            this->pictureBox229->Name = L"pictureBox229";
            this->pictureBox229->Size = System::Drawing::Size(31, 31);
            this->pictureBox229->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox229->TabIndex = 235;
            this->pictureBox229->TabStop = false;
            this->pictureBox229->Tag = L"money";
            // 
            // pictureBox230
            // 
            this->pictureBox230->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox230->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox230.Image")));
            this->pictureBox230->Location = System::Drawing::Point(323, 287);
            this->pictureBox230->Name = L"pictureBox230";
            this->pictureBox230->Size = System::Drawing::Size(31, 31);
            this->pictureBox230->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox230->TabIndex = 234;
            this->pictureBox230->TabStop = false;
            this->pictureBox230->Tag = L"money";
            // 
            // pictureBox231
            // 
            this->pictureBox231->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox231->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox231.Image")));
            this->pictureBox231->Location = System::Drawing::Point(286, 287);
            this->pictureBox231->Name = L"pictureBox231";
            this->pictureBox231->Size = System::Drawing::Size(31, 31);
            this->pictureBox231->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox231->TabIndex = 233;
            this->pictureBox231->TabStop = false;
            this->pictureBox231->Tag = L"money";
            // 
            // pictureBox232
            // 
            this->pictureBox232->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox232->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox232.Image")));
            this->pictureBox232->Location = System::Drawing::Point(483, 287);
            this->pictureBox232->Name = L"pictureBox232";
            this->pictureBox232->Size = System::Drawing::Size(31, 31);
            this->pictureBox232->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox232->TabIndex = 238;
            this->pictureBox232->TabStop = false;
            this->pictureBox232->Tag = L"money";
            // 
            // pictureBox233
            // 
            this->pictureBox233->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox233->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox233.Image")));
            this->pictureBox233->Location = System::Drawing::Point(606, 202);
            this->pictureBox233->Name = L"pictureBox233";
            this->pictureBox233->Size = System::Drawing::Size(31, 31);
            this->pictureBox233->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox233->TabIndex = 239;
            this->pictureBox233->TabStop = false;
            this->pictureBox233->Tag = L"money";
            // 
            // pictureBox234
            // 
            this->pictureBox234->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox234->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox234.Image")));
            this->pictureBox234->Location = System::Drawing::Point(649, 202);
            this->pictureBox234->Name = L"pictureBox234";
            this->pictureBox234->Size = System::Drawing::Size(31, 31);
            this->pictureBox234->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox234->TabIndex = 240;
            this->pictureBox234->TabStop = false;
            this->pictureBox234->Tag = L"money";
            // 
            // pictureBox235
            // 
            this->pictureBox235->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox235->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox235.Image")));
            this->pictureBox235->Location = System::Drawing::Point(683, 563);
            this->pictureBox235->Name = L"pictureBox235";
            this->pictureBox235->Size = System::Drawing::Size(31, 31);
            this->pictureBox235->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox235->TabIndex = 241;
            this->pictureBox235->TabStop = false;
            this->pictureBox235->Tag = L"money";
            // 
            // win
            // 
            this->win->AutoSize = true;
            this->win->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->win->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->win->Location = System::Drawing::Point(200, 306);
            this->win->Name = L"win";
            this->win->Size = System::Drawing::Size(350, 91);
            this->win->TabIndex = 242;
            this->win->Text = L"You win!";
            this->win->Visible = false;
            // 
            // ghost2
            // 
            this->ghost2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ghost2.Image")));
            this->ghost2->Location = System::Drawing::Point(163, 680);
            this->ghost2->Name = L"ghost2";
            this->ghost2->Size = System::Drawing::Size(35, 35);
            this->ghost2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->ghost2->TabIndex = 243;
            this->ghost2->TabStop = false;
            this->ghost2->Tag = L"ghost";
            // 
            // ghost1
            // 
            this->ghost1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ghost1.Image")));
            this->ghost1->Location = System::Drawing::Point(565, 46);
            this->ghost1->Name = L"ghost1";
            this->ghost1->Size = System::Drawing::Size(35, 35);
            this->ghost1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->ghost1->TabIndex = 244;
            this->ghost1->TabStop = false;
            this->ghost1->Tag = L"ghost";
            // 
            // ghost3
            // 
            this->ghost3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ghost3.Image")));
            this->ghost3->Location = System::Drawing::Point(683, 761);
            this->ghost3->Name = L"ghost3";
            this->ghost3->Size = System::Drawing::Size(35, 35);
            this->ghost3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->ghost3->TabIndex = 245;
            this->ghost3->TabStop = false;
            this->ghost3->Tag = L"ghost";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(363, 324);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(31, 31);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 246;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Tag = L"money";
            // 
            // pictureBox34
            // 
            this->pictureBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
            this->pictureBox34->Location = System::Drawing::Point(406, 362);
            this->pictureBox34->Name = L"pictureBox34";
            this->pictureBox34->Size = System::Drawing::Size(31, 31);
            this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox34->TabIndex = 249;
            this->pictureBox34->TabStop = false;
            this->pictureBox34->Tag = L"money";
            // 
            // pictureBox35
            // 
            this->pictureBox35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
            this->pictureBox35->Location = System::Drawing::Point(363, 363);
            this->pictureBox35->Name = L"pictureBox35";
            this->pictureBox35->Size = System::Drawing::Size(31, 31);
            this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox35->TabIndex = 248;
            this->pictureBox35->TabStop = false;
            this->pictureBox35->Tag = L"money";
            // 
            // pictureBox40
            // 
            this->pictureBox40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
            this->pictureBox40->Location = System::Drawing::Point(323, 363);
            this->pictureBox40->Name = L"pictureBox40";
            this->pictureBox40->Size = System::Drawing::Size(31, 31);
            this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox40->TabIndex = 247;
            this->pictureBox40->TabStop = false;
            this->pictureBox40->Tag = L"money";
            // 
            // imageList1
            // 
            this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
            this->imageList1->TransparentColor = System::Drawing::Color::White;
            this->imageList1->Images->SetKeyName(0, L"right.png");
            this->imageList1->Images->SetKeyName(1, L"down.png");
            this->imageList1->Images->SetKeyName(2, L"up.png");
            this->imageList1->Images->SetKeyName(3, L"left.png");
            this->imageList1->Images->SetKeyName(4, L"cr.png");
            this->imageList1->Images->SetKeyName(5, L"pngwing.com (3).png");
            this->imageList1->Images->SetKeyName(6, L"pngwing.com (1).png");
            this->imageList1->Images->SetKeyName(7, L"pngwing.com (2).png");
            this->imageList1->Images->SetKeyName(8, L"pngwing.com.png");
            // 
            // menuStrip1
            // 
            this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->ìåíþToolStripMenuItem,
                    this->îáÈãðåToolStripMenuItem, this->âûõîäToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(760, 28);
            this->menuStrip1->TabIndex = 250;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // ìåíþToolStripMenuItem
            // 
            this->ìåíþToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->íîâàÿÈãðàToolStripMenuItem,
                    this->ïàóçàÏðîäîëæèòüToolStripMenuItem, this->íàñòðîéêèToolStripMenuItem
            });
            this->ìåíþToolStripMenuItem->Name = L"ìåíþToolStripMenuItem";
            this->ìåíþToolStripMenuItem->Size = System::Drawing::Size(65, 24);
            this->ìåíþToolStripMenuItem->Text = L"Ìåíþ";
            // 
            // íîâàÿÈãðàToolStripMenuItem
            // 
            this->íîâàÿÈãðàToolStripMenuItem->Name = L"íîâàÿÈãðàToolStripMenuItem";
            this->íîâàÿÈãðàToolStripMenuItem->Size = System::Drawing::Size(227, 26);
            this->íîâàÿÈãðàToolStripMenuItem->Text = L"Íîâàÿ èãðà";
            this->íîâàÿÈãðàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::íîâàÿÈãðàToolStripMenuItem_Click);
            // 
            // ïàóçàÏðîäîëæèòüToolStripMenuItem
            // 
            this->ïàóçàÏðîäîëæèòüToolStripMenuItem->Name = L"ïàóçàÏðîäîëæèòüToolStripMenuItem";
            this->ïàóçàÏðîäîëæèòüToolStripMenuItem->Size = System::Drawing::Size(227, 26);
            this->ïàóçàÏðîäîëæèòüToolStripMenuItem->Text = L"Ïàóçà/Ïðîäîëæèòü";
            this->ïàóçàÏðîäîëæèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::ïàóçàÏðîäîëæèòüToolStripMenuItem_Click);
            // 
            // íàñòðîéêèToolStripMenuItem
            // 
            this->íàñòðîéêèToolStripMenuItem->Name = L"íàñòðîéêèToolStripMenuItem";
            this->íàñòðîéêèToolStripMenuItem->Size = System::Drawing::Size(227, 26);
            this->íàñòðîéêèToolStripMenuItem->Text = L"Íàñòðîéêè";
            this->íàñòðîéêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::íàñòðîéêèToolStripMenuItem_Click);
            // 
            // îáÈãðåToolStripMenuItem
            // 
            this->îáÈãðåToolStripMenuItem->Name = L"îáÈãðåToolStripMenuItem";
            this->îáÈãðåToolStripMenuItem->Size = System::Drawing::Size(79, 24);
            this->îáÈãðåToolStripMenuItem->Text = L"Îá èãðå";
            this->îáÈãðåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::îáÈãðåToolStripMenuItem_Click);
            // 
            // âûõîäToolStripMenuItem
            // 
            this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
            this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
            this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
            this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::âûõîäToolStripMenuItem_Click);
            // 
            // Game
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Desktop;
            this->ClientSize = System::Drawing::Size(760, 831);
            this->Controls->Add(this->lose);
            this->Controls->Add(this->pictureBox34);
            this->Controls->Add(this->pictureBox35);
            this->Controls->Add(this->pictureBox40);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->ghost3);
            this->Controls->Add(this->ghost1);
            this->Controls->Add(this->ghost2);
            this->Controls->Add(this->win);
            this->Controls->Add(this->pictureBox235);
            this->Controls->Add(this->pictureBox234);
            this->Controls->Add(this->pictureBox233);
            this->Controls->Add(this->pictureBox232);
            this->Controls->Add(this->pictureBox227);
            this->Controls->Add(this->pictureBox228);
            this->Controls->Add(this->pictureBox229);
            this->Controls->Add(this->pictureBox230);
            this->Controls->Add(this->pictureBox231);
            this->Controls->Add(this->pictureBox221);
            this->Controls->Add(this->pictureBox222);
            this->Controls->Add(this->pictureBox223);
            this->Controls->Add(this->pictureBox224);
            this->Controls->Add(this->pictureBox225);
            this->Controls->Add(this->pictureBox226);
            this->Controls->Add(this->pictureBox220);
            this->Controls->Add(this->pictureBox219);
            this->Controls->Add(this->pictureBox218);
            this->Controls->Add(this->pictureBox213);
            this->Controls->Add(this->pictureBox214);
            this->Controls->Add(this->pictureBox215);
            this->Controls->Add(this->pictureBox216);
            this->Controls->Add(this->pictureBox217);
            this->Controls->Add(this->pictureBox205);
            this->Controls->Add(this->pictureBox206);
            this->Controls->Add(this->pictureBox207);
            this->Controls->Add(this->pictureBox208);
            this->Controls->Add(this->pictureBox200);
            this->Controls->Add(this->pictureBox201);
            this->Controls->Add(this->pictureBox202);
            this->Controls->Add(this->pictureBox203);
            this->Controls->Add(this->pictureBox204);
            this->Controls->Add(this->pictureBox199);
            this->Controls->Add(this->pictureBox191);
            this->Controls->Add(this->pictureBox192);
            this->Controls->Add(this->pictureBox193);
            this->Controls->Add(this->pictureBox194);
            this->Controls->Add(this->pictureBox195);
            this->Controls->Add(this->pictureBox196);
            this->Controls->Add(this->pictureBox197);
            this->Controls->Add(this->pictureBox198);
            this->Controls->Add(this->pictureBox186);
            this->Controls->Add(this->pictureBox187);
            this->Controls->Add(this->pictureBox188);
            this->Controls->Add(this->pictureBox189);
            this->Controls->Add(this->pictureBox190);
            this->Controls->Add(this->pictureBox178);
            this->Controls->Add(this->pictureBox180);
            this->Controls->Add(this->pictureBox181);
            this->Controls->Add(this->pictureBox182);
            this->Controls->Add(this->pictureBox183);
            this->Controls->Add(this->pictureBox184);
            this->Controls->Add(this->pictureBox185);
            this->Controls->Add(this->pictureBox177);
            this->Controls->Add(this->pictureBox172);
            this->Controls->Add(this->pictureBox173);
            this->Controls->Add(this->pictureBox174);
            this->Controls->Add(this->pictureBox175);
            this->Controls->Add(this->pictureBox176);
            this->Controls->Add(this->pictureBox179);
            this->Controls->Add(this->pictureBox167);
            this->Controls->Add(this->pictureBox168);
            this->Controls->Add(this->pictureBox169);
            this->Controls->Add(this->pictureBox170);
            this->Controls->Add(this->pictureBox171);
            this->Controls->Add(this->pictureBox166);
            this->Controls->Add(this->pictureBox165);
            this->Controls->Add(this->pictureBox163);
            this->Controls->Add(this->pictureBox164);
            this->Controls->Add(this->pictureBox161);
            this->Controls->Add(this->pictureBox162);
            this->Controls->Add(this->pictureBox159);
            this->Controls->Add(this->pictureBox160);
            this->Controls->Add(this->pictureBox158);
            this->Controls->Add(this->pictureBox157);
            this->Controls->Add(this->pictureBox154);
            this->Controls->Add(this->pictureBox155);
            this->Controls->Add(this->pictureBox156);
            this->Controls->Add(this->pictureBox149);
            this->Controls->Add(this->pictureBox150);
            this->Controls->Add(this->pictureBox151);
            this->Controls->Add(this->pictureBox152);
            this->Controls->Add(this->pictureBox153);
            this->Controls->Add(this->pictureBox148);
            this->Controls->Add(this->pictureBox145);
            this->Controls->Add(this->pictureBox146);
            this->Controls->Add(this->pictureBox147);
            this->Controls->Add(this->pictureBox144);
            this->Controls->Add(this->pictureBox140);
            this->Controls->Add(this->pictureBox141);
            this->Controls->Add(this->pictureBox142);
            this->Controls->Add(this->pictureBox143);
            this->Controls->Add(this->pictureBox139);
            this->Controls->Add(this->pictureBox132);
            this->Controls->Add(this->pictureBox133);
            this->Controls->Add(this->pictureBox134);
            this->Controls->Add(this->pictureBox135);
            this->Controls->Add(this->pictureBox136);
            this->Controls->Add(this->pictureBox137);
            this->Controls->Add(this->pictureBox138);
            this->Controls->Add(this->pictureBox131);
            this->Controls->Add(this->pictureBox130);
            this->Controls->Add(this->pictureBox129);
            this->Controls->Add(this->pictureBox127);
            this->Controls->Add(this->pictureBox128);
            this->Controls->Add(this->pictureBox125);
            this->Controls->Add(this->pictureBox126);
            this->Controls->Add(this->pictureBox123);
            this->Controls->Add(this->pictureBox124);
            this->Controls->Add(this->pictureBox115);
            this->Controls->Add(this->pictureBox116);
            this->Controls->Add(this->pictureBox117);
            this->Controls->Add(this->pictureBox118);
            this->Controls->Add(this->pictureBox119);
            this->Controls->Add(this->pictureBox120);
            this->Controls->Add(this->pictureBox121);
            this->Controls->Add(this->pictureBox122);
            this->Controls->Add(this->pictureBox107);
            this->Controls->Add(this->pictureBox108);
            this->Controls->Add(this->pictureBox109);
            this->Controls->Add(this->pictureBox110);
            this->Controls->Add(this->pictureBox111);
            this->Controls->Add(this->pictureBox112);
            this->Controls->Add(this->pictureBox113);
            this->Controls->Add(this->pictureBox114);
            this->Controls->Add(this->pictureBox105);
            this->Controls->Add(this->pictureBox106);
            this->Controls->Add(this->pictureBox102);
            this->Controls->Add(this->pictureBox103);
            this->Controls->Add(this->pictureBox104);
            this->Controls->Add(this->pictureBox101);
            this->Controls->Add(this->pictureBox98);
            this->Controls->Add(this->pictureBox99);
            this->Controls->Add(this->pictureBox100);
            this->Controls->Add(this->pictureBox95);
            this->Controls->Add(this->pictureBox96);
            this->Controls->Add(this->pictureBox97);
            this->Controls->Add(this->pictureBox94);
            this->Controls->Add(this->pictureBox86);
            this->Controls->Add(this->pictureBox87);
            this->Controls->Add(this->pictureBox88);
            this->Controls->Add(this->pictureBox89);
            this->Controls->Add(this->pictureBox90);
            this->Controls->Add(this->pictureBox91);
            this->Controls->Add(this->pictureBox92);
            this->Controls->Add(this->pictureBox93);
            this->Controls->Add(this->pictureBox83);
            this->Controls->Add(this->pictureBox84);
            this->Controls->Add(this->pictureBox85);
            this->Controls->Add(this->pictureBox80);
            this->Controls->Add(this->pictureBox81);
            this->Controls->Add(this->pictureBox82);
            this->Controls->Add(this->pictureBox79);
            this->Controls->Add(this->pictureBox76);
            this->Controls->Add(this->pictureBox77);
            this->Controls->Add(this->pictureBox78);
            this->Controls->Add(this->pictureBox73);
            this->Controls->Add(this->pictureBox74);
            this->Controls->Add(this->pictureBox75);
            this->Controls->Add(this->pictureBox72);
            this->Controls->Add(this->pictureBox71);
            this->Controls->Add(this->pictureBox70);
            this->Controls->Add(this->pictureBox69);
            this->Controls->Add(this->pictureBox68);
            this->Controls->Add(this->pictureBox61);
            this->Controls->Add(this->pictureBox62);
            this->Controls->Add(this->pictureBox63);
            this->Controls->Add(this->pictureBox64);
            this->Controls->Add(this->pictureBox65);
            this->Controls->Add(this->pictureBox66);
            this->Controls->Add(this->pictureBox67);
            this->Controls->Add(this->pictureBox57);
            this->Controls->Add(this->pictureBox58);
            this->Controls->Add(this->pictureBox59);
            this->Controls->Add(this->pictureBox60);
            this->Controls->Add(this->pictureBox56);
            this->Controls->Add(this->pictureBox55);
            this->Controls->Add(this->pictureBox54);
            this->Controls->Add(this->pictureBox53);
            this->Controls->Add(this->txtScore);
            this->Controls->Add(this->pictureBox52);
            this->Controls->Add(this->pictureBox51);
            this->Controls->Add(this->pictureBox50);
            this->Controls->Add(this->pictureBox49);
            this->Controls->Add(this->pictureBox48);
            this->Controls->Add(this->pictureBox47);
            this->Controls->Add(this->pictureBox46);
            this->Controls->Add(this->pictureBox45);
            this->Controls->Add(this->pictureBox44);
            this->Controls->Add(this->pictureBox43);
            this->Controls->Add(this->pictureBox42);
            this->Controls->Add(this->wall2);
            this->Controls->Add(this->wall3);
            this->Controls->Add(this->pictureBox39);
            this->Controls->Add(this->pictureBox38);
            this->Controls->Add(this->pictureBox36);
            this->Controls->Add(this->pictureBox37);
            this->Controls->Add(this->wall4);
            this->Controls->Add(this->wall5);
            this->Controls->Add(this->pictureBox33);
            this->Controls->Add(this->pictureBox32);
            this->Controls->Add(this->pictureBox31);
            this->Controls->Add(this->pictureBox30);
            this->Controls->Add(this->pictureBox29);
            this->Controls->Add(this->pictureBox28);
            this->Controls->Add(this->pictureBox27);
            this->Controls->Add(this->pictureBox26);
            this->Controls->Add(this->pictureBox25);
            this->Controls->Add(this->pictureBox24);
            this->Controls->Add(this->pictureBox23);
            this->Controls->Add(this->pictureBox22);
            this->Controls->Add(this->pictureBox21);
            this->Controls->Add(this->pictureBox20);
            this->Controls->Add(this->pictureBox19);
            this->Controls->Add(this->pictureBox18);
            this->Controls->Add(this->pictureBox17);
            this->Controls->Add(this->pictureBox16);
            this->Controls->Add(this->pictureBox15);
            this->Controls->Add(this->pictureBox14);
            this->Controls->Add(this->pictureBox13);
            this->Controls->Add(this->pictureBox12);
            this->Controls->Add(this->pictureBox11);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->pictureBox10);
            this->Controls->Add(this->pictureBox8);
            this->Controls->Add(this->pictureBox7);
            this->Controls->Add(this->pictureBox6);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pacman);
            this->Controls->Add(this->menuStrip1);
            this->Controls->Add(this->wall1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MainMenuStrip = this->menuStrip1;
            this->MaximizeBox = false;
            this->Name = L"Game";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Pac-man";
            this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::keyisdown);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wall2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pacman))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox120))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox121))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox122))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox123))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox124))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox125))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox126))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox127))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox128))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox129))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox130))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox131))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox132))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox133))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox134))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox135))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox136))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox137))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox138))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox139))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox140))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox141))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox142))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox143))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox144))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox145))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox146))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox147))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox148))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox149))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox150))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox151))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox152))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox153))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox154))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox155))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox156))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox157))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox158))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox159))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox160))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox161))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox162))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox163))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox164))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox165))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox166))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox167))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox168))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox169))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox170))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox171))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox172))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox173))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox174))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox175))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox176))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox179))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox177))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox178))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox180))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox181))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox182))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox183))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox184))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox185))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox186))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox187))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox188))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox189))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox190))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox192))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox193))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox194))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox195))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox196))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox197))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox198))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox191))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox199))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox200))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox201))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox202))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox203))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox204))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox205))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox206))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox207))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox208))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox213))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox214))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox215))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox216))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox217))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox218))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox219))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox220))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox221))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox222))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox223))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox224))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox225))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox226))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox227))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox228))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox229))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox230))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox231))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox232))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox233))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox234))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox235))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ghost2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ghost1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ghost3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        public: static int playerSpeed, ghost1Speed, ghost2Speed, ghost3Speed;
        public: static System::Windows::Forms::PictureBox^ ghost2;
        public: static  System::Windows::Forms::PictureBox^ ghost1;
        public: static System::Windows::Forms::PictureBox^ ghost3;
        public: static System::Windows::Forms::ImageList^ imageList1;
        bool goup, godown, goleft, goright = true, pause = false, open = true;
        int score, isGameOver;

    private: System::Void keyisdown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e); 
    private: System::Void mainGameTimer(System::Object^ sender, System::EventArgs^ e);   
    private: System::Void resetGame();  
    private: System::Void gameOver();
    private: System::Void íîâàÿÈãðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void ïàóçàÏðîäîëæèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void íàñòðîéêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); 
    private: System::Void îáÈãðåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

};
}
