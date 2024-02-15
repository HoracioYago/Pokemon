#pragma once
#include <iostream>
#include <vector>
#include "PokeType.h"
#include "AllAbility.h"

using namespace std;



class pokemon
{

private:

	string pName;
	PokeType pType;
	int pLifepoints;
	int pLevel;
	vector <Ability> pAbilities;
	


public:
	pokemon();
	pokemon(string name, PokeType type, int lifepoints, int level, vector <Ability> abilities);
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
//Battlr logic 1/2 for turns. Random range for enemy pokemon, enemy move, need player turn, enemy turn, check for dead pokemon if yes call for next one
//Check for low life on wild pokemon