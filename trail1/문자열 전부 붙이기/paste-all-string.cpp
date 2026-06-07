#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string s = "";

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        s += temp;
    }

    cout << s;
    
    return 0;
}