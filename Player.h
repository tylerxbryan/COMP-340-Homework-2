#pragma once
#include "Deck.h"

class Player
{
private:
	std::list<Card*> hand;
	int score;

public:
	Player();
	~Player();
	void drawCard(Card* card);
};

