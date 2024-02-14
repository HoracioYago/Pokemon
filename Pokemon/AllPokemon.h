#pragma once
#include <iostream>
#include <vector>
#include "pokemon.h"
using namespace std;



pokemon Doduo = pokemon("Doduo", PokeType::Flying, 170, 15, vector<Ability>{ WingAttack, Tackle, RockSlide, Flamethrower });

//Player team
pokemon Mantine = pokemon("Mantine", PokeType::Water, 260, 30, vector<Ability>{ Surf, HydroPump, WingAttack, Outrage });
pokemon Gengar = pokemon("Gengar", PokeType::Ghost, 180, 30, vector<Ability>{ ShadowBall, Bite, Confusion, PoisonClaw });
pokemon Vileplume = pokemon("Vileplume", PokeType::Poison, 220, 30, vector<Ability>{ PoisonClaw, LeafStorm, VineWhip, DisarmingVoice });
pokemon Mereep = pokemon("Mereep", PokeType::Electric, 190, 30, vector<Ability>{ ThunderPunch, Bite, Tackle, GyroBall });
pokemon Rapidash = pokemon("Rapidash", PokeType::Fire, 240, 30, vector<Ability>{ Overheat, FocusBlast, Earthquake, Flamethrower });

//Enemy team
pokemon Scyther = pokemon("Scyther", PokeType::Bug, 180, 30, vector<Ability>{ FuryCutter, FocusBlast, PoisonClaw, Bite });
pokemon Dragonite = pokemon("Dragonite", PokeType::Dragon, 260, 30, vector<Ability>{ Outrage, Flamethrower, FocusBlast, WingAttack });
pokemon MrMime = pokemon("Mr.Mime", PokeType::Psychic, 180, 30, vector<Ability>{ Confusion, Tackle, ShadowBall, DisarmingVoice });
pokemon Suicune = pokemon("Suicune", PokeType::Ice, 300, 30, vector<Ability>{ IceBeam, Bite, HydroPump, Surf });
pokemon Donphan = pokemon("Donphan", PokeType::Ground, 200, 30, vector<Ability>{ Earthquake, GyroBall, RockSlide, FocusBlast });
pokemon Tangela = pokemon("Tangela", PokeType::Grass, 200, 30, vector<Ability>{ VineWhip, LeafStorm, PoisonClaw, FuryCutter });