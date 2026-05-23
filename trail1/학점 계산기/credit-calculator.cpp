#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);
    int n;
    cin >> n;

    vector<double> arr(n, 0);
    double sum=0;
    double avg = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;

    cout << avg << '\n';

    if (avg >= 4.0) {
        cout << "Perfect";
    }
    else if (avg >= 3.0) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }

    return 0;
}