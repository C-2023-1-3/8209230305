#include<iostream>
#include<string>
using namespace std;
#define M 200
int indexOf(const char s1[], const char s2[])

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
	cout << "��һ���ַ���Ϊ";
	cin.getline(s1, M);
	cout << "�ڶ����ַ���Ϊ";
	cin.getline(s2, M);
	if (indexOf(s1,s2)==-1)
	{
		cout << "��һ���ַ������ǵڶ����ַ��������ַ���";

	}
	else {
		cout << "��һ�����ַ���Ϊ�ڶ����ַ��������ַ������±�Ϊ��" << indexOf(s1, s2);
	}

}