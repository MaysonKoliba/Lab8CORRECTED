// Lab8_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\\Lab8_\Lab8_.h"
#include "..\\Lab8_\IRace.h"
#include "..\\Lab8_\ICharacter.h"
#include "..\\Lab8_\CharacterFactory.h"
#include "..\\Lab8_\AdventuringParty.h"
using namespace std;

int main()
{

	IRace* race1 = (IRace*) new Human();
	IRace* race2 = (IRace*) new Dwarve();
	IRace* race3 = (IRace*) new Elve();
	IRace* race4 = (IRace*) new Hafling();

	CharacterFactory factory;

	ICharacter* mayson = factory.CreateCharacter(CharacterFactory::WizardType, race1);
	ICharacter* fahmy = factory.CreateCharacter(CharacterFactory::RogueType, race2);
	ICharacter* francesco = factory.CreateCharacter(CharacterFactory::FighterType, race3);
	ICharacter* person = factory.CreateCharacter(CharacterFactory::ClericType, race4);

	Wizard* wizard = dynamic_cast<Wizard*>(mayson);
	Rogue* rogue = dynamic_cast<Rogue*>(fahmy);
	Fighter* fighter = dynamic_cast<Fighter*>(francesco);
	Cleric* cleric = dynamic_cast<Cleric*>(person);

	AdventuringParty<ICharacter> party1(wizard, rogue, fighter, cleric);



	IRace* race5 = (IRace*) new Dwarve();
	IRace* race6 = (IRace*) new Elve();
	IRace* race7 = (IRace*) new Hafling();
	IRace* race8 = (IRace*) new Human();
	CharacterFactory factory2;

	ICharacter* char5 = factory2.CreateCharacter(CharacterFactory::WizardType, race5);
	ICharacter* char6 = factory2.CreateCharacter(CharacterFactory::RogueType, race6);
	ICharacter* char7 = factory2.CreateCharacter(CharacterFactory::FighterType, race7);
	ICharacter* char8 = factory2.CreateCharacter(CharacterFactory::ClericType, race8);

	Wizard* wizard2 = dynamic_cast<Wizard*>(char5);
	Rogue* rogue2 = dynamic_cast<Rogue*>(char6);
	Fighter* fighter2 = dynamic_cast<Fighter*>(char7);
	Cleric* cleric2 = dynamic_cast<Cleric*>(char8);

	AdventuringParty<ICharacter> party2(wizard2, rogue2, fighter2, cleric2);



	while (party1.checkSize() > 0 && party2.checkSize() > 0) {

		if (party1.checkSize() > 0 && party2.checkSize() > 0) {

			cout << "Press enter to have Party1 attack Party2" << endl;
			cin.get();

			cout << "*** Party1 attack! ***" << endl;
			party1.getLead()->Attack(party2.getLead());
			party2.checkLead();
		}

		if (party1.checkSize() > 0 && party2.checkSize() > 0) {
			cout << "Press enter to have Party1 attack Party2" << endl;
			cin.get();

			cout << "*** Party2 attack! ***" << endl;
			party2.getLead()->Attack(party1.getLead());
			party1.checkLead();
		}
	}

	if (party1.checkSize() != 0) {

		cout << "Party1 won!" << endl;
	}
	else {
		cout << "Party2 won!" << endl;
	}


	return 0;
}
