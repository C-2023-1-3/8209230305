#include<iostream>
using namespace std; 
int main() 
{
	double a, x, y; 
	cin >> a;
	if (a < 0){cout << "a不能为负数"<<endl;}
	else 
		x = a, y = (x + a / x) * 1 / 2; 
	while (abs(y - x) >= 1e-5) {
		x = y;
		y = (x + a / x) * 1 / 2;
	}
		cout << y;
	return 0;  }
