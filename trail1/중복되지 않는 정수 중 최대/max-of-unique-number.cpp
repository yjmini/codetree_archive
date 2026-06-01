#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    int maxVal = -1;
    int tempVal = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] != tempVal && arr[i] != arr[i+1]) {
            maxVal = arr[i];
            break;
        }
        else {
            tempVal = arr[i];
        }
    }

    cout << maxVal;

    return 0;
}