#pragma once


class Caretaker : Staff
{
	class Enclosure;	//plaeholder
public:
	Enclosure* get_enclosure_Cared();	//enclosure to be managed 

private:
	Enclosure* enclosure_Cared; //(which enclosure he's taking care of)

	void set_Enclosure_Cared(Enclosure& enclosure); //assign an enclosure to this caretaker
};