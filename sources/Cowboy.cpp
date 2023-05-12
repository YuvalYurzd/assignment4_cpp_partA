#include "Character.hpp"
#include <iostream>
#include <cmath>
#include "Cowboy.hpp"

using namespace std;

Cowboy::Cowboy()
{
    
}

Cowboy::Cowboy(std::string name, Point location) : Character(location, 110, name) , numofbullets(6) {}


void Cowboy::shoot(Character *enemy)
{
    
}
bool Cowboy::hasboolets()
{
    return (this->numofbullets > 0);
}
void Cowboy::reload()
{

}