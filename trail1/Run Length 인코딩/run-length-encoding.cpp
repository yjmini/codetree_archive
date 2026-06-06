#include <iostream>
#include <string>
using namespace std;

string s1;

int main() {
    cin >> s1;
    int cnt = 1;

    string str;
    str += s1[0];

    // Please write your code here.
    for (int i = 1; i < s1.length(); i++) {
        if (s1[i] != s1[i-1]) {
            str += to_string(cnt);
            str += s1[i];
            cnt = 1;
        }
        else {
            cnt++;
        }
    }

    str += to_string(cnt);
    cout << str.length() << '\n';
    cout << str;

    return 0;
}
