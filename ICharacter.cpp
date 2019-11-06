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

void ICharacter::HitPointModification(int modification) {

	m_race->HitPointModification(modification);
};

void ICharacter::ArmorClassModification(int modification) {

	m_race->ArmorClassModification(modification);
};

void ICharacter::HitBonusModification(int modification) {

	m_race->HitBonusModification(modification);
};


//Wizard Functions

void Wizard::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;

	if (damage % 3 == 0) {

		this->specialAttack(enemy);
	}
	else if (damage % 2 == 0) {

		this->m_race->specialAbility();
		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
	else {

		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
};

void Wizard::specialAttack(ICharacter* enemy) {


	enemy->ArmorClassModification(-5);
	
	cout << " --- The Wizard used his special attack and decreased his opponent's armour class by 5 points! ---" << endl;
};

void Wizard::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << " ^^^ no damage done to the opposong party ^^^" << endl;
	}
	else if (hit > 0) {
		cout << "^^^ " << hit << " damage done to the opposing party ^^^" << endl;
		this->m_race->HitPointModification(-hit);
	}
};


//Rogue Functions

void Rogue::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;

	if (damage % 3 == 0) {

		this->specialAttack(enemy);
	}
	else if (damage % 2 == 0) {

		this->m_race->specialAbility();
		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
	else {

		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
};

void Rogue::specialAttack(ICharacter* enemy) {

	enemy->takeDamage(100);

	cout << " --- The Rogue used his special attack and killed his oponent in one blow! ---" << endl;
}

void Rogue::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << "^^^ no damage done to the opposing party ^^^" << endl;
	}
	else if (hit > 0) {
		cout << "^^^ " << hit << " damage done to the opposing party ^^^" << endl;
		this->m_race->HitPointModification(-hit);
	}
};


//Fighter Functions

void Fighter::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;

	if (damage % 3 == 0) {

		this->specialAttack(enemy);
	}
	else if (damage % 2 == 0) {

		this->m_race->specialAbility();
		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
	else {

		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
};

void Fighter::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << "^^^ no damage done to the opposing party ^^^" << endl;
	}
	else if (hit > 0) {
		cout << "^^^ " << hit << " damage done to the opposing party ^^^" << endl;
		this->m_race->HitPointModification(-hit);
	}
};


//Cleric Functions

void Cleric::Attack(ICharacter* enemy) {

	srand(time(0));
	int damage = rand() % 20;

	if (damage % 3 == 0) {

		this->specialAttack(enemy);
	}
	else if (damage % 2 == 0) {

		this->m_race->specialAbility();
		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
	else {

		damage = damage + this->getHitBonus();
		enemy->takeDamage(damage);
	}
};

void Cleric::takeDamage(int damage) {

	int hit = damage - this->getArmorClass();

	if (hit < 0) {
		cout << "^^^ no damage done to the opposing party ^^^" << endl;
	}
	else if (hit > 0) {
		cout << "^^^ " << hit << " damage done to the opposing party ^^^" << endl;
		this->m_race->HitPointModification(-hit);
	}
};