This program simulates a collection of pets using inheritance and polymorphism. It allows you to create different types of pets (e.g., dogs and cats) and demonstrates the use of virtual functions to implement polymorphic behavior, specifically with the Speak function. The program also uses dynamic memory allocation to manage pet objects.

Key Features:
Polymorphism: The program uses virtual functions to call the correct Speak method based on the pet type, even though the function is called through a Pet pointer.

Inheritance: The Dog and Cat classes inherit from the Pet class, each overriding the Speak method to provide specific behavior.

Dynamic Memory Allocation: Pet objects are dynamically created and stored in an array using new for proper memory management.

Displaying Pet Information: The program displays the name, age, and type of each pet using the DisplayInfo method.

Skills Demonstrated:
Object-Oriented Programming: This program demonstrates inheritance and polymorphism by using a base class (Pet) and derived classes (Dog, Cat).

Dynamic Memory Management: The program dynamically allocates memory for pet objects and deletes them when done.

Virtual Functions: Demonstrating how virtual functions work to ensure the correct method is called for each pet type.

Arrays of Pointers: Using arrays of pointers to manage multiple pet objects.

Files Included:
main.cpp – The main file where pets are created, their information displayed, and their unique sounds (via Speak) are played.

Pet.h – Header file containing the Pet class definition, with basic information and a virtual Speak method.

Pet.cpp – Implements the methods of the Pet class, including the constructor and Speak method.

Dog.h – Header file for the Dog class, derived from Pet, with an overridden Speak method.

Dog.cpp – Implements the Dog class methods.

Cat.h – Header file for the Cat class, derived from Pet, with an overridden Speak method.

Cat.cpp – Implements the Cat class methods.

