#include "Character.hpp"
#include <iostream>
#include <cmath>
#include "Ninja.hpp"

using namespace std;

Ninja::Ninja()
{

}

Ninja::Ninja(std::string name, Point place, int _hp, int speed) : Character(place,_hp,name), speed(speed){}


void Ninja::move(Character *enemy)
{

}

void Ninja::slash(Character * enemy)
{

}