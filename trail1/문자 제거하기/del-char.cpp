#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int len = s.length();

    while (len > 1) {
        int n;
        cin >> n;

        if (n >= len) {
            s.erase(len-1, 1);
        }
        else {
            s.erase(n, 1);
        }
        
        len--;

        cout << s << '\n';
    }
    return 0;
}