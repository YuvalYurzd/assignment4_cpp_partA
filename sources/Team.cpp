#include "Team.hpp"

// Constructor for Team class
Team::Team(Character *leader) {
    this->leader = leader;
}

// Add a Character to the team
void Team::add(Character *chr) {
    this->warriors.push_back(chr);
}

void Team::attack(Team *enemy_team) 
{

}

int Team::stillAlive() 
{
    return 0;
}

void Team::print()
{
    
}
