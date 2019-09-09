#pragma once

#include "Person.h"

class Visitor : Person
{
	class Zoo;	//placeholder

public:
	char* get_Favorite_Animal();				//get visitor's favorite animal name

private:
	char favorite_Animal[20];					//favorite animal's name
	char* set_Favorite_Animal(char name[20]);	//set the name of a favorite animal
	bool visit_Zoo(Zoo* zoo) const;				//pay entry fee to enter the zoo
}