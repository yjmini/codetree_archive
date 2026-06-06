#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    string s2;

    for (int i = 0; i < s1.length(); i++) {
        if (i % 2 == 1) {
            s2 += s1[i];
        }
    }   

    for (int i = 0; i < s2.length(); i++) {
        cout << s2[s2.length()-i-1];
    }
    
    return 0;
}