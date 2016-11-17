//
//  Pet.cpp
//  elisa program
//
//  Created by MAC on 11/17/16.
//  Copyright © 2016 parsia fatoorechi. All rights reserved.
//

#include <iostream>
#include "Pet.hpp"

using namespace std;

ostream& operator <<(ostream& os, const Pet& pt){
   os << "Name:" << pt.petname << " ,ID:" << pt.PetID << " ,type:"
   << pt.type << " ,limbs:" << pt.numLimbs << endl;
   return os;
};

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
