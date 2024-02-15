#include <iostream>
#include "pokemon.h"

using namespace std;

int main()
{

    Trainer player( "Frank", "Sinatra", "For what is a man, what has he got?!", 1, 10, {Mantine, Gengar, Vileplume, Mereep, Rapidash}, 3);
    player.Introduce();
    //player.ShowTeam();

    Trainer enemy( "Rick", "Astley", "You know the rules and so do I...!", 1, 30, {Scyther, Dragonite, MrMime, Suicune, Donphan, Tangela }, 3);

    /*cin >> pName;

    for (int i = 0; i <= pAbilitiesSize; i++)
    {

    }*/
}