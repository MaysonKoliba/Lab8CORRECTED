#pragma once
#include "IRace.h"

class ICharacter {

public:

	//Default Constructor
	ICharacter();
	//Overloaded Constructor 
	ICharacter(IRace* race);
	//Deconstructor
	virtual ~ICharacter() {delete m_race;};

	//Standard Attack Function
	virtual void Attack(ICharacter* enemy) = 0;
	//Each Character has its own special attack
	virtual void specialAttack(ICharacter* enemy) = 0;
	//Function for character to take damage when attacked
	virtual void takeDamage(int damage) = 0;

	//The functions below are tied to the character's race, which 
	//is a protected member variable (a pointer) of the character object

	//Changes the hit points of the character 
	virtual void HitPointModification(int modification);
	//Changes the armor strength of the character 
	virtual void ArmorClassModification(int modification);
	//Changes the hit bonus of the character 
	virtual void HitBonusModification(int modification);

	//Gets the hit points of the character 
	int getHitPoint();
	//Gets the armor strength of the character 
	int getArmorClass();
	//Gets the hit bonus of the character 
	int getHitBonus();

protected:

	IRace* m_race;
};

class Wizard : public ICharacter
{
public:

	Wizard(IRace* race) { m_race = race; };

	virtual void Attack(ICharacter* enemy);
	virtual void specialAttack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};

class Rogue : public ICharacter
{
public:

	Rogue(IRace* race) { m_race = race; };

	virtual void Attack(ICharacter* enemy);
	virtual void specialAttack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};

class Fighter : public ICharacter
{
public:

	Fighter(IRace* race) { m_race = race; };

	virtual void Attack(ICharacter* enemy);
	virtual void specialAttack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};

class Cleric : public ICharacter
{
public:

	Cleric(IRace* race) { m_race = race; };

	virtual void Attack(ICharacter* enemy);
	virtual void specialAttack(ICharacter* enemy);
	virtual void takeDamage(int damage);

private:

};
