#pragma once
class Character
{
public:
	Character();
	~Character();

protected: //인터페이스 비공개, 상속 가능
	int HP;
	int	Gold;
	int	X;
	int	Y;

public:
	void Move();
	void Attack();
};

