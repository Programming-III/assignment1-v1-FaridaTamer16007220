#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include<string>
using namespace std;


class Animal{
  
private:
string name;
int age;
bool isHungry;


public:
void display();
void feed();


  class Mammal:public Animal{
    
    string furColor;
    
  }
  
  class Bird:public Animal{
    float wingSpan;
    
  }
  
  class Reptile:public Animal{
    
    bool isVenomous;
  }
};

#endif
