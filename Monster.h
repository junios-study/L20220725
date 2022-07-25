#pragma once
class Monster //parent class , base class 
{
public:
	Monster();
	~Monster();

	int HP;
	int	Gold;
	int	X;
	int	Y;

	void Move();
	void Attack();
};

