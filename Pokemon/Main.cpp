#pragma once
#include <iostream>
#include <vector>
#include "Trainer.h"

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
    //would you like to: 1.fight a wild pokemon. 2Fight another trainer. 3Teach your pokemon a different skill. Always return to this
    //when wild pokemon life low =  would you like to catch it. if yes -1 pokeball and add to team, check length, if too high say so and return to init. if no, back to initial choice
    //when defeat other player 
    //put in trainer outro






}