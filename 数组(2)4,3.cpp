#include<iostream>
using namespace std;
//�������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ۲�ָ�뼰ָ��ָ������ݣ�
// ���һ��������������С��������
// ����������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete����
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
	cout << "�������ֵĸ���Ϊ";
	cin >> n;
	int* a = new int[n];
	cout << "�����⴮���֣�";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a,n);
	cout << "�⴮������С��������Ϊ";
	for (int u = 0; u < n; u++)
		cout << a[u] << " ";
	delete[] a;
}