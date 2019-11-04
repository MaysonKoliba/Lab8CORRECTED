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

private:

	character* character1;
	character* character2;
	character* character3;
	character* character4;
	vector<character*> party;
};
#include "AdventuringParty.cpp" 
#endif
