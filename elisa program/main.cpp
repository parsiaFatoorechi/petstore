//
//  main.cpp
//  elisa program
//
//  Created by MAC on 10/25/16.
//  Copyright © 2016 parsia fatoorechi. All rights reserved.
//
// NOTES ON CLASSES****:
#include <iostream>
#include <ctime>
#include <sstream>
#include <string>
#include <array>
using namespace std;
/*object oriented programming
 static data in classes mean that
classes definet the way an ovject is created. like a blueprint
implement your methods after the main.*/
class PetStore {
public:
   static const int MAX_STORE_SIZE = 5000;

   Pet myStore[MAX_STORE_SIZE];

   bool searchPetStore();
};

int main() {
   srand((unsigned)time(NULL));
   Pet myPet;
   myPet.randPet();
   cout << myPet;

   Pet petStore[1000];
   for ( int i = 0; i < (sizeof(petStore)/sizeof(petStore[0])); ++i){
      petStore[i].randPet();
      cout << petStore[i];
   }
}

bool Pet::setName(string name){
   if (isValidStr(name)){
      petname = name;
      return true;
   }
   return false;
};

bool Pet::setNumLimbs(int limbs){
   if (isValidNum(limbs)){
      numLimbs = limbs;
      return true;
   }
   return false;
};

bool Pet::setType(string type){
   if (isValidStr(type)){
      this->type = type;
      return true;
   }
   return false;
};

bool Pet::setId(long id){
   if (isValidNum(id)){
      PetID = id;
      return true;
   }
   return false;
};

void Pet::randPet(){
   setNumLimbs(rand()%10);
   setId(rand()%1000);
   setName(randNames[rand()%ARRAY_SIZE]);
   setType(randTypes[rand()%ARRAY_SIZE]);
};
 //friend ostream& operator
 // display(pull); is a globalscope method which displays our triple string.//
 //constructors create the classes but tilda(~) is a destructor//
 //create your own method that allows you to display the triplestring as a whole
 // like://
/* friend allows the person to access the privates*/
