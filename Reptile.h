#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Reptile : public Animal {
private:
    bool isVenomous;
public:
    Reptile() : Animal(){
        
    }
    Reptile(string name, int age, bool isHungry, bool isVenomous) : Animal(name, age, isHungry){
        
    }
    virtual ~Reptile(){}
    void display(){}
      
        
        
 








#endif
