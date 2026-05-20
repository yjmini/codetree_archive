#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin >> N;
    int cnt = 0;
    int realN = N;

    for (int i = 1; i <= realN; i++) {
        N = N / i;
        cnt++;
        if (N <= 1) {
            break;
        }
    }

    cout << cnt;

    return 0;
}