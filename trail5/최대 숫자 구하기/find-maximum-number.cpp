#include <iostream>
#include <set>
using namespace std;

int main() {
    // Please write your code here.

    set<int> s;
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        s.insert(i);
    }

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        s.erase(k);

        cout << *s.rbegin() << '\n';
    }
    return 0;
}