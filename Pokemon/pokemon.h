#pragma once
#include <iostream>
#include <vector>
using namespace std;


#include "AllAbility.h"


class pokemon
{

private:

	string pName;
	PokeType pType;
	int pMaxHP = pLifepoints;
	int pLevel;
	
	


public:
	
	vector <Ability> pAbilities;
	int pLifepoints;

	pokemon();
	pokemon(string pName, PokeType pType, int pLifepoints, int pLevel, vector <Ability> pAbilities);
	~pokemon();

	string GetPokemonName(pokemon);
	int GetPokemonLevel(pokemon);
	int GetPokemonLifepoints(pokemon pkmn);
	string GetPokemonAbilities(pokemon);
	int Heal(pokemon);

	void UseAbility(pokemon pkmn, Ability a, pokemon target);



	int SetLifepoints(int lifepoints);
	int SetLevel(int level);
	vector <string> SetAbilities(Ability newAbilities);

	int TakeDamage( int damage);
	int AttackAnotherPokemon(pokemon pokemon, int attack);
	

};
// FirstC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//