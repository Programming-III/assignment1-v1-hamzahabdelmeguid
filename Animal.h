#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 

class Animal(){
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string name, int age, bool isHungry);
   virtual ~Animal();
    
void display();
void feed();

string getname(){return name;}
int getage(){return age;}
bool getisHungry(){return isHungry;}
void setname(){const name;}
void setage(){const age;}
void setisHungry(){const isHungry;}
};



#endif
