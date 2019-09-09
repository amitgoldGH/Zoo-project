#pragma once
#ifndef __ENCLOSURE_H
#define __ENCLOSURE_H
#include "Animal.h"

class Enclosure
{
private:
	animal_Type enclosure_Type; // What type of aniaml a specific enclosure can hold, used for comparison.

	Animal* contained_Animals; // Dynamically allocated Animal array.

public:
	Enclosure(animal_Type enclosure_Type, int enclosure_Size); /*Requires the type of animal
															   the enclosure will hold and also
															   the number of animals that the enclosure
															   will hold.*/
	~Enclosure(); // Needs to free contained_Animals dynamic array.
};
#endif // __ENCLOSURE_H

