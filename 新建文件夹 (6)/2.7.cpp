#include<iostream>
using namespace std;
int main()
{
	int a =5 ,b=1;
	while (b<6&&b>0)
	{
		while (a<6&&a>0) {
			cout << '*';
			a = a + 1;
		}
		cout << '\n';
		b = b + 1;
		a = 6 - b;
	}
}