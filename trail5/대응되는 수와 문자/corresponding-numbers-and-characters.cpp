#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;
unordered_map<int, string> um;
unordered_map<string, int> um2;


int main() {
    // Please write your code here. 
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        um.insert({i, s});
        um2.insert({s, i});
    }

    for (int i = 0; i < m; i++) {
        string s2;
        cin >> s2;

        if (isdigit(s2[0])) {
            int key = stoi(s2);
            
            if (um.find(key) != um.end()) {
                cout << um[key] << '\n';
            }
        }
        else {
            cout << um2[s2] << '\n';
        }
    }

    return 0;
}
