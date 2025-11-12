#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <iostream>
#include<string>
using namespace std;

class Enclosure{
  
  private:
  Animal*animal;
  int capacity;
  int currentCount;
  
  public:
  void addAnimal(Animal*a);
  void displayAnimals();
Enclosure();
Enclosure( int capacity,int currentCount);
};
#endif
