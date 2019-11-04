#pragma once

class IRace
{
public:

	IRace();
	IRace(int hit, int armor, int bonus);
	~IRace();

	virtual void HitPointModification();
	virtual void ArmorClassModification();
	virtual void HitBonusModification();


protected:

	int hitPoint;
	int armorClass;
	int hitBonus;

};

class Human : public IRace
{
public:

	Human() : IRace(1, 1, 1) {};
	virtual ~Human() {};

	virtual void HitPointModification() {};
	virtual void ArmorClassModification() {};
	virtual void HitBonusModification() {};


private:

};

class Dwarve : public IRace
{
public:

	virtual ~Dwarve() {};

	virtual void HitPointModification() {};
	virtual void ArmorClassModification() {};
	virtual void HitBonusModification() {};


private:

};

class Elve : public IRace
{
public:

	virtual ~Elve() {};

	virtual void HitPointModification() {};
	virtual void ArmorClassModification() {};
	virtual void HitBonusModification() {};

private:

};

class Hafling : public IRace
{
public:

	virtual ~Hafling() {};

	virtual void HitPointModification() {};
	virtual void ArmorClassModification() {};
	virtual void HitBonusModification() {};


private:

};
