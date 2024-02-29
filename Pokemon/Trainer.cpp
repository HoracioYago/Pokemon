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
	for (int i = 0; i < tTeamSize; i++) 
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
	for (int i = 0; i < tTeamSize; i++)
	{
		cout << tPokemon[i].GetPokemonName(tPokemon[i]) << " is Rested! " << endl;
		tPokemon[i].Heal (tPokemon[i]);
	}
	cout << "" << endl;
 }

void Trainer::SetTeamSize() { tTeamSize = tPokemon.size(); }

pokemon Trainer::ChoosePokemon(int pkmn) {
	
	if (tPokemon[pkmn].pLifepoints > 0) {
	pokemon active;
	active = tPokemon[pkmn];
	cout << "You chose: " << tPokemon[pkmn].GetPokemonName(tPokemon[pkmn]) << " Level: " << tPokemon[pkmn].GetPokemonLevel(tPokemon[pkmn]) << endl;
	cout << "HP: " << tPokemon[pkmn].GetPokemonLifepoints(tPokemon[pkmn]) << endl;
	return active;
	}
	else {
		cout << "That Pokemon can't fight anymore! Choose another one!";
		ShowTeam();
		int anoChoice;
		cin >> anoChoice;
		ChoosePokemon(anoChoice);
	}
	
}

 void Trainer::ChooseAbility(pokemon active, int i, pokemon target) {
	
	active.UseAbility(active, active.pAbilities[i], target);
	
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