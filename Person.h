#pragma once
#ifndef __PERSON_H
#define __PERSON_H
#include "Wallet.h"

class Person
{

public:

	Person(char* name, int age) 

	char* get_Name();
	
	char* get_Age();

private:
	char name[20];
	int age;

	Wallet wallet;
	void set_Name(char name[20]);
	void set_Age(int age);

};


#endif