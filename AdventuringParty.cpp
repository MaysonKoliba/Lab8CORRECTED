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
AdventuringParty<character>::~AdventuringParty() {

	for (int i = 0; i < party.size(); i++) {
		delete party[i];
	}
};

template<class character>
void AdventuringParty<character>::checkLead() {

	if (party[0]->getHitPoint() <= 0) {

		delete party[0];
		party.erase(party.begin());

		cout << "*** A member of the oposing party has fallen ***" << endl;
	}
};

template<class character>
character* AdventuringParty<character>::getLead(){ 
	return party[0];
};

template<class character>
int AdventuringParty<character>::checkSize() {

	if (party.empty()) {
		return 0;
	}

	else {
		return party.size();
	}
};