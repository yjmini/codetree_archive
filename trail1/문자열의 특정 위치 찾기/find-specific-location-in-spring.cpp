#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    char c;
    cin >> c;

    int idx = -1;

    if (s1.find(c) != string::npos) {
        idx = s1.find(c);
    }

    if (idx == -1) {
        cout << "No";
    }
    else {
        cout << idx;
    }

    return 0;
}