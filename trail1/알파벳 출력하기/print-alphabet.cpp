#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    char c = 'A';

    for (int i = 0; i < n; i++) {
        for (int j =0; j < i+1; j++) {
            if (c > 'Z') {
                c = 'A';
            }
            cout << c;
            c++;
        }
        cout << '\n';
    }
    return 0;
}