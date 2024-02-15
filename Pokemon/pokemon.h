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
	int pLifepoints;
	int pMaxHP = pLifepoints;
	int pLevel;
	vector <Ability> pAbilities;
	


public:
	
	pokemon();
	pokemon(string pName, PokeType pType, int pLifepoints, int pLevel, vector <Ability> pAbilities);
	~pokemon();

	string GetPokemonName(pokemon);
	int GetPokemonLevel(pokemon);
	string GetPokemonAbilities(pokemon);
	int Heal(pokemon);





	int SetLifepoints(int lifepoints);
	int SetLevel(int level);
	vector <string> SetAbilities(Ability newAbilities);

	int TakeDamage( int damage);
	int AttackAnotherPokemon(pokemon pokemon, int attack);
	string GoInAndOutOfPokeball(string position, string command);
	string PassOut(string state);
	

};
// FirstC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//