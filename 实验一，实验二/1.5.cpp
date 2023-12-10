#include <iostream>
using namespace std;
int main() {
	double C,F;
	cout << "华氏温度为";
	cin>>F;
	
	C = 5 * (F - 32) / 9;
	double c = round(C * 100) / 100;
	cout << "摄氏温度为" <<c << endl;
	return 0;
}