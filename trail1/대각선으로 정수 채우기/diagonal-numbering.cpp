#include <iostream>
#include <vector>
using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    int cnt = 0; 
    int num = 1;

    // Please write your code here.

    for (int i = 0; i < n * m; i++) {
        for (int j = 0; j < i+1; j++) {
            if (j >= 0 && j < n && i-j >= 0 && i-j < m) {
                arr[j][i-j] = num;
                num++;
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
