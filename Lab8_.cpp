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


	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
