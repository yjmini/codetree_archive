#include <iostream>
using namespace std;

bool is369(int n) {
    while (n > 0) {
        int k = n % 10;
        if (k != 0 && k % 3 == 0) {
            return true;
        }
        n = n / 10;
    }
    return false;
}

bool isNum(int n) {
    if (n % 3 == 0 || is369(n)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int cnt = 0;

    for (int i = a; i <= b; i++) {
        if (isNum(i)) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}