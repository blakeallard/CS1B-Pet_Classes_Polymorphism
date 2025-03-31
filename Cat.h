//
// Created by ekalb on 3/12/2025.
//

#ifndef CAT_H
#define CAT_H

#include "Pet.h"


class Cat : public Pet
{
public:
    Cat(string n, int a);
    void Speak() override;
};




#endif //CAT_H
