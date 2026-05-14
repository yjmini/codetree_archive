#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cout << fixed;
    int a, b;
    cin >> a >> b;

    cout.precision(2);

    cout << float(a+b) / float(a-b);

    return 0;
}