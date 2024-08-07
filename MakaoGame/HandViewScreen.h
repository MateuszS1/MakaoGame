#pragma once

namespace MakaoGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HandViewScreen
	/// </summary>
	public ref class HandViewScreen : public System::Windows::Forms::Form
	{
		
	private: System::Windows::Forms::Label^ action_title_label;
	private: System::Windows::Forms::Button^ jack_6_button;
	private: System::Windows::Forms::Button^ jack_7_button;
	private: System::Windows::Forms::Button^ jack_8_button;
	private: System::Windows::Forms::Button^ jack_9_button;
	private: System::Windows::Forms::Button^ jack_10_button;





	private: System::Windows::Forms::TableLayoutPanel^ jack_panel;
	private: System::Windows::Forms::Button^ jack_5_button;


	private: System::Windows::Forms::TableLayoutPanel^ ace_panel;
	private: System::Windows::Forms::Button^ hearts_button;

	private: System::Windows::Forms::Button^ spade_button;
	private: System::Windows::Forms::Button^ diamond_button;


	private: System::Windows::Forms::Button^ club_button;

	private: MakaoGame::Cards^ card;
	private: System::Windows::Forms::Label^ warning_label;
	private: System::Windows::Forms::Button^ more_cards_button;
	private: System::Windows::Forms::Button^ no_more_cards_button;
	private: System::Windows::Forms::TableLayoutPanel^ more_cards_panel;
	private: MakaoGame::Gameplay^ gameplay;
	public:
		HandViewScreen(MakaoGame::Cards^ card_data, MakaoGame::Gameplay^ gameplay_data)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			card = card_data;
			gameplay = gameplay_data;
			this->current_card_image->Image = this->cardImgList->Images[card->getCardImgId(card->p1Deck.front_item)];
			move_left_button->Hide();
			
			if (card->p1Deck.size() == 1)
				move_right_button->Hide();

			ace_panel->Hide();
			jack_panel->Hide();
			warning_label->Hide();
			more_cards_panel->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HandViewScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit_hand_button;
	private: System::Windows::Forms::ImageList^ cardImgList;
	private: System::Windows::Forms::PictureBox^ current_card_image;



	private: System::Windows::Forms::Button^ play_card_button;
	private: System::Windows::Forms::Button^ move_right_button;
	private: System::Windows::Forms::Button^ move_left_button;
	private: System::ComponentModel::IContainer^ components;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HandViewScreen::typeid));
			this->exit_hand_button = (gcnew System::Windows::Forms::Button());
			this->cardImgList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->current_card_image = (gcnew System::Windows::Forms::PictureBox());
			this->play_card_button = (gcnew System::Windows::Forms::Button());
			this->move_right_button = (gcnew System::Windows::Forms::Button());
			this->move_left_button = (gcnew System::Windows::Forms::Button());
			this->action_title_label = (gcnew System::Windows::Forms::Label());
			this->jack_6_button = (gcnew System::Windows::Forms::Button());
			this->jack_7_button = (gcnew System::Windows::Forms::Button());
			this->jack_8_button = (gcnew System::Windows::Forms::Button());
			this->jack_9_button = (gcnew System::Windows::Forms::Button());
			this->jack_10_button = (gcnew System::Windows::Forms::Button());
			this->jack_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->jack_5_button = (gcnew System::Windows::Forms::Button());
			this->ace_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->hearts_button = (gcnew System::Windows::Forms::Button());
			this->spade_button = (gcnew System::Windows::Forms::Button());
			this->diamond_button = (gcnew System::Windows::Forms::Button());
			this->club_button = (gcnew System::Windows::Forms::Button());
			this->warning_label = (gcnew System::Windows::Forms::Label());
			this->more_cards_button = (gcnew System::Windows::Forms::Button());
			this->no_more_cards_button = (gcnew System::Windows::Forms::Button());
			this->more_cards_panel = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->current_card_image))->BeginInit();
			this->jack_panel->SuspendLayout();
			this->ace_panel->SuspendLayout();
			this->more_cards_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// exit_hand_button
			// 
			this->exit_hand_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->exit_hand_button->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->exit_hand_button->Location = System::Drawing::Point(277, 401);
			this->exit_hand_button->Margin = System::Windows::Forms::Padding(2);
			this->exit_hand_button->Name = L"exit_hand_button";
			this->exit_hand_button->Size = System::Drawing::Size(152, 32);
			this->exit_hand_button->TabIndex = 0;
			this->exit_hand_button->Text = L"EXIT";
			this->exit_hand_button->UseVisualStyleBackColor = true;
			this->exit_hand_button->Click += gcnew System::EventHandler(this, &HandViewScreen::exit_hand_button_Click);
			// 
			// cardImgList
			// 
			this->cardImgList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"cardImgList.ImageStream")));
			this->cardImgList->TransparentColor = System::Drawing::Color::Transparent;
			this->cardImgList->Images->SetKeyName(0, L"2C.png");
			this->cardImgList->Images->SetKeyName(1, L"2D.png");
			this->cardImgList->Images->SetKeyName(2, L"2H.png");
			this->cardImgList->Images->SetKeyName(3, L"2S.png");
			this->cardImgList->Images->SetKeyName(4, L"3C.png");
			this->cardImgList->Images->SetKeyName(5, L"3D.png");
			this->cardImgList->Images->SetKeyName(6, L"3H.png");
			this->cardImgList->Images->SetKeyName(7, L"3S.png");
			this->cardImgList->Images->SetKeyName(8, L"4C.png");
			this->cardImgList->Images->SetKeyName(9, L"4D.png");
			this->cardImgList->Images->SetKeyName(10, L"4H.png");
			this->cardImgList->Images->SetKeyName(11, L"4S.png");
			this->cardImgList->Images->SetKeyName(12, L"5C.png");
			this->cardImgList->Images->SetKeyName(13, L"5D.png");
			this->cardImgList->Images->SetKeyName(14, L"5H.png");
			this->cardImgList->Images->SetKeyName(15, L"5S.png");
			this->cardImgList->Images->SetKeyName(16, L"6C.png");
			this->cardImgList->Images->SetKeyName(17, L"6D.png");
			this->cardImgList->Images->SetKeyName(18, L"6H.png");
			this->cardImgList->Images->SetKeyName(19, L"6S.png");
			this->cardImgList->Images->SetKeyName(20, L"7C.png");
			this->cardImgList->Images->SetKeyName(21, L"7D.png");
			this->cardImgList->Images->SetKeyName(22, L"7H.png");
			this->cardImgList->Images->SetKeyName(23, L"7S.png");
			this->cardImgList->Images->SetKeyName(24, L"8C.png");
			this->cardImgList->Images->SetKeyName(25, L"8D.png");
			this->cardImgList->Images->SetKeyName(26, L"8H.png");
			this->cardImgList->Images->SetKeyName(27, L"8S.png");
			this->cardImgList->Images->SetKeyName(28, L"9C.png");
			this->cardImgList->Images->SetKeyName(29, L"9D.png");
			this->cardImgList->Images->SetKeyName(30, L"9H.png");
			this->cardImgList->Images->SetKeyName(31, L"9S.png");
			this->cardImgList->Images->SetKeyName(32, L"10C.png");
			this->cardImgList->Images->SetKeyName(33, L"10D.png");
			this->cardImgList->Images->SetKeyName(34, L"10H.png");
			this->cardImgList->Images->SetKeyName(35, L"10S.png");
			this->cardImgList->Images->SetKeyName(36, L"11C.png");
			this->cardImgList->Images->SetKeyName(37, L"11D.png");
			this->cardImgList->Images->SetKeyName(38, L"11H.png");
			this->cardImgList->Images->SetKeyName(39, L"11S.png");
			this->cardImgList->Images->SetKeyName(40, L"12C.png");
			this->cardImgList->Images->SetKeyName(41, L"12D.png");
			this->cardImgList->Images->SetKeyName(42, L"12H.png");
			this->cardImgList->Images->SetKeyName(43, L"12S.png");
			this->cardImgList->Images->SetKeyName(44, L"13C.png");
			this->cardImgList->Images->SetKeyName(45, L"13D.png");
			this->cardImgList->Images->SetKeyName(46, L"13H.png");
			this->cardImgList->Images->SetKeyName(47, L"13S.png");
			this->cardImgList->Images->SetKeyName(48, L"14C.png");
			this->cardImgList->Images->SetKeyName(49, L"14D.png");
			this->cardImgList->Images->SetKeyName(50, L"14H.png");
			this->cardImgList->Images->SetKeyName(51, L"14S.png");
			this->cardImgList->Images->SetKeyName(52, L"empty.png");
			// 
			// current_card_image
			// 
			this->current_card_image->Location = System::Drawing::Point(289, 116);
			this->current_card_image->Name = L"current_card_image";
			this->current_card_image->Size = System::Drawing::Size(128, 148);
			this->current_card_image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->current_card_image->TabIndex = 2;
			this->current_card_image->TabStop = false;
			// 
			// play_card_button
			// 
			this->play_card_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->play_card_button->Location = System::Drawing::Point(277, 353);
			this->play_card_button->Name = L"play_card_button";
			this->play_card_button->Size = System::Drawing::Size(152, 32);
			this->play_card_button->TabIndex = 4;
			this->play_card_button->Text = L"PLAY CARD";
			this->play_card_button->UseVisualStyleBackColor = true;
			this->play_card_button->Click += gcnew System::EventHandler(this, &HandViewScreen::play_card_button_Click);
			// 
			// move_right_button
			// 
			this->move_right_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->move_right_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->move_right_button->Location = System::Drawing::Point(539, 116);
			this->move_right_button->Name = L"move_right_button";
			this->move_right_button->Size = System::Drawing::Size(110, 148);
			this->move_right_button->TabIndex = 5;
			this->move_right_button->Text = L">>";
			this->move_right_button->UseVisualStyleBackColor = true;
			this->move_right_button->Click += gcnew System::EventHandler(this, &HandViewScreen::move_right_button_Click);
			// 
			// move_left_button
			// 
			this->move_left_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->move_left_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->move_left_button->Location = System::Drawing::Point(59, 116);
			this->move_left_button->Name = L"move_left_button";
			this->move_left_button->Size = System::Drawing::Size(110, 148);
			this->move_left_button->TabIndex = 6;
			this->move_left_button->Text = L"<<";
			this->move_left_button->UseVisualStyleBackColor = true;
			this->move_left_button->Click += gcnew System::EventHandler(this, &HandViewScreen::move_left_button_Click);
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
			this->action_title_label->Size = System::Drawing::Size(433, 29);
			this->action_title_label->TabIndex = 7;
			this->action_title_label->Text = L"PLEASE SELECT A CARD TO PLAY";
			// 
			// jack_6_button
			// 
			this->jack_6_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_6_button->Location = System::Drawing::Point(99, 3);
			this->jack_6_button->Name = L"jack_6_button";
			this->jack_6_button->Size = System::Drawing::Size(74, 85);
			this->jack_6_button->TabIndex = 10;
			this->jack_6_button->Text = L"6";
			this->jack_6_button->UseVisualStyleBackColor = true;
			this->jack_6_button->Click += gcnew System::EventHandler(this, &HandViewScreen::jack_6_button_Click);
			// 
			// jack_7_button
			// 
			this->jack_7_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_7_button->Location = System::Drawing::Point(190, 3);
			this->jack_7_button->Name = L"jack_7_button";
			this->jack_7_button->Size = System::Drawing::Size(75, 85);
			this->jack_7_button->TabIndex = 11;
			this->jack_7_button->Text = L"7";
			this->jack_7_button->UseVisualStyleBackColor = true;
			this->jack_7_button->Click += gcnew System::EventHandler(this, &HandViewScreen::jack_7_button_Click);
			// 
			// jack_8_button
			// 
			this->jack_8_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_8_button->Location = System::Drawing::Point(281, 3);
			this->jack_8_button->Name = L"jack_8_button";
			this->jack_8_button->Size = System::Drawing::Size(74, 85);
			this->jack_8_button->TabIndex = 12;
			this->jack_8_button->Text = L"8";
			this->jack_8_button->UseVisualStyleBackColor = true;
			this->jack_8_button->Click += gcnew System::EventHandler(this, &HandViewScreen::jack_8_button_Click);
			// 
			// jack_9_button
			// 
			this->jack_9_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_9_button->Location = System::Drawing::Point(373, 3);
			this->jack_9_button->Name = L"jack_9_button";
			this->jack_9_button->Size = System::Drawing::Size(90, 85);
			this->jack_9_button->TabIndex = 13;
			this->jack_9_button->Text = L"9";
			this->jack_9_button->UseVisualStyleBackColor = true;
			this->jack_9_button->Click += gcnew System::EventHandler(this, &HandViewScreen::jack_9_button_Click);
			// 
			// jack_10_button
			// 
			this->jack_10_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_10_button->Location = System::Drawing::Point(484, 3);
			this->jack_10_button->Name = L"jack_10_button";
			this->jack_10_button->Size = System::Drawing::Size(103, 85);
			this->jack_10_button->TabIndex = 14;
			this->jack_10_button->Text = L"10";
			this->jack_10_button->UseVisualStyleBackColor = true;
			this->jack_10_button->Click += gcnew System::EventHandler(this, &HandViewScreen::jack_10_button_Click);
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
			this->jack_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 108)));
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
			this->jack_panel->TabIndex = 15;
			// 
			// jack_5_button
			// 
			this->jack_5_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->jack_5_button->Location = System::Drawing::Point(3, 3);
			this->jack_5_button->Name = L"jack_5_button";
			this->jack_5_button->Size = System::Drawing::Size(80, 85);
			this->jack_5_button->TabIndex = 16;
			this->jack_5_button->Text = L"5";
			this->jack_5_button->UseVisualStyleBackColor = true;
			this->jack_5_button->Click += gcnew System::EventHandler(this, &HandViewScreen::jack_5_button_Click);
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
			this->ace_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 110)));
			this->ace_panel->Controls->Add(this->hearts_button, 6, 0);
			this->ace_panel->Controls->Add(this->spade_button, 0, 0);
			this->ace_panel->Controls->Add(this->diamond_button, 4, 0);
			this->ace_panel->Controls->Add(this->club_button, 2, 0);
			this->ace_panel->Location = System::Drawing::Point(142, 149);
			this->ace_panel->Name = L"ace_panel";
			this->ace_panel->RowCount = 1;
			this->ace_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->ace_panel->Size = System::Drawing::Size(428, 100);
			this->ace_panel->TabIndex = 16;
			// 
			// hearts_button
			// 
			this->hearts_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hearts_button->Location = System::Drawing::Point(320, 3);
			this->hearts_button->Name = L"hearts_button";
			this->hearts_button->Size = System::Drawing::Size(105, 94);
			this->hearts_button->TabIndex = 20;
			this->hearts_button->Text = L"HEARTS";
			this->hearts_button->UseVisualStyleBackColor = true;
			this->hearts_button->Click += gcnew System::EventHandler(this, &HandViewScreen::hearts_button_Click);
			// 
			// spade_button
			// 
			this->spade_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->spade_button->Location = System::Drawing::Point(3, 3);
			this->spade_button->Name = L"spade_button";
			this->spade_button->Size = System::Drawing::Size(84, 94);
			this->spade_button->TabIndex = 17;
			this->spade_button->Text = L"SPADE";
			this->spade_button->UseVisualStyleBackColor = true;
			this->spade_button->Click += gcnew System::EventHandler(this, &HandViewScreen::spade_button_Click);
			// 
			// diamond_button
			// 
			this->diamond_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->diamond_button->Location = System::Drawing::Point(222, 3);
			this->diamond_button->Name = L"diamond_button";
			this->diamond_button->Size = System::Drawing::Size(81, 94);
			this->diamond_button->TabIndex = 19;
			this->diamond_button->Text = L"DIAMOND";
			this->diamond_button->UseVisualStyleBackColor = true;
			this->diamond_button->Click += gcnew System::EventHandler(this, &HandViewScreen::diamond_button_Click);
			// 
			// club_button
			// 
			this->club_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->club_button->Location = System::Drawing::Point(109, 3);
			this->club_button->Name = L"club_button";
			this->club_button->Size = System::Drawing::Size(93, 94);
			this->club_button->TabIndex = 18;
			this->club_button->Text = L"CLUB";
			this->club_button->UseVisualStyleBackColor = true;
			this->club_button->Click += gcnew System::EventHandler(this, &HandViewScreen::club_button_Click);
			// 
			// warning_label
			// 
			this->warning_label->AutoSize = true;
			this->warning_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->warning_label->ForeColor = System::Drawing::Color::Red;
			this->warning_label->Location = System::Drawing::Point(199, 68);
			this->warning_label->Name = L"warning_label";
			this->warning_label->Size = System::Drawing::Size(315, 22);
			this->warning_label->TabIndex = 17;
			this->warning_label->Text = L"YOU CANNOT PLAY THIS CARD!";
			// 
			// more_cards_button
			// 
			this->more_cards_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->more_cards_button->Location = System::Drawing::Point(3, 3);
			this->more_cards_button->Name = L"more_cards_button";
			this->more_cards_button->Size = System::Drawing::Size(198, 98);
			this->more_cards_button->TabIndex = 18;
			this->more_cards_button->Text = L"YES";
			this->more_cards_button->UseVisualStyleBackColor = true;
			this->more_cards_button->Click += gcnew System::EventHandler(this, &HandViewScreen::more_cards_button_Click);
			// 
			// no_more_cards_button
			// 
			this->no_more_cards_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->no_more_cards_button->Location = System::Drawing::Point(227, 3);
			this->no_more_cards_button->Name = L"no_more_cards_button";
			this->no_more_cards_button->Size = System::Drawing::Size(198, 98);
			this->no_more_cards_button->TabIndex = 19;
			this->no_more_cards_button->Text = L"NO";
			this->no_more_cards_button->UseVisualStyleBackColor = true;
			this->no_more_cards_button->Click += gcnew System::EventHandler(this, &HandViewScreen::no_more_cards_button_Click);
			// 
			// more_cards_panel
			// 
			this->more_cards_panel->ColumnCount = 3;
			this->more_cards_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->more_cards_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->more_cards_panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				204)));
			this->more_cards_panel->Controls->Add(this->more_cards_button, 0, 0);
			this->more_cards_panel->Controls->Add(this->no_more_cards_button, 2, 0);
			this->more_cards_panel->Location = System::Drawing::Point(142, 136);
			this->more_cards_panel->Name = L"more_cards_panel";
			this->more_cards_panel->RowCount = 1;
			this->more_cards_panel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->more_cards_panel->Size = System::Drawing::Size(428, 104);
			this->more_cards_panel->TabIndex = 20;
			// 
			// HandViewScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(716, 443);
			this->Controls->Add(this->more_cards_panel);
			this->Controls->Add(this->warning_label);
			this->Controls->Add(this->ace_panel);
			this->Controls->Add(this->jack_panel);
			this->Controls->Add(this->action_title_label);
			this->Controls->Add(this->move_left_button);
			this->Controls->Add(this->move_right_button);
			this->Controls->Add(this->play_card_button);
			this->Controls->Add(this->current_card_image);
			this->Controls->Add(this->exit_hand_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"HandViewScreen";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"HandViewScreen";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->current_card_image))->EndInit();
			this->jack_panel->ResumeLayout(false);
			this->ace_panel->ResumeLayout(false);
			this->more_cards_panel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: int currentCardId = 0;
	private: int playedCardNumber = 0;

	private: bool wasCardPlayedSwitch = false;
	private: bool wasSpecialCardPlayedSwitch = false;

	private: void specialCardChoice() {
		more_cards_panel->Hide();
		move_left_button->Hide();
		move_right_button->Hide();
		current_card_image->Hide();
		exit_hand_button->Hide();
		play_card_button->Hide();

		if (playedCardNumber == 11) {
			action_title_label->Text = "PLEASE SELECT A CARD VALUE";
			jack_panel->Show();
		}
		else if (playedCardNumber == 14) {
			action_title_label->Text = "PLEASE SELECT A CARD SUIT";
			ace_panel->Show();
		}
	}

	private: System::Void exit_hand_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (wasSpecialCardPlayedSwitch) {
			specialCardChoice();
		}
		else {
			if (wasCardPlayedSwitch)
				gameplay->enemyAction();
			this->Close();
		}
		
	}
	private: System::Void move_left_button_Click(System::Object^ sender, System::EventArgs^ e) {
		currentCardId--;
		
		this->current_card_image->Image = this->cardImgList->Images[card->getCardImgId(card->p1Deck[currentCardId])];
		if(currentCardId <= 0)
			move_left_button->Hide();
		move_right_button->Show();
	}
	private: System::Void move_right_button_Click(System::Object^ sender, System::EventArgs^ e) {
		currentCardId++;

		this->current_card_image->Image = this->cardImgList->Images[card->getCardImgId(card->p1Deck[currentCardId])];
		if (currentCardId >= card->p1Deck.size() - 1)
			move_right_button->Hide();
		move_left_button->Show();
	}
	
	private: System::Void play_card_button_Click(System::Object^ sender, System::EventArgs^ e) {
		warning_label->Hide();

		if (wasCardPlayedSwitch) {
			if (card->p1Deck[currentCardId]->number != playedCardNumber) {
				warning_label->Show();
			}
			else {
				move_left_button->Hide();
				move_right_button->Hide();
				current_card_image->Hide();
				exit_hand_button->Hide();
				play_card_button->Hide();

				more_cards_panel->Show();

				action_title_label->Text = "DO YOU WANT TO PLAY MORE CARDS?";
			}
		}
		else if (!gameplay->checkCardMatch(card->p1Deck[currentCardId])) {
			warning_label->Show();
		}
		else {
			if (card->p1Deck.size() == 1) {
				gameplay->playerAction(0, currentCardId);
				gameplay->enemyAction();
				this->Close();
			}
			else {
				if (!wasCardPlayedSwitch) {
					playedCardNumber = card->p1Deck[currentCardId]->number;
					wasCardPlayedSwitch = true;
					if (card->p1Deck[currentCardId]->number == 11 || card->p1Deck[currentCardId]->number == 14) wasSpecialCardPlayedSwitch = true;
				}


				move_left_button->Hide();
				move_right_button->Hide();
				current_card_image->Hide();
				exit_hand_button->Hide();
				play_card_button->Hide();

				more_cards_panel->Show();

				action_title_label->Text = "DO YOU WANT TO PLAY MORE CARDS?";
			}
		}
	}
		   
	private: System::Void jack_5_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(5, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void jack_6_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(6, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);

		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void jack_7_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(7, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void jack_8_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(8, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void jack_9_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(9, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void jack_10_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->jackCardEffect(10, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void spade_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(1, 1);
		if(!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void club_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(2, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void diamond_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(3, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}
	private: System::Void hearts_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->aceCardEffect(4, 1);
		if (!wasSpecialCardPlayedSwitch) gameplay->playerAction(0, currentCardId);
	
		gameplay->enemyAction();
		this->Close();
	}

	private: System::Void more_cards_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->playerAction(0, currentCardId);
		
		currentCardId = 0;
		
		this->current_card_image->Image = this->cardImgList->Images[card->getCardImgId(card->p1Deck[currentCardId])];

		if(card->p1Deck.size() > 1) move_right_button->Show();
		current_card_image->Show();
		exit_hand_button->Show();
		play_card_button->Show();

		more_cards_panel->Hide();

		exit_hand_button->Text = "FINISH";
		action_title_label->Text = "PLEASE SELECT A CARD TO PLAY";
	}
	private: System::Void no_more_cards_button_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay->playerAction(0, currentCardId);
		if(wasSpecialCardPlayedSwitch){
			specialCardChoice();
		}
		else{
			gameplay->enemyAction();
			this->Close();
		}
	}
};
};
