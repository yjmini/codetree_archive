#include <iostream>
#include <list>
#include <string>
#include <iterator>
using namespace std;

list<string> l;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    l.push_front(s);

    int n;
    cin >> n;

    list<string>::iterator it = l.begin();

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k == 1) {
            string s2;
            cin >> s2;
            l.insert(it, s2);
        }
        else if (k == 2) {
            string s2;
            cin >> s2;
            l.insert(next(it), s2);
        }
        else if (k == 3) {
            if (it != l.begin()) {
                it--;
            }
        }
        else if (k == 4) {
            if (next(it) != l.end()) {
                it++;
            }
        }

        if (it == l.begin()) {
            cout << "(Null) ";
        }
        else {
            cout << *(prev(it)) << " ";
        }

        cout << *it << " ";

        if (next(it) == l.end()) {
            cout << "(Null)" << '\n';
        }
        else {
            cout << *(next(it)) << '\n';
        }
    }

    return 0;
}