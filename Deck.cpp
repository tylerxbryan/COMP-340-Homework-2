#include "Deck.h"

Deck::Deck()
{
	tempCardptr = nullptr;
	for(int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			deck.push_back(new Card(suits[i], ranks[j], values[j]));
		}
	}
	srand((int)time(0));
}

Deck::~Deck()
{
	for (std::vector<Card*>::iterator currentCard = this->deck.begin(); currentCard != this->deck.end(); ++currentCard) {
		delete((*currentCard));
	}
}

//randomly select a card from the deck, store it in a temporary ptr, remove that card from the deck vector, then return temp ptr
Card* Deck::draw()
{
	tempCardptr = deck[rand() % (deck.size() - 1)];
	deck.erase(std::remove(deck.begin(), deck.end(), tempCardptr), deck.end());
	return tempCardptr;
}
