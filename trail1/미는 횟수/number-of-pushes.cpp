#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;

    for (int i = 0; i < s1.length(); i++) {
        s1 = s1.substr(s1.length()-1, 1) + s1.substr(0, s1.length()-1);
        cnt++;
        if (s1 == s2) {
            break;
        }
    }

    if (cnt == s1.length()) {
        cout << -1;
    }
    else {
        cout << cnt;
    }
    return 0;
}