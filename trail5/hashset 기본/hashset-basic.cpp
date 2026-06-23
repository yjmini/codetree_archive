#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

unordered_set<int> s;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string command; 
        int x;
        cin >> command >> x;

        if(command == "add") {
            s.insert(x);
        }
        else if(command == "remove") {
            s.erase(x);
        }
        else {
            if(s.find(x) != s.end())
                cout << "true\n";
            else
                cout << "false\n";
        }
    }
    return 0;
}
