#include <iostream>
#include <unordered_set>

using namespace std;

int n;
string command[100000];
int x[100000];

unordered_set<int> us;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> command[i] >> x[i];
        if (command[i] == "add") {
            us.insert(x[i]);
        }
        else if (command[i] == "remove") {
            us.erase(x[i]);
        }
        else if (command[i] == "find") {
            if (us.find(x[i]) != us.end()) {
                cout << "true\n";
            }
            else {
                cout << "false\n";
            }
        }
    }

    // Please write your code here.
    

    return 0;
}
