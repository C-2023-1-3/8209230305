#include<iostream>
using namespace std;
int tao(int a) {
	int n;
	if (a==1)
	{
		n = 1;
	}else
	{
		n= (tao(a - 1) + 1) * 2;
	}
	
	return n;
}
int main() {
	int a = 10;
	cout << "一共有" << tao(a) << "个桃";
}