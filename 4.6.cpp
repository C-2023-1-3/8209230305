#include <iostream>
#include <cstring>
using namespace std;
void count(const char s[], int counts[]) 
{
    int len = strlen(s);
        for (int i = 0; i < len; i++) 
        {
            if (s[i] >= 'a' && s[i] <= 'z') {
                counts[s[i] - 'a']++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                counts[s[i] - 'A']++;
            }
        }
}
int main()
{
    char s[100];
    int counts[26] = { 0 };

    cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®: ";
    cin.getline(s, 100);

    count(s, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << (char)('a' + i) << ":" << counts[i] <<endl;
        }
    }
    return 0;
}