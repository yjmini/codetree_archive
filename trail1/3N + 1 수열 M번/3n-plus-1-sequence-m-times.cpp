#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int m;
    cin >> m;
    vector<int> arr(m, 0);

    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int cnt = 0;
        while (arr[i] != 1) {   
            if (arr[i] % 2 == 0){
                arr[i] /= 2;
            }
            else {
                arr[i] = arr[i] * 3 + 1;
            }
            cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}