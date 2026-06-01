#include <iostream>
using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Please write your code here.
    int maxSub = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (price[j] - price[i] > maxSub) {
                maxSub = price[j] - price[i];
            }
        }
    }

    cout << maxSub;

    return 0;
}
