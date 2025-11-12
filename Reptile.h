#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Mammal : public Animal {
private:
    string furColor;
public:
    Mammal() : Animal(){
       
    }
    Mammal(string name, int age, bool isHungry, string furColor) : Animal(name, age, isHungry){
       
    }
    virtual ~Mammal(){}
    void display(){
        
        
    }
};








#endif
