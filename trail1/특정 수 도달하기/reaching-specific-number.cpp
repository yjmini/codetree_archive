#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);

    int arr[10];
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0 ; i< 10; i++) {
        if(arr[i] > 250) {
            break;
        }
        sum += arr[i];
        cnt++;
    }

    cout << sum << " " << (double)sum / cnt;
    

    return 0;
}