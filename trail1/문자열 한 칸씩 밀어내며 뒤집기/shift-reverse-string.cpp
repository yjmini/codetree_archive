#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;

        if (n == 1) {
            s = s.substr(1, s.length() - 1) + s.substr(0, 1);
        }
        else if (n == 2) {
            s = s.substr(s.length()-1, 1) + s.substr(0, s.length() - 1);
        }
        else if (n == 3) {
            reverse(s.begin(), s.end());
        }
        cout << s << '\n';
    }
    return 0;
}