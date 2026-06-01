#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main() {
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.

    sort(A.rbegin(), A.rend());

    for (int i = 0; i < 2; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
