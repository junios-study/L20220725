#include "Player.h"
#include <iostream>

using namespace std;

//constructor
Player::Player()
{
	HP = 100;
	X = 10;
	Y = 10;
	Gold = 0;

	printf("Player Constructor\n");
}

//Destructor
Player::~Player()
{
	cout << "Player Destructor" << endl;
}

void Player::Move()
{
	cout << "Player Move" << endl;
}

void Player::Attack()
{
	cout << "Player Attack" << endl;
}


int Player::GetGold()
{
	return Gold;
}

void Player::SetGold(int NewGold)
{
	if (NewGold < 0)
		return;

	Gold = NewGold;
}