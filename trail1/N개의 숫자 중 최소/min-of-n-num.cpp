#include <iostream>
#include <climits>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.

    long long minVal = LONG_LONG_MAX;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        if (minVal > A[i]) {
            minVal = A[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (minVal == A[i]) {
            cnt++;
        }
    }

    cout << minVal << " " << cnt;

    return 0;
}
