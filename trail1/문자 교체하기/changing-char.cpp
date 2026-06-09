#include <string>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    s2[0] = s1[0];
    s2[1] = s1[1];

    cout << s2;
    
    return 0;
}