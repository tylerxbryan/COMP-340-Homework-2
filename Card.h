#pragma once
#include <string>

class Card
{
private:

public:
	Card();
	std::string suit;
	std::string rank;
	int value;
	int getValue();
	std::string toString();
};

