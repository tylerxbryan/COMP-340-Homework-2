#pragma once
#include "Player.h"
class UserPlayer :
	public Player
{
private:
	int userChoice;
	Deck* deck;
public:
	UserPlayer();
	~UserPlayer();
	UserPlayer(Deck* deck);
	//handles turn logic for user's turn
	void playerTurn();
	void InitialDraw();
};

