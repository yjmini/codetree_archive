#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string arr[10];

    int idx;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == "END") {
            idx = i;
            break;
        }
    }

    for (int i = 0; i < idx; i++) {
        reverse(arr[i].begin(), arr[i].end());

        cout << arr[i] << '\n';
    }

    return 0;
}