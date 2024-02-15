#include <iostream>
using namespace std;

#include "Trainer.h"

Trainer::Trainer()
{
	tFirstName = "";
	tLastName = "";
	tCatchfrase = "";
	tLifepoints = 5;
	tMoney = 0;
	//tPokemon;
	tPokeballs = 3;

}

Trainer::Trainer(string firstName, string lastName, string catchFrase, int lifepoints, int money, vector <pokemon> pokemon, int pokeballs) {
	
	tFirstName = firstName;
	tLastName = lastName;
	tCatchfrase = catchFrase;
	tLifepoints = lifepoints;
	tMoney = money;
	tPokemon = pokemon;
	tPokeballs = pokeballs;
}

string Trainer::Introduce() { string intro = "Trainer:" + tFirstName + " " + tLastName + "/n" + tCatchfrase + "/n"; return intro; };
//string Trainer::ShowTeam() { cout << "Your current team is: " << endl; for (int i = 0; i < 6; i++) { cout << i << ". " << tPokemon[i].GetPokemonName(tPokemon[i]) << endl; } }
//int Trainer::SetLifepoints(int lifepoints) { tLifepoints = lifepoints; }
int SetMoney(int money);
vector <pokemon> SetPokemon(vector <pokemon> pokemon);

int GainLoot(int money, int pokeballs);

