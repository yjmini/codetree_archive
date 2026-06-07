#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2; 
    cin >> s1 >> s2;

    if (s1 + s2 == s2 + s1) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}