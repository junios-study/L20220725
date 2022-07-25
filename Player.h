#pragma once

class Player
{
public:  //공공의
	Player();
	~Player();

private: //개인의
	//member variable, property
	int HP;
	int	Gold;
	int	X;
	int	Y;

	//member function, method
public:
	void Move();

	int GetGold();
	void SetGold(int NewGold);

	//accessor
	//int GetGold() { return Gold; }
	//void SetGold(int NewGold)
	//{ 
	//	if (NewGold < 0)
	//		return;

	//	Gold = NewGold;
	//}

private:
	void RealMove();
	void Attack();
};

