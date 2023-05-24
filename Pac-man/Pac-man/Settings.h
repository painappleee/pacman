
#pragma once

namespace Pacman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings();
	

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ лёгкий;
	private: System::Windows::Forms::Button^ средний;
	private: System::Windows::Forms::Button^ сложный;
	private: System::Windows::Forms::Button^ применить;
	private: System::Windows::Forms::Button^ ghost1green;
	private: System::Windows::Forms::Button^ ghost1yellow;
	private: System::Windows::Forms::Button^ ghost1blue;
	private: System::Windows::Forms::Button^ ghost1red;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ ghost2green;
	private: System::Windows::Forms::Button^ ghost2yellow;
	private: System::Windows::Forms::Button^ ghost2blue;
	private: System::Windows::Forms::Button^ ghost2red;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ghost3green;
	private: System::Windows::Forms::Button^ ghost3yellow;
	private: System::Windows::Forms::Button^ ghost3blue;
	private: System::Windows::Forms::Button^ ghost3red;
	private: System::Windows::Forms::Label^ label4;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->лёгкий = (gcnew System::Windows::Forms::Button());
			this->средний = (gcnew System::Windows::Forms::Button());
			this->сложный = (gcnew System::Windows::Forms::Button());
			this->применить = (gcnew System::Windows::Forms::Button());
			this->ghost1green = (gcnew System::Windows::Forms::Button());
			this->ghost1yellow = (gcnew System::Windows::Forms::Button());
			this->ghost1blue = (gcnew System::Windows::Forms::Button());
			this->ghost1red = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ghost2green = (gcnew System::Windows::Forms::Button());
			this->ghost2yellow = (gcnew System::Windows::Forms::Button());
			this->ghost2blue = (gcnew System::Windows::Forms::Button());
			this->ghost2red = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ghost3green = (gcnew System::Windows::Forms::Button());
			this->ghost3yellow = (gcnew System::Windows::Forms::Button());
			this->ghost3blue = (gcnew System::Windows::Forms::Button());
			this->ghost3red = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(166, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Уровень сложности";
			// 
			// лёгкий
			// 
			this->лёгкий->BackColor = System::Drawing::Color::Black;
			this->лёгкий->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->лёгкий->ForeColor = System::Drawing::Color::Yellow;
			this->лёгкий->Location = System::Drawing::Point(37, 247);
			this->лёгкий->Name = L"лёгкий";
			this->лёгкий->Size = System::Drawing::Size(102, 32);
			this->лёгкий->TabIndex = 14;
			this->лёгкий->Text = L"Лёгкий";
			this->лёгкий->UseVisualStyleBackColor = false;
			this->лёгкий->Click += gcnew System::EventHandler(this, &Settings::лёгкий_Click);
			// 
			// средний
			// 
			this->средний->BackColor = System::Drawing::Color::Black;
			this->средний->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->средний->ForeColor = System::Drawing::Color::Yellow;
			this->средний->Location = System::Drawing::Point(191, 247);
			this->средний->Name = L"средний";
			this->средний->Size = System::Drawing::Size(126, 32);
			this->средний->TabIndex = 15;
			this->средний->Text = L"Средний";
			this->средний->UseVisualStyleBackColor = false;
			this->средний->Click += gcnew System::EventHandler(this, &Settings::средний_Click);
			// 
			// сложный
			// 
			this->сложный->BackColor = System::Drawing::Color::Black;
			this->сложный->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->сложный->ForeColor = System::Drawing::Color::Yellow;
			this->сложный->Location = System::Drawing::Point(360, 247);
			this->сложный->Name = L"сложный";
			this->сложный->Size = System::Drawing::Size(126, 32);
			this->сложный->TabIndex = 16;
			this->сложный->Text = L"Сложный";
			this->сложный->UseVisualStyleBackColor = false;
			this->сложный->Click += gcnew System::EventHandler(this, &Settings::сложный_Click);
			// 
			// применить
			// 
			this->применить->BackColor = System::Drawing::Color::Black;
			this->применить->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->применить->ForeColor = System::Drawing::Color::Yellow;
			this->применить->Location = System::Drawing::Point(191, 334);
			this->применить->Name = L"применить";
			this->применить->Size = System::Drawing::Size(126, 32);
			this->применить->TabIndex = 17;
			this->применить->Text = L"Применить";
			this->применить->UseVisualStyleBackColor = false;
			this->применить->Click += gcnew System::EventHandler(this, &Settings::применить_Click);
			// 
			// ghost1green
			// 
			this->ghost1green->BackColor = System::Drawing::Color::LimeGreen;
			this->ghost1green->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost1green->ForeColor = System::Drawing::Color::Yellow;
			this->ghost1green->Location = System::Drawing::Point(381, 27);
			this->ghost1green->Name = L"ghost1green";
			this->ghost1green->Size = System::Drawing::Size(31, 27);
			this->ghost1green->TabIndex = 23;
			this->ghost1green->UseVisualStyleBackColor = false;
			this->ghost1green->Click += gcnew System::EventHandler(this, &Settings::ghost1green_Click);
			// 
			// ghost1yellow
			// 
			this->ghost1yellow->BackColor = System::Drawing::Color::Yellow;
			this->ghost1yellow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost1yellow->ForeColor = System::Drawing::Color::Yellow;
			this->ghost1yellow->Location = System::Drawing::Point(428, 27);
			this->ghost1yellow->Name = L"ghost1yellow";
			this->ghost1yellow->Size = System::Drawing::Size(31, 27);
			this->ghost1yellow->TabIndex = 22;
			this->ghost1yellow->UseVisualStyleBackColor = false;
			this->ghost1yellow->Click += gcnew System::EventHandler(this, &Settings::ghost1yellow_Click);
			// 
			// ghost1blue
			// 
			this->ghost1blue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ghost1blue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost1blue->ForeColor = System::Drawing::Color::Yellow;
			this->ghost1blue->Location = System::Drawing::Point(286, 27);
			this->ghost1blue->Name = L"ghost1blue";
			this->ghost1blue->Size = System::Drawing::Size(31, 27);
			this->ghost1blue->TabIndex = 21;
			this->ghost1blue->UseVisualStyleBackColor = false;
			this->ghost1blue->Click += gcnew System::EventHandler(this, &Settings::ghost1blue_Click);
			// 
			// ghost1red
			// 
			this->ghost1red->BackColor = System::Drawing::Color::Red;
			this->ghost1red->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost1red->ForeColor = System::Drawing::Color::Yellow;
			this->ghost1red->Location = System::Drawing::Point(333, 27);
			this->ghost1red->Name = L"ghost1red";
			this->ghost1red->Size = System::Drawing::Size(31, 27);
			this->ghost1red->TabIndex = 20;
			this->ghost1red->UseVisualStyleBackColor = false;
			this->ghost1red->Click += gcnew System::EventHandler(this, &Settings::ghost1red_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(61, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Цвет 1-го призрака:";
			// 
			// ghost2green
			// 
			this->ghost2green->BackColor = System::Drawing::Color::LimeGreen;
			this->ghost2green->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost2green->ForeColor = System::Drawing::Color::Yellow;
			this->ghost2green->Location = System::Drawing::Point(381, 80);
			this->ghost2green->Name = L"ghost2green";
			this->ghost2green->Size = System::Drawing::Size(31, 27);
			this->ghost2green->TabIndex = 28;
			this->ghost2green->UseVisualStyleBackColor = false;
			this->ghost2green->Click += gcnew System::EventHandler(this, &Settings::ghost2green_Click);
			// 
			// ghost2yellow
			// 
			this->ghost2yellow->BackColor = System::Drawing::Color::Yellow;
			this->ghost2yellow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost2yellow->ForeColor = System::Drawing::Color::Yellow;
			this->ghost2yellow->Location = System::Drawing::Point(428, 80);
			this->ghost2yellow->Name = L"ghost2yellow";
			this->ghost2yellow->Size = System::Drawing::Size(31, 27);
			this->ghost2yellow->TabIndex = 27;
			this->ghost2yellow->UseVisualStyleBackColor = false;
			this->ghost2yellow->Click += gcnew System::EventHandler(this, &Settings::ghost2yellow_Click);
			// 
			// ghost2blue
			// 
			this->ghost2blue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ghost2blue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost2blue->ForeColor = System::Drawing::Color::Yellow;
			this->ghost2blue->Location = System::Drawing::Point(286, 80);
			this->ghost2blue->Name = L"ghost2blue";
			this->ghost2blue->Size = System::Drawing::Size(31, 27);
			this->ghost2blue->TabIndex = 26;
			this->ghost2blue->UseVisualStyleBackColor = false;
			this->ghost2blue->Click += gcnew System::EventHandler(this, &Settings::ghost2blue_Click);
			// 
			// ghost2red
			// 
			this->ghost2red->BackColor = System::Drawing::Color::Red;
			this->ghost2red->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost2red->ForeColor = System::Drawing::Color::Yellow;
			this->ghost2red->Location = System::Drawing::Point(333, 80);
			this->ghost2red->Name = L"ghost2red";
			this->ghost2red->Size = System::Drawing::Size(31, 27);
			this->ghost2red->TabIndex = 25;
			this->ghost2red->UseVisualStyleBackColor = false;
			this->ghost2red->Click += gcnew System::EventHandler(this, &Settings::ghost2red_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(61, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 20);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Цвет 2-го призрака:";
			// 
			// ghost3green
			// 
			this->ghost3green->BackColor = System::Drawing::Color::LimeGreen;
			this->ghost3green->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost3green->ForeColor = System::Drawing::Color::Yellow;
			this->ghost3green->Location = System::Drawing::Point(381, 138);
			this->ghost3green->Name = L"ghost3green";
			this->ghost3green->Size = System::Drawing::Size(31, 27);
			this->ghost3green->TabIndex = 33;
			this->ghost3green->UseVisualStyleBackColor = false;
			this->ghost3green->Click += gcnew System::EventHandler(this, &Settings::ghost3green_Click);
			// 
			// ghost3yellow
			// 
			this->ghost3yellow->BackColor = System::Drawing::Color::Yellow;
			this->ghost3yellow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost3yellow->ForeColor = System::Drawing::Color::Yellow;
			this->ghost3yellow->Location = System::Drawing::Point(428, 138);
			this->ghost3yellow->Name = L"ghost3yellow";
			this->ghost3yellow->Size = System::Drawing::Size(31, 27);
			this->ghost3yellow->TabIndex = 32;
			this->ghost3yellow->UseVisualStyleBackColor = false;
			this->ghost3yellow->Click += gcnew System::EventHandler(this, &Settings::ghost3yellow_Click);
			// 
			// ghost3blue
			// 
			this->ghost3blue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ghost3blue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost3blue->ForeColor = System::Drawing::Color::Yellow;
			this->ghost3blue->Location = System::Drawing::Point(286, 138);
			this->ghost3blue->Name = L"ghost3blue";
			this->ghost3blue->Size = System::Drawing::Size(31, 27);
			this->ghost3blue->TabIndex = 31;
			this->ghost3blue->UseVisualStyleBackColor = false;
			this->ghost3blue->Click += gcnew System::EventHandler(this, &Settings::ghost3blue_Click);
			// 
			// ghost3red
			// 
			this->ghost3red->BackColor = System::Drawing::Color::Red;
			this->ghost3red->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ghost3red->ForeColor = System::Drawing::Color::Yellow;
			this->ghost3red->Location = System::Drawing::Point(333, 138);
			this->ghost3red->Name = L"ghost3red";
			this->ghost3red->Size = System::Drawing::Size(31, 27);
			this->ghost3red->TabIndex = 30;
			this->ghost3red->UseVisualStyleBackColor = false;
			this->ghost3red->Click += gcnew System::EventHandler(this, &Settings::ghost3red_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(61, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 20);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Цвет 3-го призрака:";
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(510, 401);
			this->Controls->Add(this->ghost3green);
			this->Controls->Add(this->ghost3yellow);
			this->Controls->Add(this->ghost3blue);
			this->Controls->Add(this->ghost3red);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ghost2green);
			this->Controls->Add(this->ghost2yellow);
			this->Controls->Add(this->ghost2blue);
			this->Controls->Add(this->ghost2red);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ghost1green);
			this->Controls->Add(this->ghost1yellow);
			this->Controls->Add(this->ghost1blue);
			this->Controls->Add(this->ghost1red);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->применить);
			this->Controls->Add(this->сложный);
			this->Controls->Add(this->средний);
			this->Controls->Add(this->лёгкий);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Settings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Настройки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		public: static int setghostsspeed = 5 , setplayerspeed = 4;
		public: static int ghost1color;
		public: static int ghost2color; 
		public: static int ghost3color;

private: System::Void ghost1blue_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost1red_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost1green_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost1yellow_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost2blue_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost2red_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost2green_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost2yellow_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost3blue_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost3red_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost3green_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ghost3yellow_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void лёгкий_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void средний_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сложный_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void применить_Click(System::Object^ sender, System::EventArgs^ e);
};
}
