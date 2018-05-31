#include "stdafx.h"
#include "Player.h"


Player::Player()
{

}


Player::~Player()
{
	
}

int Player::getHealth()
{
	return	health;
}

int Player::getWeapon()
{
	return weapon;
}

void Player::setHealth(int _health)
{
	health = _health;
}

void Player::setWeapon(int _weapon)
{
	weapon = _weapon;
}

void Player::setCoordinates(int dx, int dy)
{
	x += dx;
	y += dy;
}

int Player::getX()
{
	return x;
}

int Player::getY()
{
	return y;
}

void Player::printStats()
{
	cout << "\nHealth: " << health << "\tWeapon: " << weapon;
}