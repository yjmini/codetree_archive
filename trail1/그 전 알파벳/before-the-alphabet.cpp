#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;

    if (--c >= 'a') {
        cout << c;
    }
    else {
        c = 'z';
        cout << c;
    }
    return 0;
}