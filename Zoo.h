#pragma once
#ifndef __ZOO_H
#define __ZOO_H
#include "Enclosure.h"
class Owner;
class Staff;

class Zoo
{
public:
	Zoo(const Owner& owner, int num_Of_Staff, int num_Of_Enclosures, int entry_Fee);
	// Needs an owner to make a copy of, num of staff and enclosures for dynamic allocation
	// and entry fee.
	~Zoo(); // Needs to free staff and enclosure dynamic arrays.
private:
	Owner* zoo_Owner; //Temporary pointer since no Owner class defined.
	Staff** staff; // Dynamically allocated.
	Enclosure** enclosures; // Dynamically allocated.

	int num_Of_Visitors;
	int entry_Fee;
	int income;
};

#endif // __ZOO_H
