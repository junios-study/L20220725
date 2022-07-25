#include <iostream>
#include "Player.h"
#include <conio.h>
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

//여러 사람이 합쳐서 만든다
//OOP, 만드는 사람이랑, 쓰는사람이 다르다(둘다 개발자)
int main()
{
	bool bIsRunning = true;
	Player* Myplayer = new Player();
	Goblin* YourGoblin = new Goblin();
	Slime* YourSlime = new Slime();

	Boar* YourBoar = new Boar();

	//신불자 플레이어
	Myplayer->SetGold(-10000);

	while (bIsRunning) // My engine
	{
		//input
		int KeyCode = _getch();
		//process
		if (KeyCode == 'Q' || KeyCode == 'q')
		{
			bIsRunning = false;
		}
		Myplayer->Move();
		YourGoblin->Move();
		YourSlime->Move();
		YourBoar->Move();
		//render
	}

	delete YourBoar;
	delete YourSlime;
	delete YourGoblin;
	delete Myplayer;
	


	return 0;
}