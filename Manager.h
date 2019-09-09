#pragma once

#include "Staff.h"
#include "Caretaker.h"

class Manager : Staff
{
	
public:

private:
	Staff** subordinates; //(pointer to employee array, given when hired)

	void add_subordinate(const Caretaker& subordinate);		//add new caretaker
	void fire_subordinate(const Caretaker& subordinate);	//remove caretaker
};