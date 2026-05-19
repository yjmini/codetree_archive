#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x, y;
        x = i / 10;
        y = i % 10;

        if (i % 3 == 0) {
            cout << 0 << " ";
        }
        else if (x != 0 && y != 0) {
            if (x % 3 == 0 || y % 3 == 0) {
                cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
        else {
            cout << i << " ";
        }
    }
    return 0;
}