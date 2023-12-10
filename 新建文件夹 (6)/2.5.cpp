#include<iostream>
using namespace std;
int main()
{
	char f;
	int a = 0, b = 0, c = 0, d = 0, e;
	cout << "请输入一串字符";
	while (e=2)
	{
		
		cin.get(f);
		if (f == '\n')
			break;
		else if (f >= 'a' && f <= 'z' || f >= 'A' && f <= 'Z')
			a++;
		else if (f == ' ')
			b++;
		else if (f >= '0' && f <= '9')
			c++;
		else
			d++;
	}
	cout << "英文字母的个数" << a << endl;
	cout << "空格的个数" << b << endl;
	cout << "数字的个数" << c << endl;
	cout << "其他的个数" << d << endl;


}