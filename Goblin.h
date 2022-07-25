#pragma once
class Goblin
{
public:
	Goblin();
	~Goblin();

	int HP;
	int	Gold;
	int	X;
	int	Y;

	void Move();
	void Attack();
};

