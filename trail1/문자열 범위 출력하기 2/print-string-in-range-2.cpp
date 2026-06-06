#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string s1;
    cin >> s1;

    int n;
    cin >> n;

    int len = s1.length();

    if (n < len) {
        for (int i = 0; i < n; i++) {
            cout << s1[len-i-1];
        }
    }
    else {
        for (int i = 0; i < len; i++) {
            cout << s1[len-i-1];
        }
    }

    return 0;
}