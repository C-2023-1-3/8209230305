#include <iostream>
#include "student.h"            
void Student::display()
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
Student::Student() {

}
void Student::sex_value(int t, const char* y, char x) {
    num = t;
    strcpy_s(name, y);
    sex = x;
}