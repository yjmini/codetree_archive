#include <iostream>
#include <set>
using namespace std;

int main() {
    // Please write your code here.
    set<int> s;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        s.insert(k);
    }

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (s.lower_bound(t) == s.end()) {
            cout << -1 << '\n';
        }
        else {
            cout << *s.lower_bound(t) << '\n';
        }
    }
    return 0;
}