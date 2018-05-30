#include "stdafx.h"
#include "Player.h"


Player::Player()
{

}


Player::~Player()
{
	cout << "You are dead\n";
}

int Player::getHealth()
{
	return	health;
}

void Player::setHealth(int _health)
{
	health = _health;
}