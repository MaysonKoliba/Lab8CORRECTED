#pragma once
#include "IRace.h"
#include "ICharacter.h"

class CharacterFactory
{
public:

	//Default Constructor 
	CharacterFactory();
	//Destructor
	virtual ~CharacterFactory();

	//Enum for the different types of characters 
	enum enumOfTypeCharacter { WizardType, RogueType, FighterType, ClericType };

	//Assigns a type for the input character 
	ICharacter* CreateCharacter(enumOfTypeCharacter enumChar, IRace* race);
};
