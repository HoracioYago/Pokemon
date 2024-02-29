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

public:
	
	int aMaxUses=aUses;
	int aDamage;
	int aUses;

	Ability();
	Ability(string name, PokeType type, int damage, int uses);
	~Ability();

	string GetAbilityName(Ability);
	int GetAbilityDamage(Ability);
};

