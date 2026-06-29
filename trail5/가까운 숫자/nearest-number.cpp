#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    s.insert(0);

    int diff = 2e9;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        auto it = s.insert(k);
        auto now = it.first;

        int tempA, tempB;

        auto left = now;
        auto right = now;

        if (now != s.begin()) {
            left--;
            tempA = *now - *left;
            diff = min(tempA, diff);
        }

        right++;
        if (right != s.end()) {
            tempB = *right - *now;
            diff = min(tempB, diff);
        }

        cout << diff << '\n';
    }

    
    

    return 0;
}
