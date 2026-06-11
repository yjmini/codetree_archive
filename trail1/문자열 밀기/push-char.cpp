#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    int len = s1.length();

    string s2 = s1.substr(1, len-1) + s1.substr(0, 1);
    cout << s2;
    
    return 0;
}