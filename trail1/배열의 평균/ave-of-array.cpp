#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);

    int arr[2][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << (double)sum / 4 << " ";
    }
    cout << '\n';

    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 2; i++) {
            sum += arr[i][j];
        }
        cout << (double)sum / 2 << " ";
    }

    int allsum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            allsum += arr[i][j];
        }
    }
    cout << '\n';
    cout << (double)allsum / 8;

    return 0;
}