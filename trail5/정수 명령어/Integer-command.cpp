#include <iostream>
#include <set>
using namespace std;

int main() {
    // Please write your code here.

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        set<int> s;

        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            char c;
            int n;
            cin >> c >> n;

            if (c == 'I') {
                s.insert(n);
            }
            else if (c == 'D') {
                if (s.begin() != s.end()) {
                    if (n == 1){
                        s.erase(*s.rbegin());
                    }
                    else {
                        s.erase(*s.begin());
                    }

                }
            }
        }

        if (!s.empty()) {
            cout << *s.rbegin() << " " << *s.begin() << '\n';
        }
        else {
            cout << "EMPTY" << '\n';
        }
    }

    return 0;
}