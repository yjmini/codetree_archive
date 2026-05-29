#include <iostream>
#include <vector> 
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    vector<int> arr(n);
    int cnt = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            cnt++;
        }
        if (cnt == 3) {
            ans = ++i;
            break;
        }
    }

    cout << ans;

    return 0;
}