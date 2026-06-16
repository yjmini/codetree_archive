#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cout << (char)toupper(s[i]);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << (char)tolower(s[i]);
        }
    }
    return 0;
}