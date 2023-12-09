#include<iostream>
using namespace std;
int main() {
	int g[100] = { 0 };
	int a;
	for (int b = 1; b < 100; b++)
	{
		for (int c = b - 1; c < 100; c = c + b)
			if(g[c]==1)
			{
				g[c] = 0;
			}else
		{ g[c] = 1; }
	}
	cout << "第";
	for(int d=0;d<100;d++)
	{
		if (g[d] == 1) {
			cout << d+1 << ",";
	} }
	cout << "号存物柜是开着的";
}