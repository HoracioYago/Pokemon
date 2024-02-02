#include <iostream>
using namespace std;

#include "pokemon.h"

pokemon::pokemon(string pName)
{
    pName = "";
    pDescription = "";
    pImage = "";
    pLifepoints = 10;
    pCapabilitiesSize;
    pCapabilities;
}

pokemon::~pokemon() {}

string pokemon::GetPokemonName() { return pName; }

string pokemon::GetPokemonDescription() { return pDescription; }

string pokemon::GetPokemonImage() { return pImage; }

int pokemon::SetLifepoints(int lifepoints) { pLifepoints = lifepoints; }

int pokemon::SetCapabilitiesSize(int size) { pCapabilitiesSize = size; }

vector <string> pokemon::SetCapabilities(string newCapabilitiy) { pCapabilities[1] = newCapabilitiy; }

int pokemon::TakeDamage( int damage) { pLifepoints - damage; }

int pokemon::AttackAnotherPokemon(pokemon pokemon, int attack) { pokemon.pLifepoints - attack; }

int pokemon::Heal(int healing) { pLifepoints += healing; cout << pLifepoints << endl; };

string pokemon::PassOut(string state) { if (pLifepoints <= 0) {state = "Passed Out"; cout << state << endl;} }

string pokemon::GoInAndOutOfPokeball(string position, string command)
{
    if (command == "out") { position = "InsidePokeball"; cout << position << endl; if (command == "in") { position = "OutsidePokeball"; cout << position << endl; } }


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

