#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    string s3;
    s3 = to_string(stoi(s1) + stoi(s2));

    int cnt = 0;
    for (int i = 0; i < s3.length(); i++) {
        if (s3[i] == '1') {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}