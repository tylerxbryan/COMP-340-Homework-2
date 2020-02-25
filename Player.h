#pragma once
#include "Deck.h"
//#include <vector>
#include <iostream>

class Player
{
private:
	
protected:
	std::vector<Card*> hand;
	int score;

public:
	Player();
	~Player();
	void drawCard(Card* card);
};

