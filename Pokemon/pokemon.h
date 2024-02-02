#pragma once
#include <iostream>
#include <vector>
using namespace std;

class pokemon
{

private:

	string pName;
	string pDescription;
	string pImage;
	int pLifepoints;
	int pLevel;
	vector <string> pAbilities;
	


public:
	pokemon(string pName);
	~pokemon();
	string GetPokemonName();
	string GetPokemonDescription();
	//string GetPokemonImage();
	int SetLifepoints(int lifepoints);
	int SetLevel(int level);
	vector <string> SetAbilities(string newAbilities);

	int TakeDamage( int damage);
	int AttackAnotherPokemon(pokemon pokemon, int attack);
	string GoInAndOutOfPokeball(string position, string command);
	string PassOut(string state);
	int Heal(int healing);

};
// FirstC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//