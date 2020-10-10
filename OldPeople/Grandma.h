#pragma once
#include<iostream>
#include<string>

using namespace std;

class Grandma
{
	private:

		string name;
		int age;
		int daysLastLet;

	public:

		Grandma(void);
		Grandma(string nameIn, int ageIn);
		virtual ~Grandma();

		void setName(string nameIn);
		void setAge(int ageIn);
		void setDays(int daysIn);

		string getName();
		int getAge();
		int getDays();
};