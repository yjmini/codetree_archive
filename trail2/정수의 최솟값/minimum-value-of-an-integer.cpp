#include <iostream>
#include <algorithm>
using namespace std;

int getMin(int a, int b, int c) {
    return min({a, b, c});
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int minVal = getMin(a, b, c);
    cout << minVal;
    return 0;
}