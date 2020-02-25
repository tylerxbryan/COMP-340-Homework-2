#include "UserPlayer.h"

UserPlayer::UserPlayer()
{
	this->score = 0;
	this->userChoice = 0;
	this->deck = nullptr;
}

UserPlayer::UserPlayer(Deck* deck)
{
	this->score = 0;
	this->userChoice = 0;
	this->deck = deck;
}

void UserPlayer::playerTurn()
{
	std::cout << "Player's score is: " << this->score << "\n";
	std::cout << "Player will you Hit or Stand?\n";
	std::cout << " [1] Hit\n";
	std::cout << " [2] Stand\n";

	std::cin >> userChoice;

	//loop until our user chooses to stand or busts
	while (userChoice != 2) {
		this->drawCard(deck->draw());
		std::cout << "Player drew " << this->hand[hand.size() - 1] << "\n";
		std::cout << "Player's score is: " << this->score << "\n";
		if (this->score > 21) {
			std::cout << "Player busts! Dealer wins\n";
			return;
		}
		std::cout << "Player will you Hit or Stand?\n";
		std::cout << " [1] Hit\n";
		std::cout << " [2] Stand\n";

		std::cin >> userChoice;
	}
}

void UserPlayer::InitialDraw()
{
	this->drawCard(deck->draw());
	this->drawCard(deck->draw());
	std::cout << "Plater drew " << this->hand[0]->toString() << " and " << this->hand[1]->toString() << "\n";
}
