#pragma once

namespace MakaoGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DrawnCardPlayScreen
	/// </summary>
	public ref class DrawnCardPlayScreen : public System::Windows::Forms::Form
	{
		private: MakaoGame::Cards^ card;
		private: MakaoGame::Gameplay^ gameplay;
	public:
		DrawnCardPlayScreen(MakaoGame::Cards^ card_data, MakaoGame::Gameplay^ gameplay_data, bool isItJack)
		{
			InitializeComponent();

			card = card_data;
			gameplay = gameplay_data;

			if (isItJack) {
				action_title_label->Text = "PLEASE SELECT A CARD VALUE";
				ace_panel->Hide();
			}
			else {
				action_title_label->Text = "PLEASE SELECT A SUIT VALUE";
				jack_panel->Hide();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DrawnCardPlayScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ ace_panel;
	protected:
	private: System::Windows::Forms::Button^ hearts_button;
	private: System::Windows::Forms::Button^ spade_button;
	private: System::Windows::Forms::Button^ diamond_button;
	private: System::Windows::Forms::Button^ club_button;
	private: System::Windows::Forms::TableLayoutPanel^ jack_panel;
	private: System::Windows::Forms::Button^ jack_5_button;
	private: System::Windows::Forms::Button^ jack_6_button;
	private: System::Windows::Forms::Button^ jack_10_button;
	private: System::Windows::Forms::Button^ jack_7_button;
	private: System::Windows::Forms::Button^ jack_9_button;
	private: System::Windows::Forms::Button^ jack_8_button;
	private: System::Windows::Forms::Label^ action_title_label;


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
			this->ace_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->hearts_button = (gcnew System::Windows::Forms::Button());
			this->spade_button = (gcnew System::Windows::Forms::Button());
			this->diamond_button = (gcnew System::Windows::Forms::Button());
			this->club_button = (gcnew System::Windows::Forms::Button());
			this->jack_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->jack_5_button = (gcnew System::Windows::Forms::Button());
			this->jack_6_button = (gcnew System::Windows::Forms::Button());
			this->jack_10_button = (gcnew System::Windows::Forms::Button());
			this->jack_7_button = (gcnew System::Windows::Forms::Button());
			this->jack_9_button = (gcnew System::Windows::Forms::Button());
			this->jack_8_button = (gcnew System::Windows::Forms::Button());
			this->action_title_label = (gcnew System::Windows::Forms::Label());
			this->ace_panel->SuspendLayout();
			this->jack_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// ace_panel
			// 
			this->ace_panel->ColumnCount = 7;
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 84.21053F)));
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15.78947F)));
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 99)));
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 14)));
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 87)));
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 11)));
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 112)));
			this->ace_panel->Controls->Add(this->hearts_button, 6, 0);
			this->ace_panel->Controls->Add(this->spade_button, 0, 0);
			this->ace_panel->Controls->Add(this->diamond_button, 4, 0);
			this->ace_panel->Controls->Add(this->club_button, 2, 0);
			this->ace_panel->Location = System::Drawing::Point(142, 149);
			this->ace_panel->Name = L"ace_panel";
			this->ace_panel->RowCount = 1;
			this->ace_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->ace_panel->Size = System::Drawing::Size(428, 100);
			this->ace_panel->TabIndex = 17;
			// 
			// hearts_button
			// 
			this->hearts_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hearts_button->Location = System::Drawing::Point(318, 3);
			this->hearts_button->Name = L"hearts_button";
			this->hearts_button->Size = System::Drawing::Size(107, 94);
			this->hearts_button->TabIndex = 20;
			this->hearts_button->Text = L"HEARTS";
			this->hearts_button->UseVisualStyleBackColor = true;
			this->hearts_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::hearts_button_Click);
			// 
			// spade_button
			// 
			this->spade_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->spade_button->Location = System::Drawing::Point(3, 3);
			this->spade_button->Name = L"spade_button";
			this->spade_button->Size = System::Drawing::Size(82, 94);
			this->spade_button->TabIndex = 17;
			this->spade_button->Text = L"SPADE";
			this->spade_button->UseVisualStyleBackColor = true;
			this->spade_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::spade_button_Click);
			// 
			// diamond_button
			// 
			this->diamond_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->diamond_button->Location = System::Drawing::Point(220, 3);
			this->diamond_button->Name = L"diamond_button";
			this->diamond_button->Size = System::Drawing::Size(81, 94);
			this->diamond_button->TabIndex = 19;
			this->diamond_button->Text = L"DIAMOND";
			this->diamond_button->UseVisualStyleBackColor = true;
			this->diamond_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::diamond_button_Click);
			// 
			// club_button
			// 
			this->club_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->club_button->Location = System::Drawing::Point(107, 3);
			this->club_button->Name = L"club_button";
			this->club_button->Size = System::Drawing::Size(93, 94);
			this->club_button->TabIndex = 18;
			this->club_button->Text = L"CLUB";
			this->club_button->UseVisualStyleBackColor = true;
			this->club_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::club_button_Click);
			// 
			// jack_panel
			// 
			this->jack_panel->ColumnCount = 11;
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 89.63415F)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10.36585F)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 11)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 81)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 12)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 96)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 110)));
			this->jack_panel->Controls->Add(this->jack_5_button, 0, 0);
			this->jack_panel->Controls->Add(this->jack_6_button, 2, 0);
			this->jack_panel->Controls->Add(this->jack_10_button, 10, 0);
			this->jack_panel->Controls->Add(this->jack_7_button, 4, 0);
			this->jack_panel->Controls->Add(this->jack_9_button, 8, 0);
			this->jack_panel->Controls->Add(this->jack_8_button, 6, 0);
			this->jack_panel->Location = System::Drawing::Point(59, 149);
			this->jack_panel->Name = L"jack_panel";
			this->jack_panel->RowCount = 1;
			this->jack_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->jack_panel->Size = System::Drawing::Size(590, 91);
			this->jack_panel->TabIndex = 18;
			// 
			// jack_5_button
			// 
			this->jack_5_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_5_button->Location = System::Drawing::Point(3, 3);
			this->jack_5_button->Name = L"jack_5_button";
			this->jack_5_button->Size = System::Drawing::Size(79, 85);
			this->jack_5_button->TabIndex = 16;
			this->jack_5_button->Text = L"5";
			this->jack_5_button->UseVisualStyleBackColor = true;
			this->jack_5_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::jack_5_button_Click);
			// 
			// jack_6_button
			// 
			this->jack_6_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_6_button->Location = System::Drawing::Point(97, 3);
			this->jack_6_button->Name = L"jack_6_button";
			this->jack_6_button->Size = System::Drawing::Size(74, 85);
			this->jack_6_button->TabIndex = 10;
			this->jack_6_button->Text = L"6";
			this->jack_6_button->UseVisualStyleBackColor = true;
			this->jack_6_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::jack_6_button_Click);
			// 
			// jack_10_button
			// 
			this->jack_10_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_10_button->Location = System::Drawing::Point(482, 3);
			this->jack_10_button->Name = L"jack_10_button";
			this->jack_10_button->Size = System::Drawing::Size(105, 85);
			this->jack_10_button->TabIndex = 14;
			this->jack_10_button->Text = L"10";
			this->jack_10_button->UseVisualStyleBackColor = true;
			this->jack_10_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::jack_10_button_Click);
			// 
			// jack_7_button
			// 
			this->jack_7_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_7_button->Location = System::Drawing::Point(188, 3);
			this->jack_7_button->Name = L"jack_7_button";
			this->jack_7_button->Size = System::Drawing::Size(75, 85);
			this->jack_7_button->TabIndex = 11;
			this->jack_7_button->Text = L"7";
			this->jack_7_button->UseVisualStyleBackColor = true;
			this->jack_7_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::jack_7_button_Click);
			// 
			// jack_9_button
			// 
			this->jack_9_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_9_button->Location = System::Drawing::Point(371, 3);
			this->jack_9_button->Name = L"jack_9_button";
			this->jack_9_button->Size = System::Drawing::Size(90, 85);
			this->jack_9_button->TabIndex = 13;
			this->jack_9_button->Text = L"9";
			this->jack_9_button->UseVisualStyleBackColor = true;
			this->jack_9_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::jack_9_button_Click);
			// 
			// jack_8_button
			// 
			this->jack_8_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_8_button->Location = System::Drawing::Point(279, 3);
			this->jack_8_button->Name = L"jack_8_button";
			this->jack_8_button->Size = System::Drawing::Size(74, 85);
			this->jack_8_button->TabIndex = 12;
			this->jack_8_button->Text = L"8";
			this->jack_8_button->UseVisualStyleBackColor = true;
			this->jack_8_button->Click += gcnew System::EventHandler(this, &DrawnCardPlayScreen::jack_8_button_Click);
			// 
			// action_title_label
			// 
			this->action_title_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->action_title_label->AutoSize = true;
			this->action_title_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->action_title_label->ForeColor = System::Drawing::Color::Black;
			this->action_title_label->Location = System::Drawing::Point(137, 39);
			this->action_title_label->Name = L"action_title_label";
			this->action_title_label->Size = System::Drawing::Size(406, 29);
			this->action_title_label->TabIndex = 19;
			this->action_title_label->Text = L"PLEASE SELECT A CARD VALUE";
			// 
			// DrawnCardPlayScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(716, 443);
			this->Controls->Add(this->action_title_label);
			this->Controls->Add(this->jack_panel);
			this->Controls->Add(this->ace_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DrawnCardPlayScreen";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"DrawnCardPlayScreen";
			this->TopMost = true;
			this->ace_panel->ResumeLayout(false);
			this->jack_panel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void jack_5_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(5, 1);
		this->Close();
	}
	private: System::Void jack_6_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(6, 1);
		this->Close();
	}
	private: System::Void jack_7_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(7, 1);
		this->Close();
	}
	private: System::Void jack_8_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(8, 1);
		this->Close();
	}
	private: System::Void jack_9_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(9, 1);
		this->Close();
	}
	private: System::Void jack_10_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(10, 1);
		this->Close();
	}
	private: System::Void spade_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(1, 1);
		this->Close();
	}
	private: System::Void club_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(2, 1);
		this->Close();
	}
	private: System::Void diamond_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(3, 1);
		this->Close();
	}
	private: System::Void hearts_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(4, 1);
		this->Close();
	}
};
}
