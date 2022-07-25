#include <iostream>
#include "Player.h"
#include <conio.h>
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include "Character.h"
#include <vector>

using namespace std;

int main()
{
	srand(time(nullptr));

	vector<Character*> MyCharacters;
	
	MyCharacters.push_back(new Player());

	for (int i = 0; i < 10; ++i)
	{
		int Type = (rand() % 3) + 1;
		if (Type == 1)
		{
			MyCharacters.push_back(new Slime());
		}
		else if (Type == 2)
		{
			MyCharacters.push_back(new Goblin());
		}
		else if (Type == 3)
		{
			MyCharacters.push_back(new Boar());
		}
	}

	bool bIsRunning = true;

	while (bIsRunning)
	{
		//Input
		int KeyCode = _getch();

		//Process
		if (KeyCode == 'Q' || KeyCode == 'q')
		{
			bIsRunning = false;
		}

		for (int i = 0; i < MyCharacters.size(); ++i)
		{
			MyCharacters[i]->Move();
		}
	}

	delete MyCharacters[0];


	return 0;
}