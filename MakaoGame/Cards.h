#pragma once
#include <iostream>
#include <algorithm>
#include <array>
#include <random>
#include <chrono>
#include <cliext/vector>
#include <cliext/algorithm>
#include <cliext/functional>

namespace MakaoGame {

	ref class Randomizer
	{
	public:
		static int myrandom(int i) {
			return rand() % i;
		}
	};

	delegate int MyDel(int);

	ref class Cards {

	public:
		ref struct Card {
			Card(int x, int y) {
				number = x;
				suit = y;
			}

			int number;
			int suit;
		};

		cliext::vector<Card^> mainDeck;
		cliext::vector<Card^> p1Deck;
		cliext::vector<Card^> p2Deck;
		cliext::vector<Card^> playedPile;

		void startDraw() {
			while (!mainDeck.empty()) mainDeck.pop_back();
			while (!p1Deck.empty()) p1Deck.pop_back();
			while (!p2Deck.empty()) p2Deck.pop_back();
			while (!playedPile.empty()) playedPile.pop_back();

			mainDeck = createDeck(mainDeck);
			for (int i = 0; i < 5; i++) {
				p1Deck = drawCard(p1Deck);
				p2Deck = drawCard(p2Deck);
			}
			playedPile = firstDraw();
		}

		cliext::vector<Card^> drawCard(cliext::vector<Card^> pDeck) {
			if (mainDeck.size() == 0)
				reshufflePlie();
			pDeck.push_back(mainDeck.back());
			mainDeck.pop_back();

			return pDeck;
		}

		System::String^ getCardImgId(Card^ selectedCard) {
			System::String^ cardId = selectedCard->number.ToString();
			switch (selectedCard->suit)
			{
			case 1:
				cardId += "S";
				break;
			case 2:
				cardId += "C";
				break;
			case 3:
				cardId += "D";
				break;
			case 4:
				cardId += "H";
				break;
			default:
				break;
			}
			cardId += ".png";
			return cardId;
		}

		cliext::vector<Card^> playCard(cliext::vector<Card^> pDeck, int id) {
			if (mainDeck.size() == 0)
				reshufflePlie();
			playedPile.push_back(pDeck[id]);
			
			pDeck.erase(pDeck.begin() + id);

			return pDeck;
		}

		cliext::vector<Card^> shuffleDeck(cliext::vector<Card^> deck) {
			srand(unsigned(time(NULL)));

			MyDel^ func = gcnew MyDel(Randomizer::myrandom);

			cliext::random_shuffle(deck.begin(), deck.end(), func);
			return deck;
		}

	private:
		cliext::vector<Card^> createDeck(cliext::vector<Card^> deck) {
			int counter = 0;
			for (int i = 0; i < 13; i++) {
				for (int j = 1; j <= 4; j++) {
					deck.push_back(gcnew Card(i + 2, j));
					counter++;
				}
			}

			deck = shuffleDeck(deck);
			return deck;
		}

		cliext::vector<Card^> firstDraw() {
			if (mainDeck.back()->number > 10 || mainDeck.back()->number < 5) {
				for (int i = mainDeck.size() - 1; i >= 0; i--) {
					if (mainDeck[i]->number <= 10 && mainDeck[i]->number >= 5) {
						playedPile.push_back(mainDeck[i]);
						mainDeck.erase(mainDeck.begin() + i);
						return playedPile;
					}
				}
			}
			else {
				playedPile.push_back(mainDeck.back());
				mainDeck.pop_back();
				return playedPile;
			}
		}

		void reshufflePlie() {
			while (playedPile.size() != 1) {
				mainDeck.push_back(playedPile.back());
				playedPile.pop_back();
			}
			mainDeck = shuffleDeck(mainDeck);
		}

	};
}