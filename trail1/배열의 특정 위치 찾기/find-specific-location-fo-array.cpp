#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);

    int arr[10];
    int sum = 0;
    float sum3 = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i= 0; i < 10; i++) {
        if (i % 2 == 1) {
            sum += arr[i];        
        }
        if (i % 3 == 2) {
            sum3 += arr[i];
        }
    }

    cout << sum << " " << sum3 / 3;

    return 0;
}