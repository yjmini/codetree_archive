#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    string s2 = "ee";
    string s3 = "eb";
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < s1.length() - 1; i++) {
        if (s1.substr(i, 2) == s2) {
            cnt1++;
        }
        if (s1.substr(i, 2) == s3) {
            cnt2++;
        }
    }

    cout << cnt1 << " " << cnt2;
    
    return 0;
}