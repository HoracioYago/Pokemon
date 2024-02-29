#include <iostream>
#include "Trainer.h"

using namespace std;

void PokemonJourney(Trainer& player, pokemon wildPokemon) {

    player.SetTeamSize();
    cout << endl;
    cout << "Welcome to your pokemon journey!" << endl << "Pick a path: " << endl;
    cout << "1. Take a rest and go to sleep." << endl;
    cout << "2. Go into the tall grass and fight a wild pokemon." << endl;
    cout << "3. Challenge another Trainer. [CURRENTLY UNAVAILABLE]" << endl;
    
    int fainted = 0;
    int  choice;
    cin >> choice;
    cout << endl;


    switch (choice) {
    case 1:

        player.Rest();
        PokemonJourney(player, Doduo);

    case 2:
        
        wildPokemon.Heal(wildPokemon);
        std::cout << "A wild " << wildPokemon.GetPokemonName(wildPokemon) << " appears!\n";
        cout << "Choose a pokemon!" << endl;
        player.ShowTeam();
        int choice;
        cin >> choice;
        player.ChoosePokemon(choice);

        while (player.tLifepoints > 0 && wildPokemon.pLifepoints > 0) {

            cout << "Its your turn! What do you do?" << endl;
            cout << "1. Use an ability." << endl;
            cout << "2. Switch Pokemon." << endl;
            cout << "3. Run away!" << endl;

            int turn;
            cin >> turn;
            cout << endl;

            switch (turn) {
            case 1:
                cout << "Choose an ability!" << endl;
                player.tPokemon[choice-1].GetPokemonAbilities(player.tPokemon[choice-1]);
                cout << endl;
                int move;
                cin >> move;
                move -= 1;
                player.ChooseAbility(player.tPokemon[choice], move, wildPokemon);

            case 2:
                cout << "Choose a pokemon!" << endl;
                player.ShowTeam();
                cin >> choice;
                player.ChoosePokemon(choice);
            case 3:
                cout << "You fled the battle..." << endl;
                PokemonJourney(player, Doduo);
            default:
                cout << "Invalid decision. You lose your turn!" << endl;
            }

            if (wildPokemon.pLifepoints <= 0) {
                cout << "The wild " << wildPokemon.GetPokemonName(wildPokemon) << "is weakened!" << endl;
                cout << "This is your chance to catch it!" << endl;
                cout << "Do you want to throw a pokeball?" << endl;
                cout << "1. YES" << endl;
                cout << "1. NO" << endl;
                int poke;
                cin >> poke;
                cout << endl;

                switch (poke) {

                case 1:

                    PokemonJourney(player, Doduo);
                case 2:
                    cout << "You choose not to throw a pokeball." << endl << "The wild " << wildPokemon.GetPokemonName(wildPokemon) << "scampers away..." << endl;
                    PokemonJourney(player, Doduo);
                default:
                    cout << "Invalid choice. So, no?";
                    cout << "You choose not to throw a pokeball." << endl << "The wild " << wildPokemon.GetPokemonName(wildPokemon) << "scampers away..." << endl;
                    PokemonJourney(player, Doduo);
                }

            }

            if (wildPokemon.pLifepoints > 0) {
                int wildAbilityIndex = rand() % 4;
                wildPokemon.UseAbility(wildPokemon, wildPokemon.pAbilities[wildAbilityIndex], player.tPokemon[choice]);
            }

            if (player.tPokemon[choice].pLifepoints <= 0) {
                cout << player.tPokemon[choice].GetPokemonName(player.tPokemon[choice]) << " can't fight anymore!" << endl;
                cout << "It goes back to its pokeball..." << endl;
                fainted++;
                cout << "Choose a pokemon!" << endl;
                player.ShowTeam();
                cin >> choice;
                player.ChoosePokemon(choice);
            }

            if (fainted <= 6)
            {
                player.tLifepoints = 0;

            }

        }
        if (player.tLifepoints = 0) {
            cout << endl;
            cout << "..." << endl;
            cout << "You have no pokemon left!" << endl;
            cout << "You fainted!" << endl;
        }

    case 3:
        cout << "Invalid life decision (Sadly...). Better sleep on it..." << endl;
        player.Rest();
        PokemonJourney(player, Doduo);
    default:
        cout << "Invalid life decision. Better sleep on it..." << endl;
        player.Rest();
        PokemonJourney(player, Doduo);
    }
}

void WildPokemonBattle(Trainer& player, pokemon& wildPokemon) {

    
}

int main()
{
    cout << "[Sorry Marie, I keep getting new problems... still working at it.]" << endl;
    Trainer enemy("David", "Bowie", "Its a god-awful small affair...", 1, 30, vector<pokemon>{Scyther, Dragonite, MrMime, Suicune, Donphan, Tangela }, 3);
    
    Trainer player( "Frank", "Sinatra", "For what is a man, what has he got?!", 1, 10, vector<pokemon>{Mantine, Gengar, Vileplume, Mereep, Rapidash}, 3);
    player.SetTeamSize();
    player.Introduce();
    player.ShowTeam();

    PokemonJourney(player, Doduo);

    /*cin >> pName;

    for (int i = 0; i <= pAbilitiesSize; i++)
    {

    }*/

    //use recursion for battles, check for length of vector, delete vector memebers when their hp reaches 0
}