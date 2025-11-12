#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 
class Enclosure(): class Animal(){
private:
    Animal* animal:
        int capacity;
        int currentcount;

public:
    Enclosure();
    Enclosure(Animal* animal, int capacity, int currentcount);
   virtual ~Enclosure();
    int getcapacity(){return capacity;}
    int getcurrentcount(){return currentcount;}
    
    void setcapacity(){const capacity;}
    void setcurrentcount(){const currentcount;}
    
    void addAnimal(Animal* animal);
    void displayAnimals();
    


};








#endif
