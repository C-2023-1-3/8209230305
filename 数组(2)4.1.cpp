#include<iostream>
#include<string>
using namespace std;
//编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回 - 1。
// 在主程序中输入字符串s1与s2，调用函数实现。
//函数原型：int indexof(const char* s1, const char* s2);
#define M 200
int indexof(const char* s1, const char* s2)

{
	size_t a1 = strlen(s1);
	size_t a2 = strlen(s2);
	int e = 0, i = 0, d;
	bool c = false;
	for (i = 0; i < a1; i++)
	{
		for (e = 0; e < a2; e++)
		{
			if (s1[i] == s2[e])
			{
				d = e;

				for (int f = i + 1; f < a1; f++, e++)
				{
					if (s1[f] == s2[e + 1])
					{
						c = true;
					}
					else { c = false; }
				}
				if (c == true)
				{
					return d;
					break;
				}
			}
		}

	}
	return -1;
}
int main() {
	char s1[M];
	char s2[M];
	cout << "第一个字符串为";
	cin.getline(s1, M);
	cout << "第二个字符串为";
	cin.getline(s2, M);
	if (indexof(s1, s2) == -1)
	{
		cout << "第一个字符串不是第二的字符串的子字符串";

	}
	else {
		cout << "第一个人字符串为第二个字符串的子字符串，下标为：" << indexof(s1, s2);
	}

}