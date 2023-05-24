#pragma once

namespace Pacman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Rating
	/// </summary>
	public ref class Rating : public System::Windows::Forms::Form
	{
	public:
		Rating(void);
	

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Rating()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ ������������;
	private: System::Windows::Forms::Label^ textRating;

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
			System::Windows::Forms::Label^ label2;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rating::typeid));
			this->������������ = (gcnew System::Windows::Forms::Button());
			this->textRating = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->ForeColor = System::Drawing::Color::Yellow;
			label2->Location = System::Drawing::Point(197, 39);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(381, 78);
			label2->TabIndex = 3;
			label2->Text = L"������� �������";
			label2->UseCompatibleTextRendering = true;
			// 
			// ������������
			// 
			this->������������->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->������������->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->������������->ForeColor = System::Drawing::Color::Yellow;
			this->������������->Location = System::Drawing::Point(236, 700);
			this->������������->Name = L"������������";
			this->������������->Size = System::Drawing::Size(302, 66);
			this->������������->TabIndex = 6;
			this->������������->Text = L"� ������� ����";
			this->������������->UseVisualStyleBackColor = true;
			this->������������->Click += gcnew System::EventHandler(this, &Rating::������������_Click);
			// 
			// textRating
			// 
			this->textRating->AutoSize = true;
			this->textRating->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textRating->ForeColor = System::Drawing::Color::Yellow;
			this->textRating->Location = System::Drawing::Point(166, 136);
			this->textRating->Name = L"textRating";
			this->textRating->Size = System::Drawing::Size(0, 52);
			this->textRating->TabIndex = 5;
			// 
			// Rating
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(760, 831);
			this->Controls->Add(this->������������);
			this->Controls->Add(this->textRating);
			this->Controls->Add(label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Rating";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pac-man";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Pacman::Rating::resultsPlayers();
	private: System::Void ������������_Click(System::Object^ sender, System::EventArgs^ e);
	
};
}
