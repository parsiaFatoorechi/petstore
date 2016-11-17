//
//  Pet.hpp
//  elisa program
//
//  Created by MAC on 11/17/16.
//  Copyright © 2016 parsia fatoorechi. All rights reserved.
//

#ifndef Pet_hpp
#define Pet_hpp

#include <stdio.h>
#include <string>

using namespace std;
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

#endif /* Pet_hpp */
