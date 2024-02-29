#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "AllPokemon.h"

class Trainer
{

private:

	string tFirstName;
	string tLastName;
	string tCatchfrase;
	
	int tMoney;
	
	int tTeamSize = tPokemon.size();
	int tPokeballs;


public:

	int tLifepoints;
	vector <pokemon> tPokemon;


	Trainer();
	Trainer(string firstName, string lastName, string catchFrase, int lifepoints, int money, vector <pokemon> pokemon, int pokeballs);
	~Trainer();


	string Introduce();
	string ShowTeam();
	void Rest();
	void SetTeamSize();
	pokemon ChoosePokemon(int pkmn);
	void ChooseAbility(pokemon active, int i, pokemon target);



	//string GetActiveTeam();
	//
	////int SetLifepoints(int lifepoints);
	//int SetMoney(int money);
	//vector <pokemon> SetPokemon(pokemon newPokemon);
	//

	//int GainLoot(int money, int pokeballs);

	//trainer can
	/*introduce themselves
	* challenge another trainer
	* capture a pokemon in the wild
	* send or change a pokemon during an encounter
	* use a pokemons ability to damage another pokemon
	* earn money or new pokeballs after a successful fight
	* lose a fight
	*/
	

};

