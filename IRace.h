#pragma once

class IRace
{
public:

	//Default Constructor
	IRace();
	//Overloaded Constructor
	IRace(int hit, int armor, int bonus);
	//Deconstructor
	~IRace();

	//Allows the hit points to be changed  
	virtual void HitPointModification(int modification);
	//Allows the armor strength to be changed
	virtual void ArmorClassModification(int modification);
	//Allows the hit bonus to be changed 
	virtual void HitBonusModification(int modification);
	//Each race has their own special ability
	virtual void specialAbility() = 0;

	//Returns the race's hit point
	int getHitPoint();
	//Returns the race's armor strength
	int getArmorClass();
	//Returns the race's hit bonus 
	int getHitBonus();

protected:

	int hitPoints;
	int armorClass;
	int hitBonus;
};

//Human Class
class Human : public IRace
{
public:

	Human() : IRace(20, 10, 10) {};
	virtual ~Human() {};

	virtual void specialAbility();

private:

};

//Dwarve Class
class Dwarve : public IRace
{
public:

	Dwarve() : IRace(20, 10, 10) {};
	virtual ~Dwarve() {};

	virtual void specialAbility();

private:

};

//Elve Class
class Elve : public IRace
{
public:

	Elve() : IRace(20, 10, 10) {};
	virtual ~Elve() {};

	virtual void specialAbility();

private:

};

//Hafling Class
class Hafling : public IRace
{
public:

	Hafling() : IRace(20, 10, 10) {};
	virtual ~Hafling() {};

	virtual void specialAbility();

private:

};
