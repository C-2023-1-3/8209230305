#include<iostream>
using namespace std;
#include<iomanip>
#include"mytemperature.h"
int main() {
	double cel,fah;
	int n;
	cin >> n;
	cout << setiosflags(ios::left) << setw(15) << "Celsius" << setw(15) << "Fahrenhelt" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> cel;
		celsius_to_fah(cel);
	}
	int a;
	cin >> a;
		cout << setiosflags(ios::left) << setw(15) << "Fahrenhelt"  << setw(15) <<  "Celsius"  << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> fah;
		fahrenheit_to_cel(fah);
	}
	
}