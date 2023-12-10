#include<iostream>
#include<iomanip>
using namespace std;
#include"mytemperature.h"
double celsius_to_fah(double cel)
{
	double f;
	f = 9 * cel / 5 + 32;
	
	cout<< setiosflags(ios::left) << setw(15) << cel << setw(15) << f << endl;
	return f;
}
double fahrenheit_to_cel(double fah)
{
	double c;
	c = 5 * (fah - 32) / 9;
	cout << setiosflags(ios::left) << setw(15) << fah << setw(15) << c<< endl;
	return c;
}