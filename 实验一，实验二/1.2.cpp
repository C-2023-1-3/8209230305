#include <iostream>
using namespace std;
int main()
{
  double r, h,Π,v;
  Π = 3.14;
  cout << "输入圆锥的半径和高：";
  cin >> r >> h;
  v =  r * r * h * Π/3;
  cout << "圆锥的体积为" << v << endl;
}