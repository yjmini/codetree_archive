#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main() {
    // Please write your code here.
    set<pair<int, int>> s;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        s.insert({x, y});
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        auto it = s.lower_bound({x, y});
        if (it != s.end()) {
            cout << it->first << " " << it->second << '\n';
        }
        else {
            cout << "-1 -1\n";
        }
    }
    return 0;
}