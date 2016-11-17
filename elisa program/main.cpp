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
#include "Pet.cpp"
#include "PetStore.cpp"
using namespace std;
/*object oriented programming
 static data in classes mean that
classes definet the way an ovject is created. like a blueprint
implement your methods after the main.*/

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
 //friend ostream& operator
 // display(pull); is a globalscope method which displays our triple string.//
 //constructors create the classes but tilda(~) is a destructor//
 //create your own method that allows you to display the triplestring as a whole
 // like://
/* friend allows the person to access the privates*/