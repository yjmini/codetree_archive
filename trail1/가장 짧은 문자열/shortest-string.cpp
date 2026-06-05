#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int minVal = min({s1.length(), s2.length(), s3.length()});
    int maxVal = max({s1.length(), s2.length(), s3.length()});

    cout << maxVal - minVal;

    return 0;
}