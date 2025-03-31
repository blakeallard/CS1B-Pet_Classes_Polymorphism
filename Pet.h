//
// Created by ekalb on 3/12/2025.
//

#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;


class Pet
{
private:

public:
    string name;
    int    age;
    string type;

    Pet(string n, int a, string t);
    virtual void Speak();
    void DisplayInfo() const;
};





#endif //PET_H
