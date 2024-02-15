#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "PokeType.h"

class Ability
{
private:

	string aName = "";
	PokeType aType;
	int aDamage;
	int aUses;

public:

	Ability();
	Ability(string name, PokeType type, int damage, int uses);
	~Ability();

	string GetAbilityName(Ability);

};

