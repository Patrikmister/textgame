#pragma once
class Player
{
private:
	int health = 100;
	int weapon = 0;
	int x = 1;
	int y = 1;
public:
	Player();
	~Player();
	int getHealth();
	void setHealth(int _health);
	int getWeapon();
	void setWeapon(int _weapon);
	void setCoordinates(int dx, int dy);
	int getX();
	int getY();
	void printStats();
};

