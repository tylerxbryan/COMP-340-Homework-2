#pragma once
#include "Deck.h"

class Player
{
public:
	std::list<Card> hand;
	void drawCard(Card card);
};

