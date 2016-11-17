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
class Pet {
 private:
 string petname;
 long PetID;
 string type;
 int numLimbs;
public:
   static long population;
   static const int MAX_STR_LEN = 20;
   static const int MAX_NUM = 1000;
   static const int MAX_RAND = 10;
   static const int MAX_NUM_LIMBS = 1000;
   bool isValidStr(string s) {
    long n = s.length();
    return n > 0 && n <= MAX_STR_LEN;
 }
 bool isValidNum(long n) {
    return n >= 0 && n <= MAX_NUM;
 }
 const long DEFAULT_ID = 00000;
 const string DEFAULT_NAME = "undefined";
 const string DEFAULT_TYPE = "undefined";
 const double DEFAULT_NUM_LIMBS = 0.;
  static const int ARRAY_SIZE = 20;

   string randNames[ARRAY_SIZE] =
   { "Fido", "Harry", "jon", "sammy", "Frodo",
      "anand", "parsia", "kishan", "bob", "dylan",
      "marley", "edgar", "kaushik", " daenerys", "micheal",
      "bubbles","gary", "pete", "susan", "joffrey"
   };
   string randTypes[ARRAY_SIZE] =
   { "bunny", "frog", "mtn lion", "turtle", "dragon",
      "alligator", "buffalo", "crocodile", "dinasour", "dodo",
      "lebron james", "lion", "toad", "girrafe", "cockroach",
      "rhino", "gazelle", "zebra", "ogre", "donkey"};

   //Ctrs, Dtrs, Getters, setters to_string() and output
   Pet(){};
   Pet(string name, string type, long id, int numlimbs){
      setName(name); setType(type);
      setId(PetID); setNumLimbs(numLimbs);

   };
   ~Pet(){};

 long getId() const { return PetID; }
 string getName() const { return petname; }
 string getType() const { return type; }
 int getNumLimbs() const { return numLimbs; }

 bool setId(long id);
 bool setName(string name);
 bool setType(string type);
 bool setNumLimbs(int numLimbs);

 void randPet();

 string to_string() const;
 friend ostream& operator <<(ostream& os, const Pet& pt);
};
ostream& operator <<(ostream& os, const Pet& pt){
   os << "Name:" << pt.petname << " ,ID:" << pt.PetID << " ,type:"
   << pt.type << " ,limbs:" << pt.numLimbs << endl;
   return os;
};

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
