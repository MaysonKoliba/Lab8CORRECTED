#include "AdventuringParty.h"

template<class character>
AdventuringParty<character>::AdventuringParty(character* char1, character* char2, character* char3, character* char4) {

	character1 = char1;
	party.push_back(character1);
	character2 = char2;
	party.push_back(character2);
	character3 = char3;
	party.push_back(character3);
	character4 = char4;
	party.push_back(character4);
};

template<class character>
AdventuringParty<character>::~AdventuringParty() {};