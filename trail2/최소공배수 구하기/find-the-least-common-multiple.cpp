#include <iostream>

using namespace std;

int n, m;

void getLCM(int n, int m) {
    int gcd;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }

    cout << n * m / gcd;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    getLCM(n, m);

    return 0;
}