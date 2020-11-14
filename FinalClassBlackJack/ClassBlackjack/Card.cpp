#include "Card.h"
#include <iostream>


Card::Card()
{
	value = 0;
	suit = "S";
	isdrawn = false;
}
Card::Card(int v, string s, bool drawn) {
	value = v;
	suit = s;
	isdrawn = drawn;
}


Card::~Card()
{
}


int Card::CheckValue(int PlayerCards) {//Checks and prints card value and suit
	int CardValue = 0;
	//Checkifspades
	if (PlayerCards < 0)
	{
		cout << "Error, Number generated too low!";
		CardValue = 0;
	}
	else if (PlayerCards == 1) {
		CardValue = 11;
		cout << "Ace of Spades\n";
	}

	else if (PlayerCards < 11) {
		CardValue = PlayerCards;
		cout << CardValue << " of Spades\n";
	}
	else if (PlayerCards == 11) {
		CardValue = 10;
		cout << "Jack of Spades\n";
	}
	else if (PlayerCards == 12) {
		CardValue = 10;
		cout << "Queen of Spades\n";
	}
	else if (PlayerCards == 13) {
		CardValue = 10;
		cout << "King of Spades\n";
	}

	//Check if Diamonds
	else if (PlayerCards == 14) {
		CardValue = 11;
		cout << "Ace of Diamonds\n";
	}
	else if (PlayerCards < 24) {
		CardValue = (PlayerCards - 13);
		cout << CardValue << " of Diamonds\n";
	}
	else if (PlayerCards == 24) {
		CardValue = 10;
		cout << "Jack of Diamonds\n";
	}
	else if (PlayerCards == 25) {
		CardValue = 10;
		cout << "Queen of Diamonds\n";
	}
	else if (PlayerCards == 26) {
		CardValue = 10;
		cout << "King of Diamonds\n";
	}

	//Check if Clubs
	else if (PlayerCards == 27) {
		CardValue = 11;
		cout << "Ace of Clubs\n";
	}
	else if (PlayerCards < 37) {
		CardValue = (PlayerCards - 26);
		cout << CardValue << " of Clubs\n";
	}
	else if (PlayerCards == 37) {
		CardValue = 10;
		cout << "Jack of Clubs\n";
	}
	else if (PlayerCards == 38) {
		CardValue = 10;
		cout << "Queen of Clubs\n";
	}
	else if (PlayerCards == 39) {
		CardValue = 10;
		cout << "King of Clubs\n";
	}

	//Check if Hearts
	else if (PlayerCards == 40) {
		CardValue = 11;
		cout << "Ace of Hearts\n";
	}
	else if (PlayerCards < 50) {
		CardValue = (PlayerCards - 39);
		cout << CardValue << " of Hearts\n";
	}
	else if (PlayerCards == 50) {
		CardValue = 10;
		cout << "Jack of Hearts\n";
	}
	else if (PlayerCards == 51) {
		CardValue = 10;
		cout << "Queen of Hearts\n";
	}
	else if (PlayerCards == 52) {
		CardValue = 10;
		cout << "King of Hearts\n";
	}
	else {
		cout << "Error, Number generated too high!";
		CardValue = 0;
	}
	return CardValue;
}