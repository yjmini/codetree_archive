#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    string s2;

    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            s2 += s[i];
        }
    }

    for (int i = 0; i < s2.length(); i++) {
        cout << (char)tolower(s2[i]);
    }


    return 0;
}