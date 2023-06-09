#ifndef header2
#define header2
#include <iostream>
#include <cmath>

#include "Point.hpp"

class Character
{
    public:
        Point location;
        int hp;
        std::string name;

        Character();
        Character(const Point &pnt, int _hp, std::string name);

        virtual bool isAlive();
        virtual double distance(Character *chr);
        virtual void hit(int damage);
        virtual std::string getName();
        virtual Point getLocation();
        virtual std::string print();


};
#endif