#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    // Please write your code here.
    int sum = 0; 
    int cnt = 0;

    for (int i = st; i <= ed;  i++) {
        sum = 0;

        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum+=j;
            }
            if (j == i-1 && sum == i) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
