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
        Bird(float wingSpan);
        virtual ~Bird();

   
};






#endif
