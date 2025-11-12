#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


void Animal::display(){
  
  cout<<"name"<<name<<endl;
  cout<<"age"<<age<<endl;
  cout<<"The hunger state is: "<<isHungry<<endl;
}

void Animal::feed(){
if(isHungry==0){
cout<<"The animal is hungry"endl;

}else if(isHungry==1){
  cout<<"The animal is not hungry"endl;
}
cout<<"Invalid"<<endl;

}

void Enclosure::addAnimal(Animal*a){
  int maxCapacity;
  *animal=new Animal[maxCapacity];

    
  for(int i=0;i<maxCapacity-1;i++){
  
  if(capacity<maxCapacity){
    animal[maxCapacity]=a;
    capacity++;
    
    }
}
    cout<<"The capacity is full"<<endl;
  
}

void Enclosure:: displayAnimals(){
  for(int i=0;i<maxCapacity-1;i++)
  cout<<
  
}

void Visitor::displayInfo(){
cout<<"The visitor name is : "<<visitorName<<endl;
cout<<"Number of tickets bought: "<<ticketsBought<<endl;
}





// ============== MAIN FUNCTION ==============
int main() {
    Enclosure *e=(Mammal,Bird,Reptile);

    visitor.displayInfo();
    Animalss.displayAnimals();
    Animal.feed();
    Enclosure.addAnimal();
    Enclosure.displayAnimals();
    
    return 0;
}
