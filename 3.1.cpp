#include<iostream>
using namespace std;
void gsd(int &x, int &y) {
	int t;
	for (t = x >= y ? x : y; (x % t != 0)||(y % t != 0); t=t-1);
	int a;
	for (a = x >= y ? x : y; (a%x != 0) || (a% y!= 0); a = a+1);
	cout << "�������Ϊ" << t << endl;
	cout << "��С������Ϊ" << a << endl;
}
int main() {
	int m, n;
	cin >> m >>n;
	gsd(m, n);
	return 0;
}