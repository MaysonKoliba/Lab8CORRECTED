#pragma once
#include "IRace.h"

class ICharacter {

public:

	ICharacter();
	ICharacter(IRace* race);
	virtual ~ICharacter();

	virtual void Attack(ICharacter* enemy) = 0;
	virtual void takeDamage(int damage) = 0;

	int getHitPoint();
	int getArmorClass();
	int getHitBonus();

protected:

	IRace* m_race;
};

class Wizard : public ICharacter
{
public:

	Wizard(IRace* race) { m_race = race; };
	virtual ~Wizard() {};

	virtual void Attack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};

class Rogue : public ICharacter
{
public:

	Rogue(IRace* race) { m_race = race; };
	virtual ~Rogue() {};

	virtual void Attack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};

class Fighter : public ICharacter
{
public:

	Fighter(IRace* race) { m_race = race; };
	virtual ~Fighter() {};

	virtual void Attack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};

class Cleric : public ICharacter
{
public:

	Cleric(IRace* race) { m_race = race; };
	virtual ~Cleric() {};

	virtual void Attack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};
