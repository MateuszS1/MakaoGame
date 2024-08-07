#pragma once

namespace MakaoGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EndScreen
	/// </summary>
	public ref class EndScreen : public System::Windows::Forms::Form
	{
	public:
		EndScreen(bool result)
		{
			InitializeComponent();

			if (result)
				result_label->Text = "YOU WON!";
			else
				result_label->Text = "YOU LOST!";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EndScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ play_again_button;

	private: System::Windows::Forms::Button^ exit_button;
	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->play_again_button = (gcnew System::Windows::Forms::Button());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result_label
			// 
			this->result_label->AutoSize = true;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_label->ForeColor = System::Drawing::Color::Red;
			this->result_label->Location = System::Drawing::Point(165, 145);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(399, 76);
			this->result_label->TabIndex = 0;
			this->result_label->Text = L"YOU LOST!";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// play_again_button
			// 
			this->play_again_button->Location = System::Drawing::Point(164, 312);
			this->play_again_button->Name = L"play_again_button";
			this->play_again_button->Size = System::Drawing::Size(152, 32);
			this->play_again_button->TabIndex = 1;
			this->play_again_button->Text = L"PLAY AGAIN";
			this->play_again_button->UseVisualStyleBackColor = true;
			this->play_again_button->Click += gcnew System::EventHandler(this, &EndScreen::play_again_button_Click);
			// 
			// exit_button
			// 
			this->exit_button->Location = System::Drawing::Point(399, 312);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(152, 32);
			this->exit_button->TabIndex = 2;
			this->exit_button->Text = L"EXIT";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->Click += gcnew System::EventHandler(this, &EndScreen::exit_button_Click);
			// 
			// EndScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(716, 443);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->play_again_button);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EndScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"EndScreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void play_again_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
