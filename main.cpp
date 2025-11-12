#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
class Animal {
protected:
    string name;
    int age;
    bool isHungry;
public:
    Animal(){
        this->name="unknown";
        this->age=0;
        this->isHungry=true;
    }
    Animal(string name, int age, bool isHungry){
        this->name=name;
        this->age=age;
        this->isHungry=isHungry;
    }
    virtual ~Animal(){}
    virtual void display(){
        cout<<"Name: "<<name<<", Age: "<<age<<", Hungry: "<<(isHungry?"Yes":"No");
    }
    void feed(){
        if(isHungry==true){
            cout<<name<<" is now fed."<<endl;
            isHungry=false;
        } else {
            cout<<name<<" is already full."<<endl;
        }
    }
};

class Reptile : public Animal {
private:
    bool isVenomous;
public:
    Reptile() : Animal(){
        this->isVenomous=true;
    }
    Reptile(string name, int age, bool isHungry, bool isVenomous) : Animal(name, age, isHungry){
        this->isVenomous=isVenomous;
    }
    virtual ~Reptile(){}
    void display(){
        Animal::display();
        cout<<", Venomous: "<<(isVenomous?"Yes":"No")<<endl;
    }
};

class Bird : public Animal {
private:
    float wingSpan;
public:
    Bird() : Animal(){
        this->wingSpan=0.0;
    }
    Bird(string name, int age, bool isHungry, float wingSpan) : Animal(name, age, isHungry){
        this->wingSpan=wingSpan;
    }
    virtual ~Bird(){}
    void display(){
        Animal::display();
        cout<<", Wing Span: "<<wingSpan<<"m"<<endl;
    }
};

class Mammal : public Animal {
private:
    string furColor;
public:
    Mammal() : Animal(){
        this->furColor="unknown";
    }
    Mammal(string name, int age, bool isHungry, string furColor) : Animal(name, age, isHungry){
        this->furColor=furColor;
    }
    virtual ~Mammal(){}
    void display(){
        Animal::display();
        cout<<", Fur Color: "<<furColor<<endl;
    }
};

class Enclosure {
private:
    Animal** animals;
    int capacity;
    int currentCount;
public:
    Enclosure(){
        this->capacity=10;
        this->currentCount=0;
        this->animals=new Animal*[capacity];
    }
    Enclosure(int capacity){
        this->capacity=capacity;
        this->currentCount=0;
        this->animals=new Animal*[capacity];
    }
    ~Enclosure(){
        for(int i=0;i<currentCount;i++){
            delete animals[i];
        }
        delete[] animals;
    }
    
    int getCapacity(){return capacity;}
    int getCurrentCount(){return currentCount;}
    
    void addAnimal(Animal* animal){
        if(currentCount<capacity){
            animals[currentCount]=animal;
            currentCount++;
        }
    }
    
    void displayAnimals(){
        cout<<"Enclosure Details:"<<endl;
        cout<<"Capacity: "<<capacity<<", Current Animal Count: "<<currentCount<<endl;
        cout<<"Animals in enclosure:"<<endl;
        for(int i=0;i<currentCount;i++){
            animals[i]->display();
        }
    }
};

class Visitor {
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(){
        this->visitorName="";
        this->ticketsBought=0;
    }
    Visitor(string visitorName, int ticketsBought){
        this->visitorName=visitorName;
        this->ticketsBought=ticketsBought;
    }
    ~Visitor(){}
    void displayInfo(){
        cout<<"Visitor Name: "<<visitorName<<", Tickets Bought: "<<ticketsBought<<endl;
    }
};

int main(){
    Enclosure* enclosure1=new Enclosure(5);
    
    enclosure1->addAnimal(new Mammal("Lion",5,true,"Golden"));
    enclosure1->addAnimal(new Bird("Eagle",3,false,2.1));
    enclosure1->addAnimal(new Reptile("Snake",2,true,true));
    
    Visitor* visitor1=new Visitor("John Doe",3);
    
    cout<<" Zoo Management System "<<endl;
    enclosure1->displayAnimals();
    cout<<"Visitor Information:"<<endl;
    visitor1->displayInfo();
    
    delete enclosure1;
    delete visitor1;
    
    return 0;
}
