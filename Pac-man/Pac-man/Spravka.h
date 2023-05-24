#pragma once

namespace Pacman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// —водка дл€ Spravka
	/// </summary>
	public ref class Spravka : public System::Windows::Forms::Form
	{
	public:
		Spravka(void);
		

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Spravka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textSpr;
	protected:

	private: System::Windows::Forms::Label^ label2;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Spravka::typeid));
			this->textSpr = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textSpr
			// 
			this->textSpr->AutoSize = true;
			this->textSpr->ForeColor = System::Drawing::Color::Yellow;
			this->textSpr->Location = System::Drawing::Point(39, 72);
			this->textSpr->Name = L"textSpr";
			this->textSpr->Size = System::Drawing::Size(0, 16);
			this->textSpr->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(182, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"—правка";
			// 
			// Spravka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(503, 491);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textSpr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Spravka";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"—правка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	};
}
