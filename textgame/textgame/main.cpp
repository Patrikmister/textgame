// textgame.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"


#include "Player.h"
#include "Playground.h"
#include "Enemy.h"


int main()
{
	Playground pg;
	Player player;
	Enemy enemy;


	char move;
	int playerx;
	int playery;

	cout << "& - this is you\n* - this is weapon (+20)\n% - find this!\n(press ESC to exit)\n";
	_getch();

	while (true)
	{
		playerx = player.getX();
		playery = player.getY();

		pg.Print(playerx, playery);
		player.printStats();

		move = _getch();

		if (move == 72 && playery != 1)
			player.setCoordinates(0, -1);
		else if (move == 80 && playery != pg.getHeigth() - 2)
			player.setCoordinates(0, 1);
		else if (move == 75 && playerx != 1)
			player.setCoordinates(-1, 0);
		else if (move == 77 && playerx != pg.getWidth() - 2)
			player.setCoordinates(1, 0);
		else if (move == 27)
			break;

	}
	system("cls");
	system("pause");
    return 0;
}

