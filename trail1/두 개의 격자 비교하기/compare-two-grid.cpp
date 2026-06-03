#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            if (k != arr[i][j]) {
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << '\n';
    }

    return 0;
}