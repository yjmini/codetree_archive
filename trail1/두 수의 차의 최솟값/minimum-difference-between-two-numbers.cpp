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

    int minVal = 1e9;
    for (int i = 0; i < n-1; i++) {
        if (arr[i+1] - arr[i] < minVal) {
            minVal = arr[i+1] - arr[i];
        }
    }

    cout << minVal;
    
    return 0;
}