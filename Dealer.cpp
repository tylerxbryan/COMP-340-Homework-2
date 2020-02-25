#include "Dealer.h"

Dealer::Dealer()
{
	this->score = 0;
	this->deck = nullptr;
}

Dealer::Dealer(Deck* deck)
{
	this->score = 0;
	this->deck = deck;
}

void Dealer::dealerTurn()
{
	std::cout << "Dealer's face down card is " << this->hand[1]->toString() << "\n";
	std::cout << "Dealer's score is: " << this->score << "\n";
	while (this->score < 17) {
		this->drawCard(deck->draw());
		std::cout << "Dealer drew " << this->hand[hand.size() - 1]->toString() << "\n";
		std::cout << "Dealer's score is: " << this->score << "\n";
		if (this->score > 21) {
			std::cout << "Dealer busts! Player wins\n";
			return;
		}
	}
}

void Dealer::InitialDraw()
{
	this->drawCard(deck->draw());
	this->drawCard(deck->draw());
	std::cout << "Dealer drew " << this->hand[0]->toString() << " and face down card\n";
}
