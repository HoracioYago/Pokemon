#include <iostream>
using namespace std;

#include "pokemon.h"
#include "PokeType.h"
#include "AllAbility.h"
#include "Ability.h"


pokemon::pokemon()
{
    pName = "";
    pType = PokeType::Normal;
    pLifepoints = 10;
    pLevel = 1;
    //pAbilities;
}

pokemon::pokemon(string name, PokeType type, int lifepoints, int level, vector <Ability> abilities)
{
    pName = name;
    pType = type;
    pLifepoints = lifepoints;
    pLevel = level;
    pAbilities = abilities;
}

pokemon::~pokemon() {}

string pokemon::GetPokemonName(pokemon pkmn) { return pkmn.pName; }

//string pokemon::GetPokemonImage() { return pImage; }

int pokemon::SetLifepoints(int lifepoints) { pLifepoints = lifepoints; return pLifepoints;}

int pokemon::SetLevel(int level) { pLevel = level; return pLevel; }

//vector <string> pokemon::SetAbilities(string newAbilitiy) { pAbilities[4] = newAbilitiy; }

int pokemon::TakeDamage( int damage) { pLifepoints - damage; return pLifepoints;}

//Have to make attack equal the value of ability damage, perhaps need the ability 
int pokemon::AttackAnotherPokemon(pokemon pokemon, int attack) { pokemon.pLifepoints - attack; return pokemon.pLifepoints;}

int pokemon::Heal(int healing) { pLifepoints += healing; cout << pLifepoints << endl; return pLifepoints; };

string pokemon::PassOut(string state) { if (pLifepoints <= 0) { state = "Passed Out"; cout << state << endl; } return state; }

string pokemon::GoInAndOutOfPokeball(string position, string command)
{
    if (command == "in") { position = " is inside the Pokeball!"; cout << pName << position << endl; }
    if (command == "out") { position = "is outside the Pokeball!"; cout << pName << position << endl; return position; }
}


/*void EarnMoneyByPointer(int* wallet, int wage) {
    //Change the int value at the adress wallet, pointing to money
    *wallet += wage;
    *wallet -= wage / 4;
}

void EarnMoneyByRef(int& wallet, int wage) {
    //Change the int value at the adress wallet, pointing to money
    wallet += wage;
    wallet -= wage / 4;
}

int main()
{
    cout << "Hello World!\n" << endl; //Displays a text
    string answer;
    cin >> answer; //Store anything typed in answer
    cout << "Hello " << answer << ", how's your mom?\n";

    int money = 1000;
    int* bankAccount = &money;

    cout << "The value " << money << " is stored in address " << &money << endl;
    cout << "The value " << answer << " is stored in address " << &answer << endl;
    cout << "You can find my money at this address : " << bankAccount << endl;
    cout << "You can find my bank at this address : " << &bankAccount << endl;

    EarnMoneyByPointer(bankAccount, 10000);
    EarnMoneyByRef(money, 100);
    EarnMoneyByRef(*bankAccount, 100);
    cout << "Thank you for the 10000, now I have " << money;*/


    //x = x + y; // functions the same way.
    //cout << &x << endl; //prints the address
    // cout << x; //prints the value
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

