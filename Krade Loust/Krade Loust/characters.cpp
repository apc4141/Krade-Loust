#include "characters.h"

namespace Characters
{
	Character::Character(int maxHealth, int damage)
	{
		_maxHealth = maxHealth;
		_health = _maxHealth;
		_damage = damage;
	}

	int Character::getHealth()
	{
		return _health;
	}

	int Character::getDamage()
	{
		return _damage;
	}

	bool Character::isDead()
	{
		return _health <= 0;
	}

	void Character::takeDamage(int damage)
	{
		_health -= damage;
	}
}