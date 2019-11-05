#include "ICharacter.h"
#include "time.h"
#include <stdlib.h>
#include <iostream>
using namespace std;


ICharacter::ICharacter() {
	m_race = nullptr;
};

ICharacter::ICharacter(IRace* race) {
	m_race = race;
};


int ICharacter::getHitPoint() {
	return m_race->getHitPoint();
};

int ICharacter::getArmorClass() {
	return m_race->getArmorClass();
};

int ICharacter::getHitBonus() {
	return m_race->getHitBonus();
};


//Wizard Functions

void Wizard::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;
	damage = damage + this->getHitBonus();

	enemy->takeDamage(damage);

};

void Wizard::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << "no damage done" << endl;
	}
	else if (hit > 0) {
		cout << hit << " damage done" << endl;
		this->m_race->HitPointModification(-hit);
	}

};


//Rogue Functions

void Rogue::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;
	damage = damage + this->getHitBonus();

	enemy->takeDamage(damage);

};

void Rogue::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << "no damage done" << endl;
	}
	else if (hit > 0) {
		cout << hit << " damage done" << endl;
		this->m_race->HitPointModification(-hit);
	}

};


//Fighter Functions

void Fighter::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;
	damage = damage + this->getHitBonus();

	enemy->takeDamage(damage);

};

void Fighter::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << "no damage done" << endl;
	}
	else if (hit > 0) {
		cout << hit << " damage done" << endl;
		this->m_race->HitPointModification(-hit);
	}

};


//Cleric Functions

void Cleric::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;
	damage = damage + this->getHitBonus();

	enemy->takeDamage(damage);

};

void Cleric::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << "no damage done" << endl;
	}
	else if (hit > 0) {
		cout << hit << " damage done" << endl;
		this->m_race->HitPointModification(-hit);
	}

};