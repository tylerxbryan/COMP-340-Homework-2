#pragma once
#include <list>
#include "Card.h"

class Deck
{
private:
	std::string suits[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
	std::string ranks[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
	int values[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};

public:
	Deck();
	~Deck();
	std::list<Card> deck;
	Card draw();
};

