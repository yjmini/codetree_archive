#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int st, en;
    cin >> st>> en;
    int cnt = 0;

    for (int i = st; i <= en; i++) {
        int tempcnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                tempcnt++;
            }
        }
        if (tempcnt == 3) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}