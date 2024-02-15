#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "PokeType.h"
#include "Ability.h"


class pokemon
{

private:

	string pName;
	PokeType pType;
	int pLifepoints;
	int pLevel;
	vector <Ability> pAbilities[4];
	


public:
	
	pokemon(string pName, PokeType pType, int pLifepoints, int pLevel, Ability pAbilities[4]);
	~pokemon();

	string GetPokemonName(pokemon);
	int SetLifepoints(int lifepoints);
	int SetLevel(int level);
	vector <string> SetAbilities(Ability newAbilities);

	int TakeDamage( int damage);
	int AttackAnotherPokemon(pokemon pokemon, int attack);
	string GoInAndOutOfPokeball(string position, string command);
	string PassOut(string state);
	int Heal(int healing);

};
// FirstC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//