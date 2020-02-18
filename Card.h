#pragma once
#include <string>

class Card
{
private:

public:
	Card();
	Card(std::string suit, std::string rank, int value);
	std::string suit;
	std::string rank;
	int value;
	int getValue();
	std::string toString();
};

