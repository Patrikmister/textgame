#pragma once
class Playground
{
private:
	int height;
	int width;
public:
	Playground();
	~Playground();
	void Print(int playerX, int playerY);
	int getHeigth();
	int getWidth();
};

