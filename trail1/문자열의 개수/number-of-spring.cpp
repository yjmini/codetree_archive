#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string arr[200];
    int cnt = 0;
    int idx = 0;
    for (int i = 0; i < 200; i++) {
        cin >> arr[i];

        if (arr[i] == "0") {
            idx = i;
            break;
        }
        cnt++;
    }

    cout << cnt << '\n';
    for (int i = 0; i < idx; i+=2) {
        cout << arr[i] << '\n';
    }

    return 0;
}