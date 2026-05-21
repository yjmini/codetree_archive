#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 3 != 0) {
            cout << 0;
            return 0;
        }
    }

    cout << 1;


    return 0;
}