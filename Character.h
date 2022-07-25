#pragma once
#include <string>

class Character
{
public:
	Character();
	virtual ~Character();

protected: //인터페이스 비공개, 상속 가능
	int HP;
	int	Gold;
	int	X;
	int	Y;

	std::string name;


public:
	virtual void Move();
	void Attack();

};

