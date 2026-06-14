#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    cout << s << '\n';

    for (int i = 0; i < s.length(); i++) {
        cout << s.substr(s.length() - i - 1, i+1) + s.substr(0, s.length() - i - 1) << '\n';
    }
    
    return 0;
}