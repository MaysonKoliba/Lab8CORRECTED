#include "CharacterFactory.h"


CharacterFactory::CharacterFactory() {};

CharacterFactory::~CharacterFactory() {};

ICharacter* CharacterFactory::CreateCharacter(enumOfTypeCharacter enumChar, IRace* race) {

	ICharacter* character = nullptr;
	if (enumChar == WizardType)
	{
		character = new Wizard(race);
	}
	else if (enumChar == RogueType)
	{
		character = new Rogue(race);
	}
	else if (enumChar == FighterType)
	{
		character = new Fighter(race);
	}
	else if (enumChar == ClericType)
	{
		character = new Cleric(race);
	}

	return character;
}
