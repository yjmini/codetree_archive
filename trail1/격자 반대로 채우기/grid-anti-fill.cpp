#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    int cnt = 1;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (n % 2 == 0) {
                if (i % 2 == 0) {
                    arr[j][i] = cnt;
                    cnt++;
                }
                else {
                    arr[n - j - 1][i] = cnt;
                    cnt++;
                }
            }
            else {
                if (i % 2 == 0) {
                    arr[n - j - 1][i] = cnt;
                    cnt++;
                }
                else {
                    arr[j][i] = cnt;
                    cnt++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}