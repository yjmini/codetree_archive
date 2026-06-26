#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    // Please write your code here.
    set<int> s;
    int n;
    cin >> n;

    for (int i = 0 ; i < n; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "add") {
            int x;
            cin >> x;
            s.insert(x);
        }
        if (cmd == "remove") {
            int x;
            cin >> x;

            s.erase(x);
        }
        if (cmd == "find") {
            int x;
            cin >> x;

            if (s.find(x) != s.end()) {
                cout << "true" <<'\n';
            }
            else {
                cout << "false" <<'\n';
            }
        }
        if (cmd == "lower_bound") {
            int x;
            cin >> x;

            if (s.lower_bound(x) != s.end()) {
                cout << *s.lower_bound(x) << '\n';
            }
            else {
                cout << "None" << '\n';
            }
        }
        if (cmd == "upper_bound") {
            int x;
            cin >> x;

            if (s.upper_bound(x) != s.end()) {
                cout << *s.upper_bound(x) << '\n';
            }
            else {
                cout << "None" << '\n';
            }
        }
        if (cmd == "largest") {
            if (s.rbegin() != s.rend()) {
                cout << *s.rbegin() << '\n';
            }
            else {
                cout << "None" << '\n';
            }
        }
        if (cmd == "smallest") {
            if (s.begin() != s.end()) {
                cout << *s.begin() << '\n';
            }
            else {
                cout << "None" << '\n';
            }
        }
    }
    return 0;
}