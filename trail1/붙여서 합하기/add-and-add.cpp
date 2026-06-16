#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    string s3, s4;
    s3 = s1 + s2;
    s4 = s2 + s1;

    cout << stoi(s3) + stoi(s4);

    return 0;
}