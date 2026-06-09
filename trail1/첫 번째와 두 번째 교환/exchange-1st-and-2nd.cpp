#include <iostream>
#include <string> 
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    char c1 = s1[0];
    char c2 = s1[1];

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == c1) {
            s1[i] = c2;
        }
        else if (s1[i] == c2) {
            s1[i] = c1;
        }
    }

    cout << s1;

    return 0;
}