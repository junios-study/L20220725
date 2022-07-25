#pragma once
#include "Character.h"

class Player : public Character
{
public:  //인터페이스 공개, 상속 가능
	Player();
	~Player();

public:
	int GetGold();
	void SetGold(int NewGold);


private: //인터페이스 비공개,  상속 불가능
	void RealMove();

};

