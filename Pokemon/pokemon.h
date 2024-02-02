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
	int pCapabilitiesSize;
	vector <string> pCapabilities;


public:
	pokemon(string pName);
	~pokemon();
	string GetPokemonName();
	string GetPokemonDescription();
	string GetPokemonImage();
	int SetLifepoints(int lifepoints);
	int SetCapabilitiesSize(int size);
	vector <string> SetCapabilities(string newCapabilities);

	int TakeDamage( int damage);
	int AttackAnotherPokemon(pokemon pokemon, int attack);
	string GoInAndOutOfPokeball(string position, string command);
	string PassOut(string state);
	int Heal(int healing);

};
// FirstC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//