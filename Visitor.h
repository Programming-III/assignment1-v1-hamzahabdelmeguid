#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor(){
private:
    string visitorname;
    int tickietsbought;
public:
    Visitor();
    Visitor(string visitorname, int ticketsbought);
   virtual ~visitor();
   
   string getvisitorname(){return visitorname;}
   int getticketsbought(){return ticketsbought}
   void setvisitorname(){const visitorname;}
   void setticketsbought(){const ticketsbought;}
void displayInfo();
};







#endif
