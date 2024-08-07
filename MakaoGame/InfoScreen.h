#pragma once

namespace MakaoGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InfoScreen
	/// </summary>
	public ref class InfoScreen : public System::Windows::Forms::Form
	{
	public:
		InfoScreen(void)
		{
			InitializeComponent();

			prev_page_button->Hide();
			card_info_layoutPanel->Hide();
			card_title_info_label->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InfoScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit_info_screen_button;
	private: System::Windows::Forms::Button^ next_page_button;

	private: System::Windows::Forms::Button^ prev_page_button;
	private: System::Windows::Forms::Label^ diff_title_info_label;



	private: System::Windows::Forms::TableLayoutPanel^ difficulty_info_layoutPanel;



	private: System::Windows::Forms::Label^ hard_info_lable;

	private: System::Windows::Forms::Label^ medium_info_lable;

	private: System::Windows::Forms::Label^ easy_info_lable;
	private: System::Windows::Forms::TextBox^ medium_info_textBox;
	private: System::Windows::Forms::TextBox^ hard_info_textBox;



	private: System::Windows::Forms::TextBox^ easy_info_textBox;
	private: System::Windows::Forms::TableLayoutPanel^ card_info_layoutPanel;



	private: System::Windows::Forms::ImageList^ cardList;
	private: System::Windows::Forms::PictureBox^ card1_info_pictureBox;
	private: System::Windows::Forms::PictureBox^ card2_info_pictureBox;
	private: System::Windows::Forms::PictureBox^ card3_info_pictureBox;
	private: System::Windows::Forms::TextBox^ card1_info_textBox;






	private: System::Windows::Forms::TextBox^ card2_info_textBox;

	private: System::Windows::Forms::TextBox^ card3_info_textBox;

	private: System::Windows::Forms::Label^ card_title_info_label;






	private: System::ComponentModel::IContainer^ components;




















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoScreen::typeid));
			this->exit_info_screen_button = (gcnew System::Windows::Forms::Button());
			this->next_page_button = (gcnew System::Windows::Forms::Button());
			this->prev_page_button = (gcnew System::Windows::Forms::Button());
			this->diff_title_info_label = (gcnew System::Windows::Forms::Label());
			this->difficulty_info_layoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->hard_info_lable = (gcnew System::Windows::Forms::Label());
			this->medium_info_lable = (gcnew System::Windows::Forms::Label());
			this->easy_info_lable = (gcnew System::Windows::Forms::Label());
			this->medium_info_textBox = (gcnew System::Windows::Forms::TextBox());
			this->hard_info_textBox = (gcnew System::Windows::Forms::TextBox());
			this->easy_info_textBox = (gcnew System::Windows::Forms::TextBox());
			this->card_info_layoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->card1_info_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->card2_info_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->card3_info_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->card1_info_textBox = (gcnew System::Windows::Forms::TextBox());
			this->card2_info_textBox = (gcnew System::Windows::Forms::TextBox());
			this->card3_info_textBox = (gcnew System::Windows::Forms::TextBox());
			this->cardList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->card_title_info_label = (gcnew System::Windows::Forms::Label());
			this->difficulty_info_layoutPanel->SuspendLayout();
			this->card_info_layoutPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card1_info_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card2_info_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card3_info_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// exit_info_screen_button
			// 
			this->exit_info_screen_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->exit_info_screen_button->Location = System::Drawing::Point(500, 653);
			this->exit_info_screen_button->Name = L"exit_info_screen_button";
			this->exit_info_screen_button->Size = System::Drawing::Size(146, 45);
			this->exit_info_screen_button->TabIndex = 0;
			this->exit_info_screen_button->Text = L"EXIT";
			this->exit_info_screen_button->UseVisualStyleBackColor = true;
			this->exit_info_screen_button->Click += gcnew System::EventHandler(this, &InfoScreen::exit_info_screen_button_Click);
			// 
			// next_page_button
			// 
			this->next_page_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->next_page_button->Location = System::Drawing::Point(999, 653);
			this->next_page_button->Name = L"next_page_button";
			this->next_page_button->Size = System::Drawing::Size(146, 45);
			this->next_page_button->TabIndex = 1;
			this->next_page_button->Text = L">>";
			this->next_page_button->UseVisualStyleBackColor = true;
			this->next_page_button->Click += gcnew System::EventHandler(this, &InfoScreen::next_page_button_Click);
			// 
			// prev_page_button
			// 
			this->prev_page_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->prev_page_button->Location = System::Drawing::Point(12, 653);
			this->prev_page_button->Name = L"prev_page_button";
			this->prev_page_button->Size = System::Drawing::Size(146, 45);
			this->prev_page_button->TabIndex = 2;
			this->prev_page_button->Text = L"<<";
			this->prev_page_button->UseVisualStyleBackColor = true;
			this->prev_page_button->Click += gcnew System::EventHandler(this, &InfoScreen::prev_page_button_Click);
			// 
			// diff_title_info_label
			// 
			this->diff_title_info_label->AutoSize = true;
			this->diff_title_info_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold));
			this->diff_title_info_label->Location = System::Drawing::Point(218, 40);
			this->diff_title_info_label->Name = L"diff_title_info_label";
			this->diff_title_info_label->Size = System::Drawing::Size(726, 73);
			this->diff_title_info_label->TabIndex = 4;
			this->diff_title_info_label->Text = L"DIFFICULTY OPTIONS";
			// 
			// difficulty_info_layoutPanel
			// 
			this->difficulty_info_layoutPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->difficulty_info_layoutPanel->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->difficulty_info_layoutPanel->ColumnCount = 2;
			this->difficulty_info_layoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->difficulty_info_layoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->difficulty_info_layoutPanel->Controls->Add(this->hard_info_lable, 0, 2);
			this->difficulty_info_layoutPanel->Controls->Add(this->medium_info_lable, 0, 1);
			this->difficulty_info_layoutPanel->Controls->Add(this->easy_info_lable, 0, 0);
			this->difficulty_info_layoutPanel->Controls->Add(this->medium_info_textBox, 1, 1);
			this->difficulty_info_layoutPanel->Controls->Add(this->hard_info_textBox, 1, 2);
			this->difficulty_info_layoutPanel->Controls->Add(this->easy_info_textBox, 1, 0);
			this->difficulty_info_layoutPanel->Location = System::Drawing::Point(62, 133);
			this->difficulty_info_layoutPanel->Name = L"difficulty_info_layoutPanel";
			this->difficulty_info_layoutPanel->RowCount = 3;
			this->difficulty_info_layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->difficulty_info_layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->difficulty_info_layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				34)));
			this->difficulty_info_layoutPanel->Size = System::Drawing::Size(1044, 471);
			this->difficulty_info_layoutPanel->TabIndex = 5;
			// 
			// hard_info_lable
			// 
			this->hard_info_lable->AutoSize = true;
			this->hard_info_lable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hard_info_lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hard_info_lable->ForeColor = System::Drawing::Color::Red;
			this->hard_info_lable->Location = System::Drawing::Point(4, 311);
			this->hard_info_lable->Name = L"hard_info_lable";
			this->hard_info_lable->Size = System::Drawing::Size(202, 159);
			this->hard_info_lable->TabIndex = 9;
			this->hard_info_lable->Text = L"HARD MODE";
			this->hard_info_lable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// medium_info_lable
			// 
			this->medium_info_lable->AutoSize = true;
			this->medium_info_lable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->medium_info_lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->medium_info_lable->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->medium_info_lable->Location = System::Drawing::Point(4, 156);
			this->medium_info_lable->Name = L"medium_info_lable";
			this->medium_info_lable->Size = System::Drawing::Size(202, 154);
			this->medium_info_lable->TabIndex = 8;
			this->medium_info_lable->Text = L"MEDIUM MODE";
			this->medium_info_lable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// easy_info_lable
			// 
			this->easy_info_lable->AutoSize = true;
			this->easy_info_lable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->easy_info_lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->easy_info_lable->ForeColor = System::Drawing::Color::Blue;
			this->easy_info_lable->Location = System::Drawing::Point(4, 1);
			this->easy_info_lable->Name = L"easy_info_lable";
			this->easy_info_lable->Size = System::Drawing::Size(202, 154);
			this->easy_info_lable->TabIndex = 6;
			this->easy_info_lable->Text = L"EASY MODE";
			this->easy_info_lable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// medium_info_textBox
			// 
			this->medium_info_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->medium_info_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->medium_info_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->medium_info_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->medium_info_textBox->Location = System::Drawing::Point(213, 159);
			this->medium_info_textBox->Multiline = true;
			this->medium_info_textBox->Name = L"medium_info_textBox";
			this->medium_info_textBox->ReadOnly = true;
			this->medium_info_textBox->Size = System::Drawing::Size(827, 148);
			this->medium_info_textBox->TabIndex = 6;
			this->medium_info_textBox->Text = resources->GetString(L"medium_info_textBox.Text");
			// 
			// hard_info_textBox
			// 
			this->hard_info_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->hard_info_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hard_info_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hard_info_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hard_info_textBox->Location = System::Drawing::Point(213, 314);
			this->hard_info_textBox->Multiline = true;
			this->hard_info_textBox->Name = L"hard_info_textBox";
			this->hard_info_textBox->ReadOnly = true;
			this->hard_info_textBox->Size = System::Drawing::Size(827, 153);
			this->hard_info_textBox->TabIndex = 7;
			this->hard_info_textBox->Text = L"-Alpha Beta algorithm\r\n-Does have access to information about enemy hand\r\n-Does h"
				L"ave access to information about draw pile\r\n-Can play drawn cards\r\n-Is able to pl"
				L"ay multiple cards at once";
			// 
			// easy_info_textBox
			// 
			this->easy_info_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->easy_info_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->easy_info_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->easy_info_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->easy_info_textBox->Location = System::Drawing::Point(213, 4);
			this->easy_info_textBox->Multiline = true;
			this->easy_info_textBox->Name = L"easy_info_textBox";
			this->easy_info_textBox->ReadOnly = true;
			this->easy_info_textBox->Size = System::Drawing::Size(827, 148);
			this->easy_info_textBox->TabIndex = 6;
			this->easy_info_textBox->Text = resources->GetString(L"easy_info_textBox.Text");
			// 
			// card_info_layoutPanel
			// 
			this->card_info_layoutPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->card_info_layoutPanel->ColumnCount = 2;
			this->card_info_layoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				138)));
			this->card_info_layoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->card_info_layoutPanel->Controls->Add(this->card1_info_pictureBox, 0, 0);
			this->card_info_layoutPanel->Controls->Add(this->card2_info_pictureBox, 0, 1);
			this->card_info_layoutPanel->Controls->Add(this->card3_info_pictureBox, 0, 2);
			this->card_info_layoutPanel->Controls->Add(this->card1_info_textBox, 1, 0);
			this->card_info_layoutPanel->Controls->Add(this->card2_info_textBox, 1, 1);
			this->card_info_layoutPanel->Controls->Add(this->card3_info_textBox, 1, 2);
			this->card_info_layoutPanel->Location = System::Drawing::Point(62, 133);
			this->card_info_layoutPanel->Name = L"card_info_layoutPanel";
			this->card_info_layoutPanel->RowCount = 3;
			this->card_info_layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				158)));
			this->card_info_layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				158)));
			this->card_info_layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				158)));
			this->card_info_layoutPanel->Size = System::Drawing::Size(1044, 471);
			this->card_info_layoutPanel->TabIndex = 6;
			// 
			// card1_info_pictureBox
			// 
			this->card1_info_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->card1_info_pictureBox->Location = System::Drawing::Point(3, 3);
			this->card1_info_pictureBox->Name = L"card1_info_pictureBox";
			this->card1_info_pictureBox->Size = System::Drawing::Size(132, 152);
			this->card1_info_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->card1_info_pictureBox->TabIndex = 0;
			this->card1_info_pictureBox->TabStop = false;
			// 
			// card2_info_pictureBox
			// 
			this->card2_info_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->card2_info_pictureBox->Location = System::Drawing::Point(3, 161);
			this->card2_info_pictureBox->Name = L"card2_info_pictureBox";
			this->card2_info_pictureBox->Size = System::Drawing::Size(132, 152);
			this->card2_info_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->card2_info_pictureBox->TabIndex = 1;
			this->card2_info_pictureBox->TabStop = false;
			// 
			// card3_info_pictureBox
			// 
			this->card3_info_pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->card3_info_pictureBox->Location = System::Drawing::Point(3, 319);
			this->card3_info_pictureBox->Name = L"card3_info_pictureBox";
			this->card3_info_pictureBox->Size = System::Drawing::Size(132, 152);
			this->card3_info_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->card3_info_pictureBox->TabIndex = 2;
			this->card3_info_pictureBox->TabStop = false;
			// 
			// card1_info_textBox
			// 
			this->card1_info_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->card1_info_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->card1_info_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->card1_info_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->card1_info_textBox->Location = System::Drawing::Point(141, 3);
			this->card1_info_textBox->Multiline = true;
			this->card1_info_textBox->Name = L"card1_info_textBox";
			this->card1_info_textBox->ReadOnly = true;
			this->card1_info_textBox->Size = System::Drawing::Size(900, 152);
			this->card1_info_textBox->TabIndex = 3;
			this->card1_info_textBox->Text = L"-When played, the opponent must draw 2 cards for each card played\r\n-Can respond w"
				L"ith another 2 of other suit";
			// 
			// card2_info_textBox
			// 
			this->card2_info_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->card2_info_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->card2_info_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->card2_info_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->card2_info_textBox->Location = System::Drawing::Point(141, 161);
			this->card2_info_textBox->Multiline = true;
			this->card2_info_textBox->Name = L"card2_info_textBox";
			this->card2_info_textBox->ReadOnly = true;
			this->card2_info_textBox->Size = System::Drawing::Size(900, 152);
			this->card2_info_textBox->TabIndex = 4;
			this->card2_info_textBox->Text = L"-When played, the opponent must draw 3 cards for each card played\r\n-Can respond w"
				L"ith another 3 of other suit\r\n";
			// 
			// card3_info_textBox
			// 
			this->card3_info_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->card3_info_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->card3_info_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->card3_info_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->card3_info_textBox->Location = System::Drawing::Point(141, 319);
			this->card3_info_textBox->Multiline = true;
			this->card3_info_textBox->Name = L"card3_info_textBox";
			this->card3_info_textBox->ReadOnly = true;
			this->card3_info_textBox->Size = System::Drawing::Size(900, 152);
			this->card3_info_textBox->TabIndex = 5;
			this->card3_info_textBox->Text = L"-When played, the opponent must skip a turn for each card played\r\n-Can respond wi"
				L"th another 4 of any other suit";
			// 
			// cardList
			// 
			this->cardList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"cardList.ImageStream")));
			this->cardList->TransparentColor = System::Drawing::Color::Transparent;
			this->cardList->Images->SetKeyName(0, L"2D.png");
			this->cardList->Images->SetKeyName(1, L"3D.png");
			this->cardList->Images->SetKeyName(2, L"4D.png");
			this->cardList->Images->SetKeyName(3, L"8D.png");
			this->cardList->Images->SetKeyName(4, L"11D.png");
			this->cardList->Images->SetKeyName(5, L"12D.png");
			this->cardList->Images->SetKeyName(6, L"12H.png");
			this->cardList->Images->SetKeyName(7, L"12S.png");
			this->cardList->Images->SetKeyName(8, L"13D.png");
			this->cardList->Images->SetKeyName(9, L"13H.png");
			this->cardList->Images->SetKeyName(10, L"13S.png");
			this->cardList->Images->SetKeyName(11, L"14D.png");
			// 
			// card_title_info_label
			// 
			this->card_title_info_label->AutoSize = true;
			this->card_title_info_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold));
			this->card_title_info_label->Location = System::Drawing::Point(323, 40);
			this->card_title_info_label->Name = L"card_title_info_label";
			this->card_title_info_label->Size = System::Drawing::Size(534, 73);
			this->card_title_info_label->TabIndex = 7;
			this->card_title_info_label->Text = L"CARD EFFECTS";
			// 
			// InfoScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Green;
			this->ClientSize = System::Drawing::Size(1157, 710);
			this->Controls->Add(this->card_title_info_label);
			this->Controls->Add(this->card_info_layoutPanel);
			this->Controls->Add(this->difficulty_info_layoutPanel);
			this->Controls->Add(this->diff_title_info_label);
			this->Controls->Add(this->prev_page_button);
			this->Controls->Add(this->next_page_button);
			this->Controls->Add(this->exit_info_screen_button);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"InfoScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InfoScreen";
			this->difficulty_info_layoutPanel->ResumeLayout(false);
			this->difficulty_info_layoutPanel->PerformLayout();
			this->card_info_layoutPanel->ResumeLayout(false);
			this->card_info_layoutPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card1_info_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card2_info_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card3_info_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
		int pageIndex = 0;

	private: void pageChanger() {
		if (pageIndex == 0) {
			difficulty_info_layoutPanel->Show();
			diff_title_info_label->Show();

			card_title_info_label->Hide();
			card_info_layoutPanel->Hide();
			prev_page_button->Hide();
		}
		else if (pageIndex == 1) {
			card_info_layoutPanel->Show();
			card_title_info_label->Show();
			prev_page_button->Show();

			difficulty_info_layoutPanel->Hide();
			diff_title_info_label->Hide();

			card1_info_pictureBox->Image = this->cardList->Images["2D.png"];
			card2_info_pictureBox->Image = this->cardList->Images["3D.png"];
			card3_info_pictureBox->Image = this->cardList->Images["4D.png"];

			card1_info_textBox->Text = "-When played, the opponent must draw 2 cards for each card played\r\n-Can respond with another 2 of other suit";
			card2_info_textBox->Text = "-When played, the opponent must draw 3 cards for each card played\r\n-Can respond with another 3 of other suit";
			card3_info_textBox->Text = "-When played, the opponent must skip a turn for each card played\r\n-Can respond with another 4 of any other suit";
		}
		else if (pageIndex == 2) {
			next_page_button->Show();

			card1_info_pictureBox->Image = this->cardList->Images["8D.png"];
			card2_info_pictureBox->Image = this->cardList->Images["11D.png"];
			card3_info_pictureBox->Image = this->cardList->Images["12D.png"];

			card1_info_textBox->Text = "-No unique effects for the cards beetwen 5 and 10";
			card2_info_textBox->Text = "-When played, the player must pick one number beetwen 5 and 10\r\n-Only cards with this number or another jack of other suit can be played\r\n-The effect wears off after playing any card or the whole round passes\r\n-Playing multiple jacks at the same time does not enchance the effect";
			card3_info_textBox->Text = "-No unique effects";
		}
		else {
			next_page_button->Hide();

			card1_info_pictureBox->Image = this->cardList->Images["13S.png"];
			card2_info_pictureBox->Image = this->cardList->Images["13D.png"];
			card3_info_pictureBox->Image = this->cardList->Images["14D.png"];

			card1_info_textBox->Text = "-When King of Hearts or Spades is played, the opponent must draw 5 cards\r\n-If King of Hearts was played, can respond with King or Queen of Spades\r\n-If King of Spades was played, can respond with King or Queen of Hearts";
			card2_info_textBox->Text = "-Other kings have no unique effects";
			card3_info_textBox->Text = "-When played, the player must pick one suit\r\n-Only cards with this suit or another ace of other suit can be played\r\n-The effect wears off after playing any card or the whole round passes\r\n-Playing multiple aces at the same time does not enchance the effect";
		}
	}

	private: System::Void exit_info_screen_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void next_page_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pageIndex < 3) pageIndex++;
		pageChanger();
		
	}
	private: System::Void prev_page_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if(pageIndex > 0) pageIndex--;
		pageChanger();
	}
};
}
