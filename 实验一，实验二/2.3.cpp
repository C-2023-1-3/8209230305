#include<iostream>；
using namespace std;
int main()
{
	int a, b, c,C;
	cout<< "三角形的三边常为：";
	cin >> a >> b >> c;
	if(c<a+b&&a<b+c&&b<a+c)
	{
		C = a + b + c;
		cout << "三角形的周长为" << C << endl;
		if (a == c || b == c || a == b ) { cout << "三角形为等腰三角形"; }
	}
	else { cout << "三角形不存在"; }
}