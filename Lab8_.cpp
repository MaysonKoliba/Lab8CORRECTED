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

	IRace* race = (IRace*) new Human();
	CharacterFactory factory;

	ICharacter* mayson = factory.CreateCharacter(CharacterFactory::WizardType, race);
	ICharacter* fahmy = factory.CreateCharacter(CharacterFactory::RogueType, race);
	ICharacter* francesco = factory.CreateCharacter(CharacterFactory::FighterType, race);
	ICharacter* person = factory.CreateCharacter(CharacterFactory::ClericType, race);

	Wizard* wizard = dynamic_cast<Wizard*>(mayson);
	Rogue* rogue = dynamic_cast<Rogue*>(fahmy);
	Fighter* fighter = dynamic_cast<Fighter*>(francesco);
	Cleric* cleric = dynamic_cast<Cleric*>(person);

	AdventuringParty<ICharacter> party1(wizard, rogue, fighter, cleric);



	IRace* race2 = (IRace*) new Dwarve();
	CharacterFactory factory2;

	ICharacter* char5 = factory2.CreateCharacter(CharacterFactory::WizardType, race2);
	ICharacter* char6 = factory2.CreateCharacter(CharacterFactory::RogueType, race2);
	ICharacter* char7 = factory2.CreateCharacter(CharacterFactory::FighterType, race2);
	ICharacter* char8 = factory2.CreateCharacter(CharacterFactory::ClericType, race2);

	Wizard* wizard2 = dynamic_cast<Wizard*>(char5);
	Rogue* rogue2 = dynamic_cast<Rogue*>(char6);
	Fighter* fighter2 = dynamic_cast<Fighter*>(char7);
	Cleric* cleric2 = dynamic_cast<Cleric*>(char8);

	AdventuringParty<ICharacter> party2(wizard2, rogue2, fighter2, cleric2);

	party1.getLead()->Attack(party2.getLead());


	return 0;
}
