#include "IRace.h"
#include <iostream>
using namespace std;


IRace::IRace() {

	hitPoints = 0;
	armorClass = 0;
	hitBonus = 0;
};

IRace::IRace(int hit, int armor, int bonus) {

	hitPoints = hit;
	armorClass = armor;
	hitBonus = bonus;
};

IRace::~IRace() {};

void IRace::HitPointModification(int modification) {

	hitPoints = hitPoints + modification;
};

void IRace::ArmorClassModification(int modification) {

	armorClass = armorClass + modification;
};

void IRace::HitBonusModification(int modification) {

	hitBonus = hitBonus + modification;
};

int IRace::getHitPoint() {
	return hitPoints;
};

int IRace::getArmorClass() {
	return armorClass;
};

int IRace::getHitBonus() {
	return hitBonus;
};



//Human Functions
void Human::specialAbility() {

	this->hitPoints = this->hitPoints + 10;

	cout << "<<< The Human used their special ability to restore 10 of their hit points back! >>>" << endl;
};


//Dwarve Functions
void Dwarve::specialAbility() {

	this->armorClass = this->armorClass + 2;

	cout << "<<< The Dwarve used their special ability to increase their armor class by 2 points! >>>" << endl;
};


//Elve Functions
void Elve::specialAbility() {

	this->hitBonus = this->hitBonus + 2;

	cout << "<<< The Elve used their special ability to increase their hit bonus by 2 points! >>>" << endl;
};


//Hafling Functions
void Hafling::specialAbility() {

	this->hitBonus = this->hitBonus + 2;
	this->hitPoints = this->hitPoints + 10;

	cout << "<<< The Hafling used their special ability to increase their hit bonus and hit points! >>>" << endl;
};

