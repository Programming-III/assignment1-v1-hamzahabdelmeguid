#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 
class Bird : public Animal
{
     private:
         float wingSpan;
    public:
        Bird();
        Bird(string name, int age, bool isHungry, float wingSpan) : Animal(name, age, isHungry);
        virtual ~Bird();

   
};






#endif
