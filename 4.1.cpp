#include<iostream>
using namespace std;
int main() {
    int list[10];
    int count = 0;
    int num;
    cout << "������10��������" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        bool inside = false;
        for (int j = 0; j < count; j++) {
            if (list[j] == num) {
                inside = true;
                break;
            }
        }
        if (!inside) {
            list[count] = num;
            count++;
        }
    }
    cout << "��ͬ�����У�" << endl;
    for (int i = 0; i < count; ++i) {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}