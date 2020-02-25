#pragma once
#include "Player.h"
class Dealer :
	public Player
{
private:
	Deck* deck;
public:
	Dealer();
	Dealer(Deck* deck);
	//handles logic for dealer's turn
	void dealerTurn();
	void InitialDraw();
};

