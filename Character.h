#pragma once
class Character
{
public:
	Character();
	~Character();

protected: //�������̽� �����, ��� ����
	int HP;
	int	Gold;
	int	X;
	int	Y;

public:
	void Move();
	void Attack();
};

