#include<iostream>
using namespace std;
int n;
class T
{private:
	int* sc = new int[n];
public:
	void S();
	void max();
};
void T::S()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> sc[i];
	}
};
void T::max()
{
	for (int t = 0; t < n; t++)
	{
		for (int o = t; o < n; o++)
		{
			if (sc[o ] < sc[o+1])
			{
				int u;
				u = sc[o];
				sc[o] = sc[o + 1];
				sc[o + 1] = u;

			}
		}

	}
	cout << sc[0] << endl;
}
int main() {
	T tl;
	tl.S();
	tl.max();
	return 0;
}