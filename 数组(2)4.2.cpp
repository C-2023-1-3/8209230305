#include<iostream>
#include<string>
using namespace std;
#define a 100
//��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�
// ����ԭ�� int parseHex(const char* const hexString);
//�磺���ú��� parseHex(��A5��); ����165
int parseHex(const char* const hexString);
int main() {
	char b[a];
	cin.getline(b, a);
       cout << parseHex(b) << endl;
}
int parseHex(const char* const hexString)
{
    int d = strlen(hexString);
        int i = 0;
        for (int e = 0; e < d;e++) {
                char c = hexString[e];
                if (c >= '0' && c <= '9') {
                   i += (c - '0') * pow(16, d - 1 - e);
                }
                else if (c >= 'A' && c <= 'F') {
                   i += (c - 'A' + 10) * pow(16, d - 1 - e);
                }
                else if (c >= 'a' && c <= 'f') {
                    i += (c - 'a' + 10) * pow(16, d - 1 - e);
                }
                else {
                    return -1; 
                }
            }
            return i;
}	