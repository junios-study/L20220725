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
}

void Player::Attack()
{
}
