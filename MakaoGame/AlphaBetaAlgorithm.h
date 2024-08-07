#pragma once
#include <iostream>
#include <array>
#include <cliext/vector>
#include <math.h>

#include <fstream>

namespace MakaoGame {
	ref class AlphaBetaAlgorithm {
	public:
		cliext::vector <System::String^> aiMoves;

		AlphaBetaAlgorithm(
			int transferedDepth,
			int transferedDrawCounter,
			bool transferedHardMode,
			cliext::vector<MakaoGame::Cards::Card^> transferedMinimizerDeck,
			cliext::vector<MakaoGame::Cards::Card^> transferedMaximizerDeck,
			cliext::vector<MakaoGame::Cards::Card^> transferedPlayedPile,
			cliext::vector<MakaoGame::Cards::Card^> transferedDrawDeck,
			cliext::vector<bool> transferedCardBlocks,
			cliext::vector<int> transferedCardSpecialValues,
			cliext::vector<int> transferedTurnWaitValues) {

			originalDepth = transferedDepth * 2;
			hardMode = transferedHardMode;
			originalDrawCounter = transferedDrawCounter;

			originalMinimizerDeck = transferedMinimizerDeck;
			originalMaximizerDeck = transferedMaximizerDeck;

			originalPlayedPile = transferedPlayedPile;
			originalDrawDeck = transferedDrawDeck;
			originalCardBlocks = transferedCardBlocks;
			originalCardSpecialValues = transferedCardSpecialValues;
			originalTurnWaitValues = transferedTurnWaitValues;
		}

		float gainIndex() {
			return alphaBetaAlgorithm(originalDepth, hardMode, true, false, originalDrawCounter, -INFINITY, INFINITY,
				originalMinimizerDeck, originalMaximizerDeck, originalPlayedPile, originalDrawDeck,
				originalCardBlocks, originalCardSpecialValues, originalTurnWaitValues);
		}

		cliext::vector <int> decodeNamesAlgorithm(System::String^ cardId) {
			cliext::vector <int> choiceValues;
			array<System::String^>^ splitSingleCardId = cardId->Split(':');

			if (splitSingleCardId[0] == "DrP") {
				choiceValues.push_back(0);
				if (splitSingleCardId[1] == "0") choiceValues.push_back(0);
				else if (splitSingleCardId[1] == "J") {
					choiceValues.push_back(1);
					choiceValues.push_back(System::Convert::ToInt32(splitSingleCardId[2]));
				}
				else {
					choiceValues.push_back(2);
					choiceValues.push_back(System::Convert::ToInt32(splitSingleCardId[2]));
				}

			}
			else {
				if (splitSingleCardId[0] == "S") choiceValues.push_back(1);
				else if (splitSingleCardId[0] == "C") choiceValues.push_back(2);
				else if (splitSingleCardId[0] == "D") choiceValues.push_back(3);
				else choiceValues.push_back(4);

				if (splitSingleCardId[1] == "J") {
					choiceValues.push_back(11);
					choiceValues.push_back(System::Convert::ToInt32(splitSingleCardId[2]));
				}
				else if (splitSingleCardId[1] == "Q") choiceValues.push_back(12);
				else if (splitSingleCardId[1] == "K") choiceValues.push_back(13);
				else if (splitSingleCardId[1] == "A") {
					choiceValues.push_back(14);
					choiceValues.push_back(System::Convert::ToInt32(splitSingleCardId[2]));

				}
				else choiceValues.push_back(System::Convert::ToInt32(splitSingleCardId[1]));
			}
			return choiceValues;
		}

	private:
		MakaoGame::Cards^ card;

		int originalDepth;
		bool hardMode;

		int originalDrawCounter;

		cliext::vector<MakaoGame::Cards::Card^> originalMinimizerDeck;
		cliext::vector<MakaoGame::Cards::Card^> originalMaximizerDeck;

		cliext::vector<MakaoGame::Cards::Card^> originalPlayedPile;
		cliext::vector<MakaoGame::Cards::Card^> originalDrawDeck;
 
		cliext::vector<bool> originalCardBlocks;
		cliext::vector<int> originalCardSpecialValues;
		cliext::vector<int> originalTurnWaitValues;

		float alphaBetaAlgorithm(
			int depth, bool hardMode, bool maximizingPlayer, bool wasCardPlayed, int drawCounter, float alpha, float beta,
			cliext::vector<MakaoGame::Cards::Card^> minimizerDeck, cliext::vector<MakaoGame::Cards::Card^> maximizerDeck,
			cliext::vector<MakaoGame::Cards::Card^> playedPile, cliext::vector<MakaoGame::Cards::Card^> drawDeck,
			cliext::vector<bool> cardBlocks, cliext::vector<int> cardSpecialValues, cliext::vector<int> turnWaitValues
		) {

			cliext::vector<MakaoGame::Cards::Card^> minimizerDeckCopy = minimizerDeck;
			cliext::vector<MakaoGame::Cards::Card^> maximizerDeckCopy = maximizerDeck;
			cliext::vector<MakaoGame::Cards::Card^> playedPileCopy = playedPile;
			cliext::vector<MakaoGame::Cards::Card^> drawDeckCopy = drawDeck;

			cliext::vector<float> moveValues;

			cliext::vector<bool> cardBlocksCopy = cardBlocks;
			cliext::vector<int> cardSpecialValuesCopy = cardSpecialValues;
			cliext::vector<int> turnWaitValuesCopy = turnWaitValues;

			int drawCntCopy = drawCounter;

			if (minimizerDeckCopy.size() == 0)  return -INFINITY;
			else if (maximizerDeckCopy.size() == 0) return INFINITY;
			else if (depth <= 0) {
				float result = 10000 - maximizerDeckCopy.size() * 1000 + minimizerDeckCopy.size() * 100;

				if(wasCardPlayed){
					if (playedPileCopy.back_item->number == 2) result += 500;
					else if (playedPileCopy.back_item->number == 3) result += 600;
					else if (playedPileCopy.back_item->number == 4) result += 400;
					else if (playedPileCopy.back_item->number >= 5 && playedPileCopy.back_item->number <= 10) result += 300;
					else if (playedPileCopy.back_item->number == 11) result += 800;
					else if (playedPileCopy.back_item->number == 12) result += 200;
					else if (playedPileCopy.back_item->number == 13 && playedPileCopy.back_item->suit == 1) result += 900;
					else if (playedPileCopy.back_item->number == 13 && playedPileCopy.back_item->suit == 4) result += 900;
					else if (playedPileCopy.back_item->number == 13) result += 100;
					else result += 700;
				}
				else {
					if (drawDeckCopy.size() != 0) {
						if (hardMode && checkCardMatchAlgorithm(drawDeckCopy.back_item, playedPileCopy, cardBlocksCopy, cardSpecialValuesCopy)) {
							if (maximizingPlayer) result += 50;
							else result -= 50;
						}
						else {
							if (maximizingPlayer) result -= drawCntCopy * 1000;
							else result += drawCntCopy * 100;
						}
					}
					else {
						if (maximizingPlayer) result -= drawCntCopy * 1000;
						else result += drawCntCopy * 100;
					}
				}

				return result;
			}

			if (turnWaitValuesCopy[1] != 0 && maximizingPlayer == false) {
				turnWaitValuesCopy[1]--;
				cardBlocksCopy[2] = false;
				maximizingPlayer = true;
			}
			else if (turnWaitValuesCopy[2] != 0 && maximizingPlayer == true) {
				turnWaitValuesCopy[2]--;
				cardBlocksCopy[2] = false;
				maximizingPlayer = false;
			}

			bool addNames = false;
			bool alphaBetaSw = false;

			if (maximizingPlayer) {
				if (depth == originalDepth) addNames = true;

				if (!cardBlocksCopy[2] && drawDeckCopy.size() != 0) {
					if(!hardMode){
						float value = 10000 - maximizerDeckCopy.size() * 1000 + minimizerDeckCopy.size() * 100 - drawCntCopy * 1000;
						moveValues.push_back(value);
						if (addNames) aiMoves.push_back("Dr");

						alpha = cliext::max(alpha, value);
						if (beta <= alpha) alphaBetaSw = true;
					}
					else {
						if (checkCardMatchAlgorithm(drawDeckCopy.back_item, playedPileCopy, cardBlocksCopy, cardSpecialValuesCopy)) {
							playedPileCopy.push_back(drawDeckCopy.back_item);
							drawDeckCopy.pop_back();

							moveValues = cardPlayAlgorithm(depth, true, addNames, alpha, beta, true, drawCntCopy, "", minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
							drawDeckCopy = drawDeck;
							playedPileCopy = playedPile;

							float max_move = moveValues[cliext::max_element(moveValues.begin(), moveValues.end())._Myoffset];
							alpha = cliext::max(alpha, max_move);
							if (beta <= alpha) alphaBetaSw = true;
						}

						if (!alphaBetaSw) {
							for (int i = 0; i < drawCntCopy; i++) {
								if (drawDeckCopy.size() <= 1) {
									while (playedPileCopy.size() != 1) {
										drawDeckCopy.push_back(playedPileCopy.back());
										playedPileCopy.pop_back();
									}
									if (drawDeckCopy.size() != 0) drawDeckCopy = card->shuffleDeck(drawDeckCopy);
								}
								if (drawDeckCopy.size() == 0)
									break;

								maximizerDeckCopy.push_back(drawDeckCopy.back_item);
								drawDeckCopy.pop_back();
							}

							cardBlocksCopy[0] = false;
							cardBlocksCopy[1] = false;
							cardBlocksCopy[3] = false;
							cardBlocksCopy[5] = false;
							cardBlocksCopy[7] = false;

							float value = alphaBetaAlgorithm(depth - 1, hardMode, false, false, drawCntCopy, alpha, beta, minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
							moveValues.push_back(value);

							if (addNames) aiMoves.push_back("Dr");

							maximizerDeckCopy = maximizerDeck;
							drawDeckCopy = drawDeck;
							cardBlocksCopy = cardBlocks;

							alpha = cliext::max(alpha, value);
							if (beta <= alpha) alphaBetaSw = true;
						}
					}
				}
				
				if (!alphaBetaSw) {
					for (int i = 0; i < maximizerDeckCopy.size(); i++) {
						if (checkCardMatchAlgorithm(maximizerDeckCopy[i], playedPileCopy, cardBlocksCopy, cardSpecialValuesCopy)) {
							playedPileCopy.push_back(maximizerDeckCopy[i]);
							maximizerDeckCopy.erase(maximizerDeckCopy.begin() + i);

							moveValues = cardPlayAlgorithm(depth, true, addNames, alpha, beta, false, drawCntCopy, "", minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);

							float max_move = moveValues[cliext::max_element(moveValues.begin(), moveValues.end())._Myoffset];
							alpha = cliext::max(alpha, max_move);
							if (beta <= alpha) break;

							if (hardMode) {
								System::String^ previousCardId = "";
								if (addNames) previousCardId = aiMoves.back_item + ";";
								int nextCardIndex = 0;
								bool sw = false;
								while (nextCardIndex < maximizerDeckCopy.size()) {
									if (maximizerDeckCopy[nextCardIndex]->number == playedPileCopy.back_item->number) {
										playedPileCopy.push_back(maximizerDeckCopy[nextCardIndex]);
										maximizerDeckCopy.erase(maximizerDeckCopy.begin() + nextCardIndex);

										moveValues = cardPlayAlgorithm(depth, true, addNames, alpha, beta, false, drawCntCopy, previousCardId, minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
										nextCardIndex = 0;

										max_move = moveValues[cliext::max_element(moveValues.begin(), moveValues.end())._Myoffset];
										alpha = cliext::max(alpha, max_move);
										if (beta <= alpha) { sw = true; break; }
									}
									else nextCardIndex++;
								}
								if (sw) break;
							}
							
							maximizerDeckCopy = maximizerDeck;
							playedPileCopy = playedPile;
						}
					}
				}

				if (addNames) {
					if (moveValues.size() == 0) return -1;
					else return cliext::max_element(moveValues.begin(), moveValues.end())._Myoffset;
				}
				else {
					if (moveValues.size() == 0) {
						turnWaitValuesCopy[1] += turnWaitValuesCopy[0] - 1;
						turnWaitValuesCopy[0] = 0;
						moveValues = cardPlayAlgorithm(depth, true, addNames, alpha, beta, false, drawCntCopy, "", minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
						
					}
					return moveValues[cliext::max_element(moveValues.begin(), moveValues.end())._Myoffset];
				}
			}
			else {
				if (!cardBlocksCopy[2] && drawDeckCopy.size() != 0) {
					if (!hardMode) {
						float value = 10000 - maximizerDeckCopy.size() * 1000 + minimizerDeckCopy.size() * 100 + drawCntCopy * 100;
						moveValues.push_back(value);

						beta = cliext::min(beta, value);
						if (beta <= alpha) alphaBetaSw = true;
					}
					else {
						if (checkCardMatchAlgorithm(drawDeckCopy.back_item, playedPileCopy, cardBlocksCopy, cardSpecialValuesCopy)) {
							playedPileCopy.push_back(drawDeckCopy.back_item);
							drawDeckCopy.pop_back();

							moveValues = cardPlayAlgorithm(depth, false, addNames, alpha, beta, true, drawCntCopy, "", minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
							drawDeckCopy = drawDeck;
							playedPileCopy = playedPile;

							float min_move = moveValues[cliext::min_element(moveValues.begin(), moveValues.end())._Myoffset];
							beta = cliext::min(beta, min_move);
							if (beta <= alpha) alphaBetaSw = true;
						}

						if (!alphaBetaSw) {
							for (int i = 0; i < drawCntCopy; i++) {
								

								if (drawDeckCopy.size() <= 1) {
									while (playedPileCopy.size() != 1) {
										drawDeckCopy.push_back(playedPileCopy.back());
										playedPileCopy.pop_back();
									}
									if (drawDeckCopy.size() != 0) drawDeckCopy = card->shuffleDeck(drawDeckCopy);
								}
								if (drawDeckCopy.size() == 0)
									break;
								minimizerDeckCopy.push_back(drawDeckCopy.back_item);
								drawDeckCopy.pop_back();
							}

							cardBlocksCopy[0] = false;
							cardBlocksCopy[1] = false;
							cardBlocksCopy[3] = false;
							cardBlocksCopy[4] = false;
							cardBlocksCopy[6] = false;

							float value = alphaBetaAlgorithm(depth - 1, hardMode, true, false, drawCntCopy, alpha, beta, minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
							moveValues.push_back(value);

							minimizerDeckCopy = minimizerDeck;
							drawDeckCopy = drawDeck;
							cardBlocksCopy = cardBlocks;

							beta = cliext::min(beta, value);
							if (beta <= alpha) alphaBetaSw = true;

						}
					}
				}

				if (!alphaBetaSw) {
					for (int i = 0; i < minimizerDeckCopy.size(); i++) {
						if (checkCardMatchAlgorithm(minimizerDeckCopy[i], playedPileCopy, cardBlocksCopy, cardSpecialValuesCopy)) {
							playedPileCopy.push_back(minimizerDeckCopy[i]);
							minimizerDeckCopy.erase(minimizerDeckCopy.begin() + i);

							moveValues = cardPlayAlgorithm(depth, false, addNames, alpha, beta, false, drawCntCopy, "", minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);

							float min_move = moveValues[cliext::min_element(moveValues.begin(), moveValues.end())._Myoffset];
							beta = cliext::min(beta, min_move);
							if (beta <= alpha) break;

							if (hardMode) {
								int nextCardIndex = 0;
								bool sw = false;
								while (nextCardIndex < maximizerDeckCopy.size()) {
									if (maximizerDeckCopy[nextCardIndex]->number == playedPileCopy.back_item->number) {
										playedPileCopy.push_back(maximizerDeckCopy[nextCardIndex]);
										maximizerDeckCopy.erase(maximizerDeckCopy.begin() + nextCardIndex);

										moveValues = cardPlayAlgorithm(depth, false, addNames, alpha, beta, false, drawCntCopy, "", minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
										nextCardIndex = 0;

										min_move = moveValues[cliext::min_element(moveValues.begin(), moveValues.end())._Myoffset];
										beta = cliext::min(beta, min_move);
										if (beta <= alpha) { sw = true; break; }
									}
									else nextCardIndex++;
								}
								if (sw) break;
							}

							minimizerDeckCopy = minimizerDeck;
							playedPileCopy = playedPile;

						}
					}
				}
				
				if (moveValues.size() == 0) {
					turnWaitValuesCopy[2] += turnWaitValuesCopy[0] - 1;
					turnWaitValuesCopy[0] = 0;
					moveValues = cardPlayAlgorithm(depth, false, addNames, alpha, beta, false, drawCntCopy, "", minimizerDeckCopy, maximizerDeckCopy, playedPileCopy, drawDeckCopy, moveValues, cardBlocksCopy, cardSpecialValuesCopy, turnWaitValuesCopy);
				}
				return moveValues[cliext::min_element(moveValues.begin(), moveValues.end())._Myoffset];
			}
		}

		bool checkCardMatchAlgorithm(
			MakaoGame::Cards::Card^ playedCard, cliext::vector<MakaoGame::Cards::Card^> playedPile,
			cliext::vector<bool> cardBlocks, cliext::vector<int> cardSpecialValues) {

			if (cardBlocks[0] == true) {
				if (playedCard->number == 2)
					return true;
				return false;
			}

			if (cardBlocks[1] == true) {
				if (playedCard->number == 3)
					return true;
				return false;
			}

			if (cardBlocks[2] == true) {
				if (playedCard->number == 4)
					return true;
				return false;
			}

			if (cardBlocks[4] == true || cardBlocks[5] == true) {
				if (playedCard->number != 11) {
					if (playedCard->number == cardSpecialValues[0])
						return true;
					else
						return false;
				}
				return true;
			}

			if (cardBlocks[3] == true) {
				if (cardSpecialValues[2] == 1) {
					if (playedCard->number == 13 && playedCard->suit == 4)
						return true;
					else if (playedCard->number == 12 && playedCard->suit == 4)
						return true;
					return false;
				}
				else if (cardSpecialValues[2] == 4) {
					if (playedCard->number == 13 && playedCard->suit == 1)
						return true;
					else if (playedCard->number == 12 && playedCard->suit == 1)
						return true;
					return false;
				}
				return false;
			}

			if (cardBlocks[6] == true || cardBlocks[7] == true) {
				if (playedCard->number != 14) {
					if (playedCard->suit == cardSpecialValues[1])
						return true;
					else
						return false;
				}
				return true;
			}

			if (playedPile.back_item->suit == playedCard->suit)
				return true;
			else if (playedPile.back_item->number == playedCard->number)
				return true;
			return false;
		}

		cliext::vector<float> cardPlayAlgorithm(
			int depth, bool maximizingPlayer, bool addNames, float alpha, float beta,
			bool isItCardDraw, int drawCounter, System::String^ previousCardId,
			cliext::vector<MakaoGame::Cards::Card^> minimizerDeck, cliext::vector<MakaoGame::Cards::Card^> maximizerDeck,
			cliext::vector<MakaoGame::Cards::Card^> playedPile, cliext::vector<MakaoGame::Cards::Card^> drawDeck,
			cliext::vector<float> moveValues, cliext::vector<bool> cardBlocks,
			cliext::vector<int> cardSpecialValues, cliext::vector<int> turnWaitValues) {

			bool nextPlayer;
			if (maximizingPlayer) nextPlayer = false;
			else nextPlayer = true;

			float value;

			int specialCardAmountPlayed = 0;
			

			if (playedPile.back_item->number == 11) {
				if (maximizingPlayer) {
					cardBlocks[4] = false;
					cardBlocks[5] = true;
				}
				else {
					cardBlocks[4] = true;
					cardBlocks[5] = false;
				}
				cardBlocks[6] = false;
				cardBlocks[7] = false;

				for (int j = 5; j <= 10; j++) {
					specialCardAmountPlayed++;
					cardSpecialValues[0] = j;

					value = alphaBetaAlgorithm(depth - 1, hardMode, nextPlayer, true, drawCounter, alpha, beta, minimizerDeck, maximizerDeck, playedPile, drawDeck, cardBlocks, cardSpecialValues, turnWaitValues);
					moveValues.push_back(value);

					if (maximizingPlayer) alpha = cliext::max(alpha, value);
					else beta = cliext::min(beta, value);

					if (beta <= alpha) break;
				}
			}
			else if (playedPile.back_item->number == 14) {
				if (maximizingPlayer) {
					cardBlocks[6] = false;
					cardBlocks[7] = true;
				}
				else {
					cardBlocks[6] = true;
					cardBlocks[7] = false;
				}

				for (int j = 1; j <= 4; j++) {
					specialCardAmountPlayed++;
					cardSpecialValues[1] = j;

					value = alphaBetaAlgorithm(depth - 1, hardMode, nextPlayer, true, drawCounter, alpha, beta, minimizerDeck, maximizerDeck, playedPile, drawDeck, cardBlocks, cardSpecialValues, turnWaitValues);
					moveValues.push_back(value);

					if (maximizingPlayer) alpha = cliext::max(alpha, value);
					else beta = cliext::min(beta, value);

					if (beta <= alpha) break;
				}
			}
			else {
				if (playedPile.back_item->number == 2) { drawCounter += 2; cardBlocks[0] = true; }
				else if (playedPile.back_item->number == 3) { drawCounter += 3; cardBlocks[1] = true; }
				else if (playedPile.back_item->number == 4) { turnWaitValues[0] += 1; cardBlocks[2] = true; }
				else if (playedPile.back_item->number == 12 && cardBlocks[3] == true) {
					if (playedPile.back_item->suit == 1 && cardSpecialValues[2] == 4) drawCounter += 5;
					else if (playedPile.back_item->suit == 4 && cardSpecialValues[2] == 1) drawCounter += 5;
				}
				else if (playedPile.back_item->number == 13 && playedPile.back_item->suit == 1) {
					drawCounter += 5;
					cardBlocks[3] = true;
					cardSpecialValues[2] = 4;
				}
				else if (playedPile.back_item->number == 13 && playedPile.back_item->suit == 4) {
					drawCounter += 5;
					cardBlocks[3] = true;
					cardSpecialValues[2] = 1;
				}
				value = alphaBetaAlgorithm(depth - 1, hardMode, nextPlayer, true, drawCounter, alpha, beta, minimizerDeck, maximizerDeck, playedPile, drawDeck, cardBlocks, cardSpecialValues, turnWaitValues);
				moveValues.push_back(value);
			}
			if (addNames) codeNamesAlgorithm(playedPile.back_item, isItCardDraw, previousCardId, specialCardAmountPlayed);

			return moveValues;
		}

		void codeNamesAlgorithm(MakaoGame::Cards::Card^ playedCard, bool isItDraw, System::String^ previousCardId, int specialCardAmountPlayed) {
			System::String^ cardId = previousCardId;

			if (isItDraw) {
				cardId += "DrP";
				if (playedCard->number == 11) {
					cardId += ":J:";
					for (int i = 5; i <= specialCardAmountPlayed + 4; i++) aiMoves.push_back(cardId + i.ToString());
				}
				else if (playedCard->number == 14) {
					cardId += ":A:";
					for (int i = 1; i <= specialCardAmountPlayed; i++) aiMoves.push_back(cardId + i.ToString());
				}
				else aiMoves.push_back(cardId + ":0");
			}
			else {
				if (playedCard->suit == 1) cardId += "S:";
				else if (playedCard->suit == 2) cardId += "C:";
				else if (playedCard->suit == 3) cardId += "D:";
				else cardId += "H:";

				if (playedCard->number == 11) {
					cardId += "J:";
					for (int i = 5; i <= specialCardAmountPlayed + 4; i++) aiMoves.push_back(cardId + i.ToString());

				}
				else if (playedCard->number == 12) {
					cardId += "Q";
					aiMoves.push_back(cardId);
				}
				else if (playedCard->number == 13) {
					cardId += "K";
					aiMoves.push_back(cardId);
				}
				else if (playedCard->number == 14) {
					cardId += "A:";
					for (int i = 1; i <= specialCardAmountPlayed; i++) aiMoves.push_back(cardId + i.ToString());

				}
				else {
					cardId += playedCard->number.ToString();
					aiMoves.push_back(cardId);
				}
			}
		}

	};
}
