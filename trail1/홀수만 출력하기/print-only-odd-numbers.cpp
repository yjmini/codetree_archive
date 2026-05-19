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

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 2 == 1) {
            cout << arr[i] << '\n';
        }
    }
    
    return 0;
}