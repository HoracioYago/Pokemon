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
	int tPokeballs;


public:

	Trainer();
	~Trainer();

	string GetTrainerName();
	int SetLifepoints(int lifepoints);
	int SetMoney(int money);
	vector <pokemon> SetPokemon(string newAbilities);

	int GainLoot(int money, int pokeballs);

	//trainer can
	/*introduce themselves
	* challenge another trainer
	* capture a pokemon in the wild
	* send or change a pokemon during an encounter
	* use a pokemons ability to damage another pokemon
	* earn money or new pokeballs after a successful fight
	* lose a fight
	*/
	/*int AttackAnotherPokemon(pokemon pokemon, int attack);
	string GoInAndOutOfPokeball(string position, string command);
	string PassOut(string state);
	int Heal(int healing);*/

};

