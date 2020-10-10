#include"Grandma.h"

using namespace std;

Grandma::Grandma(void)
{

}

Grandma::Grandma(string nameIn, int ageIn)
{
	int days = 0;

	setName(nameIn);
	setAge(ageIn);
	setDays(days);
}
Grandma::~Grandma(){}

void Grandma::setName(string nameIn)
{
	name = nameIn;
}

void Grandma::setAge(int ageIn)
{
	age = ageIn;
}

void Grandma::setDays(int daysIn)
{
	daysLastLet = daysIn;
}

string Grandma::getName()
{
	return name;
}

int Grandma::getAge()
{
	return age;
}

int Grandma::getDays()
{
	return daysLastLet;
}