#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;
    cin >> a >> b;
    int arr[10] = {0};
    int sum = 0;

    while (a > 1) {
        arr[a % b]++;
        a = a / b;
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] != 0) {
            sum += arr[i] * arr[i];
        }
    }

    cout << sum;

    return 0;
}