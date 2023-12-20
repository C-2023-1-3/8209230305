#include <iostream>
#include "student.h"            
void Student::display()
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
Student::Student() {

}
void Student::sex_value(int t, const char* y, char x) {
    num = t;
    strcpy_s(name, y);
    sex = x;
}