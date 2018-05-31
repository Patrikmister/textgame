#include "stdafx.h"
#include "Playground.h"


Playground::Playground()
{
	width = 40;
	height = 25;
}


Playground::~Playground()
{
}

void Playground::Print(int playerX, int playerY)
{
	system("cls");

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j==playerX&&i==playerY)
			{
				cout << "&";
			}
			else
			{
				if (i == 0)
					cout << "#";
				else if (i == height - 1)
					cout << "#";
				else if (j == 0)
					cout << "#";
				else if (j == width - 1)
					cout << "#";
				else
					cout << " ";
			}
		}
		cout << "\n";
	}
}

int Playground::getHeigth()
{
	return height;
}

int Playground::getWidth()
{
	return width;
}