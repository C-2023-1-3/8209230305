#include<iostream>
using namespace std;
//主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
// 设计一个函数对数组由小到大排序；
// 主程序中用指针方式输出数组元素；最后释放数组内存（delete）。
void sort(int a[],int r){
	for (int e = 0; e <r ; e++)
	{for(int j=e+1;j<r;j++)
		if (a[e]>a[j])
		{
			int t;
			t = a[e];
			a[e] = a[j];
			a[j] = t;

		}
	}
}
int main() {
	int n;
	cout << "输入数字的个数为";
	cin >> n;
	int* a = new int[n];
	cout << "输入这串数字：";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a,n);
	int* m = a;
	cout << "这串数字由小到大依次为";
	for (int u = 0; u < n; u++)
	{
		cout << *m << " ";
		m = m + 1;
	}
	delete[] a;
}