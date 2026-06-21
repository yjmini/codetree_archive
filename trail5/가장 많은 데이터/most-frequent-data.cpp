#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> um;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        um[s]++;
        if (cnt < um[s]) {
            cnt = um[s];
        }
    }

    cout << cnt;

    return 0;
}