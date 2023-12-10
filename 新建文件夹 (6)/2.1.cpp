#include <iostream>
using namespace std;
int main()
{
	char c;
	int d;
	cout << "请输入一个字符";
	cin >> c;
		if(c<='z '&& c >= 'a')
		{
			d = c - 32;
			cout << "其大写字母为";
			cout << static_cast<char>(d);
		}
		else cout << "其ASCLL码为" << static_cast<int>(c);
return 0;
}
