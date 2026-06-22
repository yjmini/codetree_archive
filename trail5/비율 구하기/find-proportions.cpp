#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> m;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 0;

    cout << fixed;
    cout.precision(4);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        m[s]++;
        cnt++;
    }

    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << ((float)(it->second) / cnt * 100) << '\n';
    }
    return 0;
}