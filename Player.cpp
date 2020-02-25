#include "Player.h"

Player::Player()
{
	this->score = 0;
}

Player::~Player()
{
	for (std::vector<Card*>::iterator currentCard = this->hand.begin(); currentCard != this->hand.end(); ++currentCard) {
		delete((*currentCard));
	}
}

//card passed will originate from Deck's draw method
void Player::drawCard(Card* card)
{
	hand.push_back(card);
	this->score += card->getValue();
}
