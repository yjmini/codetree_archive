#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    int len1 = s1.length();
    int len2 = s2.length();

    for (int i = 0; i < len2; i++) {
        char c = s2[0];
        if (c == 'L') {
            s1 = s1.substr(1, len1-1) + s1.substr(0, 1);
        }
        else if (c == 'R') {
            s1 = s1.substr(len1-1, 1) + s1.substr(0, len1-1);
        }
        s2.erase(0, 1);
    }

    cout << s1 << '\n';


    return 0;
}