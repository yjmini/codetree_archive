#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a; 
    cin >> a;
    int k;

    for (int i = 1; i <= a; i++) {
        k = i / 8;

        if (i % 2 == 0 && i % 4 != 0) {
            continue;
        }
        else if (k % 2 == 0) {
            continue;
        }
        else if (i % 7 < 4) {
            continue;
        }

        cout << i << " ";
    }
    return 0;
}