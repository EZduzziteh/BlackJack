#pragma once
class Dealer
{
public:
	int HandTotal;
	int CardCounter;
	int Cards[13];
	int AceCounter ;
	Dealer();
	~Dealer();
	void TakeTurn();
};

