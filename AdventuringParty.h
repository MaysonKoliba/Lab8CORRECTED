#ifndef PARTY_
#define PARTY_


#include <vector>
using namespace std;

template <class character>

class AdventuringParty
{
public:

	//Overloaded Constructor 
	AdventuringParty(character* char1, character* char2, character* char3, character* char4);
	//Deconstructor, delets all of the objects in the party vector if there is any left
	~AdventuringParty();

	//Checks the health of the first character in the party vector
	//deletes it if its health is less than 0
	void checkLead();
	//Returns a pointer object to the first character in the party
	character* getLead();
	//Checks the size of the party vector to see if all of the characters are dead 
	int checkSize();

private:

	character* character1;
	character* character2;
	character* character3;
	character* character4;
	vector<character*> party;
};
#include "AdventuringParty.cpp" 
#endif
