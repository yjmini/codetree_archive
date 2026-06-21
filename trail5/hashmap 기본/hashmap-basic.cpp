#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
string cmd[100000];
int k[100000];
int v[100000];
unordered_map<int, int> um;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd[i];
        cin >> k[i];
        if (cmd[i] == "add") {
            cin >> v[i];
            um[k[i]] = v[i];
        }
        else if (cmd[i] == "remove") {
            um.erase(k[i]);
        }
        else if (cmd[i] == "find") {
            if (um.find(k[i]) != um.end()) {
                cout << um[k[i]] << '\n';
            }
            else {
                cout << "None" << '\n';
            }
        }
    }

    // Please write your code here.

    return 0;
}
