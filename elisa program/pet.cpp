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
