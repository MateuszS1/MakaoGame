#pragma once
#include <math.h>

namespace MakaoGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartScreen
	/// </summary>
	public ref class StartScreen : public System::Windows::Forms::Form
	{
	public:
		StartScreen(void)
		{
			InitializeComponent();

			advice_label->Hide();
			easy_mode_button->Hide();
			medium_mode_button->Hide();
			hard_mode_button->Hide();
			depth_numericUpDown->Hide();
			begin_button->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ easy_mode_button;
	protected:

	private: System::Windows::Forms::Button^ exit_main_button;
	protected:


	private: System::Windows::Forms::Label^ start_title;
	private: System::Windows::Forms::Button^ hard_mode_button;
	private: System::Windows::Forms::Button^ medium_mode_button;
	private: System::Windows::Forms::Label^ advice_label;

	private: System::Windows::Forms::Button^ start_button;
	private: System::Windows::Forms::Button^ info_button;


	private: System::Windows::Forms::Button^ begin_button;
	private: System::Windows::Forms::NumericUpDown^ depth_numericUpDown;



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
			this->easy_mode_button = (gcnew System::Windows::Forms::Button());
			this->exit_main_button = (gcnew System::Windows::Forms::Button());
			this->start_title = (gcnew System::Windows::Forms::Label());
			this->hard_mode_button = (gcnew System::Windows::Forms::Button());
			this->medium_mode_button = (gcnew System::Windows::Forms::Button());
			this->advice_label = (gcnew System::Windows::Forms::Label());
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->info_button = (gcnew System::Windows::Forms::Button());
			this->begin_button = (gcnew System::Windows::Forms::Button());
			this->depth_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depth_numericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// easy_mode_button
			// 
			this->easy_mode_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->easy_mode_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->easy_mode_button->Location = System::Drawing::Point(13, 191);
			this->easy_mode_button->Margin = System::Windows::Forms::Padding(2);
			this->easy_mode_button->Name = L"easy_mode_button";
			this->easy_mode_button->Size = System::Drawing::Size(152, 80);
			this->easy_mode_button->TabIndex = 0;
			this->easy_mode_button->Text = L"EASY";
			this->easy_mode_button->UseVisualStyleBackColor = true;
			this->easy_mode_button->Click += gcnew System::EventHandler(this, &StartScreen::easy_mode_button_Click);
			// 
			// exit_main_button
			// 
			this->exit_main_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->exit_main_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->exit_main_button->Location = System::Drawing::Point(157, 311);
			this->exit_main_button->Margin = System::Windows::Forms::Padding(2);
			this->exit_main_button->Name = L"exit_main_button";
			this->exit_main_button->Size = System::Drawing::Size(188, 80);
			this->exit_main_button->TabIndex = 1;
			this->exit_main_button->Text = L"EXIT";
			this->exit_main_button->UseVisualStyleBackColor = true;
			this->exit_main_button->Click += gcnew System::EventHandler(this, &StartScreen::exit_main_button_Click);
			// 
			// start_title
			// 
			this->start_title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->start_title->AutoSize = true;
			this->start_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->start_title->Location = System::Drawing::Point(112, 37);
			this->start_title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->start_title->Name = L"start_title";
			this->start_title->Size = System::Drawing::Size(269, 73);
			this->start_title->TabIndex = 2;
			this->start_title->Text = L"MAKAO";
			this->start_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// hard_mode_button
			// 
			this->hard_mode_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->hard_mode_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->hard_mode_button->Location = System::Drawing::Point(340, 191);
			this->hard_mode_button->Name = L"hard_mode_button";
			this->hard_mode_button->Size = System::Drawing::Size(164, 80);
			this->hard_mode_button->TabIndex = 3;
			this->hard_mode_button->Text = L"HARD";
			this->hard_mode_button->UseVisualStyleBackColor = true;
			this->hard_mode_button->Click += gcnew System::EventHandler(this, &StartScreen::hard_mode_button_Click);
			// 
			// medium_mode_button
			// 
			this->medium_mode_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->medium_mode_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->medium_mode_button->Location = System::Drawing::Point(170, 191);
			this->medium_mode_button->Name = L"medium_mode_button";
			this->medium_mode_button->Size = System::Drawing::Size(164, 80);
			this->medium_mode_button->TabIndex = 4;
			this->medium_mode_button->Text = L"MEDIUM";
			this->medium_mode_button->UseVisualStyleBackColor = true;
			this->medium_mode_button->Click += gcnew System::EventHandler(this, &StartScreen::medium_mode_button_Click);
			// 
			// advice_label
			// 
			this->advice_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->advice_label->AutoSize = true;
			this->advice_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->advice_label->Location = System::Drawing::Point(96, 133);
			this->advice_label->Name = L"advice_label";
			this->advice_label->Size = System::Drawing::Size(285, 25);
			this->advice_label->TabIndex = 5;
			this->advice_label->Text = L"CHOOSE THE DIFFICULTY";
			// 
			// start_button
			// 
			this->start_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->start_button->Location = System::Drawing::Point(157, 133);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(188, 80);
			this->start_button->TabIndex = 6;
			this->start_button->Text = L"START";
			this->start_button->UseVisualStyleBackColor = true;
			this->start_button->Click += gcnew System::EventHandler(this, &StartScreen::start_button_Click);
			// 
			// info_button
			// 
			this->info_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->info_button->Location = System::Drawing::Point(157, 223);
			this->info_button->Name = L"info_button";
			this->info_button->Size = System::Drawing::Size(188, 80);
			this->info_button->TabIndex = 7;
			this->info_button->Text = L"INFO";
			this->info_button->UseVisualStyleBackColor = true;
			this->info_button->Click += gcnew System::EventHandler(this, &StartScreen::info_button_Click);
			// 
			// begin_button
			// 
			this->begin_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->begin_button->Location = System::Drawing::Point(157, 223);
			this->begin_button->Name = L"begin_button";
			this->begin_button->Size = System::Drawing::Size(188, 80);
			this->begin_button->TabIndex = 9;
			this->begin_button->Text = L"BEGIN";
			this->begin_button->UseVisualStyleBackColor = true;
			this->begin_button->Click += gcnew System::EventHandler(this, &StartScreen::begin_button_Click);
			// 
			// depth_numericUpDown
			// 
			this->depth_numericUpDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->depth_numericUpDown->Location = System::Drawing::Point(157, 191);
			this->depth_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->depth_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->depth_numericUpDown->Name = L"depth_numericUpDown";
			this->depth_numericUpDown->Size = System::Drawing::Size(188, 20);
			this->depth_numericUpDown->TabIndex = 10;
			this->depth_numericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->depth_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// StartScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 417);
			this->Controls->Add(this->depth_numericUpDown);
			this->Controls->Add(this->begin_button);
			this->Controls->Add(this->info_button);
			this->Controls->Add(this->start_button);
			this->Controls->Add(this->advice_label);
			this->Controls->Add(this->medium_mode_button);
			this->Controls->Add(this->hard_mode_button);
			this->Controls->Add(this->start_title);
			this->Controls->Add(this->exit_main_button);
			this->Controls->Add(this->easy_mode_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StartScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartScreen";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depth_numericUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int aiSelect = 0;

	private: System::Void exit_main_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void start_button_Click(System::Object^ sender, System::EventArgs^ e) {
		start_button->Hide();
		info_button->Hide();

		advice_label->Show();
		easy_mode_button->Show();
		medium_mode_button->Show();
		hard_mode_button->Show();
	}

	private: System::Void info_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MakaoGame::InfoScreen^ info = gcnew MakaoGame::InfoScreen();
		info->ShowDialog();
		this->Show();
	}

	private: System::Void easy_mode_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MakaoGame::GameScreen name(aiSelect, 0);
		name.ShowDialog();
	}
	
	private: System::Void medium_mode_button_Click(System::Object^ sender, System::EventArgs^ e) {
		aiSelect = 1;

		advice_label->Text = "CHOOSE ALGORITHM DEPTH";

		easy_mode_button->Hide();
		medium_mode_button->Hide();
		hard_mode_button->Hide();

		depth_numericUpDown->Show();
		begin_button->Show();
	}

	private: System::Void hard_mode_button_Click(System::Object^ sender, System::EventArgs^ e) {
		aiSelect = 2;

		advice_label->Text = "CHOOSE ALGORITHM DEPTH";

		easy_mode_button->Hide();
		medium_mode_button->Hide();
		hard_mode_button->Hide();

		depth_numericUpDown->Show();
		begin_button->Show();
	}

	private: System::Void begin_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		int aiDepth = Convert::ToInt32(Math::Round(depth_numericUpDown->Value));
		MakaoGame::GameScreen name(aiSelect, aiDepth);
		
		name.ShowDialog();
	}

};
}
