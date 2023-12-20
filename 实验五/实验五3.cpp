#include<iostream>
using namespace std;
class v
{
private:
	int length;
	int width;
	int height;
public:
	void S() 
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> length;
			cin >> width;
			cin >> height;
			cout << "该长方体的体积为" << length * width * height << endl;
		}
	}
};
int main() {
	v tl;
	tl.S();
	return 0;
}