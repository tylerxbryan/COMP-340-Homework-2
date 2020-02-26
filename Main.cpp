#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "UserPlayer.h"
#include "Dealer.h"

int main() 
{
	Deck* deck = new Deck();
	UserPlayer* player = new UserPlayer(deck);
	Dealer* dealer = new Dealer(deck);

	player->InitialDraw();
	dealer->InitialDraw();

	player->playerTurn();
	if (player->getScore() > 21) {
		return 0;
	}
	dealer->dealerTurn();
	if (dealer->getScore() > 21) {
		return 0;
	}

	if (player->getScore() > dealer->getScore()) {
		std::cout << "Player score is " << player->getScore() << "\n" << "Dealer score is " << dealer->getScore() << "\nPlayer wins!" << std::endl;
	}
	else if (player->getScore() < dealer->getScore()) {
		std::cout << "Player score is " << player->getScore() << "\n" << "Dealer score is " << dealer->getScore() << "\nDealer wins!" << std::endl;
	}
	else {
		std::cout << "Tie! Dealer wins!" << std::endl;
	}

	delete deck;
	delete player;
	delete dealer;
}
