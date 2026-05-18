#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, n;
    cin >> a >> n;

    for (int i = 0; i < n; i++) {
        cout << a + n * (i+1) << '\n';
    }
    return 0;
}