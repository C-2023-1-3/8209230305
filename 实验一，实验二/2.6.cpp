#include<iostream>
using namespace std;
int main() {
	int a, b, c, d = 1;
	cin >> a >> b;
	if (a > b)
	{
		c = a ;
	}
	else c = b ;
	
	do
	{
		c = c - 1;
		
	} while ((a % c != 0) || (b % c != 0));

	cout << "a和b的最大公因数为" << c<<endl;

while (d%a!=0||d%b!=0)
{
	d = d + 1;
}cout << "a和b的最小公倍数为" << d;
}