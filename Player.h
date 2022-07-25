#pragma once

class Player
{
public:
	Player();
	~Player();

	//member variable, property
	int HP;
	int	Gold;
	int	X;
	int	Y;

	//member function, method
	void Move();
	void Attack();
};

