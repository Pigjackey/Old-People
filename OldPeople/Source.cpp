#include<iostream>
#include<string>
#include<time.h>
#include"Grandma.h"
#include"Grandpa.h"

using namespace std;

int main()
{
	string sampGp = "Al";
	string sampGm = "Sue";
	int sampGpA = 78;
	int sampGmA = 75;

	time_t now = (((time(0)/60)/60)/24);

	Grandpa al = Grandpa(sampGp, sampGpA);
	Grandma sue = Grandma(sampGm, sampGmA);

	cout << "Data" << endl;
	cout << al.getName() << endl << al.getDays(now) << endl;

	return 0;
}