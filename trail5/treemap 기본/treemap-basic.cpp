#include <iostream>
#include <map>
#include <string>
using namespace std;

map<int, int> m;
map<int, int>::iterator it;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmp;
        cin >> cmp;
        
        if (cmp == "add") {
            int k, v;
            cin >> k >> v;
            m[k] = v;
        }
        else if (cmp == "remove") {
            int k;
            cin >> k;
            m.erase(k);
        }
        else if (cmp == "find") {
            int k;
            cin >> k;
            if (m.find(k) != m.end()) {
                cout << m[k] << '\n';
            }
            else {
                cout << "None" << '\n';
            }
        }
        else if (cmp == "print_list") {
            if (!m.empty()) {
                for (it = m.begin(); it != m.end(); it++) {
                    cout << it->second << " ";
                }
                cout << '\n';
            }
            else {
                cout << "None" << '\n';
            }
        }
    }

    return 0;
}