#pragma once
#include<iostream>
#include<time.h>
#include<string>

using namespace std;

class Grandpa
{
	private:

		string name;
		int age;
		int dateLastLet;

	public:

		Grandpa(void);
		Grandpa(string nameIn, int ageIn);
		virtual ~Grandpa();

		void setName(string nameIn);
		void setAge(int ageIn);
		void setDate(int dateIn);

		string getName();
		int getAge();
		int getDays(time_t timeIn);
		int getDate();
};