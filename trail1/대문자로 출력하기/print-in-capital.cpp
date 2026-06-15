#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    string s2 = "";

    for (int i = 0; i < s1.length(); i++) {
        if (isalpha(s1[i]) != 0) {
            s2 += s1[i];
        }
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            s2[i] = s2[i] -'a' + 'A';
        }
    }

    cout << s2;

    return 0;
}