//
// Created by ekalb on 3/12/2025.
//

#ifndef DOG_H
#define DOG_H

#include "Pet.h"


class Dog : public Pet
{
public:
    Dog(string n, int a);
    void Speak() override;
};



#endif //DOG_H
