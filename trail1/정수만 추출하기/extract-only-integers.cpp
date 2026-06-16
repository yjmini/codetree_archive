#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    string s3, s4;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {
            s3 += s1[i];
        }
        else {
            break;
        }
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] >= '0' && s2[i] <= '9') {
            s4 += s2[i];
        }
        else {
            break;
        }
    }

    cout << stoi(s3) + stoi(s4);
    return 0;
}