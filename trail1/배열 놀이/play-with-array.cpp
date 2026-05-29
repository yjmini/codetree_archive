#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;

        if (a == 1) {
            cout << arr[b-1] << '\n';
        }
        else if (a == 2) {
            int cnt = 0;
            int idx = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == b) {
                    cnt++;
                    if (idx == 0) {
                        idx = j+1;
                    }
                }
                
            }
            if (cnt != 0) {
                cout << idx << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (a == 3) {
            int c;
            cin >> c;
            for (int j = b; j <= c; j++) {
                cout << arr[j-1]<< " ";
            }
            cout << '\n';
        }
    }

    return 0;
}