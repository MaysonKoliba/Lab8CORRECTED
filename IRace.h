#pragma once

class IRace
{
public:

	IRace();
	IRace(int hit, int armor, int bonus);
	~IRace();

	virtual void HitPointModification(int modification);
	virtual void ArmorClassModification(int modification);
	virtual void HitBonusModification(int modification);
	virtual void specialAbility() = 0;

	int getHitPoint();
	int getArmorClass();
	int getHitBonus();

protected:

	int hitPoints;
	int armorClass;
	int hitBonus;
};

class Human : public IRace
{
public:

	Human() : IRace(20, 10, 10) {};
	virtual ~Human() {};

	virtual void specialAbility() {};

private:

};

class Dwarve : public IRace
{
public:

	Dwarve() : IRace(20, 10, 10) {};
	virtual ~Dwarve() {};

	virtual void specialAbility() {};

private:

};

class Elve : public IRace
{
public:

	Elve() : IRace(20, 10, 10) {};
	virtual ~Elve() {};

	virtual void specialAbility() {};

private:

};

class Hafling : public IRace
{
public:

	Hafling() : IRace(20, 10, 5) {};
	virtual ~Hafling() {};

	virtual void specialAbility() {};

private:

};
