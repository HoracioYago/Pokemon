#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

Ability::Ability()
{
	aName = "";
	aType = PokeType::Normal;
	aDamage = 1;
	aUses = 1;
}

Ability::Ability(string name, PokeType type, int damage, int uses) 
{
	aName = name;
	aType = type;
	aDamage = damage;
	aUses = uses;
}

Ability::~Ability()
{
}

string Ability::GetAbilityName(Ability ab) { return ab.aName; }
