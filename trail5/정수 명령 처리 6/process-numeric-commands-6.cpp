#include <iostream>
#include <queue>
#include <string>
using namespace std;

priority_queue<int> pq;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int k;
            cin >> k;
            pq.push(k);
        }
        else if (cmd == "size") {
            cout << pq.size() << '\n';
        }
        else if (cmd == "pop") {
            cout << pq.top() << '\n';
            pq.pop();
        }
        else if (cmd == "top") {
            cout << pq.top() << '\n';
        }
        else if (cmd == "empty") {
            if (pq.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}