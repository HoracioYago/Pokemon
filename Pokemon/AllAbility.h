#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Ability.h"

Ability Scratch = Ability("Takle", Normal, 40, 35);

Ability Flamethrower = Ability("Flamethrower", Fire, 80, 10);
Ability Overheat = Ability("Overheat", Fire, 80, 10);

Ability Surf = Ability("Surf", Water, 80, 10);
Ability HydroPump = Ability("Hydro Pump", Water, 80, 10);

Ability VineWhip = Ability("Vine Whip", Leaf, 80, 10);
Ability LeafStorm = Ability("Leaf Storm", Leaf, 80, 10);

Ability ThunderPunch = Ability("Thunder Punch", Electric, 80, 10);

Ability IceBeam = Ability("Ice Beam", Ice, 80, 10);

Ability FocusBlast = Ability("Focus Blast", Fighting, 80, 10);

Ability PosionClaw = Ability("Poison Claw", Poison, 80, 10);

Ability Earthquake = Ability("Earthquake", Ground, 100, 10);

Ability Peck = Ability("Peck", Flying, 80, 10);

Ability Confusion = Ability("Confusion", Psychic, 80, 10);

Ability FuryCutter = Ability("Fury Cutter", Bug, 40, 20);

Ability RockSlide = Ability("Rock Slide", Rock, 80, 10);

Ability ShadowBall = Ability("Shadow Ball", Ghost, 80, 10);

Ability Outrage = Ability("Outrage", Dragon, 80, 10);

Ability Bite = Ability("Bite", Dark, 80, 10);

Ability GyroBall = Ability("Gyro Ball", Steel, 80, 10);

Ability DisarmingVoice = Ability("Disarming Voice", Fairy, 80, 10);

vector <ability> AllAbilities = { Scratch, Flamethrower, Overheat, Surf, HydroPump, VineWhip, LeafStorm, TunderPunch, IceBeam, FocusBlast, 
PoisonClaw, Earthquake, Peck, Confusion, FuryCutter, RockSlider, ShadowBall, Outrage, Bite, GyroBall, DisarmingVoice  };
