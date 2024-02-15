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
	tPokemon;
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

Trainer::~Trainer()
{
}

string Trainer::Introduce() { string intro = "Trainer:" + tFirstName + " " + tLastName + "\n" + tCatchfrase + "\n"; cout << intro;  return intro; };
string Trainer::ShowTeam() 
{
	cout << "Your current team is: " << endl; 
	for (int i = 0; i < 6; i++) 
	{ 
		cout << i+1 << ". " << tPokemon[i].GetPokemonName(tPokemon[i]) << " Level: " << tPokemon[i].GetPokemonLevel(tPokemon[i]) << endl;
		cout << tPokemon[i].GetPokemonAbilities(tPokemon[i]) << endl;
		cout << endl;
	}
	return ""; 
}
void Trainer::Rest() {
	cout << "Its always a good time to sleep." << endl;
	cout << "...zzz..." << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << tPokemon[i].GetPokemonName(tPokemon[i]) << " is Rested! ";
		tPokemon[i].Heal(tPokemon[i]);
	}
	cout << "" << endl;
 }
//int Trainer::SetLifepoints(int lifepoints) { tLifepoints = lifepoints; }

//int Trainer::SetMoney(int money) {
//
//}
//vector <pokemon> Trainer::SetPokemon(string newAbilities) {
//
//}
//
//int Trainer::GainLoot(int money, int pokeballs) {
//
//}