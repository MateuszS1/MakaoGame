#pragma once

namespace MakaoGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GameScreen : public System::Windows::Forms::Form
	{
	public:

		MakaoGame::Cards^ card;

	public:
		MakaoGame::Gameplay^ gameplay;
		GameScreen(int aiSelect, int aiDepth)
		{
			InitializeComponent();

			card = gcnew Cards;
			gameplay = gcnew Gameplay(card);

			gameplay->aiSwitch = aiSelect;
			gameplay->aiDepth = aiDepth;

			view_deck->Hide();
			top_card->Hide();
			main_deck_back->Hide();
			enemy_hand_info_panel->Hide();
			player_hand_info_panel->Hide();
			main_deck_count->Hide();
			main_deck_label->Hide();
			turn_wait_info_panel->Hide();
			first_drawn_card->Hide();
			draw_rest_button->Hide();
			play_drawn_card_button->Hide();
			effect_info_panel->Hide();
		}

	protected:
		~GameScreen()
		{
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ sidebar;
	private: System::Windows::Forms::Button^ start_and_draw_button;
	protected:

	protected:




	private: System::Windows::Forms::Button^ exit_game_button;

	private: System::Windows::Forms::Button^ view_deck;
	private: System::Windows::Forms::PictureBox^ top_card;

	private: System::Windows::Forms::Label^ enemy_hand_label;
	private: System::Windows::Forms::TableLayoutPanel^ enemy_hand_info_panel;


	private: System::Windows::Forms::Label^ enemy_hand_count;
	private: System::Windows::Forms::PictureBox^ main_deck_back;
	private: System::Windows::Forms::ImageList^ cardList;












	private: System::Windows::Forms::Label^ main_deck_count;
	private: System::Windows::Forms::Label^ main_deck_label;

	private: System::Windows::Forms::TableLayoutPanel^ player_hand_info_panel;

	private: System::Windows::Forms::Label^ player_hand_label;
	private: System::Windows::Forms::Label^ player_hand_count;
	private: System::Windows::Forms::PictureBox^ enemy_hand_back;
	private: System::Windows::Forms::PictureBox^ player_hand_back;
	private: System::Windows::Forms::ImageList^ handBacksList;
	private: System::Windows::Forms::Button^ turn_wait_button;
	private: System::Windows::Forms::TableLayoutPanel^ turn_wait_info_panel;
	private: System::Windows::Forms::Label^ turn_wait_label;
	private: System::Windows::Forms::Label^ turn_wait_count;
	private: System::Windows::Forms::Button^ draw_rest_button;
	private: System::Windows::Forms::Button^ play_drawn_card_button;
	private: System::Windows::Forms::PictureBox^ first_drawn_card;
	private: System::Windows::Forms::TableLayoutPanel^ effect_info_panel;
	private: System::Windows::Forms::Label^ effect_info_1_label;
	private: System::Windows::Forms::Label^ effect_info_2_label;





	private: System::ComponentModel::IContainer^ components;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameScreen::typeid));
			this->sidebar = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->draw_rest_button = (gcnew System::Windows::Forms::Button());
			this->main_deck_label = (gcnew System::Windows::Forms::Label());
			this->play_drawn_card_button = (gcnew System::Windows::Forms::Button());
			this->main_deck_back = (gcnew System::Windows::Forms::PictureBox());
			this->main_deck_count = (gcnew System::Windows::Forms::Label());
			this->first_drawn_card = (gcnew System::Windows::Forms::PictureBox());
			this->start_and_draw_button = (gcnew System::Windows::Forms::Button());
			this->exit_game_button = (gcnew System::Windows::Forms::Button());
			this->view_deck = (gcnew System::Windows::Forms::Button());
			this->top_card = (gcnew System::Windows::Forms::PictureBox());
			this->enemy_hand_label = (gcnew System::Windows::Forms::Label());
			this->enemy_hand_info_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->enemy_hand_count = (gcnew System::Windows::Forms::Label());
			this->cardList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->player_hand_info_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->player_hand_label = (gcnew System::Windows::Forms::Label());
			this->player_hand_count = (gcnew System::Windows::Forms::Label());
			this->enemy_hand_back = (gcnew System::Windows::Forms::PictureBox());
			this->player_hand_back = (gcnew System::Windows::Forms::PictureBox());
			this->handBacksList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->turn_wait_button = (gcnew System::Windows::Forms::Button());
			this->turn_wait_info_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->turn_wait_label = (gcnew System::Windows::Forms::Label());
			this->turn_wait_count = (gcnew System::Windows::Forms::Label());
			this->effect_info_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->effect_info_1_label = (gcnew System::Windows::Forms::Label());
			this->effect_info_2_label = (gcnew System::Windows::Forms::Label());
			this->sidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_deck_back))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_drawn_card))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top_card))->BeginInit();
			this->enemy_hand_info_panel->SuspendLayout();
			this->player_hand_info_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_hand_back))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player_hand_back))->BeginInit();
			this->turn_wait_info_panel->SuspendLayout();
			this->effect_info_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidebar
			// 
			this->sidebar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->sidebar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->sidebar->ColumnCount = 1;
			this->sidebar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->sidebar->Controls->Add(this->draw_rest_button, 0, 7);
			this->sidebar->Controls->Add(this->main_deck_label, 0, 3);
			this->sidebar->Controls->Add(this->play_drawn_card_button, 0, 6);
			this->sidebar->Controls->Add(this->main_deck_back, 0, 2);
			this->sidebar->Controls->Add(this->main_deck_count, 0, 4);
			this->sidebar->Controls->Add(this->first_drawn_card, 0, 5);
			this->sidebar->Controls->Add(this->start_and_draw_button, 0, 0);
			this->sidebar->Controls->Add(this->exit_game_button, 0, 9);
			this->sidebar->Location = System::Drawing::Point(980, -2);
			this->sidebar->Margin = System::Windows::Forms::Padding(2);
			this->sidebar->Name = L"sidebar";
			this->sidebar->RowCount = 10;
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 84.11215F)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.88785F)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 162)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 162)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->sidebar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->sidebar->Size = System::Drawing::Size(160, 673);
			this->sidebar->TabIndex = 1;
			// 
			// draw_rest_button
			// 
			this->draw_rest_button->Location = System::Drawing::Point(2, 565);
			this->draw_rest_button->Margin = System::Windows::Forms::Padding(2);
			this->draw_rest_button->Name = L"draw_rest_button";
			this->draw_rest_button->Size = System::Drawing::Size(156, 40);
			this->draw_rest_button->TabIndex = 0;
			this->draw_rest_button->Text = L"DRAW REST";
			this->draw_rest_button->UseVisualStyleBackColor = true;
			this->draw_rest_button->Click += gcnew System::EventHandler(this, &GameScreen::draw_rest_button_Click);
			// 
			// main_deck_label
			// 
			this->main_deck_label->AutoSize = true;
			this->main_deck_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->main_deck_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_deck_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->main_deck_label->Location = System::Drawing::Point(3, 246);
			this->main_deck_label->Name = L"main_deck_label";
			this->main_deck_label->Size = System::Drawing::Size(154, 53);
			this->main_deck_label->TabIndex = 9;
			this->main_deck_label->Text = L"SIZE OF THE MAIN DECK";
			this->main_deck_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// play_drawn_card_button
			// 
			this->play_drawn_card_button->Location = System::Drawing::Point(2, 516);
			this->play_drawn_card_button->Margin = System::Windows::Forms::Padding(2);
			this->play_drawn_card_button->Name = L"play_drawn_card_button";
			this->play_drawn_card_button->Size = System::Drawing::Size(156, 40);
			this->play_drawn_card_button->TabIndex = 13;
			this->play_drawn_card_button->Text = L"PLAY DRAWN CARD";
			this->play_drawn_card_button->UseVisualStyleBackColor = true;
			this->play_drawn_card_button->Click += gcnew System::EventHandler(this, &GameScreen::play_drawn_card_button_Click);
			// 
			// main_deck_back
			// 
			this->main_deck_back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->main_deck_back->Location = System::Drawing::Point(16, 87);
			this->main_deck_back->Name = L"main_deck_back";
			this->main_deck_back->Size = System::Drawing::Size(128, 156);
			this->main_deck_back->TabIndex = 8;
			this->main_deck_back->TabStop = false;
			// 
			// main_deck_count
			// 
			this->main_deck_count->AutoSize = true;
			this->main_deck_count->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->main_deck_count->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_deck_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->main_deck_count->Location = System::Drawing::Point(3, 299);
			this->main_deck_count->Name = L"main_deck_count";
			this->main_deck_count->Size = System::Drawing::Size(154, 53);
			this->main_deck_count->TabIndex = 9;
			this->main_deck_count->Text = L"0";
			this->main_deck_count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// first_drawn_card
			// 
			this->first_drawn_card->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->first_drawn_card->Location = System::Drawing::Point(16, 355);
			this->first_drawn_card->Name = L"first_drawn_card";
			this->first_drawn_card->Size = System::Drawing::Size(128, 156);
			this->first_drawn_card->TabIndex = 12;
			this->first_drawn_card->TabStop = false;
			// 
			// start_and_draw_button
			// 
			this->start_and_draw_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->start_and_draw_button->Location = System::Drawing::Point(2, 2);
			this->start_and_draw_button->Margin = System::Windows::Forms::Padding(2);
			this->start_and_draw_button->Name = L"start_and_draw_button";
			this->start_and_draw_button->Size = System::Drawing::Size(156, 67);
			this->start_and_draw_button->TabIndex = 0;
			this->start_and_draw_button->Text = L"START THE MATCH";
			this->start_and_draw_button->UseVisualStyleBackColor = true;
			this->start_and_draw_button->Click += gcnew System::EventHandler(this, &GameScreen::start_and_draw_button_Click);
			// 
			// exit_game_button
			// 
			this->exit_game_button->Location = System::Drawing::Point(2, 623);
			this->exit_game_button->Margin = System::Windows::Forms::Padding(2);
			this->exit_game_button->Name = L"exit_game_button";
			this->exit_game_button->Size = System::Drawing::Size(156, 47);
			this->exit_game_button->TabIndex = 1;
			this->exit_game_button->Text = L"EXIT";
			this->exit_game_button->UseVisualStyleBackColor = true;
			this->exit_game_button->Click += gcnew System::EventHandler(this, &GameScreen::exit_game_button_Click);
			// 
			// view_deck
			// 
			this->view_deck->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->view_deck->Location = System::Drawing::Point(362, 560);
			this->view_deck->Margin = System::Windows::Forms::Padding(2);
			this->view_deck->Name = L"view_deck";
			this->view_deck->Size = System::Drawing::Size(254, 100);
			this->view_deck->TabIndex = 2;
			this->view_deck->Text = L"VIEW DECK";
			this->view_deck->UseVisualStyleBackColor = true;
			this->view_deck->Click += gcnew System::EventHandler(this, &GameScreen::view_deck_Click);
			// 
			// top_card
			// 
			this->top_card->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->top_card->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top_card.Image")));
			this->top_card->Location = System::Drawing::Point(443, 211);
			this->top_card->Margin = System::Windows::Forms::Padding(2);
			this->top_card->MaximumSize = System::Drawing::Size(128, 148);
			this->top_card->MinimumSize = System::Drawing::Size(128, 148);
			this->top_card->Name = L"top_card";
			this->top_card->Size = System::Drawing::Size(128, 148);
			this->top_card->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->top_card->TabIndex = 4;
			this->top_card->TabStop = false;
			// 
			// enemy_hand_label
			// 
			this->enemy_hand_label->AutoSize = true;
			this->enemy_hand_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->enemy_hand_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enemy_hand_label->Location = System::Drawing::Point(3, 0);
			this->enemy_hand_label->Name = L"enemy_hand_label";
			this->enemy_hand_label->Size = System::Drawing::Size(248, 48);
			this->enemy_hand_label->TabIndex = 5;
			this->enemy_hand_label->Text = L"SIZE OF THE OPPONENTS HAND";
			this->enemy_hand_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// enemy_hand_info_panel
			// 
			this->enemy_hand_info_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->enemy_hand_info_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->enemy_hand_info_panel->ColumnCount = 1;
			this->enemy_hand_info_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->enemy_hand_info_panel->Controls->Add(this->enemy_hand_label, 0, 0);
			this->enemy_hand_info_panel->Controls->Add(this->enemy_hand_count, 0, 1);
			this->enemy_hand_info_panel->ForeColor = System::Drawing::SystemColors::Desktop;
			this->enemy_hand_info_panel->Location = System::Drawing::Point(362, 12);
			this->enemy_hand_info_panel->Name = L"enemy_hand_info_panel";
			this->enemy_hand_info_panel->RowCount = 2;
			this->enemy_hand_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->enemy_hand_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->enemy_hand_info_panel->Size = System::Drawing::Size(254, 96);
			this->enemy_hand_info_panel->TabIndex = 6;
			// 
			// enemy_hand_count
			// 
			this->enemy_hand_count->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->enemy_hand_count->AutoSize = true;
			this->enemy_hand_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enemy_hand_count->ForeColor = System::Drawing::Color::Red;
			this->enemy_hand_count->Location = System::Drawing::Point(3, 48);
			this->enemy_hand_count->Name = L"enemy_hand_count";
			this->enemy_hand_count->Size = System::Drawing::Size(248, 29);
			this->enemy_hand_count->TabIndex = 6;
			this->enemy_hand_count->Text = L"0";
			this->enemy_hand_count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cardList
			// 
			this->cardList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"cardList.ImageStream")));
			this->cardList->TransparentColor = System::Drawing::Color::Transparent;
			this->cardList->Images->SetKeyName(0, L"2C.png");
			this->cardList->Images->SetKeyName(1, L"2D.png");
			this->cardList->Images->SetKeyName(2, L"2H.png");
			this->cardList->Images->SetKeyName(3, L"2S.png");
			this->cardList->Images->SetKeyName(4, L"3C.png");
			this->cardList->Images->SetKeyName(5, L"3D.png");
			this->cardList->Images->SetKeyName(6, L"3H.png");
			this->cardList->Images->SetKeyName(7, L"3S.png");
			this->cardList->Images->SetKeyName(8, L"4C.png");
			this->cardList->Images->SetKeyName(9, L"4D.png");
			this->cardList->Images->SetKeyName(10, L"4H.png");
			this->cardList->Images->SetKeyName(11, L"4S.png");
			this->cardList->Images->SetKeyName(12, L"5C.png");
			this->cardList->Images->SetKeyName(13, L"5D.png");
			this->cardList->Images->SetKeyName(14, L"5H.png");
			this->cardList->Images->SetKeyName(15, L"5S.png");
			this->cardList->Images->SetKeyName(16, L"6C.png");
			this->cardList->Images->SetKeyName(17, L"6D.png");
			this->cardList->Images->SetKeyName(18, L"6H.png");
			this->cardList->Images->SetKeyName(19, L"6S.png");
			this->cardList->Images->SetKeyName(20, L"7C.png");
			this->cardList->Images->SetKeyName(21, L"7D.png");
			this->cardList->Images->SetKeyName(22, L"7H.png");
			this->cardList->Images->SetKeyName(23, L"7S.png");
			this->cardList->Images->SetKeyName(24, L"8C.png");
			this->cardList->Images->SetKeyName(25, L"8D.png");
			this->cardList->Images->SetKeyName(26, L"8H.png");
			this->cardList->Images->SetKeyName(27, L"8S.png");
			this->cardList->Images->SetKeyName(28, L"9C.png");
			this->cardList->Images->SetKeyName(29, L"9D.png");
			this->cardList->Images->SetKeyName(30, L"9H.png");
			this->cardList->Images->SetKeyName(31, L"9S.png");
			this->cardList->Images->SetKeyName(32, L"10C.png");
			this->cardList->Images->SetKeyName(33, L"10D.png");
			this->cardList->Images->SetKeyName(34, L"10H.png");
			this->cardList->Images->SetKeyName(35, L"10S.png");
			this->cardList->Images->SetKeyName(36, L"11C.png");
			this->cardList->Images->SetKeyName(37, L"11D.png");
			this->cardList->Images->SetKeyName(38, L"11H.png");
			this->cardList->Images->SetKeyName(39, L"11S.png");
			this->cardList->Images->SetKeyName(40, L"12C.png");
			this->cardList->Images->SetKeyName(41, L"12D.png");
			this->cardList->Images->SetKeyName(42, L"12H.png");
			this->cardList->Images->SetKeyName(43, L"12S.png");
			this->cardList->Images->SetKeyName(44, L"13C.png");
			this->cardList->Images->SetKeyName(45, L"13D.png");
			this->cardList->Images->SetKeyName(46, L"13H.png");
			this->cardList->Images->SetKeyName(47, L"13S.png");
			this->cardList->Images->SetKeyName(48, L"14C.png");
			this->cardList->Images->SetKeyName(49, L"14D.png");
			this->cardList->Images->SetKeyName(50, L"14H.png");
			this->cardList->Images->SetKeyName(51, L"14S.png");
			this->cardList->Images->SetKeyName(52, L"back.png");
			this->cardList->Images->SetKeyName(53, L"empty.png");
			// 
			// player_hand_info_panel
			// 
			this->player_hand_info_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->player_hand_info_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->player_hand_info_panel->ColumnCount = 1;
			this->player_hand_info_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->player_hand_info_panel->Controls->Add(this->player_hand_label, 0, 0);
			this->player_hand_info_panel->Controls->Add(this->player_hand_count, 0, 1);
			this->player_hand_info_panel->Location = System::Drawing::Point(44, 561);
			this->player_hand_info_panel->Name = L"player_hand_info_panel";
			this->player_hand_info_panel->RowCount = 2;
			this->player_hand_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->player_hand_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->player_hand_info_panel->Size = System::Drawing::Size(254, 100);
			this->player_hand_info_panel->TabIndex = 7;
			// 
			// player_hand_label
			// 
			this->player_hand_label->AutoSize = true;
			this->player_hand_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->player_hand_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->player_hand_label->Location = System::Drawing::Point(3, 0);
			this->player_hand_label->Name = L"player_hand_label";
			this->player_hand_label->Size = System::Drawing::Size(248, 50);
			this->player_hand_label->TabIndex = 8;
			this->player_hand_label->Text = L"SIZE OF THE PLAYERS HAND";
			this->player_hand_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// player_hand_count
			// 
			this->player_hand_count->AutoSize = true;
			this->player_hand_count->Dock = System::Windows::Forms::DockStyle::Fill;
			this->player_hand_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->player_hand_count->ForeColor = System::Drawing::Color::Red;
			this->player_hand_count->Location = System::Drawing::Point(3, 50);
			this->player_hand_count->Name = L"player_hand_count";
			this->player_hand_count->Size = System::Drawing::Size(248, 50);
			this->player_hand_count->TabIndex = 9;
			this->player_hand_count->Text = L"0";
			this->player_hand_count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// enemy_hand_back
			// 
			this->enemy_hand_back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->enemy_hand_back->Location = System::Drawing::Point(622, 12);
			this->enemy_hand_back->Name = L"enemy_hand_back";
			this->enemy_hand_back->Size = System::Drawing::Size(353, 160);
			this->enemy_hand_back->TabIndex = 8;
			this->enemy_hand_back->TabStop = false;
			// 
			// player_hand_back
			// 
			this->player_hand_back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->player_hand_back->Location = System::Drawing::Point(621, 501);
			this->player_hand_back->Name = L"player_hand_back";
			this->player_hand_back->Size = System::Drawing::Size(353, 160);
			this->player_hand_back->TabIndex = 9;
			this->player_hand_back->TabStop = false;
			// 
			// handBacksList
			// 
			this->handBacksList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"handBacksList.ImageStream")));
			this->handBacksList->TransparentColor = System::Drawing::Color::Transparent;
			this->handBacksList->Images->SetKeyName(0, L"enemyDeckBack0.png");
			this->handBacksList->Images->SetKeyName(1, L"enemyDeckBack1.png");
			this->handBacksList->Images->SetKeyName(2, L"enemyDeckBack2.png");
			this->handBacksList->Images->SetKeyName(3, L"enemyDeckBack3.png");
			this->handBacksList->Images->SetKeyName(4, L"enemyDeckBack4.png");
			this->handBacksList->Images->SetKeyName(5, L"enemyDeckBack5.png");
			this->handBacksList->Images->SetKeyName(6, L"enemyDeckBack6.png");
			this->handBacksList->Images->SetKeyName(7, L"enemyDeckBack7.png");
			this->handBacksList->Images->SetKeyName(8, L"enemyDeckBack8.png");
			this->handBacksList->Images->SetKeyName(9, L"enemyDeckBack9.png");
			this->handBacksList->Images->SetKeyName(10, L"playerDeckBack.png");
			this->handBacksList->Images->SetKeyName(11, L"playerDeckBack1.png");
			this->handBacksList->Images->SetKeyName(12, L"playerDeckBack2.png");
			this->handBacksList->Images->SetKeyName(13, L"playerDeckBack3.png");
			this->handBacksList->Images->SetKeyName(14, L"playerDeckBack4.png");
			this->handBacksList->Images->SetKeyName(15, L"playerDeckBack5.png");
			this->handBacksList->Images->SetKeyName(16, L"playerDeckBack6.png");
			this->handBacksList->Images->SetKeyName(17, L"playerDeckBack7.png");
			this->handBacksList->Images->SetKeyName(18, L"playerDeckBack8.png");
			this->handBacksList->Images->SetKeyName(19, L"playerDeckBack9.png");
			// 
			// turn_wait_button
			// 
			this->turn_wait_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->turn_wait_button->Location = System::Drawing::Point(3, 109);
			this->turn_wait_button->Name = L"turn_wait_button";
			this->turn_wait_button->Size = System::Drawing::Size(240, 36);
			this->turn_wait_button->TabIndex = 10;
			this->turn_wait_button->Text = L"PASS TURNS";
			this->turn_wait_button->UseVisualStyleBackColor = true;
			this->turn_wait_button->Click += gcnew System::EventHandler(this, &GameScreen::turn_wait_button_Click);
			// 
			// turn_wait_info_panel
			// 
			this->turn_wait_info_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->turn_wait_info_panel->ColumnCount = 1;
			this->turn_wait_info_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->turn_wait_info_panel->Controls->Add(this->turn_wait_button, 0, 2);
			this->turn_wait_info_panel->Controls->Add(this->turn_wait_label, 0, 0);
			this->turn_wait_info_panel->Controls->Add(this->turn_wait_count, 0, 1);
			this->turn_wait_info_panel->Location = System::Drawing::Point(52, 211);
			this->turn_wait_info_panel->Name = L"turn_wait_info_panel";
			this->turn_wait_info_panel->RowCount = 3;
			this->turn_wait_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->turn_wait_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->turn_wait_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				42)));
			this->turn_wait_info_panel->Size = System::Drawing::Size(246, 148);
			this->turn_wait_info_panel->TabIndex = 11;
			// 
			// turn_wait_label
			// 
			this->turn_wait_label->AutoSize = true;
			this->turn_wait_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->turn_wait_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->turn_wait_label->Location = System::Drawing::Point(3, 0);
			this->turn_wait_label->Name = L"turn_wait_label";
			this->turn_wait_label->Size = System::Drawing::Size(240, 53);
			this->turn_wait_label->TabIndex = 11;
			this->turn_wait_label->Text = L"TURNS TO PASS";
			this->turn_wait_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// turn_wait_count
			// 
			this->turn_wait_count->AutoSize = true;
			this->turn_wait_count->Dock = System::Windows::Forms::DockStyle::Fill;
			this->turn_wait_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->turn_wait_count->ForeColor = System::Drawing::Color::Red;
			this->turn_wait_count->Location = System::Drawing::Point(3, 53);
			this->turn_wait_count->Name = L"turn_wait_count";
			this->turn_wait_count->Size = System::Drawing::Size(240, 53);
			this->turn_wait_count->TabIndex = 12;
			this->turn_wait_count->Text = L"0";
			this->turn_wait_count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// effect_info_panel
			// 
			this->effect_info_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->effect_info_panel->ColumnCount = 1;
			this->effect_info_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->effect_info_panel->Controls->Add(this->effect_info_1_label, 0, 0);
			this->effect_info_panel->Controls->Add(this->effect_info_2_label, 0, 1);
			this->effect_info_panel->Location = System::Drawing::Point(44, 12);
			this->effect_info_panel->Name = L"effect_info_panel";
			this->effect_info_panel->RowCount = 2;
			this->effect_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->effect_info_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->effect_info_panel->Size = System::Drawing::Size(254, 96);
			this->effect_info_panel->TabIndex = 12;
			// 
			// effect_info_1_label
			// 
			this->effect_info_1_label->AutoSize = true;
			this->effect_info_1_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->effect_info_1_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			this->effect_info_1_label->Location = System::Drawing::Point(3, 0);
			this->effect_info_1_label->Name = L"effect_info_1_label";
			this->effect_info_1_label->Size = System::Drawing::Size(248, 47);
			this->effect_info_1_label->TabIndex = 0;
			this->effect_info_1_label->Text = L"NUMBER OF CARDS TO DRAW:";
			this->effect_info_1_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// effect_info_2_label
			// 
			this->effect_info_2_label->AutoSize = true;
			this->effect_info_2_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->effect_info_2_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->effect_info_2_label->ForeColor = System::Drawing::Color::Red;
			this->effect_info_2_label->Location = System::Drawing::Point(3, 47);
			this->effect_info_2_label->Name = L"effect_info_2_label";
			this->effect_info_2_label->Size = System::Drawing::Size(248, 49);
			this->effect_info_2_label->TabIndex = 1;
			this->effect_info_2_label->Text = L"0";
			this->effect_info_2_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GameScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Green;
			this->ClientSize = System::Drawing::Size(1141, 671);
			this->Controls->Add(this->effect_info_panel);
			this->Controls->Add(this->turn_wait_info_panel);
			this->Controls->Add(this->player_hand_back);
			this->Controls->Add(this->enemy_hand_back);
			this->Controls->Add(this->player_hand_info_panel);
			this->Controls->Add(this->enemy_hand_info_panel);
			this->Controls->Add(this->top_card);
			this->Controls->Add(this->view_deck);
			this->Controls->Add(this->sidebar);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"GameScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameScreen";
			this->sidebar->ResumeLayout(false);
			this->sidebar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_deck_back))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->first_drawn_card))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top_card))->EndInit();
			this->enemy_hand_info_panel->ResumeLayout(false);
			this->enemy_hand_info_panel->PerformLayout();
			this->player_hand_info_panel->ResumeLayout(false);
			this->player_hand_info_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy_hand_back))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player_hand_back))->EndInit();
			this->turn_wait_info_panel->ResumeLayout(false);
			this->turn_wait_info_panel->PerformLayout();
			this->effect_info_panel->ResumeLayout(false);
			this->effect_info_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		bool gameReset = false;

	private: System::Void gameEndChecks() {
		if (card->p1Deck.size() <= 0) {
			gameReset = true;
			MakaoGame::EndScreen endScreen(true);
			endScreen.ShowDialog();
			gameStart();
		}
		else if (card->p2Deck.size() <= 0) {
			gameReset = true;
			MakaoGame::EndScreen endScreen(false);
			endScreen.ShowDialog();
			gameStart();
		}
	}
	
	private: System::Void actionEndChecks() {

		turn_wait_info_panel->Hide();

		if (card->mainDeck.size() <= 0) {
			start_and_draw_button->Hide();
			main_deck_back->Hide();
		}

		if (card->mainDeck.size() > 0) {
			start_and_draw_button->Show();
			main_deck_back->Show();
		}

		if (card->p1Deck.size() == 1) {
			player_hand_count->Text = "MAKAO";
		}

		if (card->p2Deck.size() == 1) {
			enemy_hand_count->Text = "MAKAO";
		}

		bool effectPanelSwitch = false;

		if (gameplay->twoCardBlock == true || gameplay->threeCardBlock == true || gameplay->kingCardBlock == true) {
			effect_info_panel->Show();
			effect_info_1_label->Text = "NUMBER OF CARDS TO DRAW:";
			effect_info_2_label->Text = gameplay->drawCnt.ToString();

			effectPanelSwitch = true;
		}

		if (gameplay->fourCardBlock == true) {
			start_and_draw_button->Hide();

			turn_wait_info_panel->Show();
			if(gameplay->p1waitCnt != 0)
				turn_wait_count->Text = gameplay->p1waitCnt.ToString();
			else if (gameplay->p2waitCnt != 0)
				turn_wait_count->Text = gameplay->p2waitCnt.ToString();
			else
				turn_wait_count->Text = gameplay->waitCnt.ToString();
		}

		if (gameplay->jackCardBlock1 == true || gameplay->jackCardBlock2 == true) {
			effect_info_panel->Show();
			effect_info_1_label->Text = "CARD NUMBER CHOSEN:";
			effect_info_2_label->Text = gameplay->jackNum.ToString();

			effectPanelSwitch = true;
		}

		if (gameplay->aceCardBlock1 == true || gameplay->aceCardBlock2 == true) {
			effect_info_panel->Show();
			effect_info_1_label->Text = "CARD SUIT CHOSEN:";

			if (gameplay->aceSuit == 1) effect_info_2_label->Text = "SPADES";
			else if (gameplay->aceSuit == 2) effect_info_2_label->Text = "CLUBS";
			else if (gameplay->aceSuit == 3) effect_info_2_label->Text = "DIAMONDS";
			else if (gameplay->aceSuit == 4) effect_info_2_label->Text = "HEARTS";

			effectPanelSwitch = true;
		}

		if(!effectPanelSwitch)
			effect_info_panel->Hide();

		this->top_card->Image = this->cardList->Images[card->getCardImgId(card->playedPile.back_item)];

	}

	private: System::Void updateHandsBacks() {

		System::String^ playerBack = "playerDeckBack";
		System::String^ enemyBack = "enemyDeckBack";

		if (card->p1Deck.size() >= 9)
			playerBack += "9";
		else
			playerBack += card->p1Deck.size().ToString();
		playerBack += ".png";
			
		if (card->p2Deck.size() >= 9)
			enemyBack += "9";
		else
			enemyBack += card->p2Deck.size().ToString();
		enemyBack += ".png";
			
		this->player_hand_back->Image = this->handBacksList->Images[playerBack];
		this->enemy_hand_back->Image = this->handBacksList->Images[enemyBack];
	}
	
	private: System::Void gameStart() {
		card->startDraw();

		this->top_card->Image = this->cardList->Images[card->getCardImgId(card->playedPile.back_item)];
		this->main_deck_back->Image = this->cardList->Images["back.png"];

		view_deck->Show();
		top_card->Show();
		main_deck_back->Show();
		player_hand_info_panel->Show();
		enemy_hand_info_panel->Show();
		main_deck_count->Show();
		main_deck_label->Show();
		start_and_draw_button->Show();

		first_drawn_card->Hide();
		play_drawn_card_button->Hide();
		draw_rest_button->Hide();
		turn_wait_info_panel->Hide();
		effect_info_panel->Hide();

		this->player_hand_count->Text = card->p1Deck.size().ToString();
		this->enemy_hand_count->Text = card->p2Deck.size().ToString();
		this->main_deck_count->Text = card->mainDeck.size().ToString();
		this->start_and_draw_button->Text = "DRAW CARD";

		gameplay->sw = true;
	}

	private: System::Void start_and_draw_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!gameplay->sw) {
			gameStart();
		}
		else {
			bool drawSw = false;

			if (card->mainDeck.size() > 0)
				if (gameplay->checkCardMatch(card->mainDeck.back_item))
					drawSw = true;

			if (drawSw) {
				first_drawn_card->Show();
				draw_rest_button->Show();
				play_drawn_card_button->Show();

				this->first_drawn_card->Image = this->cardList->Images[card->getCardImgId(card->mainDeck.back_item)];

				start_and_draw_button->Hide();
				view_deck->Hide();
			}
			else {
				gameplay->playerAction(1, 0);
				gameEndChecks();
				if (gameReset) { gameReset = false; return; }
				gameplay->enemyAction();
				gameEndChecks();
				if (gameReset) { gameReset = false; return; }

				this->player_hand_count->Text = card->p1Deck.size().ToString();
				this->enemy_hand_count->Text = card->p2Deck.size().ToString();
				this->main_deck_count->Text = card->mainDeck.size().ToString();

				actionEndChecks();
			}
		}
		updateHandsBacks();
	}
	private: System::Void exit_game_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void view_deck_Click(System::Object^ sender, System::EventArgs^ e) {
		if (card->p1Deck.size() > 0) {
			MakaoGame::HandViewScreen handScreen(card, gameplay);
			handScreen.ShowDialog();

			this->player_hand_count->Text = card->p1Deck.size().ToString();
			this->enemy_hand_count->Text = card->p2Deck.size().ToString();
			this->main_deck_count->Text = card->mainDeck.size().ToString();

			gameEndChecks();
			if (gameReset) { gameReset = false; return; }

			actionEndChecks();
		}
		updateHandsBacks();

	}
	private: System::Void turn_wait_button_Click(System::Object^ sender, System::EventArgs^ e) {
		turn_wait_info_panel->Hide();
		effect_info_panel->Hide();
		gameplay->playerAction(2, 0);
		gameEndChecks();
		if (gameReset) { gameReset = false; return; }

		while (gameplay->p1waitCnt != 0) {
			gameplay->playerAction(2, 0);
			gameplay->enemyAction();
			gameEndChecks();
			if (gameReset) { gameReset = false; return; }
		}
		start_and_draw_button->Show();

		this->player_hand_count->Text = card->p1Deck.size().ToString();
		this->enemy_hand_count->Text = card->p2Deck.size().ToString();
		this->main_deck_count->Text = card->mainDeck.size().ToString();

		actionEndChecks();
		updateHandsBacks();
	}
	private: System::Void play_drawn_card_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (card->mainDeck.back_item->number == 11) {
			MakaoGame::DrawnCardPlayScreen drawnScreen(card, gameplay, true);
			drawnScreen.ShowDialog();
		}
		else if (card->mainDeck.back_item->number == 14) {
			MakaoGame::DrawnCardPlayScreen drawnScreen(card, gameplay, false);
			drawnScreen.ShowDialog();
		}

		gameplay->playerAction(3, card->mainDeck.size() - 1);
		gameEndChecks();
		if (gameReset) { gameReset = false; return; }
		gameplay->enemyAction();
		gameEndChecks();
		if (gameReset) { gameReset = false; return; }

		this->enemy_hand_count->Text = card->p2Deck.size().ToString();
		this->main_deck_count->Text = card->mainDeck.size().ToString();

		actionEndChecks();
		updateHandsBacks();

		first_drawn_card->Hide();
		draw_rest_button->Hide();
		play_drawn_card_button->Hide();

		start_and_draw_button->Show();
		view_deck->Show();
	}

	private: System::Void draw_rest_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->playerAction(1, 0);
		gameEndChecks();
		if (gameReset) { gameReset = false; return; }
		gameplay->enemyAction();
		gameEndChecks();
		if (gameReset) { gameReset = false; return; }

		this->player_hand_count->Text = card->p1Deck.size().ToString();
		this->enemy_hand_count->Text = card->p2Deck.size().ToString();
		this->main_deck_count->Text = card->mainDeck.size().ToString();

		actionEndChecks();
		updateHandsBacks();

		first_drawn_card->Hide();
		draw_rest_button->Hide();
		play_drawn_card_button->Hide();

		start_and_draw_button->Show();
		view_deck->Show();
	}
};
}
