#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "pokemon.h"

class Trainer
{

private:

	string tFirstName;
	string tLastName;
	string tCatchfrase;
	int tLifepoints;
	int tMoney;
	vector <pokemon> tPokemon;
	//up to [6]


public:

	trainer();
	~trainer();

	string GetTrainerName();
	int SetLifepoints(int lifepoints);
	int SetLevel(int level);
	vector <string> SetAbilities(string newAbilities);

	int TakeDamage(int damage);
	int AttackAnotherPokemon(pokemon pokemon, int attack);
	string GoInAndOutOfPokeball(string position, string command);
	string PassOut(string state);
	int Heal(int healing);


};

