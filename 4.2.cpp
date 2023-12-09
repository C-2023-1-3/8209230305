#include<iostream>
using namespace std;
void swap(int& x, int& y)
{
	int t;
		t = x;
		x = y;
		y = t;
}
int main()
{
	const int MaxN =10;
	int n, i,j;
	double a[MaxN];
	for (n = 0; n < MaxN; n++)
	{
		cin >> a[n];
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);

			}
	for (i = 0; i < n; i++)
		cout << a[i] << "\t";
	return 0;

}