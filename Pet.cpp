//
// Created by ekalb on 3/12/2025.
//

#include "Pet.h"

Pet::Pet(string n, int a, string t)
{
    name = n;
    age  = a;
    type = t;
}

void Pet::Speak()
{
    cout << " *crickets*";
}

void Pet::DisplayInfo() const
{
    cout << name << " is a " << age << " year old " << type << ".\n";
}
