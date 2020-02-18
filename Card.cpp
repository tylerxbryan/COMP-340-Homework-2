#include "Card.h"

Card::Card()
{
	this->suit = "";
	this->rank = "";
	this->value = 0;
}

Card::Card(std::string suit, std::string rank, int value)
{
	this->suit = suit;
	this->rank = rank;
	this->value = value;
}

int Card::getValue()
{
	return this->value;
}

std::string Card::toString()
{
	return std::string(this->rank + " of " + this->suit);
}
