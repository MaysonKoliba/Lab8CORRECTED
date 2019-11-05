#ifndef PARTY_
#define PARTY_


#include <vector>
using namespace std;

template <class character>

class AdventuringParty
{
public:

	AdventuringParty(character* char1, character* char2, character* char3, character* char4);
	~AdventuringParty();

	void checkLead();
	character* getLead();
	int checkSize();

private:

	character* character1;
	character* character2;
	character* character3;
	character* character4;
	vector<character*> party;
	vector<character*> deleteParty;
};
#include "AdventuringParty.cpp" 
#endif
