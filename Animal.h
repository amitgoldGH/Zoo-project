#pragma once
#ifndef __ANIMAL_H
#define __ANIMAL_H
enum animal_Type { Cheetah, Elephant }; // Defines what type of animals can be made with enum.
class Animal 
{
private:
	animal_Type type; // Defines what type of animal it is, used for comparison.
	char name[20]; // Animal's name.
	int age; // Animal's age.

public:
	Animal(char name[20], int age, animal_Type aniType); // Normal constructor
	void set_Name(const char name[20]); // Receives a const char to set the animal's name.
	const char* get_Name(); // Returns the animal's name.
	void set_Age(int age); // Set animal's Age.
	int get_Age(); // Returns the animal's age.
	void speak(); // Print to console the animal's speech. (Cat: "Meow", etc.)
};
#endif // __ANIMAL_H