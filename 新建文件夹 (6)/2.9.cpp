#include<iostream>
using namespace std;
int main() {
	int a = 2, b = 0, i = 0, d = 0;
	float c;
	while (d <= 100)
	{
		i = i + 1;
		b = b + a;
		a = a * 2;
		d = b + a;

	}c = 0.8 * b / i;
	cout << c;
}