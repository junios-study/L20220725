#include <iostream>
#include "Player.h"
#include <conio.h>
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

//���� ����� ���ļ� �����
//OOP, ����� ����̶�, ���»���� �ٸ���(�Ѵ� ������)
int main()
{
	bool bIsRunning = true;
	Player* Myplayer = new Player();
	Goblin* YourGoblin = new Goblin();
	Slime* YourSlime = new Slime();

	Boar* YourBoar = new Boar();

	//�ź��� �÷��̾�
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