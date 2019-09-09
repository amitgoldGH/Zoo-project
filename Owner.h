#pragma once

#include "Manager.h"

class Owner : Person
{
	class Zoo;	//placeholder

public:
	Zoo get_Zoo();								//get owned zoo name
private:
	Zoo* owned_Zoo;								//Owner's zoo

	void set_Zoo(const Zoo& zoo);				//connect a zoo to this owner
	void add_Manager(const Manager& manager);	//add a manager to the zoo
	void fire_Manager(Manager& manager);		//remove manager from zoo
};