#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    for (int m = 0; m < size1; m++)
        list3[m] = list1[m];
    for (int n = 0; n < size2; n++)
        list3[size1 + n] = list2[n];
    for(int e=0;e<size1+size2;e++)
        for(int f=e+1;f<size1+size2;f++)
            if (list3[e]>list3[f])
            {
                int d;
                d = list3[e];
                list3[e] = list3[f];
                list3[f] = d;

            }

}
int main()
{
    int size1, size2;
    cout << "请输入第一个数组元素数";
    cin >> size1;
    cout << "该数组的元素为";
    int* list1 = new int[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
    cout << "请输入第二个数组元素数";
    cin >> size2;
    cout << "该数组的元素为";
    int* list2 = new int[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> list2[i];
    }
    int a = size1 + size2;
    int* ap = new int[a];
    merge(list1, size1, list2, size2, ap);
    cout << "这两个数组结合后排序为";
    for (int i = 0; i < a; i++)
        cout << ap[i] << " ";
   delete[] list1;
   delete[] list2;
   delete[] ap;

    return 0;
}