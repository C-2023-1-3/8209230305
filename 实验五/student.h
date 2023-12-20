#include <iostream>
using namespace std;
class Student              
{
public:
	void display();
	Student();
	void sex_value(int t,const char* y, char x);
private:
	int num;
	char name[20];
	char sex;
};
