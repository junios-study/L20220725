#pragma once
#include "Character.h"

class Player : public Character
{
public:  //�������̽� ����, ��� ����
	Player();
	~Player();

public:
	int GetGold();
	void SetGold(int NewGold);


private: //�������̽� �����,  ��� �Ұ���
	void RealMove();

};

