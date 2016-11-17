//
//  PetStore.hpp
//  elisa program
//
//  Created by MAC on 11/17/16.
//  Copyright © 2016 parsia fatoorechi. All rights reserved.
//

#ifndef PetStore_hpp
#define PetStore_hpp

class PetStore {
public:
   static const int MAX_STORE_SIZE = 5000;

   Pet myStore[MAX_STORE_SIZE];

   bool searchPetStore();
};

#endif /* PetStore_hpp */
