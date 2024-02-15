#include <iostream>
#include "Trainer.h"

using namespace std;

int main()
{
    Trainer enemy("David", "Bowie", "Its a god-awful small affair...", 1, 30, vector<pokemon>{Scyther, Dragonite, MrMime, Suicune, Donphan, Tangela }, 3);
    
    Trainer player( "Frank", "Sinatra", "For what is a man, what has he got?!", 1, 10, vector<pokemon>{Mantine, Gengar, Vileplume, Mereep, Rapidash}, 3);
    player.Introduce();
    player.ShowTeam();


    cout << "Welcome to your pokemon journey!" << endl << "Pick a path: ";
    cout << "1" << endl;
    cout << "" << endl;
    cout << "" << endl;

    int  choice;
    cin >> choice;

    switch (choice) {
    case 1:

    case 2:

    case 3:

    default:
        cout << "Invalid life decision. Better sleep on it..." << endl;

    }
    

    /*cin >> pName;

    for (int i = 0; i <= pAbilitiesSize; i++)
    {

    }*/

    //use recursion for battles, check for length of vector, delete vector memebers when their hp reaches 0
}