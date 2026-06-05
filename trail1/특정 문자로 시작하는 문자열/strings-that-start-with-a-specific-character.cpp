#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 0;
    double sum = 0.0;

    cout << fixed;
    cout.precision(2);

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    char c;
    cin >> c;

    for (int i = 0; i < n; i++) {
        if (arr[i][0] == c) {
            cnt++;
            sum += arr[i].length();
            continue;
        }
    }

    cout << cnt << " " << sum/cnt;

    
    return 0;
}