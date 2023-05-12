#include "Character.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Character::Character()
{
}
Character::Character(const Point &pnt, int _hp, std::string name)
{
    this->location = pnt;
    this->hp = _hp;
    this->name = name;
}



bool Character::isAlive()
{
    return false;
}
double Character::distance(Character *chr)
{
    return 0.0;
}
void Character::hit(int damage)
{
    this->hp -= damage;
}
std::string Character::getName()
{
    return this->name;
}
Point Character::getLocation()
{
    return this->location;
}
std::string Character::print()
{
    return "";
}