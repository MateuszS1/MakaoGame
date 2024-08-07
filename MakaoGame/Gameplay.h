#pragma once
#include <iostream>
#include <array>
#include <cliext/vector>
#include <math.h>

namespace MakaoGame{
	ref class Gameplay {
	public:
		bool sw = false; 
		
		MakaoGame::Cards^ card;
		
		int jackNum = 0;
		int aceSuit = 0;
		int kingSuit = 0;

		bool twoCardBlock = false;
		bool threeCardBlock = false;
		bool fourCardBlock = false;
		bool kingCardBlock = false;
		
		bool jackCardBlock1 = false;
		bool jackCardBlock2 = false;

		bool aceCardBlock1 = false;
		bool aceCardBlock2 = false;

		int drawCnt = 1;

		int waitCnt = 0;
		int p1waitCnt = 0;
		int p2waitCnt = 0;

		int aiSwitch = 0;
		int aiDepth = 5;

		Gameplay(MakaoGame::Cards^ card_data) {
			card = card_data;
		}

		void specialCardEffect(MakaoGame::Cards::Card^ playedCard, int amountOfCards) {
			if (playedCard->number == 2) {
				twoCardBlock = true;

				if (drawCnt == 1) drawCnt = 0;
				for (int i = 0; i < amountOfCards; i++) drawCnt += 2;
			}
			else if (playedCard->number == 3) {
				threeCardBlock = true;

				if (drawCnt == 1) drawCnt = 0;
				for (int i = 0; i < amountOfCards; i++) drawCnt += 3;

			}
			else if (playedCard->number == 4) {
				fourCardBlock = true;
				waitCnt += amountOfCards;
			}
			else if (playedCard->number == 12 && kingCardBlock == true) {
				if (playedCard->suit == 1 || kingSuit == 4) drawCnt == 1;
				else if (playedCard->suit == 4 || kingSuit == 1) drawCnt == 1;
			}
			else if (playedCard->number == 13) {
				if (playedCard->suit == 1 || playedCard->suit == 4) {
					kingCardBlock = true;

					kingSuit = playedCard->suit;
					if (drawCnt == 1) drawCnt = 0;
					for (int i = 0; i < amountOfCards; i++) drawCnt += 5;
				}
			}
		}

		void jackCardEffect(int number, int player) {
			if (player == 1) { jackCardBlock1 = true; jackCardBlock2 = false;}
			else if (player == 2) { jackCardBlock1 = false; jackCardBlock2 = true; }
			jackNum = number;
		}

		void aceCardEffect(int suit, int player) {
			if (player == 1) { aceCardBlock1 = true; aceCardBlock2 = false; }
			else if (player == 2) { aceCardBlock1 = false; aceCardBlock2 = true; }
			aceSuit = suit;
		}

		bool checkCardMatch(MakaoGame::Cards::Card^ playedCard) {
			if (twoCardBlock == true) {
				if (playedCard->number == 2)
					return true;
				return false;
			}
			
			if (threeCardBlock == true) {
				if (playedCard->number == 3)
					return true;
				return false;
			}

			if (fourCardBlock == true) {
				if (playedCard->number == 4)
					return true;
				return false;
			}

			if (jackCardBlock1 == true || jackCardBlock2 == true) {
				if (playedCard->number != 11) {
					if (playedCard->number == jackNum)
						return true;
					else
						return false;
				}
				return true;
			}

			if (kingCardBlock == true) {
				if (kingSuit == 1) {
					if (playedCard->number == 13 && playedCard->suit == 4)
						return true;
					else if (playedCard->number == 12 && playedCard->suit == 4)
						return true;
					return false;
				}
				else if (kingSuit == 4) {
					if (playedCard->number == 13 && playedCard->suit == 1)
						return true;
					else if (playedCard->number == 12 && playedCard->suit == 1)
						return true;
					return false;
				}
				return false;
			}
			
			if (aceCardBlock1 == true || aceCardBlock2 == true) {
				if (playedCard->number != 14) {
					if (playedCard->suit == aceSuit)
						return true;
					else
						return false;
				}
				return true;
			}

			if (card->playedPile.back_item->suit == playedCard->suit)
				return true;
			else if (card->playedPile.back_item->number == playedCard->number)
				return true;
			return false;
		}

		void playerAction(int action, int currentCardId) {
			jackCardBlock1 = false;
			aceCardBlock1 = false;

			if (p1waitCnt != 0)
				playerWaitTick(1);
			else {
				if (action == 0) {
					specialCardEffect(card->p1Deck[currentCardId], 1);
					card->p1Deck = card->playCard(card->p1Deck, currentCardId);
				}
				else if (action == 1)
					playerDraw();
				else if (action == 2) {
					p1waitCnt = waitCnt;
					waitCnt = 0;
					fourCardBlock = false;
				}
				else if (action == 3) {
					specialCardEffect(card->mainDeck[currentCardId], 1);
					card->mainDeck = card->playCard(card->mainDeck, currentCardId);
				}
			}
		}

		void enemyAction() {
			if (aiSwitch == 0) enemySimpleAI();
			else if (aiSwitch == 1) 
				enemyAlgorithm(false);
			else 
				enemyAlgorithm(true);
		}

	private:
		void playerDraw() {
			twoCardBlock = false;
			threeCardBlock = false;
			kingCardBlock = false;

			for (int i = 0; i < drawCnt; i++)
				card->p1Deck = card->drawCard(card->p1Deck);
			drawCnt = 1;
		}

		void playerWaitTick(int player) {
			if (player == 1 && p1waitCnt != 0) p1waitCnt--;
			else if (player == 2 && p2waitCnt != 0) p2waitCnt--;
		}

		void enemyDraw() {
			twoCardBlock = false;
			threeCardBlock = false;
			kingCardBlock = false;

			jackCardBlock2 = false;
			aceCardBlock2 = false;

			for(int i = 0; i < drawCnt; i++)
				card->p2Deck = card->drawCard(card->p2Deck);
			drawCnt = 1;
		}

		void enemySimpleAI() {
			jackCardBlock2 = false;
			aceCardBlock2 = false;

			if (p2waitCnt != 0)
				playerWaitTick(2);
			else {
				bool actionSwitch = false;

				for (int i = 0; i < card->p2Deck.size(); i++) {
					if (checkCardMatch(card->p2Deck[i])) {
						if (card->p2Deck.size() != 1) {
							if (card->p2Deck[i]->number == 11) {
								bool jackSwitch = false;
								for (int i = 0; i < card->p2Deck.size(); i++) {
									if (card->p2Deck[i]->number >= 5 && card->p2Deck[i]->number <= 10) {
										jackCardEffect(card->p2Deck[i]->number, 2);
										jackSwitch = true;
										break;
									}
								}
								if (jackSwitch == true) {
									srand(unsigned(time(NULL)));
									jackCardEffect((rand() % 6) + 5, 2);
								}
								
							}
							else if (card->p2Deck[i]->number == 14) {
								aceCardEffect(card->p2Deck.back_item->suit, 2);
							}
							else {
								specialCardEffect(card->p2Deck[i], 1);
							}
						}

						jackCardBlock1 = false;
						aceCardBlock1 = false;
						card->p2Deck = card->playCard(card->p2Deck, i);
						actionSwitch = true;

						break;
					}
				}
				if (!actionSwitch && waitCnt != 0) {
					p2waitCnt = waitCnt;
					waitCnt = 0;
					fourCardBlock = false;
				}
				else if (!actionSwitch && p2waitCnt == 0 && card->mainDeck.size() != 0) enemyDraw();
			}
		}

		void enemyAlgorithm(bool hardMode) {
			if (p2waitCnt != 0)
				playerWaitTick(2);
			else {
				cliext::vector<bool> cardBlocks;
				cardBlocks.push_back(twoCardBlock);
				cardBlocks.push_back(threeCardBlock);
				cardBlocks.push_back(fourCardBlock);
				cardBlocks.push_back(kingCardBlock);
				cardBlocks.push_back(jackCardBlock1);
				cardBlocks.push_back(jackCardBlock2);
				cardBlocks.push_back(aceCardBlock1);
				cardBlocks.push_back(aceCardBlock2);

				cliext::vector<int> cardSpecialValues;
				cardSpecialValues.push_back(jackNum);
				cardSpecialValues.push_back(aceSuit);
				cardSpecialValues.push_back(kingSuit);

				cliext::vector<int> turnWaitValues;
				turnWaitValues.push_back(waitCnt);
				turnWaitValues.push_back(p1waitCnt);
				turnWaitValues.push_back(p2waitCnt);

				MakaoGame::AlphaBetaAlgorithm^ algorithm = gcnew AlphaBetaAlgorithm(aiDepth, drawCnt, hardMode, card->p1Deck, card->p2Deck, card->playedPile, card->mainDeck, cardBlocks, cardSpecialValues, turnWaitValues);
				float resultIndex = algorithm->gainIndex();

				if (resultIndex == -1) {
					p2waitCnt = waitCnt - 1;
					waitCnt = 0;
					fourCardBlock = false;
				}
				else if (algorithm->aiMoves[resultIndex] == "Dr") enemyDraw();
				else {
					array<System::String^>^ splitAllCardId = algorithm->aiMoves[resultIndex]->Split(';');
					cliext::vector <int> choiceValues;

					for (int i = 0; i < splitAllCardId->Length - 1; i++) {
						choiceValues = algorithm->decodeNamesAlgorithm(splitAllCardId[i]);
						for (int i = 0; i < card->p2Deck.size(); i++) {
							if (choiceValues[0] == card->p2Deck[i]->suit && choiceValues[1] == card->p2Deck[i]->number) {
								card->p2Deck = card->playCard(card->p2Deck, i);
								break;
							}
						}
					}

					choiceValues = algorithm->decodeNamesAlgorithm(splitAllCardId[splitAllCardId->Length - 1]);

					twoCardBlock = false;
					threeCardBlock = false;
					fourCardBlock = false;
					kingCardBlock = false;

					jackCardBlock2 = false;

					aceCardBlock2 = false;

					if (choiceValues[0] == 0 && hardMode) {
						card->mainDeck = card->playCard(card->mainDeck, card->mainDeck.size() - 1);
						if (choiceValues[1] == 1) {
							jackCardEffect(choiceValues[2], 2);
						}
						else if (choiceValues[1] == 2) {
							aceCardEffect(choiceValues[2], 2);
						}
						else {
							jackCardBlock1 = false;
							aceCardBlock1 = false;
							specialCardEffect(card->playedPile.back_item, 1);
						}
					}
					else {
						for (int i = 0; i < card->p2Deck.size(); i++) {
							if (choiceValues[0] == card->p2Deck[i]->suit && choiceValues[1] == card->p2Deck[i]->number) {
								jackCardBlock1 = false;
								aceCardBlock1 = false;

								if (card->p2Deck[i]->number == 11) jackCardEffect(choiceValues[2], 2);
								else if (card->p2Deck[i]->number == 14) aceCardEffect(choiceValues[2], 2);
								else specialCardEffect(card->p2Deck[i], 1);

								card->p2Deck = card->playCard(card->p2Deck, i);
								break;
							}
						}
					}
				}
			}
			


		}
	};
}
