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

string Trainer::GetCatchfrase() { return tFirstName+" "+tLastName; }
string Trainer::GetCatchfrase() { return tCatchfrase; }
int Trainer::SetLifepoints(int lifepoints) { pLifepoints = lifepoints; }
int SetMoney(int money);
vector <pokemon> SetPokemon(string newAbilities);

int GainLoot(int money, int pokeballs);