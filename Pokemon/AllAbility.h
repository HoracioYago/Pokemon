#pragma once
#include <iostream>
#include <vector>
#include "Ability.h"
using namespace std;

static Ability Tackle("Takle", PokeType::Normal, 40, 35);

static Ability Flamethrower("Flamethrower", PokeType::Fire, 60, 20);
static Ability Overheat("Overheat", PokeType::Fire, 120, 5);

static Ability Surf("Surf", PokeType::Water, 80, 15);
static Ability HydroPump("Hydro Pump", PokeType::Water, 100, 10);

static Ability VineWhip("Vine Whip", PokeType::Grass, 50, 30);
static Ability LeafStorm("Leaf Storm", PokeType::Grass, 80, 15);

static Ability ThunderPunch("Thunder Punch", PokeType::Electric, 80, 15);

static Ability IceBeam("Ice Beam", PokeType::Ice, 90, 15);

static Ability FocusBlast("Focus Blast", PokeType::Fighting, 100, 10);

static Ability PoisonClaw("Poison Claw", PokeType::Poison, 60, 20);

static Ability Earthquake("Earthquake", PokeType::Ground, 100, 10);

static Ability WingAttack("Wing Attack", PokeType::Flying, 50, 30);

static Ability Confusion("Confusion", PokeType::Psychic, 70, 20);

static Ability FuryCutter("Fury Cutter", PokeType::Bug, 70, 15);

static Ability RockSlide("Rock Slide", PokeType::Rock, 80, 15);

static Ability ShadowBall("Shadow Ball", PokeType::Ghost, 90, 15);

static Ability Outrage("Outrage", PokeType::Dragon, 120, 5);

static Ability Bite("Bite", PokeType::Dark, 60, 20);

static Ability GyroBall("Gyro Ball", PokeType::Steel, 80, 15);

static Ability DisarmingVoice("Disarming Voice", PokeType::Fairy, 80, 15);

//static vector <Ability> AllAbilities { Tackle, Flamethrower, Overheat, Surf, HydroPump, VineWhip, LeafStorm, ThunderPunch, IceBeam, FocusBlast,
//PoisonClaw, Earthquake, WingAttack, Confusion, FuryCutter, RockSlide, ShadowBall, Outrage, Bite, GyroBall, DisarmingVoice };
