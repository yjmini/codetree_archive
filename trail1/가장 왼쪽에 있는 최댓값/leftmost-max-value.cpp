#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = -1;

    while (n != 0) {
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (maxVal < arr[i]) {
                maxVal = arr[i];
                idx = i+1;
            }
        }
        n = idx - 1;
        maxVal = -1;
        cout << idx << " ";
    }

    return 0;
}