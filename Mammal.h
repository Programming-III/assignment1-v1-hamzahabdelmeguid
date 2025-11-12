#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here
class Mammal : public Animal
{
    private:
        string furColor;
    public:
        Mammal();
        Mammal(string name, int age, bool isHungry, string furColor) : Animal(name, age, isHungry);
        virtual ~Mammal();


};





#endif
