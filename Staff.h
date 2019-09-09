#pragma once

class Staff : Person
{
	//abstract class
public:
	int get_Salary();				//get staff's salary

private:

	int salary;						//staff's salary
	void set_Salary(int salary);	//change staff's salary

};