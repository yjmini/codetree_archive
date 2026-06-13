#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    while (s1.find(s2) != string::npos) {
        s1.erase(s1.find(s2), s2.length());        
    }

    cout << s1;

    return 0;
}