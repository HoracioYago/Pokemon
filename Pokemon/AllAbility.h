#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;


Ability Tackle = Ability("Takle", PokeType::Normal, 40, 35);

Ability Flamethrower = Ability("Flamethrower", PokeType::Fire, 60, 20);
Ability Overheat = Ability("Overheat", PokeType::Fire, 120, 5);

Ability Surf = Ability("Surf", PokeType::Water, 80, 15);
Ability HydroPump = Ability("Hydro Pump", PokeType::Water, 100, 10);

Ability VineWhip = Ability("Vine Whip", PokeType::Grass, 50, 30);
Ability LeafStorm = Ability("Leaf Storm", PokeType::Grass, 80, 15);

Ability ThunderPunch = Ability("Thunder Punch", PokeType::Electric, 80, 15);

Ability IceBeam = Ability("Ice Beam", PokeType::Ice, 90, 15);

Ability FocusBlast = Ability("Focus Blast", PokeType::Fighting, 100, 10);

Ability PoisonClaw = Ability("Poison Claw", PokeType::Poison, 60, 20);

Ability Earthquake = Ability("Earthquake", PokeType::Ground, 100, 10);

Ability WingAttack = Ability("Wing Attack", PokeType::Flying, 50, 30);

Ability Confusion = Ability("Confusion", PokeType::Psychic, 70, 20);

Ability FuryCutter = Ability("Fury Cutter", PokeType::Bug, 70, 15);

Ability RockSlide = Ability("Rock Slide", PokeType::Rock, 80, 15);

Ability ShadowBall = Ability("Shadow Ball", PokeType::Ghost, 90, 15);

Ability Outrage = Ability("Outrage", PokeType::Dragon, 120, 5);

Ability Bite = Ability("Bite", PokeType::Dark, 60, 20);

Ability GyroBall = Ability("Gyro Ball", PokeType::Steel, 80, 15);

Ability DisarmingVoice = Ability("Disarming Voice", PokeType::Fairy, 80, 15);

vector <Ability> AllAbilities = { Tackle, Flamethrower, Overheat, Surf, HydroPump, VineWhip, LeafStorm, ThunderPunch, IceBeam, FocusBlast, 
PoisonClaw, Earthquake, WingAttack, Confusion, FuryCutter, RockSlide, ShadowBall, Outrage, Bite, GyroBall, DisarmingVoice  };
