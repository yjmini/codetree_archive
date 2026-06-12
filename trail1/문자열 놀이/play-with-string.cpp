#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int k;
        cin >> k;

        if (k == 1) {
            int a, b;
            cin >> a >> b;
            char temp;
            temp = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = temp;

            cout << s << '\n';
        }
        else if (k == 2) {
            char x, y;
            cin >> x >> y;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == x) {
                    s[j] = y;
                }
            }
            cout << s << '\n';
        }
    }

    return 0;
}