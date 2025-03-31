//
// Created by ekalb on 3/12/2025.
//

#include "Cat.h"

Cat::Cat(string n, int a) : Pet(n, a, "Cat"){}


void Cat::Speak()
{
    cout << name << " says: Meow! Meow!\n";
}