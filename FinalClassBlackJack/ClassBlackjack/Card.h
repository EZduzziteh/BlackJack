#pragma once
#include <string>
using namespace std;


class Card
{
public:
	Card();
	Card(int v, string s, bool drawn);
	~Card();
	int CheckValue(int PlayerCards);
	int value;
	string suit;
	bool isdrawn;

};

