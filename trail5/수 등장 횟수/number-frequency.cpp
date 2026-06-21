#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> um;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        um[k]++;
    }

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cout << um[t] << " ";
    }
    return 0;
}