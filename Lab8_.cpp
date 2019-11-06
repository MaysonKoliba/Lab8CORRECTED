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

	ICharacter* mayson = factory.CreateCharacter(CharacterFactory::FighterType, race1);
	ICharacter* fahmy = factory.CreateCharacter(CharacterFactory::FighterType, race2);
	ICharacter* francesco = factory.CreateCharacter(CharacterFactory::FighterType, race3);
	ICharacter* person = factory.CreateCharacter(CharacterFactory::FighterType, race4);

	Fighter* wizard = dynamic_cast<Fighter*>(mayson);
	Fighter* rogue = dynamic_cast<Fighter*>(fahmy);
	Fighter* fighter = dynamic_cast<Fighter*>(francesco);
	Fighter* cleric = dynamic_cast<Fighter*>(person);

	AdventuringParty<ICharacter> party1(wizard, rogue, fighter, cleric);



	IRace* race5 = (IRace*) new Dwarve();
	IRace* race6 = (IRace*) new Elve();
	IRace* race7 = (IRace*) new Hafling();
	IRace* race8 = (IRace*) new Human();
	CharacterFactory factory2;

	ICharacter* char5 = factory2.CreateCharacter(CharacterFactory::ClericType, race5);
	ICharacter* char6 = factory2.CreateCharacter(CharacterFactory::ClericType, race6);
	ICharacter* char7 = factory2.CreateCharacter(CharacterFactory::ClericType, race7);
	ICharacter* char8 = factory2.CreateCharacter(CharacterFactory::ClericType, race8);

	Cleric* wizard2 = dynamic_cast<Cleric*>(char5);
	Cleric* rogue2 = dynamic_cast<Cleric*>(char6);
	Cleric* fighter2 = dynamic_cast<Cleric*>(char7);
	Cleric* cleric2 = dynamic_cast<Cleric*>(char8);

	AdventuringParty<ICharacter> party2(wizard2, rogue2, fighter2, cleric2);



	while (party1.checkSize() > 0 && party2.checkSize() > 0) {

		if (party1.checkSize() > 0 && party2.checkSize() > 0) {

			cout << endl << "Press enter to have Party1 attack Party2" << endl;
			cin.get();

			cout << "*** Party1 attack! ***" << endl;
			party1.getLead()->Attack(party2.getLead());
			party2.checkLead();
		}

		if (party1.checkSize() > 0 && party2.checkSize() > 0) {
			cout << endl << "Press enter to have Party1 attack Party2" << endl;
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
