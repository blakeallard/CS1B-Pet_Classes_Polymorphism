//
// Created by ekalb on 3/12/2025.
//

#include "Dog.h"

Dog::Dog(string n, int a) : Pet(n, a, "Dog"){}


void Dog::Speak()
{
    cout << name << " says: Woof! Woof!\n";
}
