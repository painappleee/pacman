#pragma once
#include "Game.h"

namespace Pacman {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainMenu
	/// </summary>
	/// 
	///


	public ref class MainMenu : public System::Windows::Forms::Form
	{
	
	public:
		MainMenu(void);

			
	
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ errorreg;
	private: System::Windows::Forms::Label^ errorpassword;
	private: System::Windows::Forms::Label^ errorlogin;
	private: System::Windows::Forms::Button^ �����;
	private: System::Windows::Forms::Button^ �����;
	private: System::Windows::Forms::Button^ �������;
	private: System::Windows::Forms::Button^ ������;
	private: System::Windows::Forms::Button^ �������;
	private: System::Windows::Forms::Button^ �����������;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainMenu::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->����� = (gcnew System::Windows::Forms::Button());
			this->������� = (gcnew System::Windows::Forms::Button());
			this->������ = (gcnew System::Windows::Forms::Button());
			this->������� = (gcnew System::Windows::Forms::Button());
			this->����� = (gcnew System::Windows::Forms::Button());
			this->����������� = (gcnew System::Windows::Forms::Button());
			this->errorreg = (gcnew System::Windows::Forms::Label());
			this->errorpassword = (gcnew System::Windows::Forms::Label());
			this->errorlogin = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 496);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(717, 323);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(180, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 105);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pac-man";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->maskedTextBox1->Location = System::Drawing::Point(206, 181);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(313, 22);
			this->maskedTextBox1->TabIndex = 3;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->maskedTextBox2->Location = System::Drawing::Point(206, 228);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(313, 22);
			this->maskedTextBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(117, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"�����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(104, 228);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"������";
			// 
			// �����
			// 
			this->�����->BackColor = System::Drawing::SystemColors::Desktop;
			this->�����->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->�����->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�����->ForeColor = System::Drawing::Color::White;
			this->�����->Location = System::Drawing::Point(206, 275);
			this->�����->Name = L"�����";
			this->�����->Size = System::Drawing::Size(99, 43);
			this->�����->TabIndex = 7;
			this->�����->Text = L"�����";
			this->�����->UseVisualStyleBackColor = false;
			this->�����->Click += gcnew System::EventHandler(this, &MainMenu::�����_Click);
			// 
			// �������
			// 
			this->�������->BackColor = System::Drawing::SystemColors::Desktop;
			this->�������->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->�������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�������->ForeColor = System::Drawing::Color::White;
			this->�������->Location = System::Drawing::Point(12, 13);
			this->�������->Name = L"�������";
			this->�������->Size = System::Drawing::Size(138, 40);
			this->�������->TabIndex = 10;
			this->�������->Text = L"�������";
			this->�������->UseVisualStyleBackColor = false;
			this->�������->Click += gcnew System::EventHandler(this, &MainMenu::�������_Click);
			// 
			// ������
			// 
			this->������->BackColor = System::Drawing::SystemColors::Desktop;
			this->������->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->������->ForeColor = System::Drawing::Color::White;
			this->������->Location = System::Drawing::Point(610, 12);
			this->������->Name = L"������";
			this->������->Size = System::Drawing::Size(138, 42);
			this->������->TabIndex = 11;
			this->������->Text = L"�� ����";
			this->������->UseVisualStyleBackColor = false;
			this->������->Click += gcnew System::EventHandler(this, &MainMenu::������_Click);
			// 
			// �������
			// 
			this->�������->BackColor = System::Drawing::SystemColors::Desktop;
			this->�������->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->�������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�������->ForeColor = System::Drawing::Color::White;
			this->�������->Location = System::Drawing::Point(287, 365);
			this->�������->Name = L"�������";
			this->�������->Size = System::Drawing::Size(138, 29);
			this->�������->TabIndex = 12;
			this->�������->Text = L"�������";
			this->�������->UseVisualStyleBackColor = false;
			this->�������->Click += gcnew System::EventHandler(this, &MainMenu::�������_Click);
			// 
			// �����
			// 
			this->�����->BackColor = System::Drawing::SystemColors::Desktop;
			this->�����->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->�����->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�����->ForeColor = System::Drawing::Color::White;
			this->�����->Location = System::Drawing::Point(307, 426);
			this->�����->Name = L"�����";
			this->�����->Size = System::Drawing::Size(99, 40);
			this->�����->TabIndex = 13;
			this->�����->Text = L"�����";
			this->�����->UseVisualStyleBackColor = false;
			this->�����->Click += gcnew System::EventHandler(this, &MainMenu::�����_Click);
			// 
			// �����������
			// 
			this->�����������->BackColor = System::Drawing::SystemColors::Desktop;
			this->�����������->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->�����������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�����������->ForeColor = System::Drawing::Color::White;
			this->�����������->Location = System::Drawing::Point(344, 275);
			this->�����������->Name = L"�����������";
			this->�����������->Size = System::Drawing::Size(175, 43);
			this->�����������->TabIndex = 14;
			this->�����������->Text = L"�����������";
			this->�����������->UseVisualStyleBackColor = false;
			this->�����������->Click += gcnew System::EventHandler(this, &MainMenu::�����������_Click);
			// 
			// errorreg
			// 
			this->errorreg->AutoSize = true;
			this->errorreg->BackColor = System::Drawing::SystemColors::Desktop;
			this->errorreg->ForeColor = System::Drawing::Color::Yellow;
			this->errorreg->Location = System::Drawing::Point(530, 184);
			this->errorreg->Name = L"errorreg";
			this->errorreg->Size = System::Drawing::Size(210, 16);
			this->errorreg->TabIndex = 15;
			this->errorreg->Text = L"������������ ��� ����������";
			this->errorreg->Visible = false;
			// 
			// errorpassword
			// 
			this->errorpassword->AutoSize = true;
			this->errorpassword->BackColor = System::Drawing::SystemColors::Desktop;
			this->errorpassword->ForeColor = System::Drawing::Color::Yellow;
			this->errorpassword->Location = System::Drawing::Point(530, 234);
			this->errorpassword->Name = L"errorpassword";
			this->errorpassword->Size = System::Drawing::Size(124, 16);
			this->errorpassword->TabIndex = 16;
			this->errorpassword->Text = L"�������� ������";
			this->errorpassword->Visible = false;
			// 
			// errorlogin
			// 
			this->errorlogin->AutoSize = true;
			this->errorlogin->BackColor = System::Drawing::SystemColors::Desktop;
			this->errorlogin->ForeColor = System::Drawing::Color::Yellow;
			this->errorlogin->Location = System::Drawing::Point(530, 184);
			this->errorlogin->Name = L"errorlogin";
			this->errorlogin->Size = System::Drawing::Size(172, 16);
			this->errorlogin->TabIndex = 17;
			this->errorlogin->Text = L"������������ �� ������";
			this->errorlogin->Visible = false;
			// 
			// MainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(760, 831);
			this->Controls->Add(this->errorlogin);
			this->Controls->Add(this->errorpassword);
			this->Controls->Add(this->errorreg);
			this->Controls->Add(this->�����������);
			this->Controls->Add(this->�����);
			this->Controls->Add(this->�������);
			this->Controls->Add(this->������);
			this->Controls->Add(this->�������);
			this->Controls->Add(this->�����);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pac-man";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:static int size = 0;
		public:static int tec = 0;

		public: ref struct Player
		{
			String^ login;
			String^ password;
			int bestResult;

		};

		public: static array<Player^>^ players = gcnew array<Player^>(100);

		String^ fileName = "auto.bin";


private: System::Void �����_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void ������_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������_Click(System::Object^ sender, System::EventArgs^ e);
};
}
