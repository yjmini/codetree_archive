#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;
    int sum = 0;

    // Please write your code here.
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << sum / 10;
    return 0;
}