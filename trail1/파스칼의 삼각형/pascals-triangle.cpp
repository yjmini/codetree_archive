#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                arr[i][j] = 1;
            }
            else if (i != 0) {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != 0) {
                cout << arr[i][j] << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}