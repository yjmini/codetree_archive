#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1; 
    string s2; 

    cin >> s1 >> s2;

    if (s1.length() > s2.length()) {
        cout << s1 << " " << s1.length();
    }
    else if (s1.length() < s2.length()) {
        cout << s2 << " " << s2.length();
    }
    else {
        cout << "same";
    }
    return 0;
}