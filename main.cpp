#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"

const int AR_SIZE = 3;


int main()
{
    Pet *pets[AR_SIZE];

    pets[0] = new Dog("Rex", 3);
    pets[1] = new Cat("Bella", 2);
    pets[2] = new Dog("Max", 4);

    for (int i = 0; i < AR_SIZE; i++)
    {
        pets[i]->DisplayInfo();
        pets[i]->Speak();
        cout << endl;
    }

    for (int i = 0; i < AR_SIZE; i++)
    {
        delete pets[i];
    }

    return 0;
}
