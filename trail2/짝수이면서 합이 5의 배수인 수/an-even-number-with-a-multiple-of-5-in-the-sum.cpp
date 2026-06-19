#include <iostream>
using namespace std;

bool isNum(int a) {
    if (a % 2 == 0 && (a % 10 + a / 10) % 5 == 0 ) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // Please write your code here.

    int a;
    cin >> a;

    if (isNum(a)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}