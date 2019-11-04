#pragma once
#include "IRace.h"
#include "ICharacter.h"

class CharacterFactory
{
public:

	CharacterFactory();
	virtual ~CharacterFactory();

	enum enumOfTypeCharacter { WizardType, RogueType, FighterType, ClericType };
	ICharacter* CreateCharacter(enumOfTypeCharacter enumChar, IRace* race);
};
