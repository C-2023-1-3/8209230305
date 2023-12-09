#include<iostream>
using namespace std;
bool is_prime(int &num)
{
	int t;
	t = num - 1;
	for (; num % t != 0; t = t - 1);
	if (t == 1)
	{
		cout << num <<"  ";
		return true;
	}
	else { return false; }
}
int main() {
	int num = 1;
	int i = 1;
	while (num <= 200)
	{
		num = num + 1;
		if(is_prime(num)==1)
		if (i % 10 == 0)
		{
			cout << '\n';
			i++;
		}
		else {
			i++;
		}
	}
}