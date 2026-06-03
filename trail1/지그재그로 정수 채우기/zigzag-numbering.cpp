#include <iostream>
#include <vector>
using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    int k = 0;
    // Please write your code here.
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                arr[j][i] = k;
                k++;
            }
            else {
                arr[n-j-1][i] = k;
                k++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
