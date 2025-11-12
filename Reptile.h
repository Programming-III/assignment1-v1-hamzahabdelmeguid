#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Reptile : public Animal
{
    public:
        Reptile();
        Reptile(bool isVenomous);
        virtual ~Reptile();

        unsigned bool GetisVenomous() { return isVenomous; }
        void SetisVenomous() { const isVenomous; }

    private:
    bool isVenomous;
};








#endif
