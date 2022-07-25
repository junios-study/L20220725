#pragma once
class Slime
{
public:
	Slime();
	~Slime();


	int HP;
	int	Gold;
	int	X;
	int	Y;

	void Move();
	void Attack();
};

