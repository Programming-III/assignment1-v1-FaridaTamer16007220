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
};


#endif
