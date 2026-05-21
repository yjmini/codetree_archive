#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cout << fixed;

    cout.precision(2);

    int sum=0;
    int n;
    int cnt = 0;

    while (true) {
        cin >> n;

        if (n >= 20 && n < 30) {
            sum += n;
            cnt++;
        }
        else {
            break;

        }

    }
    cout << (float)sum / cnt;

    return 0;

}