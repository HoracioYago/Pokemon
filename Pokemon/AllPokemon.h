#pragma once
#include <iostream>
#include <vector>
#include "pokemon.h"
using namespace std;



static pokemon Doduo = pokemon("Doduo", PokeType::Flying, 170, 15, vector<Ability>{ WingAttack, Tackle, RockSlide, Flamethrower });

//Player team
static pokemon Mantine = pokemon("Mantine", PokeType::Water, 260, 30, vector<Ability>{ Surf, HydroPump, WingAttack, Outrage });
static pokemon Gengar = pokemon("Gengar", PokeType::Ghost, 180, 30, vector<Ability>{ ShadowBall, Bite, Confusion, PoisonClaw });
static pokemon Vileplume = pokemon("Vileplume", PokeType::Poison, 220, 30, vector<Ability>{ PoisonClaw, LeafStorm, VineWhip, DisarmingVoice });
static pokemon Mereep = pokemon("Mereep", PokeType::Electric, 190, 30, vector<Ability>{ ThunderPunch, Bite, Tackle, GyroBall });
static pokemon Rapidash = pokemon("Rapidash", PokeType::Fire, 240, 30, vector<Ability>{ Overheat, FocusBlast, Earthquake, Flamethrower });

//Enemy team
static pokemon Scyther = pokemon("Scyther", PokeType::Bug, 180, 30, vector<Ability>{ FuryCutter, FocusBlast, PoisonClaw, Bite });
static pokemon Dragonite = pokemon("Dragonite", PokeType::Dragon, 260, 30, vector<Ability>{ Outrage, Flamethrower, FocusBlast, WingAttack });
static pokemon MrMime = pokemon("Mr.Mime", PokeType::Psychic, 180, 30, vector<Ability>{ Confusion, Tackle, ShadowBall, DisarmingVoice });
static pokemon Suicune = pokemon("Suicune", PokeType::Ice, 300, 30, vector<Ability>{ IceBeam, Bite, HydroPump, Surf });
static pokemon Donphan = pokemon("Donphan", PokeType::Ground, 200, 30, vector<Ability>{ Earthquake, GyroBall, RockSlide, FocusBlast });
static pokemon Tangela = pokemon("Tangela", PokeType::Grass, 200, 30, vector<Ability>{ VineWhip, LeafStorm, PoisonClaw, FuryCutter });