#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;
    cin >> a >> b;

    cout << a / b << ".";

    int remain = a % b;

    for (int i = 0; i < 20; i++) {
        remain *= 10;
        cout << remain / b;
        remain %= b;
    }

    return 0;
}