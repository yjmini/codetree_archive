#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n; 
    string s;
    cin >> n >> s;

    int cnt=0;

    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;

        if (s == t) {
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}