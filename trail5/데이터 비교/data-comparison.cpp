#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> us;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        us.insert(k);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (us.find(t) != us.end()) {
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }



    return 0;
}