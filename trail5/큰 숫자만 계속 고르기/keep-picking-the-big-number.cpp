#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        pq.push(k);
    }

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;

        int t = pq.top();
        pq.pop();
        pq.push(t-1);
    }
    cout << pq.top();

    return 0;
}