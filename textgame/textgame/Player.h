#pragma once
class Player
{
private:
	int health = 100;
	int weapon = 0;
public:
	Player();
	~Player();
	int getHealth();
	void setHealth(int _health);
	int getWeapon();
	void setWeapon();
};

