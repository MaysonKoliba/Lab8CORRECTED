#include "IRace.h"

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




//Dwarve Functions




//Elve Functions




//Hafling Functions

