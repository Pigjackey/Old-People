#include"Grandpa.h"

using namespace std;

Grandpa::Grandpa(void)
{

}

Grandpa::Grandpa(string nameIn, int ageIn)
{
	time_t now = (((time(0) / 60) / 60) / 24);

	setName(nameIn);
	setAge(ageIn);
	setDate(now);
}
Grandpa::~Grandpa(){}


void Grandpa::setName(string nameIn)
{
	name = nameIn;
}

void Grandpa::setAge(int ageIn)
{
	age = ageIn;
}

void Grandpa::setDate(int dateIn)
{
	dateLastLet = dateIn;
}


string Grandpa::getName()
{
	return name;
}

int Grandpa::getAge()
{
	return age;
}

int Grandpa::getDays(time_t timeIn)
{
	int days = timeIn - dateLastLet;
	return days;
}

int Grandpa::getDate()
{
	return dateLastLet;
}