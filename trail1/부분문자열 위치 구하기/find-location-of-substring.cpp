#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    int idx = -1;

    if (s1.find(s2) != string::npos) {
        idx = s1.find(s2);
    }

    cout << idx;
    
    return 0;
}