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
	cout << "һ����" << tao(a) << "����";
}