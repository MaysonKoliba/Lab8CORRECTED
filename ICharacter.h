#pragma once
#include "IRace.h"

class ICharacter {

public:

	ICharacter();
	ICharacter(IRace* race);
	virtual ~ICharacter();
	virtual int getHitPoint();
	virtual int getArmorClass();
	virtual int getHitBonus();

protected:

	int hitPoint;
	int armorClass;
	int hitBonus;
	IRace* m_race;
};

class Wizard : public ICharacter
{
public:

	Wizard() {};
	Wizard(IRace* race) {};
	virtual ~Wizard() {};
	virtual int getHitPoint() { return hitPoint; };
	virtual int getArmorClass() { return armorClass; };
	virtual int getHitBonus() { return hitBonus; };

private:

};

class Rogue : public ICharacter
{
public:

	Rogue() {};
	Rogue(IRace* race) {};
	virtual ~Rogue() {};
	virtual int getHitPoint() { return hitPoint; };
	virtual int getArmorClass() { return armorClass; };
	virtual int getHitBonus() { return hitBonus; };


private:

};

class Fighter : public ICharacter
{
public:

	Fighter() {};
	Fighter(IRace* race) {};
	virtual ~Fighter() {};
	virtual int getHitPoint() { return hitPoint; };
	virtual int getArmorClass() { return armorClass; };
	virtual int getHitBonus() { return hitBonus; };


private:

};

class Cleric : public ICharacter
{
public:

	Cleric() {};
	Cleric(IRace* race) {};
	virtual ~Cleric() {};
	virtual int getHitPoint() { return hitPoint; };
	virtual int getArmorClass() { return armorClass; };
	virtual int getHitBonus() { return hitBonus; };

private:


};
