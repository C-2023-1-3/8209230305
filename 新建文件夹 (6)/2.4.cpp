#include <iostream>  
using namespace std;
	int main() {
	int a, b;
	double (a/b);
	char c;
	cout << "输入第一个数字";
	cin >> a;
	cout << "输入符号";
	cin >> c;
	cout << "输入第二个数字";
	cin >> b;
	switch (c)
	{case'+':
		cout << a + b << endl; break;
	case'-':
		cout << a - b << endl; break;
	case'*':
		cout << a * b << endl; break;
	case'/':
		if (b == 0) { cout << "除数不能为0"; break;
		}
		else { cout <<( a / b); break;
		}
		 
	case'%':
		if (b == 0) { cout << "除数不能为0"; break;
		}
		else { cout << a % b; break;
		}
		
	default:
		break;
	}
}